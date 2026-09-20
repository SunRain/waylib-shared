# waylib-shared

[English](README.md)

本仓库独立构建并安装 Waylib **0.7.0**、配套 native wlroots **0.20.2** 共享库、
`WaylibShared.QuickSharedServer` QML 模块（导入版本 **1.0**），以及开发头文件、
CMake/pkg-config 元数据和 DeckShell 所需的协议生成工具。

## 依赖准备

需要 Linux、C++20 编译器、CMake 3.25+、Make 或 Ninja、pkg-config，以及本仓库的
`3rdparty/wlroots` 子模块；不使用另一份系统 wlroots。

默认配置需要以下开发依赖：

- Qt 6.8+ Core、Gui、Qml、Quick、QmlIntegration 及匹配的 Gui/Quick Private
  头文件；启用测试时还需要 Qt Test。
- Wayland client/server 1.26+、wayland-scanner、wayland-protocols 1.49+、
  wlr-protocols、libdrm 2.4.134+、pixman 0.46.4+、xkbcommon、XCB。
- libudev、libseat 0.2+、libdisplay-info、hwdata、libinput 1.19+、EGL、GLESv2、
  GBM、Vulkan 开发库和 glslang、lcms2、Xwayland；XCB 的 dri3、present、render、
  renderutil、shm、xfixes、xinput、composite、ewmh、icccm、res 开发模块。
- libliftoff 0.4+ 和 xcb-errors 可选，缺失时明确报告并关闭对应集成。

remote-subsurface XML 已随匹配的实现放入 `waylib/protocols/`。不需要 DeckShell
源码、`DeckCompositorProtocols` 安装包、外部 XML 目录或构建时下载。
来源和更新方式见[协议来源记录](waylib/protocols/README.md)。

## 构建、测试与安装

完整 checkout（包含配套 native 子模块）可直接使用默认 Unix Makefiles 入口，
构建共享库与 QML 模块：

```sh
git submodule update --init --recursive
mkdir build-default
cd build-default
cmake .. && make -j10
```

需要测试和私有安装前缀时，从仓库根目录执行 Ninja 入口：

```sh
git submodule update --init --recursive
waylib_prefix="$PWD/_local/waylib"
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_INSTALL_PREFIX="$waylib_prefix" \
  -DTREELAND_INSTALL_DEV=ON -DBUILD_WAYLIB_TESTS=ON
cmake --build build --parallel 6
ctest --test-dir build --no-tests=error --output-on-failure
cmake --install build
```

standalone 的 `TREELAND_INSTALL_DEV` 默认开启，关闭后仅安装 runtime。测试和示例
默认关闭，示例通过 `BUILD_WAYLIB_EXAMPLES=ON` 开启。两项核心库始终是共享库。
库内 XML 缺失时明确报源码不完整，不回退外部来源。
`WAYLIB_TREELAND_PROTOCOLS_DIR` 已退役，旧缓存值会被忽略并给出警告；迁移时使用
新的构建目录。内嵌与 standalone 构建始终使用同一库内输入。
`WITH_SUBMODULE_WAYLIB` 是 DeckShell 的选项，
不属于这个库入口。

## 安装包消费

```cmake
find_package(WaylibShared 0.7.0 REQUIRED COMPONENTS SharedServer)
target_link_libraries(my_app PRIVATE WaylibShared::SharedServer)
```

公共 target 传播 C++20 和必要依赖。直接使用 native API 时链接同包
`WaylibShared::waylib-wlroots`。协议调用方使用
`waylib_generate_qtwayland_server_protocol(target PROTOCOL /path/file.xml
BASENAME file PREFIX zwp_ PRIVATE_CODE)`，并链接 Qt Core 与 wayland-server。
函数使用安装的 `WaylibShared::qtwaylandscanner`，无需源码 helper 或额外构建工具。
配套 virtual-keyboard XML 位于 `WaylibShared_WLROOTS_PROTOCOLS_DIR`。

CMake 同时提供 `WaylibShared_LIBDIR`、`WaylibShared_PKGCONFIG_DIR` 和
`WaylibShared_QML_IMPORT_DIR`。pkg-config 调用方将候选 pc 目录加入搜索路径，查询
`WaylibSharedServer`，并显式选择 C++20 或更新标准。

```sh
cmake -S test_project -B build-consumer -G Ninja \
  -DCMAKE_PREFIX_PATH="$waylib_prefix"
cmake --build build-consumer --parallel 6
ctest --test-dir build-consumer --no-tests=error --output-on-failure
```

覆盖范围和隔离要求见[消费者说明](test_project/README.md)。纯 Qt 宿主只需把
`QML_IMPORT_PATH` 指向包的 QML import root，即可导入模块并创建 `DynamicCreator`。
plugin、qmldir、qmltypes 及两项 runtime 库均由本包拥有；插件加载不需要
`LD_LIBRARY_PATH` 或原 build tree。应用自身仍需正常配置可执行文件的部署及 RUNPATH。

## 目录、迁移与兼容性

默认相对 GNUInstallDirs 布局支持 `cmake --install build --prefix NEW` 和整体
前缀搬迁；CMake、pc、生成工具与 QML 插件随包使用新目录。消费工程须针对新前缀
重新配置。以下配置同时改变 libdir、头文件和 QML 层级：

```sh
cmake -S . -B build-custom -G Ninja \
  -DCMAKE_INSTALL_PREFIX="$PWD/_local/custom" \
  -DCMAKE_INSTALL_LIBDIR=lib64 \
  -DCMAKE_INSTALL_INCLUDEDIR=include/native-custom \
  -DWAYLIB_INCLUDE_INSTALL_DIR=include/waylib-custom \
  -DWAYLIB_QML_INSTALL_DIR=share/waylib-qml
cmake --build build-custom --parallel 6
cmake --install build-custom
```

若系统 CMake 不通过 `CMAKE_PREFIX_PATH` 搜索 `lib64`，消费时显式传入
`-DWaylibShared_DIR=/new/prefix/lib64/cmake/WaylibShared`。

插件按真实 QML/libdir 相对位置查找库，不写死目录层数。显式绝对安装目录保留固定
位置语义，不承诺随前缀搬迁；调用方不要假定 libdir 一定是 `lib`。

Waylib 主包、组件、pc 和 DSO 版本均来自 `VERSION`；native 与 QML 版本语义独立。
CMake 接受同一 Waylib minor 系列，但这不构成任意二进制混用承诺：Qt Private
要求相同 Qt 构建（开发元数据要求精确版本），Waylib/native 的开发文件与 runtime
必须配套，不能替换为系统 wlroots 或混合不同安装。

## 许可

Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only。内置 remote-subsurface
XML 使用 MIT 许可，保留文件头版权声明；详见 `LICENSES/`。
