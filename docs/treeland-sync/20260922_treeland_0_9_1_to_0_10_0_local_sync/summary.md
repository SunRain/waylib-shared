# C / waylib-shared 同步记录：20260922_treeland_0_9_1_to_0_10_0_local_sync

这是按仓归属生成的同步事实记录，不是新的产品验收报告。
原节点结果只绑定下文列出的原候选与原环境；本次生成未执行同步、构建、测试、收口或远端发布。

- 来源范围（左开右闭）：` fd573cf44fb06ee1eebcdd8c39716d1c797b64d4 ` → ` 3a100f265970cb6acf9addf07e5c297aab9e9839 `。
- 本仓内容基线：` f14d7cdf718307945f492eb1c6d7608413e83c29 `。
- 本仓内容终点：` d0344634c057b8c29ac2e138a935e5c80a89b768 `；不含后继文档、URL/gitlink 或工具维护提交。
- 本仓普通目标：**14**；独立初始化：**0**；特殊目标：**3**；合计 **17**。
- 普通 action：{'applied': 10, 'adapted': 4}。
- 特殊目标分类：{'protocol-companion': 2, 'local-fix': 1}。
- 整批普通 Treeland 来源：**41**；本仓未归属的来源不制造目标提交。
- 主分支归并承接上述已接受内容终点，不构成另一批同步；是否包含由正常完成入口核对。日常分支为 P `master` / C `waylibshared`，后继文档与工具提交不改变原候选验收身份。
- 本批次未提供历史改写映射，仅记录真实来源 → 目标，不虚构原目标列。
- 原需求与实施记录：[PRD](prd.md)、[plan](plan.md)。
- 外层历史资料仅用标识和相对定位列出，不是本仓链接；记录不包含完整日志、构建树或安装树。
- R 的短 Refs 是 P/C 共同方案标识，不承诺 R 仓内存在方案副本。

## 有序提交映射

| 序号 / 节点 | Treeland 来源 | 本仓目标 | action（C 另列 content_action） | 归属 |
|---|---|---|---|---|
| 1 / N8a | ` d3cdd8644710cbb55e56feccf039729eb307fe3f ` | ` e05868343441276dd43b2cc0c9c41d96dae1cd1c ` [条目](#entry-1) | applied / applied | dual |
| 2 / N8a | ` 8bfa446c589f06d4f427a39b93a585a2406f5cdb ` | ` 91d126f4ed4836ba83174efa00f8b2e26d7708bd ` [条目](#entry-2) | applied / applied | dual |
| 3 / N8a | ` 007f3653c7942690f76db0c06ea55991efc59dc0 ` | ` fe754deebcc47a0dbcd8492c946625b8b26aa8f2 ` [条目](#entry-3) | applied / applied | waylib-only |
| 4 / N8a | ` bd2c6995dd49b309abf76af13688b317fe31244e ` | ` 0cce46d7be0f3faaba6118b7a279616b494aa2d8 ` [条目](#entry-4) | applied / applied | waylib-only |
| 5 / N8a | ` b71d4af56f3c90d4a8bd5cf6b421bbc9028ac145 ` | ` cb6a911a19b06405d22ee92a4fee0907792a7ac6 ` [条目](#entry-5) | applied / applied | dual |
| 6 / N8a | ` e5e52083e1aa69ac66070098ec44ae47752ef759 ` | ` d6e6e6bc9b6bceee9997ae6a39b5c07137671619 ` [条目](#entry-6) | applied / applied | dual |
| 7 / N8a | ` b727a8209385c064fbe96d9a3a74a00f27121b13 ` | ` dc036fba991d5218fd744730bd50f51485eeed87 ` [条目](#entry-7) | applied / applied | waylib-only |
| 8 / N8a | ` df7b59b32de4f3982c968416cf92b3319daa7f20 ` | ` 520d62836f73c1f156f38382e4c3f96797d14f91 ` [条目](#entry-8) | applied / applied | waylib-only |
| 9 / N8a | ` b3208c08a3599590ece69c3a68773e07584969bb ` | ` 6979d0dff844a26bfe1bf8afbbd01cc0966ee553 ` [条目](#entry-9) | applied / applied | waylib-only |
| 10 / N8a | ` a5656ab80ae11a0068d507659f35bb999b6d815d ` | ` df72756d20356894c584b2a69376eaa1a4600bed ` [条目](#entry-10) | applied / applied | dual |
| 11 / N8a | 无（独立提交） | ` 0369fbcbfcf8c97573336e54d0cccc98b29f6a8f ` [适配详情](adaptations/0369fbcbfcf8c97573336e54d0cccc98b29f6a8f.md) | protocol-companion / protocol-companion | protocol-companion |
| 12 / N8a | 无（独立提交） | ` a2b1c5752afca1581a95a8bd8ac6d3dbe115b8e4 ` [适配详情](adaptations/a2b1c5752afca1581a95a8bd8ac6d3dbe115b8e4.md) | local-fix / local-fix | local-fix |
| 13 / N8b | ` 24e1c7a4ea8a5eeaedff24dee3df27e10f02c496 ` | ` 93bc34f05f23d7daa66f941539b377f8601dab6d ` [适配详情](adaptations/93bc34f05f23d7daa66f941539b377f8601dab6d.md) | adapted / adapted | dual |
| 14 / N8b | ` d9efe405ab5b91daaa1a4ae5ee237cf076064910 ` | ` 25d3d2b92a5aa7b4a087927092865172cd1c4330 ` [适配详情](adaptations/25d3d2b92a5aa7b4a087927092865172cd1c4330.md) | adapted / adapted | dual |
| 15 / N8b | ` 423b2ad15cf2d6153aa3c6a00e7bef7dbec01aa0 ` | ` 1f37c019972da79aa624947a1cdcc3c97f625559 ` [适配详情](adaptations/1f37c019972da79aa624947a1cdcc3c97f625559.md) | adapted / adapted | waylib-only |
| 16 / N8b | ` b9759c0c68ac278ed1f7c6444e59f14e7743abb4 ` | ` c8d083592f3c149bc81dd63476a47deae9a10168 ` [适配详情](adaptations/c8d083592f3c149bc81dd63476a47deae9a10168.md) | adapted / adapted | waylib-only |
| 17 / N8b | 无（独立提交） | ` d0344634c057b8c29ac2e138a935e5c80a89b768 ` [适配详情](adaptations/d0344634c057b8c29ac2e138a935e5c80a89b768.md) | protocol-companion / protocol-companion | protocol-companion |

## 逐项归属、路径与依赖

<a id="entry-1"></a>
### 1. N8a / ` fix(xwayland): keep modal dialogs above parent windows `

- 本仓内容路径：` waylib/src/server/protocols/private/wxwaylandsurface_p.h `、` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `。
- 实际改变：` waylib/src/server/protocols/private/wxwaylandsurface_p.h `、` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `。
- 排除的来源路径：` src/core/shellhandler.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` d3cdd8644710cbb55e56feccf039729eb307fe3f ` 和原目标 ` e05868343441276dd43b2cc0c9c41d96dae1cd1c ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` c655ce1ec9020d7b179a099890812a8230652105 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-2"></a>
### 2. N8a / ` test(protocols): add wlroots protocol coverage `

- 本仓内容路径：` waylib/src/server/protocols/private/wtextinputv2.cpp `、` waylib/src/server/protocols/wlayershell.h `。
- 实际改变：` waylib/src/server/protocols/private/wtextinputv2.cpp `、` waylib/src/server/protocols/wlayershell.h `。
- 排除的来源路径：` tests/protocols/CMakeLists.txt `、` tests/protocols/INDEX.md `、` tests/protocols/drm/CMakeLists.txt `、` tests/protocols/drm/README.md `、` tests/protocols/drm/drm.c `、` tests/protocols/drm/drm.h `、` tests/protocols/drm/setup.cpp `、` tests/protocols/framework/protocol-test-entry.cpp `、` tests/protocols/input-method-unstable-v2/CMakeLists.txt `、` tests/protocols/input-method-unstable-v2/README.md `、` tests/protocols/input-method-unstable-v2/input-method-unstable-v2.c `、` tests/protocols/input-method-unstable-v2/input-method-unstable-v2.h `、` tests/protocols/input-method-unstable-v2/setup.cpp `、` tests/protocols/treeland-foreign-toplevel-manager-v1/CMakeLists.txt `、` tests/protocols/treeland-shortcut-manager-desktop-v2/treeland-shortcut-manager-desktop-v2.c `、` tests/protocols/virtual-keyboard-unstable-v1/CMakeLists.txt `、` tests/protocols/virtual-keyboard-unstable-v1/README.md `、` tests/protocols/virtual-keyboard-unstable-v1/setup.cpp `、` tests/protocols/virtual-keyboard-unstable-v1/virtual-keyboard-unstable-v1.c `、` tests/protocols/wlr-data-control-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-data-control-unstable-v1/README.md `、` tests/protocols/wlr-data-control-unstable-v1/setup.cpp `、` tests/protocols/wlr-data-control-unstable-v1/wlr-data-control-unstable-v1.c `、` tests/protocols/wlr-export-dmabuf-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-export-dmabuf-unstable-v1/README.md `、` tests/protocols/wlr-export-dmabuf-unstable-v1/setup.cpp `、` tests/protocols/wlr-export-dmabuf-unstable-v1/wlr-export-dmabuf-unstable-v1.c `、` tests/protocols/wlr-foreign-toplevel-management-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-foreign-toplevel-management-unstable-v1/README.md `、` tests/protocols/wlr-foreign-toplevel-management-unstable-v1/setup.cpp `、` tests/protocols/wlr-foreign-toplevel-management-unstable-v1/wlr-foreign-toplevel-management-unstable-v1.c `、` tests/protocols/wlr-foreign-toplevel-management-unstable-v1/wlr-foreign-toplevel-management-unstable-v1.h `、` tests/protocols/wlr-gamma-control-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-gamma-control-unstable-v1/README.md `、` tests/protocols/wlr-gamma-control-unstable-v1/setup.cpp `、` tests/protocols/wlr-gamma-control-unstable-v1/wlr-gamma-control-unstable-v1.c `、` tests/protocols/wlr-layer-shell-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-layer-shell-unstable-v1/README.md `、` tests/protocols/wlr-layer-shell-unstable-v1/setup.cpp `、` tests/protocols/wlr-layer-shell-unstable-v1/wlr-layer-shell-unstable-v1.c `、` tests/protocols/wlr-layer-shell-unstable-v1/wlr-layer-shell-unstable-v1.h `、` tests/protocols/wlr-output-management-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-output-management-unstable-v1/README.md `、` tests/protocols/wlr-output-management-unstable-v1/setup.cpp `、` tests/protocols/wlr-output-management-unstable-v1/wlr-output-management-unstable-v1.c `、` tests/protocols/wlr-output-management-unstable-v1/wlr-output-management-unstable-v1.h `、` tests/protocols/wlr-output-power-management-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-output-power-management-unstable-v1/README.md `、` tests/protocols/wlr-output-power-management-unstable-v1/setup.cpp `、` tests/protocols/wlr-output-power-management-unstable-v1/wlr-output-power-management-unstable-v1.c `、` tests/protocols/wlr-output-power-management-unstable-v1/wlr-output-power-management-unstable-v1.h `、` tests/protocols/wlr-screencopy-unstable-v1/CMakeLists.txt `、` tests/protocols/wlr-screencopy-unstable-v1/README.md `、` tests/protocols/wlr-screencopy-unstable-v1/setup.cpp `、` tests/protocols/wlr-screencopy-unstable-v1/wlr-screencopy-unstable-v1.c `、` tests/protocols/wlr-virtual-pointer-unstable-v1/README.md `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` 8bfa446c589f06d4f427a39b93a585a2406f5cdb ` 和原目标 ` 91d126f4ed4836ba83174efa00f8b2e26d7708bd ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` b4a5826fa61f080b39e5ef4e989bd77da5cf47b2 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-3"></a>
### 3. N8a / ` fix(export-dmabuf): expose the wlroots manager declaration `

- 本仓内容路径：` waylib/src/server/kernel/wlr_all.h `。
- 实际改变：` waylib/src/server/kernel/wlr_all.h `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` 007f3653c7942690f76db0c06ea55991efc59dc0 ` 和原目标 ` fe754deebcc47a0dbcd8492c946625b8b26aa8f2 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` c2b72c0970b54440970a394ba7770860ed3955c7 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-4"></a>
### 4. N8a / ` fix(input-method): preserve text input focus during keyboard updates `

- 本仓内容路径：` waylib/src/server/protocols/winputmethodhelper.cpp `。
- 实际改变：` waylib/src/server/protocols/winputmethodhelper.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` bd2c6995dd49b309abf76af13688b317fe31244e ` 和原目标 ` 0cce46d7be0f3faaba6118b7a279616b494aa2d8 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 5a0f19288ac068187854fe9773dd3de269ea0265 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-5"></a>
### 5. N8a / ` fix(output-management): publish current output state to new clients `

- 本仓内容路径：` waylib/src/server/kernel/woutput.cpp `、` waylib/src/server/kernel/woutput.h `、` waylib/src/server/kernel/woutputlayout.cpp `、` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 实际改变：` waylib/src/server/kernel/woutput.cpp `、` waylib/src/server/kernel/woutput.h `、` waylib/src/server/kernel/woutputlayout.cpp `、` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 排除的来源路径：` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` b71d4af56f3c90d4a8bd5cf6b421bbc9028ac145 ` 和原目标 ` cb6a911a19b06405d22ee92a4fee0907792a7ac6 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` c38a625edb9567ff40633ccc6db0eb95fdb9f01d `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-6"></a>
### 6. N8a / ` fix(surface): avoid null shell surface on XWayland teardown `

- 本仓内容路径：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 实际改变：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 排除的来源路径：` src/core/shellhandler.cpp `、` src/core/shellhandler.h `、` src/surface/surfacewrapper.cpp `、` src/surface/surfacewrapper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` e5e52083e1aa69ac66070098ec44ae47752ef759 ` 和原目标 ` d6e6e6bc9b6bceee9997ae6a39b5c07137671619 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 596d2b55f7991fc972fff7fe03cfca600a1542ca `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-7"></a>
### 7. N8a / ` fix(xwayland): preserve compositor-controlled resize geometry `

- 本仓内容路径：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 实际改变：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` b727a8209385c064fbe96d9a3a74a00f27121b13 ` 和原目标 ` dc036fba991d5218fd744730bd50f51485eeed87 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` c7b1809d7908184b4a983cdbeb1c9cc80085c530 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-8"></a>
### 8. N8a / ` fix: track exported surface lifetime natively to prevent bad object crash `

- 本仓内容路径：` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 实际改变：` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` df7b59b32de4f3982c968416cf92b3319daa7f20 ` 和原目标 ` 520d62836f73c1f156f38382e4c3f96797d14f91 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 384af637fa17312a903de9ddca52272c072b119c `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-9"></a>
### 9. N8a / ` fix: send frame done to remote subsurfaces `

- 本仓内容路径：` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 实际改变：` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` b3208c08a3599590ece69c3a68773e07584969bb ` 和原目标 ` 6979d0dff844a26bfe1bf8afbbd01cc0966ee553 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` f00e4f7942285f127dcd111157cfb711fa77c340 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-10"></a>
### 10. N8a / ` refactor: adapt to treeland-protocols unstable-v2 and wine naming `

- 本仓内容路径：` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 实际改变：` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 排除的来源路径：` .agents/skills/treeland-private-wayland-protocol/SKILL.md `、` src/modules/app-id-resolver/CMakeLists.txt `、` src/modules/app-id-resolver/appidresolver.cpp `、` src/modules/prelaunch-splash/CMakeLists.txt `、` src/modules/prelaunch-splash/prelaunchsplash.cpp `、` src/modules/screensaver/CMakeLists.txt `、` src/modules/screensaver/screensaverinterfacev1.cpp `、` src/modules/screensaver/screensaverinterfacev2.cpp `、` src/modules/screensaver/screensaverinterfacev1.h `、` src/modules/screensaver/screensaverinterfacev2.h `、` src/modules/wallpaper/wallpapershellinterfacev1.h `、` src/modules/wine-window-management/CMakeLists.txt `、` src/modules/wine-window-management/winewindowmanagement.cpp `、` src/modules/wine-window-state/CMakeLists.txt `、` src/modules/wine-window-state/winewindowstate.cpp `、` src/seat/helper.cpp `、` src/seat/helper.h `、` src/treeland-screensaver/CMakeLists.txt `、` src/treeland-screensaver/screensaver.cpp `、` tests/protocols/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-desktop-v2/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-desktop-v1/setup.cpp `、` tests/protocols/treeland-app-id-resolver-desktop-v2/setup.cpp `、` tests/protocols/treeland-app-id-resolver-desktop-v1/treeland-app-id-resolver-desktop-v1.c `、` tests/protocols/treeland-app-id-resolver-desktop-v2/treeland-app-id-resolver-desktop-v2.c `、` tests/protocols/treeland-app-id-resolver-desktop-v1/treeland-app-id-resolver-desktop-v1.h `、` tests/protocols/treeland-app-id-resolver-desktop-v2/treeland-app-id-resolver-desktop-v2.h `、` tests/protocols/treeland-app-id-resolver-v1/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-v2/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-v1/README.md `、` tests/protocols/treeland-app-id-resolver-v2/README.md `、` tests/protocols/treeland-app-id-resolver-v1/setup.cpp `、` tests/protocols/treeland-app-id-resolver-v2/setup.cpp `、` tests/protocols/treeland-app-id-resolver-v1/treeland-app-id-resolver-v1.c `、` tests/protocols/treeland-app-id-resolver-v2/treeland-app-id-resolver-v2.c `、` tests/protocols/treeland-app-id-resolver-v1/treeland-app-id-resolver-v1.h `、` tests/protocols/treeland-app-id-resolver-v2/treeland-app-id-resolver-v2.h `、` tests/protocols/treeland-prelaunch-splash-desktop-v2/CMakeLists.txt `、` tests/protocols/treeland-prelaunch-splash-desktop-v2/treeland-prelaunch-splash-desktop-v2.c `、` tests/protocols/treeland-prelaunch-splash-v2/CMakeLists.txt `、` tests/protocols/treeland-prelaunch-splash-v2/treeland-prelaunch-splash-v2.c `、` tests/protocols/treeland-screensaver-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-screensaver-desktop-v2/CMakeLists.txt `、` tests/protocols/treeland-screensaver-desktop-v1/setup.cpp `、` tests/protocols/treeland-screensaver-desktop-v2/setup.cpp `、` tests/protocols/treeland-screensaver-desktop-v1/treeland-screensaver-desktop-v1.c `、` tests/protocols/treeland-screensaver-desktop-v2/treeland-screensaver-desktop-v2.c `、` tests/protocols/treeland-screensaver-desktop-v1/treeland-screensaver-desktop-v1.h `、` tests/protocols/treeland-screensaver-desktop-v2/treeland-screensaver-desktop-v2.h `、` tests/protocols/treeland-screensaver-v1/CMakeLists.txt `、` tests/protocols/treeland-screensaver-v2/CMakeLists.txt `、` tests/protocols/treeland-screensaver-v1/README.md `、` tests/protocols/treeland-screensaver-v2/README.md `、` tests/protocols/treeland-screensaver-v1/setup.cpp `、` tests/protocols/treeland-screensaver-v2/setup.cpp `、` tests/protocols/treeland-screensaver-v1/treeland-screensaver-v1.c `、` tests/protocols/treeland-screensaver-v2/treeland-screensaver-v2.c `、` tests/protocols/treeland-screensaver-v1/treeland-screensaver-v1.h `、` tests/protocols/treeland-screensaver-v2/treeland-screensaver-v2.h `、` tests/protocols/treeland-wallpaper-desktop-v1/treeland-wallpaper-desktop-v1.c `、` tests/protocols/treeland-wallpaper-shell-unstable-v1/treeland-wallpaper-shell-unstable-v1.c `、` tools/treeland-session-helper/CMakeLists.txt `、` tools/treeland-session-helper/main.cpp `、` wallpaper-factory/qwaylandwallpapershellintegration.cpp `、` wallpaper-factory/qwaylandwallpapersurface.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-evidence.json`；以来源 ` a5656ab80ae11a0068d507659f35bb999b6d815d ` 和原目标 ` df72756d20356894c584b2a69376eaa1a4600bed ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` f8772b17a0ad4e942ddaf9cf1fae2148518ca5cd `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-11"></a>
### 11. N8a / chore(protocol): 同步 remote-subsurface 配套快照

- 独立类型：protocol-companion；不计为普通来源回放。
- [逐路径增量及原依据](adaptations/0369fbcbfcf8c97573336e54d0cccc98b29f6a8f.md)。

<a id="entry-12"></a>
### 12. N8a / fix(output): 避免空外部状态丢弃首帧缓冲区

- 独立类型：local-fix；不计为普通来源回放。
- [逐路径增量及原依据](adaptations/a2b1c5752afca1581a95a8bd8ac6d3dbe115b8e4.md)。

<a id="entry-13"></a>
### 13. N8b / ` refactor: rename qwBuffer to wlrBuffer for naming consistency `

- 本仓内容路径：` waylib/src/server/qtquick/private/wbufferrenderer.cpp `、` waylib/src/server/qtquick/wquickcursor.cpp `、` waylib/src/server/qtquick/wsgtextureprovider.cpp `、` waylib/src/server/qtquick/wsgtextureprovider.h `、` waylib/src/server/utils/wextimagecapturesourcev1impl.cpp `。
- 实际改变：` waylib/src/server/qtquick/private/wbufferrenderer.cpp `、` waylib/src/server/qtquick/wquickcursor.cpp `、` waylib/src/server/qtquick/wsgtextureprovider.cpp `、` waylib/src/server/qtquick/wsgtextureprovider.h `、` waylib/src/server/utils/wextimagecapturesourcev1impl.cpp `。
- 排除的来源路径：` src/modules/capture/capture.cpp `、` src/modules/capture/impl/capturev1impl.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/waylib-evidence.json`；以来源 ` 24e1c7a4ea8a5eeaedff24dee3df27e10f02c496 ` 和原目标 ` 93bc34f05f23d7daa66f941539b377f8601dab6d ` 查询。
- 原审核说明：` 按来源差异进行三方合并，保留相邻本地树的构建名、受控协议目录及已有条件；新增/移动文件使用规范映射路径。协议额外路径仅按 PRD §5.3.1 精确迁移。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/93bc34f05f23d7daa66f941539b377f8601dab6d.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` c54dbcbfbb7100390bf64546a370ecc3e42ad094 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-14"></a>
### 14. N8b / ` fix(xwayland): honor above and below window states `

- 本仓内容路径：` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `、` waylib/tests/unit_tests/test_native_handles/main.cpp `。
- 实际改变：` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `、` waylib/tests/unit_tests/test_native_handles/main.cpp `。
- 排除的来源路径：` src/surface/surfacewrapper.cpp `、` src/surface/surfacewrapper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/waylib-evidence.json`；以来源 ` d9efe405ab5b91daaa1a4ae5ee237cf076064910 ` 和原目标 ` 25d3d2b92a5aa7b4a087927092865172cd1c4330 ` 查询。
- 原审核说明：` 按来源差异进行三方合并，保留相邻本地树的构建名、受控协议目录及已有条件；新增/移动文件使用规范映射路径。协议额外路径仅按 PRD §5.3.1 精确迁移。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/25d3d2b92a5aa7b4a087927092865172cd1c4330.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 27e08f983493c74e42cad21aacbc9694b3232fb4 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-15"></a>
### 15. N8b / ` fix(remote-subsurface): reattach child subsurface when ancestor is recreated `

- 本仓内容路径：` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 实际改变：` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/waylib-evidence.json`；以来源 ` 423b2ad15cf2d6153aa3c6a00e7bef7dbec01aa0 ` 和原目标 ` 1f37c019972da79aa624947a1cdcc3c97f625559 ` 查询。
- 原审核说明：` 按来源差异进行三方合并，保留相邻本地树的构建名、受控协议目录及已有条件；新增/移动文件使用规范映射路径。协议额外路径仅按 PRD §5.3.1 精确迁移。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/1f37c019972da79aa624947a1cdcc3c97f625559.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 54edd9a5c45480b917fe5a9cdebdf59acb3e0098 `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-16"></a>
### 16. N8b / ` fix: preserve output identity in frame callbacks `

- 本仓内容路径：` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/tests/unit_tests/CMakeLists.txt `、` waylib/tests/unit_tests/test_output_frame/CMakeLists.txt `、` waylib/tests/unit_tests/test_output_frame/main.cpp `。
- 实际改变：` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/tests/unit_tests/CMakeLists.txt `、` waylib/tests/unit_tests/test_output_frame/CMakeLists.txt `、` waylib/tests/unit_tests/test_output_frame/main.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/waylib-evidence.json`；以来源 ` b9759c0c68ac278ed1f7c6444e59f14e7743abb4 ` 和原目标 ` c8d083592f3c149bc81dd63476a47deae9a10168 ` 查询。
- 原审核说明：` 按来源差异进行三方合并，保留相邻本地树的构建名、受控协议目录及已有条件；新增/移动文件使用规范映射路径。协议额外路径仅按 PRD §5.3.1 精确迁移。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/c8d083592f3c149bc81dd63476a47deae9a10168.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 0060010150ceb7dbe6331f52156b446bc82862eb `；跨仓定位 ` doc/treeland-sync/20260922_treeland_0_9_1_to_0_10_0_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-17"></a>
### 17. N8b / chore(protocol): 同步 remote-subsurface 配套快照

- 独立类型：protocol-companion；不计为普通来源回放。
- [逐路径增量及原依据](adaptations/d0344634c057b8c29ac2e138a935e5c80a89b768.md)。

## 独立 R 的依赖内容

以下源码属于独立 R，不属于 C 的普通 wlroots/ 包装层。C 的 gitlink 更新在对应条目单列；R 不新增独立记录目录。

本批次没有 R 普通来源提交；初始化或未变化的 R0 见对应节点。

## 节点验证与历史边界

### N8a / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` a5656ab80ae11a0068d507659f35bb999b6d815d `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` cb9c6bf6bbc4a53bc50212204f34ad0cd5308ffb `。
- 原候选 C / waylib-shared：` a2b1c5752afca1581a95a8bd8ac6d3dbe115b8e4 `。
- 原候选 R / wlroots：` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
- 原报告：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/sync-report-authorized.json`。
- 原报告状态：BLOCKED；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/sync-report.json`；原字节保留。
- 原接受收口：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/closeout-journal.json`
- 限定授权：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/drm-skip-authorization.json`
- 授权仅属 ` 20260922_treeland_0_9_1_to_0_10_0_local_sync ` / ` N8a `：` {'source_head': 'a5656ab80ae11a0068d507659f35bb999b6d815d', 'upstream_test_commit': '8bfa446c589f06d4f427a39b93a585a2406f5cdb', 'validation_id': 'deckshell-compositor-ctest', 'validation_attempt': 2, 'allowed_skips': ['test_drm']} `。
- 原验证 FAIL/SKIP 保持原样；按该节点原授权接受唯一限定跳过，不证明 DRM/GPU 行为通过，不外推到其它节点或未来批次。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/nested-gitlink-verify.json`。
- protocol_tracking：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/child-materialization.json`。
- protocol_pairing：pass / paired；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/protocol-pairing.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` waylib-base-build ` / attempt 2 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-base-build-attempt-2.log` |
| ` waylib-candidate-build ` / attempt 2 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-candidate-build-attempt-2.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 11, 'passed': 11, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 11, 'passed': 11, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-ctest-attempt-1.log` |
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/wlroots-candidate-test-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 9, 'passed': 9, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 2 | FAIL | 0 | ` {'total': 66, 'passed': 65, 'failed': 0, 'skipped': 1} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8a-attempt-8/logs/deckshell-compositor-ctest-attempt-2.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N8b / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` 3a100f265970cb6acf9addf07e5c297aab9e9839 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` bee3531566e9d325e8d89db1ad124759033d7bc2 `。
- 原候选 C / waylib-shared：` d0344634c057b8c29ac2e138a935e5c80a89b768 `。
- 原候选 R / wlroots：` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
- 原报告：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/sync-report.json`。
- 原接受收口：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/closeout-journal.json`
- 其他报告版本：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/sync-report-final.json`；未被该次 closeout 绑定，不替代原接受报告，也不表示重新收口。
- 限定授权：外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/drm-skip-authorization.json`
- 授权仅属 ` 20260922_treeland_0_9_1_to_0_10_0_local_sync ` / ` N8b `：` {'source_head': '3a100f265970cb6acf9addf07e5c297aab9e9839', 'upstream_test_commit': '8bfa446c589f06d4f427a39b93a585a2406f5cdb', 'validation_id': 'deckshell-compositor-ctest', 'validation_attempt': 1, 'allowed_skips': ['test_drm']} `。
- 原验证 FAIL/SKIP 保持原样；按该节点原授权接受唯一限定跳过，不证明 DRM/GPU 行为通过，不外推到其它节点或未来批次。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/nested-gitlink-verify.json`。
- protocol_tracking：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/child-materialization.json`。
- protocol_pairing：pass / paired；外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/protocol-pairing.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 12, 'passed': 12, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 11, 'passed': 11, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 9, 'passed': 9, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/waylib-package-consumer-attempt-1.log` |
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/wlroots-candidate-test-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | FAIL | 0 | ` {'total': 66, 'passed': 65, 'failed': 0, 'skipped': 1} ` | 外层历史资料：`.helloagents/plans/20260922_treeland_0_9_1_to_0_10_0_local_sync/evidence/N8b-attempt-8/logs/deckshell-compositor-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。
