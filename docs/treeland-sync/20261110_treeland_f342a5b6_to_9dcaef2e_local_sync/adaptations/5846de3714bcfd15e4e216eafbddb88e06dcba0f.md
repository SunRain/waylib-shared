# C / waylib-shared 适配：fix(shortcut): exclude consumed keys from wl_keyboard.enter

- Treeland 来源：` ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c `。
- 本仓目标：` 5846de3714bcfd15e4e216eafbddb88e06dcba0f `。
- 节点：N10；action=adapted；content_action=adapted。
- [本仓总记录](../summary.md#entry-10)。

## 比较口径

比较来源唯一父提交 → 来源提交，与原目标唯一父提交 → 原目标提交的逐路径增量。
零上下文补丁对照会呈现基线位置、既有命名和本次实现差异；它不是整棵来源树与目标树的长期差异，也不声称所有显示行都是本次新增适配。
本批没有历史改写；依赖 gitlink 在总记录单列，不混进源码适配。原验收只适用于总记录列出的原节点候选。

## 已审说明

以下保留原证据文字；其中依赖 SHA 属于原运行，新依赖身份见下文与总记录。

- ` Preserve DeckShell layout, DDM guards, external-lock and late-DDE lifetime protections, installed WaylibShared package names and QML URI; integrate source deltas and only the explicitly approved XML/contract inputs. `

保留/映射路径：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/kernel/wseat.h `。
排除路径：` src/input/compositorinputfilter.cpp `、` src/modules/shortcut/shortcutcontroller.cpp `、` src/modules/shortcut/shortcutcontroller.h `。

## 逐路径取舍与实际差异

### ` waylib/src/server/kernel/wseat.cpp ` / modified

- 原审核理由：` Apply the exact source delta at its canonical path, preserving nonconflicting local changes. `。
- 路径证明：外层历史资料：`.helloagents/plans/20261110_treeland_f342a5b6_to_9dcaef2e_local_sync/evidence/N10-attempt-7/inputs/ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c/child-review.json`。
- 来源路径：` waylib/src/server/kernel/wseat.cpp `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` dd8353333d364d266f9c48548358ed9ab9417955 ` → ` ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c `。
- 原目标增量端点：` 6646c58a9a0ec3231593a410e30683ad3cdaeabd ` → ` 5846de3714bcfd15e4e216eafbddb88e06dcba0f `。
- 本次目标：` 6646c58a9a0ec3231593a410e30683ad3cdaeabd ` → ` 5846de3714bcfd15e4e216eafbddb88e06dcba0f `。
- 目标文件项（mode/type/blob）：` 100644 blob d87bde4533098d90b84b50948d223812e5bb9f61 ` → ` 100644 blob b5aec78c3bfb6b4122fd5eb377b46a776fc163c0 `。
- 来源文件项 ` waylib/src/server/kernel/wseat.cpp `：` 100644 blob 48b90d7d9c9b824eece5579d9f5cb54fc9ff41d0 ` → ` 100644 blob cc6513d35d5f0089c04a8b661fb094299a765693 `。

两侧零上下文增量的文本对照（保留 hunk 位置；尾空格/Tab 显示为 ␠/⇥；不是可直接应用的纯适配补丁）：

```diff
--- 来源的本次增量
+++ 本仓的本次增量
@@ -1,4 +1,4 @@
-@@ -239 +239,6 @@ public:
+@@ -249 +249,6 @@ public:
 -            wlr_seat_keyboard_notify_enter(handle(), surface, keycodes, numKeycodes, modifiers);
 +            // Keys consumed by shortcut handling are dropped.
 +            uint32_t visibleKeycodes[WLR_KEYBOARD_KEYS_CAP];
@@ -6,11 +6,11 @@
 +                WSeat::unfilteredKeycodes(keycodes, numKeycodes, filteredKeys,
 +                                          visibleKeycodes);
 +            wlr_seat_keyboard_notify_enter(handle(), surface, visibleKeycodes, numVisibleKeycodes, modifiers);
-@@ -388,0 +394,3 @@ public:
+@@ -398,0 +404,3 @@ public:
 +    // Evdev keycodes whose press was consumed by shortcut handling;
 +    // see WSeat::addFilteredKey().
 +    QSet<uint32_t> filteredKeys;
-@@ -1188,0 +1197,30 @@ void WSeat::clearKeyboardFocusSurface()
+@@ -1206,0 +1215,30 @@ void WSeat::clearKeyboardFocusSurface()
 +void WSeat::addFilteredKey(uint32_t keycode)
 +{
 +    W_D(WSeat);
@@ -41,6 +41,6 @@
 +    return numUnfiltered;
 +}
 +
-@@ -1681,0 +1720,2 @@ void WSeat::destroy(WServer *)
+@@ -1699,0 +1738,2 @@ void WSeat::destroy(WServer *)
 +    d->filteredKeys.clear();
 +
```


### ` waylib/src/server/kernel/wseat.h ` / modified

- 原审核理由：` Apply the exact source delta at its canonical path, preserving nonconflicting local changes. `。
- 路径证明：外层历史资料：`.helloagents/plans/20261110_treeland_f342a5b6_to_9dcaef2e_local_sync/evidence/N10-attempt-7/inputs/ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c/child-review.json`。
- 来源路径：` waylib/src/server/kernel/wseat.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` dd8353333d364d266f9c48548358ed9ab9417955 ` → ` ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c `。
- 原目标增量端点：` 6646c58a9a0ec3231593a410e30683ad3cdaeabd ` → ` 5846de3714bcfd15e4e216eafbddb88e06dcba0f `。
- 本次目标：` 6646c58a9a0ec3231593a410e30683ad3cdaeabd ` → ` 5846de3714bcfd15e4e216eafbddb88e06dcba0f `。
- 目标文件项（mode/type/blob）：` 100644 blob 5cf5308fb252b7b929b891a89cd57c4d0ed27b86 ` → ` 100644 blob 6b5853548ee235d46a888a9c6f217b1c277728bd `。
- 来源文件项 ` waylib/src/server/kernel/wseat.h `：` 100644 blob 5cf5308fb252b7b929b891a89cd57c4d0ed27b86 ` → ` 100644 blob 6b5853548ee235d46a888a9c6f217b1c277728bd `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

- 依赖 ` 3rdparty/wlroots `：unchanged；` 6e4877a48d35c41b2c88e37179c61148e26699d8 ` → ` 6e4877a48d35c41b2c88e37179c61148e26699d8 `。
  当时 URL：` https://github.com/SunRain/waylib-wlroots.git `；这里只记录历史，不修改当前配置。

## 原工件定位

- source_patch：外层历史资料：`.helloagents/plans/20261110_treeland_f342a5b6_to_9dcaef2e_local_sync/evidence/N10-attempt-7/commits/ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c/child-source.patch`。
- adaptation_patch：外层历史资料：`.helloagents/plans/20261110_treeland_f342a5b6_to_9dcaef2e_local_sync/evidence/N10-attempt-7/inputs/ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c/child.patch`。
- target_diff：外层历史资料：`.helloagents/plans/20261110_treeland_f342a5b6_to_9dcaef2e_local_sync/evidence/N10-attempt-7/commits/ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c/child-target.diff`。
- source_contract_audit：外层历史资料：`.helloagents/plans/20261110_treeland_f342a5b6_to_9dcaef2e_local_sync/evidence/N10-attempt-7/commits/ffceb27fff0c18cbcabe0e5f6d113ab190f6e39c/child-source-contract-audit.json`。
