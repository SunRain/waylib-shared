# Bundled remote-subsurface protocol / 内置远程子表面协议

`treeland-remote-subsurface-unstable-v1.xml` is a source-shipped snapshot, not a
separately evolving protocol. Its SPDX copyright and MIT license are retained in
the XML. `remote-subsurface.json` records the exact implementation repository,
commit and paths, and the independent XML repository, commit and path.

The initial XML is byte-identical to Treeland Protocols
`8dc1d1e788dc964cd0f756b4491d0225e70b1598:xml/treeland-remote-subsurface-unstable-v1.xml`
and the accepted DeckShell copy. It accompanies the implementation selected at
Treeland `fd573cf44fb06ee1eebcdd8c39716d1c797b64d4`; local namespace/package
adaptations remain part of the existing synchronization records. The initial
migration retains the three version-1 interfaces, request/event order, argument
types and enumeration values. Focused tests exercise real Wayland token export,
rejection, cross-client parenting, stacking and destruction; they are not a
certification of all rendering, trust-policy or lifecycle scenarios.

Ordinary configure/build/install uses only this XML. DeckCompositorProtocols,
DeckShell source directories and upstream Git histories are not required.
`WAYLIB_TREELAND_PROTOCOLS_DIR` is retired and ignored with a warning. A missing
bundled XML is an incomplete source release and fails configuration without an
external fallback.

Updates use DeckShell's existing
`doc/skills/treeland-deckshell-waylib-unified-sync` maintenance workflow. Every
round checks explicit ranges in both source repositories, including no-change
rounds, moves, removals and prose/behavior changes. XML, implementation, affected
clients/tests and both repository copies are paired before acceptance. The
mandatory `protocol_pairing` result supplements advisory candidate discovery;
missing or failed pairing is reported as **尚未适配** and blocks acceptance.
Incompatible upgrades switch directly to the selected contract: clients must
upgrade together, with no old-name alias, dual implementation or runtime fallback.
These maintenance tools are not dependencies of a source release or installed
package.

中文：本目录仅携带实现所需的单个固定版本 XML，来源和精确提交见
`remote-subsurface.json`，许可见 XML 原文。初次迁移保持现有三个版本 1 接口及
请求、事件、参数、枚举合同。普通构建不读取父工程、系统专属协议包或上游历史；
缺 XML 明确失败，旧路径缓存不再影响选择。每轮维护同步必须检查实现与协议的
独立范围，完成配套更新、真实交互验证并通过统一报告后才能接受；失败明确记为
“尚未适配”。后续不兼容升级直接切换并要求客户端同步升级，不保留旧协议路线。
