# 独立修复：socket-owned 接口拒绝空客户端

本页属于批次 `20261111_treeland_1f8c2a65_to_77f885c8_local_sync` 的独立本地修复，不属于普通 Treeland 来源回放。用户明确批准该修复，要求单独 commit，并在本批 `docs/treeland-sync/` 目录保留说明。源码与本说明同属一个 C 修复提交；DeckShell 另以相邻提交传播 C gitlink。

## 原候选与实际故障

来源范围为左开右闭 `(1f8c2a658b4b4e868e0650f9890c5e752fd1b839..77f885c8dbeb0e0e0bebdafdee02eadb1d150439]`，共 65 个来源提交。修复从完成该范围及协议 companion 的 `N11-attempt-3` 出发：

| 身份 | 原提交 |
|---|---|
| P DeckShell | `ac8f4b1928105fdcfc809c8cf11cbe65c12ecccd` |
| C waylib-shared，本修复的唯一父提交 | `a0f86a62a8cf3038e306ce191f5ded1a09b58fed` |
| R wlroots，不改变 | `b79b9b38a473ca57f5b54892280dfad4f25f8e42` |

原完整产品测试为：正常配置 102 total / 100 passed / 1 failed / 1 skipped；关闭 XWayland 配置 100 total / 98 passed / 1 failed / 1 skipped。两配置唯一失败都是 `test_session_isolation`，唯一 SKIP 是缺 DRM-capable renderer 的原 `test_drm`。

原栈显示 `isolation_read()` → `WServerInterface::ownsClient()` → `WClient::socket()`，访问地址 `0x18` 后 SIGSEGV。QtTest 的崩溃调试等待可能最终显示为 timeout，根因不是等待时长。

## 归因

`waylib/src/server/kernel/wserver.cpp`、`wsocket.cpp` 和 DeckShell 对应 Session-isolation setup 均与冻结 Treeland 终点逐字节一致。归属 API 来自 `adca75e4eb9b7f6ca471e082e3abc149103a61cc`；`f3e6d407f58f84ecf884d08653d5f8db1b31caac` 引入主动调用 `ownsClient(nullptr)` 并要求返回 `false` 的负向断言。

socket-owned 路径没有判空，直接调用 `client->socket()`。因此来源实现与新增测试预期不一致，经本批真实运行暴露；不是本地冲突解决或调用方迁移造成。没有独立运行纯 Treeland，不据此宣称其 CI 或原构建环境已经复现失败。

## 精确行为与取舍

生产改动仅在 `waylib/src/server/kernel/wserver.cpp`：

```cpp
bool WServerInterface::ownsClient(WClient *client) const
{
    if (!ownsSocket())
        return true;

    if (!client)
        return false;

    // 原有 client socket / parentSocket 链判断保持不变。
    // ...
}
```

| 条件 | 修复后预期 |
|---|---|
| 接口未绑定 socket，包括空 client | 保留原行为：`true` |
| 接口绑定 socket，client 为空 | `false`，不解引用 |
| 非空 client 的 socket 或祖先 socket 匹配 | 保留原行为：`true` |
| 非空 client 的完整 socket 链不匹配 | 保留原行为：`false` |

判空必须在无 socket 的早退之后，不能放在函数入口。`globalFilter()` 会先以 `WClient::get()` 查询包装对象，再调用 `ownsClient()`；未包装的同进程客户端仍需到达其既有 PID 例外。入口一律拒绝空 client 会改变该全局接口行为，不属于这次修复。

不改变非空客户端的父 socket 遍历，不使用当前活动 Session 替代请求客户端身份。绑定 socket 的接口对没有可确认归属的空客户端拒绝访问，不把防崩溃改成放行。

## 保留范围

- C 仅本源码文件与本说明；P 仅 `3rdparty/waylib-shared` gitlink。两仓各一个相邻非 merge 本地提交，不添加 `Treeland-Commit` 或协议 companion trailer。
- 原 65 个来源映射、作者、消息、manifest、journal、候选及失败日志保持原样；新修复由精确授权派生 manifest 单列 `local_fix`。
- R、两份 XML、remote-subsurface 实现配套与 provenance、public headers、WaylibShared 包名、namespace、导出 target 及安装布局不变。
- 原 Session-isolation 空客户端、A/B 隔离及后台子 socket 断言不修改。不增加兼容层、全局空客户端策略、测试过滤、强制 SKIP 或其它失败豁免。
- 主工作树原 WIP、外层 index/gitlink、日常 refs、旧失败尝试均保留；不自动发布或归并。

## 验收与证据定位

本提交记录实现及验收约定，不预先宣称新候选已通过。修复后的实际结果由同批 [总记录](summary.md) 单列 local-fix；该文件由完整验收后统一 `finish --task sync` 生成，未生成时链接不表示已经接受。

验收须同时满足：

1. 原 `test_session_isolation` 在正常及关闭 XWayland 产品中真实通过，不崩溃、超时、SKIP 或放宽断言。
2. 对本候选 fresh installed library 的补充检查使用真实 `WServer`、`WSocket`、`WClient` 和 Wayland registry：覆盖 socket-owned/null 拒绝、unowned/null 放行、同 socket/子 socket 接受、其它 socket 拒绝，以及未绑定 socket 的同进程未包装客户端 globalFilter 例外。
3. 两配置 fresh 完整构建和未过滤 CTest，原 C/R 依赖、安装消费链、源码/安装合同、协议配套与 runtime 检查重新绑定派生候选。旧 PASS 不替换 manifest 摘要复用。
4. 只有用户已另行授权的原 `test_drm` 运行前提不足 SKIP 可限定接受；任何其它 FAIL、SKIP、未执行或过滤仍阻断。

持久资料位于外层方案标识 `.helloagents/plans/20261111_treeland_1f8c2a65_to_77f885c8_local_sync/`，不是 C 仓内相对链接：

- 原失败：`evidence/N11-attempt-3/manifest.json`、`sync-report.json` 与原完整 CTest 日志。
- 精确授权与新候选：`evidence/N11-local-fix-1/local-fix/approval.json`、`local-fix/original-manifest.json`、`manifest.json`、`parent-evidence.json`、`waylib-evidence.json`。
- 新验证：同目录 `validations.json`、`no-xwayland-validations.json`、`ownership-probe/`、原始 logs 和最终报告。

原 manifest 的 canonical JSON SHA-256 为 `1b5881ff372c3ac0242d44848b2b795190e204fa874c6fe6c7f288fe4c9bea4a`，与文件字节 SHA-256 `63f10c4b207380695ea72f5ddc2587e6e9a2438dde177b5ad00844f5b5413a4e` 不混用。补充 probe 不代替未过滤产品验收，不证明真实 GPU、持续输入或所有协议均已全量隔离。
