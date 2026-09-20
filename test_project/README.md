# WaylibShared 安装包消费者

本目录是独立 CMake 工程，只读取已安装的 WaylibShared 开发包及其配套 runtime，
不 include Waylib 源码、复用库构建目录，也不需要安装 `DeckCompositorProtocols`。
后者是构建 Waylib 库的输入，不是这里的消费依赖。

## 运行完整消费者检查

先按 [WaylibShared README](../README.md) 构建并安装 **0.7.0** 的完整开发包和
runtime。需要 CMake 3.21+、C/C++ 编译器、pkg-config 以及与库配套的 Qt 6/系统开发包；
公共头依赖 C++20、Qt Private 与本包 native wlroots，不能任意混用不同版本二进制。

从本目录执行，`prefix` 必须指向本轮候选安装，不是库的 build 目录：

```bash
prefix="/absolute/path/to/installed-waylib"
build="$(mktemp -d /tmp/waylib-consumer-XXXXXXXX)"

cmake -S . -B "$build" -G Ninja \
  -DCMAKE_PREFIX_PATH="$prefix" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON &&
cmake --build "$build" --parallel &&
ctest --test-dir "$build" --no-tests=error --output-on-failure
```

消费者从包公开的 `WaylibShared_PKGCONFIG_DIR`、`WaylibShared_LIBDIR`、
`WaylibShared_QML_IMPORT_DIR` 和 `WaylibShared_WLROOTS_PROTOCOLS_DIR` 获取实际目录。
若系统不自动搜索自定义 libdir，配置时显式传入 `WaylibShared_DIR` 指向包配置目录。
不推算固定前缀层数，也不假定 `lib`、`lib64`、默认 include 或 QML 布局。
`PKG_CONFIG_PATH` 只在查找候选 `.pc` 时临时扩展；两个 `.pc` 的位置和 `libdir`
必须与候选包一致，版本不符或混入其他安装会报错。

## 覆盖的行为

| 测试 | 检查内容 |
|---|---|
| `waylibshared_link_test` | 工程设为 C++17，只链接 `WaylibShared::SharedServer`，公开使用要求提升到 C++20；安装头、生成的 `wconfig.h`、`WServer`、native seat、XCB 调用及 `WPointer` 在销毁后清空 |
| `waylibshared_pkgconfig_link_test` | 通过 `WaylibSharedServer.pc` 独立编译同一消费者；pkg-config 不传播 CMake 语言特性，因此调用方显式选择 C++20 |
| `waylibshared_native_link_test` | 只链接 `WaylibShared::waylib-wlroots` 的 C 程序，使用生成的 `wlr/config.h` 和 native seat API |
| `waylibshared_protocol_generation_test` | 从安装数据目录读取 virtual-keyboard XML，经公开 helper 和安装 scanner 生成并编译 C/C++，链接 Qt/Wayland，实际创建协议 global |
| `waylibshared_qml_import_test` | 宿主仅链接 Qt，动态导入 `WaylibShared.QuickSharedServer`，实例化 `DynamicCreator` 并读取初始 `count=0` |
| `WaylibShared*_exact_version` | 主包和 SharedServer 组件分别接受 `0.7.0 EXACT` |
| `WaylibShared*_incompatible_version` | 主包和组件分别拒绝不兼容的 `1.0.0` 请求 |

原有三项消费检查名称保留。测试依赖真实编译、链接和运行，不断言内部 target 列表。
协议检查不会把生成成功或静态归档成功当作最终链接成功。

## QML 加载环境与边界

CTest 在启动消费者前清除 `LD_LIBRARY_PATH`、`LD_PRELOAD`、`LD_AUDIT`、旧的
`QML_IMPORT_PATH`/`QML2_IMPORT_PATH` 和 Qt 插件路径覆盖。纯 QML 检查只设置本候选的
QML import root 与 `QT_QPA_PLATFORM=offscreen`；不预链接 Waylib，不用环境变量补齐
库路径，也不把默认 import 路径编进宿主。

需要查看实际加载来源时运行：

```bash
LD_DEBUG=libs QML_IMPORT_TRACE=1 \
  ctest --test-dir "$build" -R '^waylibshared_qml_import_test$' -V
```

确认 plugin、Waylib 和 native DSO 的 `calling init` 路径都属于当前候选，而不只是
“尝试搜索”的路径。此诊断不改变动态库搜索目录。

这组日常测试不是完整部署隔离证明。发布/拆包验收仍需在源码、原 build tree、旧前缀
不可见且排除其他同名库的受控环境中重复运行；分别移走安装副本的 Waylib/native DSO
时纯 QML 消费必须失败。验证 `cmake --install --prefix` 与整包搬迁后，应以新包重新
配置本工程，并覆盖一组同时改变 libdir、include 和 QML 相对层级的布局。显式绝对安装
目录不保证随整体前缀搬迁。库本身的测试和 DeckShell 外部包构建/相关测试须另外执行，
本工程通过不代表完整合成器或真机交互验收通过。
