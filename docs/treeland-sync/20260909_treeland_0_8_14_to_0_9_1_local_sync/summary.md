# C / waylib-shared 同步记录：20260909_treeland_0_8_14_to_0_9_1_local_sync

这是按仓归属生成的同步事实记录，不是新的产品验收报告。
原节点结果只绑定下文列出的原候选与原环境；本次生成未执行同步、构建、测试、收口或远端发布。

- 来源范围（左开右闭）：` 7da2254d386935f753ed907f8d6e76c1639d01a9 ` → ` fd573cf44fb06ee1eebcdd8c39716d1c797b64d4 `。
- 本仓内容基线：` 26f52806c0432c70438a027b7e7659e1cb481b2b `。
- 本仓内容终点：` be76893d3d5b20494567b8b7041420db299d3507 `；不含后继文档、URL/gitlink 或工具维护提交。
- 本仓普通目标：**385**；独立初始化：**1**；合计 **386**。
- 普通 action：{'applied': 41, 'adapted': 18, 'gitlink-only': 326}。
- 原同步内容基线/终点：` 26f52806c0432c70438a027b7e7659e1cb481b2b ` → ` eadc4da0c975dbb65489bd990b48524b23489cc5 `。
- 三类身份严格区分：Treeland 来源不变；原目标由旧证据验收；整理后目标由旧新映射及 Git 对象对应。
- 生成时已逐目标核对来源、映射顺序、普通文件不变及派生 gitlink；这不是产品重新验收。
- 原需求与实施记录：[PRD](../../../20260909_treeland_0_8_14_to_0_9_1_local_sync/prd.md)、[plan](../../../20260909_treeland_0_8_14_to_0_9_1_local_sync/plan.md)。
- 外层历史资料仅用标识和相对定位列出，不是本仓链接；记录不包含完整日志、构建树或安装树。
- R 的短 Refs 是 P/C 共同方案标识，不承诺 R 仓内存在方案副本。

## 有序提交映射

| 序号 / 节点 | Treeland 来源 | 原目标 | 本仓目标 | action（C 另列 content_action） | 归属 |
|---|---|---|---|---|---|
| 1 / N1 | ` 3eeb8956884cb9eb759ff81107a60cfa7841e756 ` | ` 5832583291b2ad14c4e723e26f5c5b851e6dbe03 ` | ` 3eb629c01b8d26c920ab0baededf76d35675602f ` [条目](#entry-1) | applied / applied | waylib-only |
| 2 / N2 | ` 1ffe0010193a8c696ef6436a4c436f57bbb1e8ec ` | ` 05e24276e3d5878b653adf692cd33391038dd398 ` | ` 827ea426576b8990e393500a4f976a8c7b2ae57f ` [条目](#entry-2) | initialization / 非普通 replay | 独立初始化 |
| 3 / N3 | ` 896a8953e3695577e05e9e93d10530920dc7d6d9 ` | ` 2e9e9ce9ff975fb39b7a506d96562d94b216e831 ` | ` 56a2765a569517f8f19b732e5bc1a75a65c476b5 ` [适配详情](adaptations/56a2765a569517f8f19b732e5bc1a75a65c476b5.md) | adapted / adapted | dual |
| 4 / N3 | ` aac67eea93c777558d41903c7a37f360ec0fbe81 ` | ` f477380331437ea960565a87b8162f3a6aa65321 ` | ` 23ab4323280d7ccbcfc0b7309f0679af56fe9f6e ` [条目](#entry-4) | applied / applied | waylib-only |
| 5 / N3 | ` ff0aa9861d0d71b723da86483d0571b4aa1beab3 ` | ` 30f6a61d4392ad4cc15dbfdd40a16155adfabe44 ` | ` f7a593d1112a9c34d2d5900820fd137205e86fe7 ` [条目](#entry-5) | applied / applied | dual |
| 6 / N3 | ` 0d008c38411bb097ab66cc78a1593ea985dd6a06 ` | ` 7bba19b60c4203f530c9b3ca79f521d9ed2d4bb2 ` | ` 1054d79edbc86132c09c6fd0d94b09ae16ffdf66 ` [条目](#entry-6) | applied / applied | waylib-only |
| 7 / N3 | ` 5a90432efb33646a8d1e92ce2c5901e0dcb7fc04 ` | ` 4a419790f030e9b5e92e2a9d3503b9e1ea56d944 ` | ` 5e859f63bebca57be2237e75174a20f265611349 ` [适配详情](adaptations/5e859f63bebca57be2237e75174a20f265611349.md) | adapted / adapted | dual |
| 8 / N3 | ` 4e21f708be59d24f4aac55bcdc3964a800feb74c ` | ` c7f3abfdc806fc9b8dff1aada32d131e52c9aa2e ` | ` 6f46e9498ff1b4caec6cb1f035ef05a5b43b4873 ` [条目](#entry-8) | applied / applied | dual |
| 9 / N3 | ` 268ca973be0d5eeb33d6be03b5e51e4ce62f4997 ` | ` ab88bfa08af0973888b967304b25c274a656c2ac ` | ` 557ccb9c28071777197ab456546207c8dd3f85f6 ` [条目](#entry-9) | applied / applied | dual |
| 10 / N3 | ` 34049a416fb66f7c6c8ab73dbda3e42e9c59f309 ` | ` 37609f7ef1d1cf24cc5490d5ed3198fb240a097b ` | ` c5ec822f8301881b46570c7e39148712f82b1809 ` [适配详情](adaptations/c5ec822f8301881b46570c7e39148712f82b1809.md) | adapted / adapted | dual |
| 11 / N3 | ` 25cb8dd422d381b64f18f535a51066c85d80818b ` | ` 1db059be68d697b7c47c7003f7433e0d1836139a ` | ` 6e4916aa969d77c67a4a96c05554ccc1f8c12b68 ` [条目](#entry-11) | applied / applied | waylib-only |
| 12 / N4 | ` d4e547c9f0094626689b5db8e95db0da49164b50 ` | ` d0b854c0fb58851c2da86e5e7a8d90f8fa354c48 ` | ` d64bb4cc5e2670a46f2e0ef5c06f45b90b6291d7 ` [条目](#entry-12) | applied / applied | waylib-only |
| 13 / N4 | ` 1f5d35eadc6ce02d708a7edadba97a56bf2a7883 ` | ` 55c904bbbe0e3520a86eca9792b748a530e171ac ` | ` 4df2dfc789813ae121f738166ddf9d0df3897c39 ` [条目](#entry-13) | applied / applied | waylib-only |
| 14 / N4 | ` 57fe3c71cafcefca1b2e419e3a008f1ebc0be38c ` | ` 6e8369a56b958114ecac6b6424604a5b459771a2 ` | ` 5f878b97d3420b99c988e546bdadd3098bd51d89 ` [条目](#entry-14) | applied / applied | waylib-only |
| 15 / N4 | ` 63116956e9f77e691250b3326ac15a9dd4c6a47d ` | ` f366cc17407f02f1249d002088da4aea0cdfc06e ` | ` fbef982ae1546244cf86fbbbae05963b601bff18 ` [条目](#entry-15) | applied / applied | waylib-only |
| 16 / N4 | ` 3d1a458a7ee298ba190fd0b73b0418dd331d27bf ` | ` 5b2456ea15df37dac357dc4eb8f12a14f109bad8 ` | ` 41bdc82765653b610ae06c25549d419124faf509 ` [条目](#entry-16) | applied / applied | dual |
| 17 / N4 | ` 371d32244323c914a6816fc7c14fec57c04fa333 ` | ` 154a53703f463f4882b39bc98bb8b5c574a861af ` | ` 495e18db5c4dd3b96d9d2fadbd529073cc1d6329 ` [适配详情](adaptations/495e18db5c4dd3b96d9d2fadbd529073cc1d6329.md) | adapted / adapted | waylib-only |
| 18 / N4 | ` 07a7b175b71e5fb78a57e962db7b30d227e3936a ` | ` 0d8c99c886084818a1caee37995390bb69603184 ` | ` 7c8a47d9f4624e970504fd44780c36198785a5ca ` [条目](#entry-18) | applied / applied | waylib-only |
| 19 / N5 | ` ad91d436f0c7b8afd79153c766d6cccebc767370 ` | ` 4f43ed9c7fe9b818f0565a7c44f4b49c2b871b75 ` | ` c68ed41d8224c355a2335463a487017c55156d55 ` [条目](#entry-19) | applied / applied | dual |
| 20 / N5 | ` 97ed8df0b546f925c17388b71fdd78181b2cb861 ` | ` 58f0bb706ed29f0cf6c16aeb89be1365d3846511 ` | ` 9874b79331a380ad66883575eaba4b25e20add14 ` [条目](#entry-20) | applied / applied | dual |
| 21 / N5 | ` a9df8d3d87256c84a593838057e587a6beee4ec4 ` | ` 85bf4347afe2aaf028e8053f3429205ac7a15a2a ` | ` 13fb708ed222f89b4a4776b3513fb3f4264b4aee ` [适配详情](adaptations/13fb708ed222f89b4a4776b3513fb3f4264b4aee.md) | adapted / adapted | waylib-only |
| 22 / N5 | ` 526308f00028711152378a181e29045342f78790 ` | ` e31be11aedefe191b29d1106947f9d8f1ff96477 ` | ` da7f26ec3960947fe4fc7d348b4f7cbba5fdb56b ` [条目](#entry-22) | applied / applied | waylib-only |
| 23 / N5 | ` b4d7bff91684db691da410dc4c49a3a4936044fa ` | ` be08de9af5176fb71ee1a05c5b1ca140b26078fd ` | ` 8d64ef27ffd82c64501e79ca0ce5058594582ceb ` [条目](#entry-23) | applied / applied | waylib-only |
| 24 / N5 | ` 6ea349ac28b93b61ca3f9223ec021344141d6fce ` | ` ed4f019301c0d3dd8434d842152f343a69e988d5 ` | ` 5d193f6dccab6ad38890d453710c38dc69f53c0b ` [条目](#entry-24) | applied / applied | dual |
| 25 / N5 | ` 4d4736f4dfa73b04192245446ac1bde05eb83563 ` | ` e69ca1635752605a109dda3d05c61b93c9e05026 ` | ` dcb885cf3b9823bffa91ff9535601041263bb252 ` [条目](#entry-25) | applied / applied | dual |
| 26 / N5 | ` 0333a31456c7f90708c7f482939e23d939283b45 ` | ` 54a49ec203485a02f6531b58020cabce631b0e14 ` | ` 93e9eef541115c83126b256489ab618d465c057f ` [条目](#entry-26) | applied / applied | dual |
| 27 / N5 | ` 9582881ddc2e71c73f01eb1f8f5efd0b87a8b107 ` | ` 93d893187e4bf4491a089d567e31a7a7da532c00 ` | ` 9e58c1f7a8e4af110340e8ada6d24398d2f90c1a ` [适配详情](adaptations/9e58c1f7a8e4af110340e8ada6d24398d2f90c1a.md) | adapted / adapted | dual |
| 28 / N5 | ` 1708d699270363c01d636bce8f444628ba6b95d1 ` | ` 098ac7e1d82f7f8c0ac099eb34bbd5ec16ebaf4b ` | ` 8dff87ca8ecbcc2d37fdaeb6ff0769bb0b2733b2 ` [条目](#entry-28) | applied / applied | waylib-only |
| 29 / N5 | ` 293dbe5ef45d3e3bf597126ba990a77003502210 ` | ` c64f150a29bd79a6cacf14b4a7878de7f76d0978 ` | ` de74680ea8a70564993b5aee0cbee7405848eada ` [条目](#entry-29) | applied / applied | dual |
| 30 / N5 | ` 78773de1f242c1438b78f716c7d11522b58022a5 ` | ` 0a38730db85e772c6b80050210344fde60dddc61 ` | ` b57b8ff6ca4f7d109a9fb60d5eba6793e4c1003e ` [适配详情](adaptations/b57b8ff6ca4f7d109a9fb60d5eba6793e4c1003e.md) | adapted / adapted | waylib-only |
| 31 / N5 | ` b037ac5c5dcd33032424d546a312d0ad702c4bf0 ` | ` 11e096a97e13d4b8740cea0d735f758e66b6534c ` | ` f448e31e43bffb462f083707bf2f95d8f010e8f2 ` [条目](#entry-31) | applied / applied | waylib-only |
| 32 / N6 | ` b248e3682368a351ee2d4622c06fbe5e9c2d3b16 ` | ` a4ffa524241607aaeb72724845956ad5f26216da ` | ` 1df4bc80fb5aeeb3cf89eac354668102cdde1e61 ` [条目](#entry-32) | applied / applied | waylib-only |
| 33 / N6 | ` f2773149b47ddca53b9fc234172830073964334b ` | ` 09e92a03ef380917965047fb18010131303e4b98 ` | ` c2fee2e4fd0aed29f0c8ee9537076b8a9d403c1c ` [适配详情](adaptations/c2fee2e4fd0aed29f0c8ee9537076b8a9d403c1c.md) | adapted / adapted | waylib-only |
| 34 / N6 | ` ecb32e8a1fab02512038324e5a5e7a6cdf8ffa74 ` | ` 41c86dc64620e0c8e71a709b070ba43fb6605cd9 ` | ` edc0e10e06169968888fd781fff799da0bdf2acd ` [条目](#entry-34) | applied / applied | waylib-only |
| 35 / N6 | ` ee787154f3035363bd1c3a95741fd5283b1796f3 ` | ` f6c78a55d25f172bc9d682ac50ee3d3f09c8b231 ` | ` 896c23dfb3484bd65551c2246352a7743276e616 ` [条目](#entry-35) | applied / applied | waylib-only |
| 36 / N6 | ` 447c3da6712695822738ee399ca08eb9c82eef4e ` | ` ed0bd1a229adff58a1acffa0d2aeec5d28e1be5d ` | ` 281088c63a118b2cf9cf47ec67023009f7e37676 ` [条目](#entry-36) | applied / applied | waylib-only |
| 37 / N6 | ` 2e27ca38141087e551e22330165c86d886bd8cdf ` | ` 350e7b8af815d0ee111663f9686daae88f93df63 ` | ` eb6e6905b6231c6be2292c7bbc57c9a1928c7b27 ` [适配详情](adaptations/eb6e6905b6231c6be2292c7bbc57c9a1928c7b27.md) | adapted / adapted | dual |
| 38 / N6 | ` 8e41511b7dbc1ad148a23f5817b36527def9ddce ` | ` 97a507e3b0bfff1a60d92c556ad890628bf87420 ` | ` 773b23071dcd4ed01a82eb1c1218e00284403345 ` [适配详情](adaptations/773b23071dcd4ed01a82eb1c1218e00284403345.md) | adapted / adapted | dual |
| 39 / N6 | ` 53dffe1867ea3a13167eecff0d08343b3cc2a368 ` | ` 055e192714a6f1fddb6619edaa694fc5a0ddfc35 ` | ` 711c38995fa56c82ce1c78f40a00702b4b533eca ` [条目](#entry-39) | applied / applied | waylib-only |
| 40 / N6 | ` 30447d0582ccb582acf38cef4db4b729704dc6b6 ` | ` 9e5db571fabf467e04cb9cee8c140fe25f8cede7 ` | ` 95805e685187082bf4d98c48b3ad9b62aa3cb083 ` [适配详情](adaptations/95805e685187082bf4d98c48b3ad9b62aa3cb083.md) | adapted / adapted | dual |
| 41 / N6 | ` 80137e42c2dfa4b1ff7edb0c81ab75da9c9f171f ` | ` 2eb3bb27299d7875cf3fc6b231f13a72b255cfab ` | ` bac6df1fc667642884ff0cf696e10c88c1f1e0ab ` [适配详情](adaptations/bac6df1fc667642884ff0cf696e10c88c1f1e0ab.md) | adapted / adapted | dual |
| 42 / N6 | ` 22609c6cb07f3493b948aeee2d018093478eca83 ` | ` 2417ba7c1c5a418da1bfa917ff2ad26da20f333c ` | ` caec417b89bcc3fad81f8a8d84600ed68b7e9f7a ` [条目](#entry-42) | applied / applied | waylib-only |
| 43 / N6 | ` 1921954d28e618fc3496d88d32b4063fbb56563e ` | ` bfea5a19eb419cf1e849237feed13ce320eb52b0 ` | ` bda29d68784ae59019163cebca299ebcbf32d8bf ` [条目](#entry-43) | gitlink-only / not-applicable | waylib-only |
| 44 / N6 | ` 8b6d1783cf48bc865d762701f97e376ce2449e50 ` | ` 30317341c929cb749a3e7b948bec04da40f07021 ` | ` 1465965ff43efd8ec6ecddbf7dbf50a996b8ad3e ` [条目](#entry-44) | gitlink-only / not-applicable | waylib-only |
| 45 / N6 | ` 2d47e5ed21e1b2c9cfa5ba80f4ca8ba1200e9f5c ` | ` 4c93c2ac341cc2c6092f8d8a338995075757c8a4 ` | ` 4d19d6bae4130df6bbcbc2908da78d12a4c347a8 ` [条目](#entry-45) | gitlink-only / not-applicable | waylib-only |
| 46 / N6 | ` b6b92729856e1cfb59a5f4abccfa73fea008852d ` | ` 5b098ba0991facda3bd5a476dd08b256d3e9f928 ` | ` 01c2fc4420bdd6576060def42c58250e7958d1c3 ` [条目](#entry-46) | gitlink-only / not-applicable | waylib-only |
| 47 / N6 | ` 92cf9d3d54f20cbf7bc509a2413678e89f8a0f25 ` | ` 768c1a40227b489e92b427a1437c534bc4123a81 ` | ` c95af3799d6189906ba41999a16c8fd0920020e1 ` [条目](#entry-47) | gitlink-only / not-applicable | waylib-only |
| 48 / N6 | ` eec5773b46a1e5286ba8f6f85a4da40eba85580f ` | ` ee8a08b5d74c1bf52c28d847d779c09d7771093a ` | ` c6c8b99d2e4b350c9c05a4a3d40af339750b26cc ` [条目](#entry-48) | gitlink-only / not-applicable | waylib-only |
| 49 / N6 | ` f1cbaab98b5d4568ebe244229931d5ae4665ea9d ` | ` 943ac702b52165264a468b7209ba9b3902de6d30 ` | ` d6ba89bf3e9b4d7e18e96d563a5e6f71f4719df1 ` [条目](#entry-49) | gitlink-only / not-applicable | waylib-only |
| 50 / N6 | ` 3b7e3f20e120dc85e9f08d0989075f17818334ef ` | ` bc3da7afa4792fdb4610943273491af1e0316b2c ` | ` 110e9183432076f513cfec931934b6bb5cf8540b ` [条目](#entry-50) | gitlink-only / not-applicable | waylib-only |
| 51 / N6 | ` 6ad1e1212a78210e7c6f8bec0476d40193852fde ` | ` b74e13d52832ad7899e9bbb86558445b6c090e7d ` | ` ca7c10c62e923bd66fa707950b104e3ba20f5c52 ` [条目](#entry-51) | gitlink-only / not-applicable | waylib-only |
| 52 / N6 | ` 22b4fe8e7a5d0eb9688d407442ec941c715b1546 ` | ` c0147dc4251f608e544615b1648de51915c502dc ` | ` 561d3f245a9e27c4af84aca5d68cf3ad7ed38736 ` [条目](#entry-52) | gitlink-only / not-applicable | waylib-only |
| 53 / N6 | ` 8d1df35e6373636631bd0a46a1c89bd59763374e ` | ` 406365476c29a57cd8429d619aabed63633981b9 ` | ` 00f46e97b30b893ff466517f2f2c8447da7b9b76 ` [条目](#entry-53) | gitlink-only / not-applicable | waylib-only |
| 54 / N6 | ` 1419b581afd87ad0ae5df76757add34cb9a98bde ` | ` dca599a64b5009bea6b7a053bad4804c1271fc42 ` | ` 2c7225a42cc4b03ad948bfd19b147d6fe6a5e8a0 ` [条目](#entry-54) | gitlink-only / not-applicable | waylib-only |
| 55 / N6 | ` 8c6229f9c4eacae14accc02f0a941b0a03ca622b ` | ` 0293857a069034c7dbee77c02586a4e363490db3 ` | ` ff665e2661e43887d500cd36a7b2d55a9de0156c ` [条目](#entry-55) | gitlink-only / not-applicable | waylib-only |
| 56 / N6 | ` e6793bd93ffc041083e31d408c3e3aced255d8bf ` | ` e19151928ab4e645c8b18ee4745fa362d972126d ` | ` d2bf4483461d3c4d703d831dd3c7ad6046ef70cc ` [条目](#entry-56) | gitlink-only / not-applicable | waylib-only |
| 57 / N6 | ` 54187ff9b725b409e4f6533415a32dd3c11c442e ` | ` 075b25aaacf1bf0119c80c15f60d96dad6455ff3 ` | ` a29179450adea072d9a8cc8c5fe66f953fa64588 ` [条目](#entry-57) | gitlink-only / not-applicable | waylib-only |
| 58 / N6 | ` b3c71df01083877ecf3200323ea551c192d8a898 ` | ` 8badc5ae8201eab5827b7adee05a17b4bc5b60bd ` | ` d5e4250c5a73576a3ae05a72096b9b479cc052be ` [条目](#entry-58) | gitlink-only / not-applicable | waylib-only |
| 59 / N6 | ` 3697e0f99a06e24895ac96cf0ee3c7a54bf1608b ` | ` 4d713766203aa69f8093a8318401047d37787fde ` | ` 004fe8fffdfe15e81b7ffb36ed3dbb3005678361 ` [条目](#entry-59) | gitlink-only / not-applicable | waylib-only |
| 60 / N6 | ` 30f621f3623fcdf8d3256886584286f4aaf08f3a ` | ` 2248d37a4527f86556c06daeffdd295e8b7d4648 ` | ` 693ff3574911b388917423f7a467acd3c48f1424 ` [条目](#entry-60) | gitlink-only / not-applicable | waylib-only |
| 61 / N6 | ` a7e0d3626ecafd17cbfc9c19f5807cced5b7dbf3 ` | ` 0a62c6e4ef95240bcc8929f47e1103bdfde54233 ` | ` 09513062f8da9891fd7e88f76c54e7669645d2b4 ` [条目](#entry-61) | gitlink-only / not-applicable | waylib-only |
| 62 / N6 | ` 5912dc0f34fcecfdd5476656e3c34a26e74db765 ` | ` ff44ffca1bf151d73f19560696ad23a80fdc5a08 ` | ` 1353228b9af02f52385c7f40f449107da90a239e ` [条目](#entry-62) | gitlink-only / not-applicable | waylib-only |
| 63 / N6 | ` 622b27271a424a1dc392ad665f0ddfca06263231 ` | ` 322f1c6c247bffd43727cee45d36f5d560644d51 ` | ` cf0b326a402c77045cea41af7d9ee6e06c5f762d ` [条目](#entry-63) | gitlink-only / not-applicable | waylib-only |
| 64 / N6 | ` 96bccf46d3653a46327e838e90d52d5ec96554f5 ` | ` bf997e2f1535710dc1025ee170b468a166ae0341 ` | ` 3773ca6d34e1c1674e0b8b470cdd94dd053940bb ` [条目](#entry-64) | gitlink-only / not-applicable | waylib-only |
| 65 / N6 | ` 5515da6732aefbe2a23826617dd834bf9a2a7134 ` | ` 4e3dc5ca8900acbeb5fdbfd0766cd3d77ed287d3 ` | ` 084bce3a18f534d251123ca94e3646899fb1c3a7 ` [条目](#entry-65) | gitlink-only / not-applicable | waylib-only |
| 66 / N6 | ` ea887de23d872cf160647f8320633fc361d9f067 ` | ` 7dc80eefa105c1a313e5c6b9a125aa5cdccbe0ff ` | ` 9dc4d94f40d5894c5753daa82ecfba08d196785e ` [条目](#entry-66) | gitlink-only / not-applicable | waylib-only |
| 67 / N6 | ` c96938ef3a78fc7d454eea5109cbde66d795ed6c ` | ` 0614224aef588dfe07aa028c0add9ad5b1b114f1 ` | ` 302fcac63a7fb33cee62a4956f25793d51e760d2 ` [条目](#entry-67) | gitlink-only / not-applicable | waylib-only |
| 68 / N6 | ` 573e7aa6533edcbf765751bb3e2355eed15ba689 ` | ` 029e32cc33f4268ee2c814bca7a1aec25976664a ` | ` 039e19ef481c1261ce0829939fe7b33484c7840f ` [条目](#entry-68) | gitlink-only / not-applicable | waylib-only |
| 69 / N6 | ` a3ad65170cb0d59adde8d743d3c0efcb90f101ae ` | ` 9a328e1c03d2fbca5f12d506162a971843d9e08f ` | ` ae0b851047440eca17d4fa8130242b4d293ea9eb ` [条目](#entry-69) | gitlink-only / not-applicable | waylib-only |
| 70 / N6 | ` 28b8cd207acf042de0cde21a419944f3a5e98c0a ` | ` df635874401991d02b5949f8c45496d834249afb ` | ` 4663a72aa26a20b086c03e6073116da43fb7c493 ` [条目](#entry-70) | gitlink-only / not-applicable | waylib-only |
| 71 / N6 | ` fa6a35279263b8f45ed98922e408b371641ce6f4 ` | ` 0587cc661376ffbfb7261cf4988c765d723f10ec ` | ` fd6f0c8792143a6b7724581c5a0d058fcd2c3d74 ` [条目](#entry-71) | gitlink-only / not-applicable | waylib-only |
| 72 / N6 | ` 3fa894cc040d4028e425492841f86d5556d46937 ` | ` d517ac9cfbec29c1cb5f7385a08128712dec2b35 ` | ` f6ed45b83dcc2359938099c6a4a3c9d931ebe06e ` [条目](#entry-72) | gitlink-only / not-applicable | waylib-only |
| 73 / N6 | ` d40797ab9cfd328185f3a3ba8290fc083c292758 ` | ` 801c81c2c42e489afd6775a1bb1077617e05d76e ` | ` 3acf21fff4532368826a5c9f6a11473c9f02678d ` [条目](#entry-73) | gitlink-only / not-applicable | waylib-only |
| 74 / N6 | ` 7b15516aa256d738c76e32fdd62e8ca11069b42d ` | ` 25bbb0582ecf710232588d9a28912f1629570a21 ` | ` 4d4495f0c203f7f74c174b52e57f11183e3e3129 ` [条目](#entry-74) | gitlink-only / not-applicable | waylib-only |
| 75 / N6 | ` 334c2b21f20cf142d6fada8c47b074c73b9976c2 ` | ` cadeafa7b05c1bf9774e40481fcaf85494b8ba96 ` | ` 4e5cd5584f2967c0ee21d43ee85909b41386b56e ` [条目](#entry-75) | gitlink-only / not-applicable | waylib-only |
| 76 / N6 | ` bf5238919abe86a4fe0dd6909fc3f0bc76aa7369 ` | ` ab789d57e7f02fc0cecbab772567c58fefd33f31 ` | ` 0b8d21bb32b9313d862498ec9753dfcb2f7bac4b ` [条目](#entry-76) | gitlink-only / not-applicable | waylib-only |
| 77 / N6 | ` edd2ff863d2799591b41bfc6a633d205f240e7d4 ` | ` 57427cc4073c32f9b11f41822d3cfa6ca5c246f2 ` | ` 2a86812fe2a4d7ce54fe10d388e8a6af245f807a ` [条目](#entry-77) | gitlink-only / not-applicable | waylib-only |
| 78 / N6 | ` 85be1f0a54bb42dcf542ab6aeb12bf3360eb9b5a ` | ` 877151afff019ab6d8432cdfb3abcd5ab68abb88 ` | ` e53e15bede67f47503ac739f62f4bf9a644198d4 ` [条目](#entry-78) | gitlink-only / not-applicable | waylib-only |
| 79 / N6 | ` b02653d741e06f43e39329492ba348fea9081722 ` | ` 07457c22502ae0b982bf97d216db1b84404556ce ` | ` 0d071b5f47e29acb9729a32dbd1d27f38e296989 ` [条目](#entry-79) | gitlink-only / not-applicable | waylib-only |
| 80 / N6 | ` ef9eb4e7391ebcb5e0ed8de36ee2d16e7a35ccf5 ` | ` 458aed70573092e3957a567244761d1b840d1e7c ` | ` 4f2bb0ba57c8edf4787c33b6cf494ecbe24bcdcb ` [条目](#entry-80) | gitlink-only / not-applicable | waylib-only |
| 81 / N6 | ` 9604e4859299596f83425af79e7dfdea0d180b99 ` | ` 436d2769bf185affcecc83b9c8154ef287026920 ` | ` ed25b7d3ff21bbcf968d2a002e593a27cfe1e075 ` [条目](#entry-81) | gitlink-only / not-applicable | waylib-only |
| 82 / N6 | ` 8f52ccea285f0f3c8a52142d597f5382c9b64197 ` | ` eb071219e32d9b8f9cc0ead3fa982b90762bf1f3 ` | ` 1d6c9ae270a1fe1c081a00cea0190783215db831 ` [条目](#entry-82) | gitlink-only / not-applicable | waylib-only |
| 83 / N6 | ` a730f12008999409a4b07957833e1c0a494d43af ` | ` cc164c99997248a38bf8cd2de937f9f72793d3ba ` | ` 95de6e66e1bd29930c154cca7d0128399e9a229f ` [条目](#entry-83) | gitlink-only / not-applicable | waylib-only |
| 84 / N6 | ` 8808fbce11b8159413957d64adfb844dd068d5bc ` | ` cc2ecd2f5dbeb469b830623d2f406d27476335fa ` | ` 77b098b6e45992f1d8790e4941d6ad4a23e0ed0d ` [条目](#entry-84) | gitlink-only / not-applicable | waylib-only |
| 85 / N6 | ` f686dfea1e1d783715acf91889f317ca1a94a151 ` | ` e005ddb13a02652f853aed332557253e8c4029af ` | ` 5cd0e8b0090fdb21d13418711464d434ea824e6b ` [条目](#entry-85) | gitlink-only / not-applicable | waylib-only |
| 86 / N6 | ` 34f1e53916440ad471d025e5c118cf7769ec0af3 ` | ` 84b1a3b4edee7c1ca46b3ad21e5415a8a7e76200 ` | ` 01d042f59dc0b3ca0f6f882ed19be3aa6364b476 ` [条目](#entry-86) | gitlink-only / not-applicable | waylib-only |
| 87 / N6 | ` 4ec0a9e4bf7ef12a6a6830b3ef15cd260bbb2de0 ` | ` 3281c4f0f154d1ba8faf6280e27ff26c1ab98ec9 ` | ` d47d456cb3e3afb482f57f03048755382c5cdee7 ` [条目](#entry-87) | gitlink-only / not-applicable | waylib-only |
| 88 / N6 | ` 7a009f2f18007c6afc7c11fa72948af9fabf990c ` | ` 0c42501119b972e76fd2fd60197656eb33edb14d ` | ` 86061fd770a796108c9ad23fb8d5f5b292aa5b25 ` [条目](#entry-88) | gitlink-only / not-applicable | waylib-only |
| 89 / N6 | ` e2e62b6ea6965c65f499de1b40a08330f371c9c8 ` | ` 606e8363df106909de8e2b4dd904f514560c8ef9 ` | ` 2e88d8b62ccb66aabd4249625c84963ffee2db42 ` [条目](#entry-89) | gitlink-only / not-applicable | waylib-only |
| 90 / N6 | ` 1fcd0c9da6a25d58a23b9450acdcd0d5609e9bbe ` | ` 6086d6be5d6c3d1abdd5900402586c30c961a354 ` | ` b93009d326ac2412bb57111784b35bbd76439594 ` [条目](#entry-90) | gitlink-only / not-applicable | waylib-only |
| 91 / N6 | ` 04f282f3f12debe935a41ec6e709d40575ee8c8e ` | ` 9dcd00d1b7aa3804d008ed25a7d5d472ff357035 ` | ` 7b1c119ab285e69133b73a24c5e92fa40647a36a ` [条目](#entry-91) | gitlink-only / not-applicable | waylib-only |
| 92 / N6 | ` 116c2281e863d65584756b8ff2eb3f8b34490bc5 ` | ` 140ba9d203f2191d92d42e6a9514cc4b715e62ad ` | ` a40e7694b04d0d385faa4a50e6a193f2e672dc50 ` [条目](#entry-92) | gitlink-only / not-applicable | waylib-only |
| 93 / N6 | ` ca49086f7f6582a8efa246fa1e1c93624b825a74 ` | ` 8fb1466ff9a864cfa5be1a4ef7bc03b7e9aedf4b ` | ` 3b5b9ed8886e94ce06d386da8207011c91141764 ` [条目](#entry-93) | gitlink-only / not-applicable | waylib-only |
| 94 / N6 | ` d04c4477b8dff7b358d8950acc974dfe353f9602 ` | ` b180b97f41e105abcc0b03e68d478c039c6da4d5 ` | ` 630b9c8d17917dc14c5200f8b787d63713a31a6f ` [条目](#entry-94) | gitlink-only / not-applicable | waylib-only |
| 95 / N6 | ` 31c96911257d84b52b6e85590d2c7a0ae1fbbde3 ` | ` 63043d254c76bcd774aea910d736b40cf26e03df ` | ` f5eaf92ee414ce80e7ea48c1ec6ed090f2451ae4 ` [条目](#entry-95) | gitlink-only / not-applicable | waylib-only |
| 96 / N6 | ` dfdbade3b1fba232c2d723922e1c95f3a7e0fbf4 ` | ` ce5de5ae0cf2ce282be13a9d91b1e48c4fcac7b5 ` | ` 63fe5e1ad8e72fc8241b9677eecac26745e0d2a3 ` [条目](#entry-96) | gitlink-only / not-applicable | waylib-only |
| 97 / N6 | ` 385d8feaab802bcd0f29086eb7397fc0d45f5525 ` | ` bf2b0e440a767dd23271904be70f32cf408c5114 ` | ` d470ca91cc9856df897999c43e28165b615a0589 ` [条目](#entry-97) | gitlink-only / not-applicable | waylib-only |
| 98 / N6 | ` cc8a61bcb5cffc94a98020891c6839002714738c ` | ` ae3aa1344fc4a4d39be90807338717ce0ec7bf77 ` | ` d653aac5ddc88c6aae8a6983e32def982b5aa4cb ` [条目](#entry-98) | gitlink-only / not-applicable | waylib-only |
| 99 / N6 | ` 19383eccf888693daab4cc2fca8dc60a44906c37 ` | ` 0fbc7fa696eaaebb144808a400c5b3d89145efeb ` | ` 57aafc5c76d52d4805d2d65ad3819cae05982fd4 ` [条目](#entry-99) | gitlink-only / not-applicable | waylib-only |
| 100 / N6 | ` d14e882d30f6edf50ed2cdc90526e46b671f9897 ` | ` 7f368248d231c14d597586aafe1abd6e7a52ced1 ` | ` 8dd8caffcb28802bf6c2ebd2b499d6fcbf322590 ` [条目](#entry-100) | gitlink-only / not-applicable | waylib-only |
| 101 / N6 | ` 09e79cdfc902341d74cbe20bf8c31c14dac8db71 ` | ` 3d200c3472fb185035f7c15d8cf386250f4f8df6 ` | ` 8050aec358db12a1a6872151080dc8ec06af1d67 ` [条目](#entry-101) | gitlink-only / not-applicable | waylib-only |
| 102 / N6 | ` ab42b16e5dcd895822b003517d7927906a1f41d1 ` | ` 5763401d4ef38c47ba8a9fd0cb5874a31b5a2a5d ` | ` a77744fb4a74508296b8046e4cf39dc99cb5bc74 ` [条目](#entry-102) | gitlink-only / not-applicable | waylib-only |
| 103 / N6 | ` f4af38c3cba717b2fcc9f6bd264a3c00abcf5f7c ` | ` 2287d97c348369714c3b9ea158025d760d4ce41b ` | ` 4355e35766b98dac6119f91b2780f9f85badcce1 ` [条目](#entry-103) | gitlink-only / not-applicable | waylib-only |
| 104 / N6 | ` f570342baf591db7616dc5befeb70b6f235d1713 ` | ` 94fbfd48d2a619b1d6bb5502704c341c0500137b ` | ` 8f722f1bd418bcea2542707d8b86481d7dc636d0 ` [条目](#entry-104) | gitlink-only / not-applicable | waylib-only |
| 105 / N6 | ` d67047baf7fc29be4808d31dcfc0174be85a2f40 ` | ` 626e6ce5f1172f825d794f2eb94112051669982a ` | ` fbfc9159402f58e2b52628e8990bac8edf450774 ` [条目](#entry-105) | gitlink-only / not-applicable | waylib-only |
| 106 / N6 | ` 06511afe2c784af2714aee5588bfbffa91c87f0a ` | ` 4e4c8fac93fc4a370d70172fd9e946e7e27d18a8 ` | ` 0858040e1d5bd1b04d89a2780435edfab09dd08f ` [条目](#entry-106) | gitlink-only / not-applicable | waylib-only |
| 107 / N6 | ` 880b5241663166d65ba65243ffaeff01a6ce5073 ` | ` 5c9618d70af274ac5d49f8ada1d3a60d405b9fcb ` | ` df8609cacb092ef9a49fda7df413c1c23c16066b ` [条目](#entry-107) | gitlink-only / not-applicable | waylib-only |
| 108 / N6 | ` 5b55eddc4888fbe9a49197d49fe58b98c0bf03af ` | ` b6281114ff1d73227b0b11a672e4559bf4d3c668 ` | ` 26699c9211d52c0ea5f5092fc8a8e8e6771376a1 ` [条目](#entry-108) | gitlink-only / not-applicable | waylib-only |
| 109 / N6 | ` ff043fe802074ca7ee9dd46d17ecb9d482016948 ` | ` 1db9e9e4cd41eb95fb4217ec823cb29b7af10a44 ` | ` c80ad01a750072c5b40747fe9352cf846d5b6000 ` [条目](#entry-109) | gitlink-only / not-applicable | waylib-only |
| 110 / N6 | ` 019c13f41d3538924467c7ef1a3a34695a7ff255 ` | ` c442691f263c156509e71a6fac0eac912061a175 ` | ` e186207d74d6f5b7dfecb8b11179d816ef963f40 ` [条目](#entry-110) | gitlink-only / not-applicable | waylib-only |
| 111 / N6 | ` 29ea403f65a802989dda25824ff9476dc7b77c12 ` | ` d20d87bcf1b7da6976bb58edbed41ee328582ac0 ` | ` b0c600caaa63a74cb35ec9aa18139b3cd5ca3238 ` [条目](#entry-111) | gitlink-only / not-applicable | waylib-only |
| 112 / N6 | ` bd81e21bc6c1cab671d0594f0b41d28f38d1d1a6 ` | ` 3c5223d48bee39855ef774ce822d1ceef9b146f8 ` | ` 0df9783ce06cf26251a2cd0fdafed53e94cd027b ` [条目](#entry-112) | gitlink-only / not-applicable | waylib-only |
| 113 / N6 | ` e17a03422776f63782cc9ddeb94bdb879651adf8 ` | ` 295067471966906cd88f3cb9fa2b71c6f550b738 ` | ` 7a9f068eb46fdae0e05b76987e463adc2f81432e ` [条目](#entry-113) | gitlink-only / not-applicable | waylib-only |
| 114 / N6 | ` 08fb9384626292da9eefe05bbebdc57ba5f26517 ` | ` 630eb48af7c3277f5f35d1467d066859bd56ab22 ` | ` 6d04cea723d9b6c0a55114473f6c53c6d7a8eaa2 ` [条目](#entry-114) | gitlink-only / not-applicable | waylib-only |
| 115 / N6 | ` 700447dfa49073a8cea8fdba86c929171a97bb2b ` | ` 505f341937f6d8d31457ba60069dcf050afb27fd ` | ` f2553656a8e7deaa66828da1f18c7c018dae29a3 ` [条目](#entry-115) | gitlink-only / not-applicable | waylib-only |
| 116 / N6 | ` fa6c1816fc2d18e430fca57a5da9760e48c70a06 ` | ` d4cb66d72bdf14ec87a3bc787acdfec5ef8b2d92 ` | ` 5f0a8190dd8f867773a3cc12c92da6c86078b8e5 ` [条目](#entry-116) | gitlink-only / not-applicable | waylib-only |
| 117 / N6 | ` b99faa4272d5b51540fa0ce6bcac13fb16dad171 ` | ` 84443cb2c2653bd27d98a11bc80e3b2cd1736fc6 ` | ` 97d914d7e8986469581a518c5da965ae3107c173 ` [条目](#entry-117) | gitlink-only / not-applicable | waylib-only |
| 118 / N6 | ` 8e41c92ee120806a59baf7347e9f13487e23bdd6 ` | ` 40eba48d8f4c546fb7b2b68086b110f05d8a4bbb ` | ` 81ca3fb1f7a4954d8afc1532c414c57b5517f446 ` [条目](#entry-118) | gitlink-only / not-applicable | waylib-only |
| 119 / N6 | ` 8b3fa373749ffd6da4b8500fca8883f43f171d1e ` | ` 255e11dc2d2dea8a258c67f21e976a181e34c534 ` | ` 84a155261cdb93a3321229fa6e8bd26fdaee844c ` [条目](#entry-119) | gitlink-only / not-applicable | waylib-only |
| 120 / N6 | ` 0202d8213967db6169f13fe42637fe9d35ab4d1f ` | ` fea7929bfe8c43639be45fa900e13922ff4c2245 ` | ` 9282b4493d988a85f3677ecc8724617916d652a9 ` [条目](#entry-120) | gitlink-only / not-applicable | waylib-only |
| 121 / N6 | ` b7e086318c74d3e39442fa3e30aa07ef1e0c7243 ` | ` df38a8207221f136710996014f96de6506b16025 ` | ` ae8ea6321b69ae47b6496e6caee54c37aef378da ` [条目](#entry-121) | gitlink-only / not-applicable | waylib-only |
| 122 / N6 | ` 18b4d8410b7d8897e0d723a85a60a1782adeb8ca ` | ` 3303770f4fc3ca6d2d1cc6b2161939a1e0df326f ` | ` d25f38e861f611ac9510ac2f91bc9f7c9f72de4e ` [条目](#entry-122) | gitlink-only / not-applicable | waylib-only |
| 123 / N6 | ` 6dfa30759182985cad9215e1a56df24098706961 ` | ` 4d4257417a71ccf0713dbdf15284764dfeede308 ` | ` b0da0d1bd33e9bcfe9a9a2af6450c813a122a5ea ` [条目](#entry-123) | gitlink-only / not-applicable | waylib-only |
| 124 / N6 | ` c0ffefdd17ff771496458051a89686879768a182 ` | ` ec987bed0fb5b6ac72822355ac704aa94b1bbe94 ` | ` 7003e22532873bae6abc5503a44a3effbc07ad4c ` [条目](#entry-124) | gitlink-only / not-applicable | waylib-only |
| 125 / N6 | ` 159aa593b87db474536c89b6cd75586fd0f88170 ` | ` 512813df914c640ffee3bdae69d10940c331c601 ` | ` aec1dba58540647bd6f9c464f972980e2dae7a1b ` [条目](#entry-125) | gitlink-only / not-applicable | waylib-only |
| 126 / N6 | ` d4e343cd04c5cbda3fe649b593cad22b41adff3c ` | ` 83a423d59ef7761c3f2a9b4cc4582b4288320e34 ` | ` c8d38f43582fc9e4d80f3706e8fdc10f9b0cb412 ` [条目](#entry-126) | gitlink-only / not-applicable | waylib-only |
| 127 / N6 | ` fcd0b60f3dbaef8e45ad1e2609811dfcd11c63b1 ` | ` 37335dc2ea50b83b6380405b20bca832faf94dda ` | ` fa511b48774bf85881c9e56ccc5794790a2fed80 ` [条目](#entry-127) | gitlink-only / not-applicable | waylib-only |
| 128 / N6 | ` 094f8fa20e188f0da667df121b0eb9bb6f202ca2 ` | ` 83cbb6602a8647cb7eb6aef7f607c27bad19d9ad ` | ` 08f55f99d7604c9b38d3765534bbd508606e8104 ` [条目](#entry-128) | gitlink-only / not-applicable | waylib-only |
| 129 / N6 | ` df2d519225b3fefb5c63cf6c9386b4f62c2defa2 ` | ` 5152415872d63670e09aa25f4389fccb6eb6f192 ` | ` 4e82e98bd185e695fbc76346d9423e4b722b61ba ` [条目](#entry-129) | gitlink-only / not-applicable | waylib-only |
| 130 / N6 | ` 8ed92bbc78a136c4adb16182b38121ca5b44ed46 ` | ` cf54921b2cfcece3a288ae931fa9400fab0577da ` | ` 6d801440ba08000a6c5ce20fdfa8cbf7947165d0 ` [条目](#entry-130) | gitlink-only / not-applicable | waylib-only |
| 131 / N6 | ` 5d2ed41d2be0afe22cd28ee05db3cd47305ca11a ` | ` ad97f2a7e76791819024ac24e4dcd819f90253cf ` | ` cbd5b931aa7bfa52ef032ef4b0b0886e459f0e7f ` [条目](#entry-131) | gitlink-only / not-applicable | waylib-only |
| 132 / N6 | ` fa71f552d76b9565cc79f3a48768342f9186bd06 ` | ` 6122a0d44b5df1d5dd5b5ea545640a5cc92f0f33 ` | ` 355ff36497187bfec1f3a559ac580a209b515402 ` [条目](#entry-132) | gitlink-only / not-applicable | waylib-only |
| 133 / N6 | ` 33471be4c733a280bc804957c0bd307c07943e19 ` | ` c54870a6a4a2105f831a263d643a47b9b3d4fea9 ` | ` 75464a16b00ef2c969fecff690387666ad5f2c29 ` [条目](#entry-133) | gitlink-only / not-applicable | waylib-only |
| 134 / N6 | ` 682273cf854842c378362d2e167785898b256806 ` | ` 27ea05296e44507a0fd9d1f64322e8bba4c94f7a ` | ` d53987b3cc12cda460076d77e38f65566925faf7 ` [条目](#entry-134) | gitlink-only / not-applicable | waylib-only |
| 135 / N6 | ` 74da40725dca4808b943e17d5bce82b9ce87f6b3 ` | ` c5379333c311c9630453391ec0e9869a5bbfa22f ` | ` 207de72a7ac63ed3d6679285f55efddf7265e27a ` [条目](#entry-135) | gitlink-only / not-applicable | waylib-only |
| 136 / N6 | ` e9490f064a03e6c201149528e6c0c4c72f10ab86 ` | ` 0ad3139584c534aeaddb4a1bf255d1f17e7ae018 ` | ` 5a6abec15362153665bd67862f21afd0d67f9689 ` [条目](#entry-136) | gitlink-only / not-applicable | waylib-only |
| 137 / N6 | ` 5c5b0af13756a49fd922031a621465f01b73d7e6 ` | ` 255d487493af28800c16f54e732431af3aa26bdf ` | ` 43b5a31e199601a405466a71dbe6f0cc8c7275b0 ` [条目](#entry-137) | gitlink-only / not-applicable | waylib-only |
| 138 / N6 | ` d42414caafb7b6627440a0665d371210c0d47e7a ` | ` d1c54c851b469ed0dd1cc8d0a0bb70c31edfcf14 ` | ` 52077be289830311108a826c56ada2f6e940bbef ` [条目](#entry-138) | gitlink-only / not-applicable | waylib-only |
| 139 / N6 | ` 859718dc888c11841a8a460349ad5748c121e3e8 ` | ` 735774f7062d42b8886c63dd144674c12f4b249b ` | ` 6f1ce42117835db68569446a31295d8e70e20503 ` [条目](#entry-139) | gitlink-only / not-applicable | waylib-only |
| 140 / N6 | ` 87d58d55d9bbd55f89c667abb8641b707fc593d5 ` | ` db39a0807bfe4b8269c0de2298bb1e97783e9bed ` | ` 270ac33c71f018031c51070a6ecc55feacc80fa7 ` [条目](#entry-140) | gitlink-only / not-applicable | waylib-only |
| 141 / N6 | ` ee0d9a7de7b275592767c8c3429b4fe472f79e20 ` | ` 94d605647f80a638793accdc03f27c371bacca5f ` | ` f0fda0d94cd9e3cb5a628d634040db2dc8d2afe8 ` [条目](#entry-141) | gitlink-only / not-applicable | waylib-only |
| 142 / N6 | ` 73caa1c03a8b26eec23a253152f3ae893ff6d85f ` | ` c983e6f2c19bcb48eeb36cc9bfaf93bc4e7bfce9 ` | ` c28297bb0f778d1da5579c04ee89e5650931a7c8 ` [条目](#entry-142) | gitlink-only / not-applicable | waylib-only |
| 143 / N6 | ` 033a7c7b4278b88eec561d97307b111a7bbc0c06 ` | ` 3bfeaa6f61185af3216ca3fbd07e6e3bc277857d ` | ` 213c86cfb38ed8cca146b53c99abf9aa376a49dc ` [条目](#entry-143) | gitlink-only / not-applicable | waylib-only |
| 144 / N6 | ` aa980f02c6e0e119ab271141fa42adecfae48707 ` | ` 38313286cb2f0cdbb686b5b9d1e0f82562066381 ` | ` 84f2c44e3950187ce7ae08497a4e47edff613c6e ` [条目](#entry-144) | gitlink-only / not-applicable | waylib-only |
| 145 / N6 | ` d4dfa7caab388a3c682d86be0aad378851f7363d ` | ` 8f27778fb594600be4cf98e218df5d56fadae940 ` | ` f6ec46993c371cb47f3934c62da700500b4138a6 ` [条目](#entry-145) | gitlink-only / not-applicable | waylib-only |
| 146 / N6 | ` fe8906bcfbf6eb65d0c68669ffd177efe282f178 ` | ` ac80308713fa8b514efb32197a4b9ad56c74dd68 ` | ` f7c51f3da40e01bd91fcbc17b99917d2d326f4b6 ` [条目](#entry-146) | gitlink-only / not-applicable | waylib-only |
| 147 / N6 | ` 5ffc9a8b7bf68b5da60ef9f6cdd52bca9e8e1a6c ` | ` 4c94a790857b65e9cbb5ead713ec591c4e2d35ec ` | ` 992e0e3037cb52c3a26fe2f70abb7024cba4d3bc ` [条目](#entry-147) | gitlink-only / not-applicable | waylib-only |
| 148 / N6 | ` 9cad8d729fd3550040a7ece3fe2d4cfafd67e5b6 ` | ` 6d67edafbc0dd0e5fbaf3fdcf702e94da9a33684 ` | ` 131816ddbf3d916392724072867f23b09eaeb53c ` [条目](#entry-148) | gitlink-only / not-applicable | waylib-only |
| 149 / N6 | ` c7439c3833d0cd35720a5d229617602e5ba5fcb1 ` | ` 0beec9fd2bfd2778054a29dd0a1aacbee949d80c ` | ` f4d2de93826105c418c3f63a1495159205f6288d ` [条目](#entry-149) | gitlink-only / not-applicable | waylib-only |
| 150 / N6 | ` 45194c916e691c9228f30d87085da35052b75a72 ` | ` 3c44f2c16a20e94419b7714f4a728cd5e525988c ` | ` 22bf9654c48451a2119a6cb90f1b92d54eb04cf4 ` [条目](#entry-150) | gitlink-only / not-applicable | waylib-only |
| 151 / N6 | ` 908ba59932df7cbe837af6280a6de083abcb69c6 ` | ` a3fd28122b984e932256090d5cb6cd39f8a886f1 ` | ` 93dc16bd5d14c31e139ea54a30f067890d24dce3 ` [条目](#entry-151) | gitlink-only / not-applicable | waylib-only |
| 152 / N6 | ` 564a3ca2e2e219480b75df745aa61aa706ec6e19 ` | ` 0b8ddc517c64cd19d2d73409343d80f89186ae5d ` | ` e5d2f2ceff3bbdb497c1ffa1f045887d9f09f859 ` [条目](#entry-152) | gitlink-only / not-applicable | waylib-only |
| 153 / N6 | ` 2b85c5d40accb13fc3acb33fdca64bc795e7c74b ` | ` 54cc1ebfc617551c0df45d0670381ea657aad4fd ` | ` 79859f208cc35ae14f77154299648d241a4d434e ` [条目](#entry-153) | gitlink-only / not-applicable | waylib-only |
| 154 / N6 | ` 276ea2949d7d0b42e6d9a28f186c378293cae922 ` | ` a72f14ead3d638724c1243d4f484340674fb26f2 ` | ` 5ea44aa3760578c8b8005c7d286ef8cafecf140a ` [条目](#entry-154) | gitlink-only / not-applicable | waylib-only |
| 155 / N6 | ` c4c3d95a38040104339e8ed8984b847290df294d ` | ` 86f7f4a88490878eeca920043298b23f6f6e89a3 ` | ` 38dc201b0aa73c51916a3f977fb0176febed9565 ` [条目](#entry-155) | gitlink-only / not-applicable | waylib-only |
| 156 / N6 | ` f827a249077f26ad91928b581d3fc5a96af3ec01 ` | ` 245c3d0c2131b1b6d138f6ccbace8448d4aae1e9 ` | ` bf286154e1ac36dc0fd87dbfe1f0433cdde97460 ` [条目](#entry-156) | gitlink-only / not-applicable | waylib-only |
| 157 / N6 | ` f23cb2387656aab8d243c8814a53da6c0a70db48 ` | ` 3fbdf7d9068eb0d49cf9c552879b94d2d9faaa8e ` | ` 8825cedba02e42433fcea115c16394ddd1f8e279 ` [条目](#entry-157) | gitlink-only / not-applicable | waylib-only |
| 158 / N6 | ` 5b8b45b08e13328031c464d9913eef55e39c91d0 ` | ` 7b7f276e65ed9176774ae57e5bcd65dfc44e1091 ` | ` 0885a43c202cb47c66e2bb6d0507c8a9e0deb9bb ` [条目](#entry-158) | gitlink-only / not-applicable | waylib-only |
| 159 / N6 | ` 529950cb158ad7a02c6ac3a446fac29d87028ab3 ` | ` a3ba725bfe8f6776293e7ac51297e9ecba2c47ae ` | ` 0d6a6dc13d229a903cd9fa7efbf6941d64e6e76a ` [条目](#entry-159) | gitlink-only / not-applicable | waylib-only |
| 160 / N6 | ` 93864b26690744c7b9f9eba8d128acde6e98b379 ` | ` c4594d98268350bdd3a264687eaf2ec477e8088c ` | ` 0416c53f21b0260f1190c9ac939522197b15f05a ` [条目](#entry-160) | gitlink-only / not-applicable | waylib-only |
| 161 / N6 | ` 6e63017817a6ce37cc822f527ba57ac222e9d2c7 ` | ` ff1547c2a7cd3f8a3ce19fd6c5215a2eea852470 ` | ` 18355498eb03ccf45b041a600345096bd7980724 ` [条目](#entry-161) | gitlink-only / not-applicable | waylib-only |
| 162 / N6 | ` 8b61f805d33f81a7afe2a18c336867fc32b8620a ` | ` ce5d2e79b5eaeebcef0e694cd9afa325382f7328 ` | ` 297e4347f2132dafcbc29923a5028fd4d88ef638 ` [条目](#entry-162) | gitlink-only / not-applicable | waylib-only |
| 163 / N6 | ` b7b7012f449273e29486ebdc9a4eddd5e76ec7af ` | ` a59c3078306c25bf394eb00674cca481ea33da53 ` | ` ed6fda898a58eba5e183eb0d8df87d2f73295b4a ` [条目](#entry-163) | gitlink-only / not-applicable | waylib-only |
| 164 / N6 | ` 86dbbae0f5f21fe7220137c59ba76d385399dc58 ` | ` 4d34886e98057e8efade91bbb6e66da6007fe8be ` | ` 3a51987fb30ee8322729f534a9b9d409dd69f433 ` [条目](#entry-164) | gitlink-only / not-applicable | waylib-only |
| 165 / N6 | ` 6dc50b9db882b034646f79db6fc49914f5fb40d1 ` | ` f7c73e944853dfcb00631c04d726975a0ac1f532 ` | ` e357f578069b444576d025ab338d9f0d5a7c6c17 ` [条目](#entry-165) | gitlink-only / not-applicable | waylib-only |
| 166 / N6 | ` f02da149ffd4c801ab386b93f01061eec6eea06b ` | ` 58872f39769740cc784e37d80aeb7e745eca86d0 ` | ` 6a813b463cb523693c617f2e8dc159e4b36374fa ` [条目](#entry-166) | gitlink-only / not-applicable | waylib-only |
| 167 / N6 | ` 34dc93862257c1c9f69958379fd8d1e8b75e5461 ` | ` 638b0db58146d07990785d434cdfb2ea70a307e8 ` | ` 6245192f7b22a26d401356c96cf02f1cdcc979ee ` [条目](#entry-167) | gitlink-only / not-applicable | waylib-only |
| 168 / N6 | ` 950bbb8fe1b23fa77e0953d40d76cfaf46f0d92f ` | ` 1e043e87e6ec146503757cefe8869be88ea99cd0 ` | ` 5bd77933cbc88578fecbf45dd7ec470261472209 ` [条目](#entry-168) | gitlink-only / not-applicable | waylib-only |
| 169 / N6 | ` 75c10a1391360aa29920a801f59ff7461912d6aa ` | ` bce6ec5113af1d3f61f9bec9d1716dd8b73b39ab ` | ` d559a98555de64f0a6d4c8f2c75864355b78f775 ` [条目](#entry-169) | gitlink-only / not-applicable | waylib-only |
| 170 / N6 | ` 635bf146b865db63416f82bd6092442de594f507 ` | ` 29706cdf213c8aaa699bf0ded75ad8066fb0b796 ` | ` 7156339346e4fcf4d4b94e54df4f8539d869d52f ` [条目](#entry-170) | gitlink-only / not-applicable | waylib-only |
| 171 / N6 | ` 8e64fba9494a4dc8c2c9845a2c2724c7632b81a4 ` | ` 9475851a2a60521eef5043019f5ae2d0b871a7a5 ` | ` dd74beaaf72de68d11e5f300866dfceae80c984b ` [条目](#entry-171) | gitlink-only / not-applicable | waylib-only |
| 172 / N6 | ` a378e058a4bd3bc87edf943504258c76f668ed9b ` | ` ab3ff3155d3f88be9f00515a562ace463c4193a7 ` | ` 96629037052b4153632ccd854c0971a6556eae7f ` [条目](#entry-172) | gitlink-only / not-applicable | waylib-only |
| 173 / N6 | ` 263e98177d78628e1aeb6d90dd9e0598db87454b ` | ` aebe5b083205c86a52532454f52c0aaf56ddf902 ` | ` 3a2014ff56481ec91bc47b76f152b1bd9612bb6f ` [条目](#entry-173) | gitlink-only / not-applicable | waylib-only |
| 174 / N6 | ` 437174b43a3832b1d812eb88af1f716d748197b1 ` | ` 7f9b603040163279eaae6f2d9e9e6aa30a299ffb ` | ` 4e6ea4f8ce63556b27246df5bf22cc7c13a36769 ` [条目](#entry-174) | gitlink-only / not-applicable | waylib-only |
| 175 / N6 | ` 505329bf071892244a4e8b80e8595429f68230c8 ` | ` d34d8520a8ac9192ae882afd90432e99ca8e7427 ` | ` 166e06180f2967780b2819f302e1a7eb82afcea6 ` [条目](#entry-175) | gitlink-only / not-applicable | waylib-only |
| 176 / N6 | ` 91921354b90f4eeadd031b2baaeeba95e9996644 ` | ` 4a7c08161fed07b7cf4f583b4774d5434a067098 ` | ` e83df8a497421a736d787db7bc0bc5eed0f64843 ` [条目](#entry-176) | gitlink-only / not-applicable | waylib-only |
| 177 / N6 | ` b66698bab2ac579ad52fb40e3438a45110f104c4 ` | ` ec0c5a6454025e942d1dab727090ced8e485262d ` | ` ee0cd79c9ae51e6a75c60dc2e71c693ea82877b9 ` [条目](#entry-177) | gitlink-only / not-applicable | waylib-only |
| 178 / N6 | ` 52382ecfe26abb0987212c5d019770cfd29a38cf ` | ` 5616e031674c4328473e3bcbd499152cf676deac ` | ` a63c6b131122f91f85792cdbf9fe462d0d842ae5 ` [条目](#entry-178) | gitlink-only / not-applicable | waylib-only |
| 179 / N6 | ` 4353caeb24222b3e9a9862997814d794ae00b94d ` | ` 35be5103a38fc87995ab0978592ed0d29f1918f7 ` | ` 9a32885b7ad23c656e7ac06cde6301869f1d4c91 ` [条目](#entry-179) | gitlink-only / not-applicable | waylib-only |
| 180 / N6 | ` 7b7c401f960cb323ac70ba3b3523f3f0df15970a ` | ` c6a5860a50f7a539b247732ecc194b204400ca5f ` | ` c864484bcc89dfaa353a1d2cc41cb4baec75f8f2 ` [条目](#entry-180) | gitlink-only / not-applicable | waylib-only |
| 181 / N6 | ` ab94ac3465ed64e79b82c0c33bebc84c650d9d4c ` | ` a2a5005855607fed13c9012e7d0d4f06733b0e51 ` | ` 3ff70cf762ec20ef48183210b85aaf1143d4829f ` [条目](#entry-181) | gitlink-only / not-applicable | waylib-only |
| 182 / N6 | ` 8cb8af048a6aab2dfe8e972ebbac757d18952ebf ` | ` 333ceace41e49e0ff23dd859cc290657c2717793 ` | ` b75ab00a0c5166e22bc32d4714628da29b1a1c01 ` [条目](#entry-182) | gitlink-only / not-applicable | waylib-only |
| 183 / N6 | ` de8a45ad87af71675c2d1e8bdff0b84578e4afe2 ` | ` 39ee5addc607aa03dbe9ee9852f7bfc87e4ad5db ` | ` 329020b96a1c580f64cdb16b615eb02b015baddf ` [条目](#entry-183) | gitlink-only / not-applicable | waylib-only |
| 184 / N6 | ` 14bc196ab3bd402cfbf024ad7161ea740d9438d5 ` | ` 2dfd5d13a5cf247a7f2fe95e3065bc83f4c28e1b ` | ` 838003573cb2dd04b93bb2be6d3465d2465c7ab5 ` [条目](#entry-184) | gitlink-only / not-applicable | waylib-only |
| 185 / N6 | ` 1b12bc8f66b4b00a3106978d5dbfdc32f79477f1 ` | ` bac499735f6e48518ed5ceb261681a43108b615f ` | ` eec1fa673c2bdc9e3f50993f5e2d63e5798d83e0 ` [条目](#entry-185) | gitlink-only / not-applicable | waylib-only |
| 186 / N6 | ` 281b27d95f3c8a0530023f2f33e514c894a2a4eb ` | ` 5d86cfdcbe12e04ac1dea1a9f2e3bdf263bd8d07 ` | ` 3170541414acca10529893792294605ff16ac713 ` [条目](#entry-186) | gitlink-only / not-applicable | waylib-only |
| 187 / N6 | ` d9a79f78d0d3e7dca79fd1ec3c42bbb93b4d9119 ` | ` 9948c3378df5182c86cc868d721a58627872aacb ` | ` 5f97e5c124af8e0da70cea949b430bd0ab5ad809 ` [条目](#entry-187) | gitlink-only / not-applicable | waylib-only |
| 188 / N6 | ` 176a8cc2e8a5aee7d7f658a0e48aae7273bd0164 ` | ` 469767a5d16acaebfe27b6510c9a5bacb8bde0c3 ` | ` a5c42867cd39118f54c3c4295cb9b87a97fc235f ` [条目](#entry-188) | gitlink-only / not-applicable | waylib-only |
| 189 / N6 | ` d1aad42faaf0e715d3ef79f329827ab6bdad8709 ` | ` a6a7ab0654d73cb08b5558e08312ad61390582f1 ` | ` fef499d04dd353f718addc084a2e88aaa9a7df3a ` [条目](#entry-189) | gitlink-only / not-applicable | waylib-only |
| 190 / N6 | ` 067a405aee6453f2be435febaeac6bb00fea3b5a ` | ` 47a22ef4f5384c4905607b57104c83a66d8b7642 ` | ` 08102cad998f241d4e762b5604ffc1f1792d31f4 ` [条目](#entry-190) | gitlink-only / not-applicable | waylib-only |
| 191 / N6 | ` 376af70c54377ce8266a194c98b8f6b89a07abb8 ` | ` e7d50f2d68812ef676b37bb82fc1c73736584a60 ` | ` f4754aa1f93cab8a0e76ee75a5cf6100f5800ee5 ` [条目](#entry-191) | gitlink-only / not-applicable | waylib-only |
| 192 / N6 | ` f6962a9d32fe455341ece7d6c90b4dfb976f9755 ` | ` 435b53c728b394feff1b9fe83e1b09c9cac9b2b5 ` | ` 4720d5b0a45b449ba3d5dcec49ab267eb5624ac4 ` [条目](#entry-192) | gitlink-only / not-applicable | waylib-only |
| 193 / N6 | ` a193b80ad2a620584e4ef3ef276f0df67a9abb1a ` | ` 3890e8c825b20c2562d597c07519f4fd771e25fa ` | ` 632f52c194ef4c4ed28390672620298ed48e4f66 ` [条目](#entry-193) | gitlink-only / not-applicable | waylib-only |
| 194 / N6 | ` 157c8e5c6d66ac8f8bf878bf9314cc18f796d576 ` | ` 6340677ee09372979b7f03342bf5827e7e005a7d ` | ` 838f8a9f333d3bb234687326ffd197f58a6b77d3 ` [条目](#entry-194) | gitlink-only / not-applicable | waylib-only |
| 195 / N6 | ` 8a1c9cb02c96da1e87b6648f729154c30d57dc61 ` | ` 31f8b57dad90c9765bbe0f7e5ea7ad7277470413 ` | ` 165a20d1143d9378c2df70fcfb749df0a01f56ec ` [条目](#entry-195) | gitlink-only / not-applicable | waylib-only |
| 196 / N6 | ` 6af85fa8f6fbec935f4395475f7af72e798ee51c ` | ` e13321f0b6514f884522c6666d3053706246a920 ` | ` 5feb7f4b77b4e4bf7674dd84d140d087798baae0 ` [条目](#entry-196) | gitlink-only / not-applicable | waylib-only |
| 197 / N6 | ` a8ad377c4b0933fda640a95ead1786e39a479152 ` | ` a9e6ef3bd25e5152b77ddd3fe247f2453910f924 ` | ` d847a0c3d6d5d76a13d84c70ab12ad5aa659b2e1 ` [条目](#entry-197) | gitlink-only / not-applicable | waylib-only |
| 198 / N6 | ` ee51b8c2d6ab1f641b3923d85cf3f3d400806a6b ` | ` c62697e15c37d50319ae115a8cbc125352578b45 ` | ` 0313dbbbce692507905d6888e9742a9546057a18 ` [条目](#entry-198) | gitlink-only / not-applicable | waylib-only |
| 199 / N6 | ` 0ad625e31c0e3db7cc06ed5fcb78bdc264bd8963 ` | ` 03e713f506cf6bd6a6c658823bbc8110bc3dcae8 ` | ` fa321f6a65fbddee5e1705939b520182e6096231 ` [条目](#entry-199) | gitlink-only / not-applicable | waylib-only |
| 200 / N6 | ` cd468f22a2d22b122ae7f90a106b2e17be4425ed ` | ` 0ad0aec09c0f996024d853100a1505df1d8c5f57 ` | ` a42a448c34430a2f160af30b6fc62dd539b40100 ` [条目](#entry-200) | gitlink-only / not-applicable | waylib-only |
| 201 / N6 | ` ec2cc0d8f046917b349beec7427acebe1e9fb92a ` | ` abf173ac9c35d54c2c8342daab35f34996937b61 ` | ` 5362486aa8b01a51169e468acc82c2ceea33da00 ` [条目](#entry-201) | gitlink-only / not-applicable | waylib-only |
| 202 / N6 | ` 74ddba3ad69645de9c9d0574ad1b51f31f6acc15 ` | ` 1c4ab8ff2a6f1589fb4faa26d7c87b48113769cf ` | ` 29d1a0910001fb661222bc6c2834214d6e000b41 ` [条目](#entry-202) | gitlink-only / not-applicable | waylib-only |
| 203 / N6 | ` 98311478a1842967c73b02182288a3d8f6794605 ` | ` bf752bda90e5c1488f0c8ff1231a3591d5a99ac7 ` | ` aa9327ad36cf4b15b97f9adf71335d449476dcb6 ` [条目](#entry-203) | gitlink-only / not-applicable | waylib-only |
| 204 / N6 | ` 7975208b038626a0df83fc285aaba339c52d8115 ` | ` f44c24bbad12e4bcfc9eefc2fc0e0a63a57abd49 ` | ` af7dd4e41ba112c0d4a6e703f74054965c6bd292 ` [条目](#entry-204) | gitlink-only / not-applicable | waylib-only |
| 205 / N6 | ` a6acfaa2493ccfb4848ad4455df0e048d0f250a0 ` | ` e97e9564a6cd81d22649d6bb16f8fa0fd5e75721 ` | ` f42ba3e3c182094628987c5651a77e7b2ef6113f ` [条目](#entry-205) | gitlink-only / not-applicable | waylib-only |
| 206 / N6 | ` 062478639d1a54ce37b217b56ab0da36cdd567cd ` | ` 5d88280805504f8af8c3a209cbb0b920df613fec ` | ` 1dfd40ec41b18653bc7aadc81c00af9fefab9f1f ` [条目](#entry-206) | gitlink-only / not-applicable | waylib-only |
| 207 / N6 | ` 6c857fd08e4b9f38cf859052a51e0f70b0bc0534 ` | ` 1d733bf5d94155dd172744add15ff667c7946e60 ` | ` 8650d2e38e67f923f057b8aa2d77b7603cf1d0bf ` [条目](#entry-207) | gitlink-only / not-applicable | waylib-only |
| 208 / N6 | ` 5706871fba99a052671e17f8f9ecab92fb5927a3 ` | ` a48f9c3a39697e0560d8ce4c27cc95f9d32650ee ` | ` ec14f93b9acad59f8b55c98d180c6c2e356cbe80 ` [条目](#entry-208) | gitlink-only / not-applicable | waylib-only |
| 209 / N6 | ` d8a3e90459942b4af5d0869901d8f1be12fbc40a ` | ` d61d3c34cf3751a5e910b29bc1a99ad88786f9cd ` | ` bab4e673ff08164322f7742d459e95432fc01479 ` [条目](#entry-209) | gitlink-only / not-applicable | waylib-only |
| 210 / N6 | ` 7a6e9e84bb9a20d6d8d4c170b40689b05044176d ` | ` ffea25ff5d2cf70c46bb162637bad57e31b97d6a ` | ` ee64e991d877ce01935a70ec0cb4b1b7e5a535e1 ` [条目](#entry-210) | gitlink-only / not-applicable | waylib-only |
| 211 / N6 | ` 185dbab6bd716e5de74581d12a903e3eba742f83 ` | ` 4ee3e69b97d6a9b4f2d2659d05bed11a136e4b53 ` | ` 101008c3e83b875773627f701189ac9d7b755df2 ` [条目](#entry-211) | gitlink-only / not-applicable | waylib-only |
| 212 / N6 | ` b134d3316de3017b1b520e4dd0077e703b50438c ` | ` 8b6e6292269b6a2f77fd734324670cbb5edd94e2 ` | ` 78eb463ea2c735d8798886f964f431e57f917bb9 ` [条目](#entry-212) | gitlink-only / not-applicable | waylib-only |
| 213 / N6 | ` 57c36469b466184c578da62d73bed578e4783258 ` | ` a5a5156e043dbae5a4fea949de69bfe2808f3000 ` | ` 57535a4dbaac6a89579d2b75c0ce2b8f6d2014ce ` [条目](#entry-213) | gitlink-only / not-applicable | waylib-only |
| 214 / N6 | ` 2bcefab7736eec802cee9293c3e1ef45b94c5391 ` | ` c21e778590050003da863eaa6981bae3b18261f1 ` | ` 0731daa24b274a9a6ed21cdb1d33395d7895a82a ` [条目](#entry-214) | gitlink-only / not-applicable | waylib-only |
| 215 / N6 | ` d6a6ecfb0ba65b1e0142740edc046ed95a45c733 ` | ` 2e94fd024418d2178396a6c1b4f5985047eb3f6f ` | ` 8c4e4cad9ba890f68447a997ae3dcd30aedcee44 ` [条目](#entry-215) | gitlink-only / not-applicable | waylib-only |
| 216 / N6 | ` b22ff363877fff122484669b129585f21fb1789a ` | ` b6e14aabfe22cfb77c62e9fed4f06cffd986bc03 ` | ` cdffda4bb04ee0273cdaa1de52f0c518fb06564e ` [条目](#entry-216) | gitlink-only / not-applicable | waylib-only |
| 217 / N6 | ` 5b312c3ecee51220bdd55cf7ac94482d45039f22 ` | ` cd84c9be93be4ccd1d86e52c42388bdd84e88160 ` | ` f8dfba21317b9bc8d6ed07dfea72ef3f4f0d874a ` [条目](#entry-217) | gitlink-only / not-applicable | waylib-only |
| 218 / N6 | ` 2db1217d9547190f1a0636321ac9d92018a18511 ` | ` 6e174b3638e16de7620b8e401f9e72c077963d2a ` | ` 12018d0dd52536d9a2b0328324b210d67c089db5 ` [条目](#entry-218) | gitlink-only / not-applicable | waylib-only |
| 219 / N6 | ` 2016ffa81ceff6c6bbc6e95f53cae5bb8a101d66 ` | ` 6ecf0de43938531d04334cbc5e19ce8cb4d2eaa6 ` | ` 95a2af04f152ec052a8ac34bd1541adf0ed6c0d9 ` [条目](#entry-219) | gitlink-only / not-applicable | waylib-only |
| 220 / N6 | ` 2b150ee90c8091c9f9a798521e566b7fe3dce935 ` | ` 0ece1b83e012398758abdae5bf3e5417792e80d2 ` | ` 3b0b20bbbb32a2df362b4beff3dfa3fe3821e275 ` [条目](#entry-220) | gitlink-only / not-applicable | waylib-only |
| 221 / N6 | ` 5937df5c87b4785cba5b8a81886f4850d5dd61fb ` | ` cfc190c2232ccda4c95fe9be062a1a16b16c076a ` | ` 383a489da26ef398b82d0b13ddae613b7be66ff5 ` [条目](#entry-221) | gitlink-only / not-applicable | waylib-only |
| 222 / N6 | ` d842378e12e4a35671be9d5c21d37cd08d13c459 ` | ` bf4d2cd0f91bbca6d9ea9ff2f07edb6a3b8d0056 ` | ` 4858cabcc163c192e3690e9eb9383d02a9de1e89 ` [条目](#entry-222) | gitlink-only / not-applicable | waylib-only |
| 223 / N6 | ` 90691cdea7530c371e3805e28b479c06b8c04aa0 ` | ` 0a70b71d3a2be3b90851cd33d0ea2493fe47ec5f ` | ` 3dbc2d769b1bf9f0700736a6657c648fe7b2b1a1 ` [条目](#entry-223) | gitlink-only / not-applicable | waylib-only |
| 224 / N6 | ` da21f4e5915a14fea778d9fa038fb434f893d4e7 ` | ` 72b4c95e7f58c13133c7db0f5dc30099a3544e5c ` | ` 46072e58789574589ea3f989176b6c069a81a5a8 ` [条目](#entry-224) | gitlink-only / not-applicable | waylib-only |
| 225 / N6 | ` f7face1e13784f9b4de186ccffc70891c0fe63d4 ` | ` df41a402fe84df688ca472f9a31dc6ca6f02047e ` | ` 5a3a57693d4f0955c54b8f4beb988757c91aa067 ` [条目](#entry-225) | gitlink-only / not-applicable | waylib-only |
| 226 / N6 | ` 81aba2cb86984a3be3b18bdd56b7d7fd14e6f7dd ` | ` 1f9a1d93771f928eaee3a4b8edf662f34e12c92b ` | ` daaa763fb0b5f0518217057091c6c2887497cce3 ` [条目](#entry-226) | gitlink-only / not-applicable | waylib-only |
| 227 / N6 | ` e967582c197f412fc46eab0890e8181de7455e8b ` | ` b16a4f233df6d23a5afaf7b7ca8651f0e8676dfb ` | ` 9071b37212e1c3a04bc727ccc45fc0b583597f2e ` [条目](#entry-227) | gitlink-only / not-applicable | waylib-only |
| 228 / N6 | ` ba5abbbf116d925c10ce8f9f3113849df5d87aa8 ` | ` 4730a9fdffc23f8a8cdf5e531fd3342ff4041c50 ` | ` 9dcf5ac2e4271f8d0c7aeecb134e4d7e95fcdfe2 ` [条目](#entry-228) | gitlink-only / not-applicable | waylib-only |
| 229 / N6 | ` 4ea7c83c74b513e9f2113805e58ffd761593373e ` | ` 5ea5c48a077577ae2932768b2e0163a6f06b963c ` | ` 051c9a8fc50ea6caa829abf9d5dfdc7b369a4aeb ` [条目](#entry-229) | gitlink-only / not-applicable | waylib-only |
| 230 / N6 | ` 71c789fbe3542417423e61363791d565240c9da0 ` | ` 594a84cc08e1b328214a70a673590b89db1a0331 ` | ` 90549545dca6316d39429ea7512cade051889f57 ` [条目](#entry-230) | gitlink-only / not-applicable | waylib-only |
| 231 / N6 | ` 4b83bf88e9e763439c03a01e733e0946e0b52cdc ` | ` 7859f18b11f7f04d4b1cb1ca80f05866879140d5 ` | ` 2ef506d3c868cfb2e5159f56001e695b17edf10d ` [条目](#entry-231) | gitlink-only / not-applicable | waylib-only |
| 232 / N6 | ` 4f0ce89fb2c884c5109838d66a6e5f24d2383e5d ` | ` e5643820dbbd5e8087277b4ccb4511bdf29ba949 ` | ` fc67c471a9564d919e586e2f8087803fe9d1ebd0 ` [条目](#entry-232) | gitlink-only / not-applicable | waylib-only |
| 233 / N6 | ` 4c0f2e48eb8c07c157d541770862f10887d05201 ` | ` 87fbf7b932a9512c270550e45f6f6a3a43ca380f ` | ` f15254642b1a40f5db7f9b7cc6a2a0a6ac99a30c ` [条目](#entry-233) | gitlink-only / not-applicable | waylib-only |
| 234 / N6 | ` 067b0ade78281960f9e31aa4820de0bc86883cf8 ` | ` 06468d74a91e408c964f7fa7e15b9b3d76a5c261 ` | ` 6ebaf88c4337fc4834de59b12417fbfe39be7503 ` [条目](#entry-234) | gitlink-only / not-applicable | waylib-only |
| 235 / N6 | ` 75d29da9934335df1a7717be0d795765e46af7c7 ` | ` 8e5cb1a3e427a457cf794d2430ca60691dff1afb ` | ` c583c9575d4faaba65f141cad6567aae3b9403c7 ` [条目](#entry-235) | gitlink-only / not-applicable | waylib-only |
| 236 / N6 | ` ad86e8232cf0a4304b39f03826a85c8d99daa4da ` | ` 7aef90609f1bd9581344130b58b76b5fec1be2f3 ` | ` 4aed4b677206e9f6ddf9bd6e81fa184a70a6550c ` [条目](#entry-236) | gitlink-only / not-applicable | waylib-only |
| 237 / N6 | ` 76e9d812c4171953af224eb9c2261ad4d406fc07 ` | ` e19937cd0b75f67b8a84d6b99e643c1176e17199 ` | ` 706cb329d4e88345d68c5fa7f59421c4adf4c405 ` [条目](#entry-237) | gitlink-only / not-applicable | waylib-only |
| 238 / N6 | ` 0c10122d1ebb57b0643585fc2c7528d5d7cdf36a ` | ` 131eec8d8ad3dab03425e42e1a3ab760e8033f95 ` | ` 53bc3e4ebe780a236d58f967e3c1a0fa970ede81 ` [条目](#entry-238) | gitlink-only / not-applicable | waylib-only |
| 239 / N6 | ` e9c267ff80ded1d3d9aad35557242b393ffba4e6 ` | ` c9328ea6bf5e5b565f56f9622ea59c2d10ee83dd ` | ` 7a6c64ccdb040fd99b4220172ce5c73832f939b2 ` [条目](#entry-239) | gitlink-only / not-applicable | waylib-only |
| 240 / N6 | ` b00c4f4321a6811340eb21790513eaef257daad7 ` | ` 661a80244c200cdd937c1428ce6d0c359b5d9785 ` | ` cb540ea79f69e2646c54018dabb480bca29b04c9 ` [条目](#entry-240) | gitlink-only / not-applicable | waylib-only |
| 241 / N6 | ` 26876224f2460506f1eb0a6ca43ed7910c3e9a4c ` | ` abd30eed4cebbc09f4acaf3962257357edffa8c1 ` | ` 469db003f143d566b7f6d311419b696a910fbc37 ` [条目](#entry-241) | gitlink-only / not-applicable | waylib-only |
| 242 / N6 | ` 39f129f848fd5a310087dfdca21f65912b755eed ` | ` ff628ba2a014f7be0451bc36a55f63b265648e7c ` | ` 5b176e8632e13736af2b92042a8dbfdc9eade66e ` [条目](#entry-242) | gitlink-only / not-applicable | waylib-only |
| 243 / N6 | ` 43c1fe1ed8f964937cd59101f3a0dae71c2aaac7 ` | ` dd0baf6974db81b84410bc10c3023659f7c04e18 ` | ` 8b4d4a6d99a7ab140d1a62e2832d7078cc9f5a93 ` [条目](#entry-243) | gitlink-only / not-applicable | waylib-only |
| 244 / N6 | ` a8ebb8932f8f28fa247f54e394db0133f1363051 ` | ` 57fc34692f54351354b7634be6dbe67247d60c85 ` | ` a4bdd584addfbe57bee1b9f4b68215fe984fcc95 ` [条目](#entry-244) | gitlink-only / not-applicable | waylib-only |
| 245 / N6 | ` 36d6251519cb258e33455dcbeee700b29c818a80 ` | ` 142ed073a76f3d7a468effd3a634ce8cb7021c26 ` | ` 61a896900479706672b40e21cbfa0cbea9186dc5 ` [条目](#entry-245) | gitlink-only / not-applicable | waylib-only |
| 246 / N6 | ` b5bfbe09427cf35324917c2cbc2606490bbb0a57 ` | ` 17ffe4fb6db56248185e9aefe1c9c62bbace3a4e ` | ` dc05cc4095fc54511a90abe6c18c06254a5ecd77 ` [条目](#entry-246) | gitlink-only / not-applicable | waylib-only |
| 247 / N6 | ` bc8eee2feea24b094f952da1c8c5dd31ffd2c703 ` | ` cb3f9854c36378a1aad3be81671a650ab4cf6da0 ` | ` 62168e68ed06cfce2daf103ec5e102a08ceebaf8 ` [条目](#entry-247) | gitlink-only / not-applicable | waylib-only |
| 248 / N6 | ` 5d82753f7c09aaec904c85b54225b64301afe61c ` | ` 9e69a2e75f18e8bd0887731b1512b545ab343d37 ` | ` 419fac393c1b8206424f6efc8051e9f795437b0a ` [条目](#entry-248) | gitlink-only / not-applicable | waylib-only |
| 249 / N6 | ` b174ad188ccd15d8a3121b97a9cc36c6a2f67fbf ` | ` c6d486144ac796d0044055734353de9110f9647c ` | ` 383d7b930a5586bb389e643c2dc4a8b790ad11eb ` [条目](#entry-249) | gitlink-only / not-applicable | waylib-only |
| 250 / N6 | ` 58f9eed9aba894fe667600c3e00a7310da425099 ` | ` 4716a4077513ad9979581320e74df1aec3a253df ` | ` 4406185ea4271eb17564efd03fb8f6859bd0bf83 ` [条目](#entry-250) | gitlink-only / not-applicable | waylib-only |
| 251 / N6 | ` 47b86e3a72846d16bc15de91d9e25307e74a6f9d ` | ` e300d7e68a6303be0042dd104d61ba2710d02c07 ` | ` d901075c54491652ff4485985bca3cf67b4c1a08 ` [条目](#entry-251) | gitlink-only / not-applicable | waylib-only |
| 252 / N6 | ` 6cc4e12f5165d20d987ba17874e9082c96b31092 ` | ` efb71eb145a20694f5e3d3341233e6bfca923fa0 ` | ` 162bda79cf5293f9d60ddeac5f4203d0116068ea ` [条目](#entry-252) | gitlink-only / not-applicable | waylib-only |
| 253 / N6 | ` f1a83816508406225f8e5658e32d7e5a52066daf ` | ` b46dfbd14945f492f41b692605506ce131e42a59 ` | ` dc87d9ad6f018d9d0aaa5aa0413c7fb62d38fcef ` [条目](#entry-253) | gitlink-only / not-applicable | waylib-only |
| 254 / N6 | ` e2f55b8c3b12ee79a38c3140c31c3d7d22656a3c ` | ` d0280f5eb56d40117d2a64b3cb58bfbcb1b8e392 ` | ` d9e8aba0bbe8bebc2bb9ccbe569486375300d6d0 ` [条目](#entry-254) | gitlink-only / not-applicable | waylib-only |
| 255 / N6 | ` 389983c28b815abf4a3c963de2dce0ddaffc0986 ` | ` 40dc6023c9f84c67fd648d3964b4e65349ab840c ` | ` bc9be88277fc3b41b73819758e3e191d3bbf8df1 ` [条目](#entry-255) | gitlink-only / not-applicable | waylib-only |
| 256 / N6 | ` 4b62fd3265ddbc26db3c6c7d062bf102fb6c7d9a ` | ` d2abaa46859f87f1b917ccc6849b906ea85a28cb ` | ` b6a7c78b53a7d7f6bc9057ae8b1b4de40832b60d ` [条目](#entry-256) | gitlink-only / not-applicable | waylib-only |
| 257 / N6 | ` 8b3d05ae4538d8d4cd72d5d63ee3109d6e76e32b ` | ` cb437cb0d6940129fa29e2d17f96ca10af2164f7 ` | ` 1124cdc75eb7a1a4ae95f902553edd3c0d203011 ` [条目](#entry-257) | gitlink-only / not-applicable | waylib-only |
| 258 / N6 | ` f5243d5d08f98aa662592fb94c9032ba21bcb343 ` | ` c8dc5bbb1b5d741ce2835f14f5839e5706933056 ` | ` 1fa1144408b5ee89ba2905bcef8af5f9118ba45d ` [条目](#entry-258) | gitlink-only / not-applicable | waylib-only |
| 259 / N6 | ` 48264e43b25daf9f396478ed753be4a47533cbc6 ` | ` 79e488ab49492895ca73dc633673d08f885608f7 ` | ` 5c28de1cfeba8164115360e0daa4b3a6b784981d ` [条目](#entry-259) | gitlink-only / not-applicable | waylib-only |
| 260 / N6 | ` 82fc3c6fd467be4b146db30daeae46e7c17857f3 ` | ` 91dfad4a074021d9e5437873ba3a06da6d64d378 ` | ` 20e77dbb9dcf6c792bd5cdd03aa7b1656c040b83 ` [条目](#entry-260) | gitlink-only / not-applicable | waylib-only |
| 261 / N6 | ` 6ba97a939ab4869d29102b4539ad9a4f1a9e8cae ` | ` 2f3a868607636cc98430a4a1dd3487a0bcf96334 ` | ` d48c5646ce7f46f1ae4dfa506284a1e70ebcfeca ` [条目](#entry-261) | gitlink-only / not-applicable | waylib-only |
| 262 / N6 | ` 83fe6dd04a62bdb7f28406b90f61a0cc921e36dc ` | ` 97aa3e409a80d4404dd81edc14852af2b603952e ` | ` dc71f3e5c545e4f403134e9ad96221b862f6fb7e ` [条目](#entry-262) | gitlink-only / not-applicable | waylib-only |
| 263 / N6 | ` 59871dc496250d6b03de9749a4422098e8f18906 ` | ` 36c4eb0e809781eea7036d9c727f0a11b4704ebc ` | ` 53dcb940f2dc5e4d0d8fbf0485ba89efb8fab4dc ` [条目](#entry-263) | gitlink-only / not-applicable | waylib-only |
| 264 / N6 | ` 7774ea8fda1917293324caae6922529bc1a7a846 ` | ` 0684c2b09c3bf69f763d0bb65532a0f3972dfcc2 ` | ` 1d42aff732b644f4c747b554a7c893a86bf7f099 ` [条目](#entry-264) | gitlink-only / not-applicable | waylib-only |
| 265 / N6 | ` 021cc6c2cf8255c98c74b4a18b7945de424ac65c ` | ` 8c386affe272d2979ea5cea748f04fcfdbdb1927 ` | ` 081151a6a798c0cc5a592e560b51a686e99f8972 ` [条目](#entry-265) | gitlink-only / not-applicable | waylib-only |
| 266 / N6 | ` c852ee8d9ce7dc8072f1be44b1349f17eda236de ` | ` bf83ba94c4b4bb9fa51f60e84d1dcec6f150806e ` | ` a980e42993c6d513bd4268fd21f54227356cd58b ` [条目](#entry-266) | gitlink-only / not-applicable | waylib-only |
| 267 / N6 | ` ddc9c388e4567b395043144773ebf06251178895 ` | ` 1182e5b8fa26d92b0b96aca9edc5c3bf93e0d1cc ` | ` 30e1045264442a3db9610cd17a0a7833e3a4c696 ` [条目](#entry-267) | gitlink-only / not-applicable | waylib-only |
| 268 / N6 | ` c93555dc03169fdbf42ab4aaf8e7bb1a74904084 ` | ` b4da6ca707c91d27814326227734f1efa1c1be87 ` | ` 2c8dda23b705ff54330aa21cf70e47de01c9991e ` [条目](#entry-268) | gitlink-only / not-applicable | waylib-only |
| 269 / N6 | ` fadf5214d54853c1852e5be59e9b569e4068adf6 ` | ` d31017c5c4016856b4783024026bf4e74de9bb0d ` | ` 5e51728ec3ea4fc9d4e05a2b5afd9b5764b78f10 ` [条目](#entry-269) | gitlink-only / not-applicable | waylib-only |
| 270 / N6 | ` ab75ae1c5270a293dc63a07819982896abbc58f5 ` | ` e0d8238f92b74e0fde50e55ea45d9e28ffdb07d3 ` | ` 2e15d8a516f52b88ac94ca60f3761059e8b3f038 ` [条目](#entry-270) | gitlink-only / not-applicable | waylib-only |
| 271 / N6 | ` fd27ca253c30c4f08e7f31af1631c69824741b13 ` | ` 5d7616bc433e0daeb93160b5934ebcb72459d60e ` | ` bbaae63db3740656df7b1db5fb4e39d1ffc60cf0 ` [条目](#entry-271) | gitlink-only / not-applicable | waylib-only |
| 272 / N6 | ` a3bbf452fc9968d58d8c6e8c5eea7152d9ab867c ` | ` 5c37c1d548a92abcb99da0e73bef0bd507a8df1b ` | ` 3a552f9275454ca97cf55a5a5d7556bad843bf9a ` [条目](#entry-272) | gitlink-only / not-applicable | waylib-only |
| 273 / N6 | ` 26af21548c5d80dc1142f5c44557833632c4ff5d ` | ` 5b07b395e78acfbd5e1edae43db6baba168bcb91 ` | ` 89e5524a293695f40f5f22000a7377c9518f3694 ` [条目](#entry-273) | gitlink-only / not-applicable | waylib-only |
| 274 / N6 | ` bd6b287ac9d76591a55f554c0bdde1b3832a2309 ` | ` 75226b52af65afd1a8582f9386e16b979efc12ac ` | ` d0a37bb4c4ed572e94b95eaee74b2f91b43d03ad ` [条目](#entry-274) | gitlink-only / not-applicable | waylib-only |
| 275 / N6 | ` 5d3fb87c4b682ee30b0633166127e2dac28f114c ` | ` 7bf7f33aef63e6f2516ccabd2a0d2718e17c3e0a ` | ` 391a8bece190796c0d89421bfa33f7a7e4f56d59 ` [条目](#entry-275) | gitlink-only / not-applicable | waylib-only |
| 276 / N6 | ` c2390909a26d9a9fc3c246c551ad80a69a7b66ef ` | ` 20d1f3af2c0985dd51836052ba87d37ebdc9504c ` | ` 2d8605c9ced89f0ecfb322de152672bf38527391 ` [条目](#entry-276) | gitlink-only / not-applicable | waylib-only |
| 277 / N6 | ` 71270845bf373f80251e45756a8c286318294cc3 ` | ` 867364fe32fdd665cfe4ef171c0411264b10d0f5 ` | ` 4d7b91652d6e6a790207558e066eafade8e92d73 ` [条目](#entry-277) | gitlink-only / not-applicable | waylib-only |
| 278 / N6 | ` eb77b4b14501c40f1b1de2b99fb8bac620ee4071 ` | ` 840a465bb3af3688794989094adcc008936da4b3 ` | ` 1b5d2c6fa52fb31057fe50e88cc86133822ea966 ` [条目](#entry-278) | gitlink-only / not-applicable | waylib-only |
| 279 / N6 | ` 7a8f3e20c4cd9a4d66cb804af2a00f2d385a7c5f ` | ` 6e6b0712fb7c892ba6fb04705b34ce4cc818b036 ` | ` 005967b7e1b376a7c2fd98f03f8fdf0791fabec6 ` [条目](#entry-279) | gitlink-only / not-applicable | waylib-only |
| 280 / N6 | ` 6dd43c98dde630107bae193867bc4f6d69cdf092 ` | ` afa7c04b65e5c3fbd3c87c086e1f18cb76dca883 ` | ` c5690bacde41a1415a5e1e1cb9ce6faf4f54477c ` [条目](#entry-280) | gitlink-only / not-applicable | waylib-only |
| 281 / N6 | ` 3e2c4ba46b2a4048b8e7beb961080920c7ef0ea7 ` | ` 052416800f62a795d758813791d2d70b42704de9 ` | ` 4f0bf5096a3d2bf7d431acd3c5176a037ad8be50 ` [条目](#entry-281) | gitlink-only / not-applicable | waylib-only |
| 282 / N6 | ` 99fccac3fbc2267c2750508111f70639ffb0ea75 ` | ` 4d9a16dee1aef5619897347c7967d0696f9a676c ` | ` 060197bf8e43323661a6c8b3321256a4637e33f9 ` [条目](#entry-282) | gitlink-only / not-applicable | waylib-only |
| 283 / N6 | ` a69221cdcccb767a6167b5854239ddc519f27788 ` | ` c5aba193fe95ea8882ed8a6c958cb597c5b52b94 ` | ` 38fc70179beb4ed3e9d494d84b9681e021741686 ` [条目](#entry-283) | gitlink-only / not-applicable | waylib-only |
| 284 / N6 | ` 1f07ad74867449605c595af816f92dd3e73bcce5 ` | ` 45e74431f528559eb6d96ea58a0e412a32a75e04 ` | ` 385044f92cc53110807d76835adf24b2bf2a39d2 ` [条目](#entry-284) | gitlink-only / not-applicable | waylib-only |
| 285 / N6 | ` ed9c8498336eeff3fd9502740ec48191b2c6d984 ` | ` ffbf14786afd89d6560f9455c65de1c6aee274e9 ` | ` 2db43f4f2700ca6d410de9192c556e68fdf3f450 ` [条目](#entry-285) | gitlink-only / not-applicable | waylib-only |
| 286 / N6 | ` 092a194ac64c581e62bd64ca05c904d01b143296 ` | ` 0eda0092ea7dc54f87a0672cb50dcecde0a0332a ` | ` 2a70b280b857edac6a10e207213c4f4d67f3549b ` [条目](#entry-286) | gitlink-only / not-applicable | waylib-only |
| 287 / N6 | ` 50f1a3b7acc17d93ac453b95b31db4b0f14eb00d ` | ` 64cfebe0c736503bffd90aac6d76f42e1b03fd9a ` | ` 623b7bd23822f5b76b31517143256512cae2b8b4 ` [条目](#entry-287) | gitlink-only / not-applicable | waylib-only |
| 288 / N6 | ` a05e29aa1f38147a6795a90b3572e9ae00b1d523 ` | ` b685fc886d3d5fe6b7f7710bb0caa987041ad859 ` | ` 88e5cf5bfec7323c8af28f9ffbc69fc31d2b6f51 ` [条目](#entry-288) | gitlink-only / not-applicable | waylib-only |
| 289 / N6 | ` 6ca4dfa6fc6fdfe86af2adbb5d9c8c907b6d6c15 ` | ` a0bb80d1741fbe721b572b09221ed292e4b6aec2 ` | ` a8b2172221d85449fb8ecbcad7a28129d184990c ` [条目](#entry-289) | gitlink-only / not-applicable | waylib-only |
| 290 / N6 | ` f2b078c4f9d952d9115904183c11a187ffdebf1a ` | ` 4e5409f3fdc005141806de6450add455c313a650 ` | ` a5076d94d0d0b0f321c5dc100cec9463d7097d9e ` [条目](#entry-290) | gitlink-only / not-applicable | waylib-only |
| 291 / N6 | ` d8728e7e6240203c615eff349735f3daed8429c5 ` | ` 3ca9d77948007b470ef56db93c58fcdf7f691065 ` | ` dbcb5c7a756854cb075d8a7c5119a3b12ef5ae51 ` [条目](#entry-291) | gitlink-only / not-applicable | waylib-only |
| 292 / N6 | ` c2e66806de72b0a4a12220a752e4c69386a946fc ` | ` 08c017dea15a32cb2d0d985a20667a5551032837 ` | ` 68c84e6ff15dc524e3e6a854028d9d29e1f0a71c ` [条目](#entry-292) | gitlink-only / not-applicable | waylib-only |
| 293 / N6 | ` 59d835a1f7b3211dfc09070ea0aa7a509c125e45 ` | ` 8eb74114ccf23e2bd126f6b28b024808f92187e2 ` | ` 1883c3a9273c8924d12c35ccf1add17700ec5b68 ` [条目](#entry-293) | gitlink-only / not-applicable | waylib-only |
| 294 / N6 | ` 2870ec3689bda747464e5127b0d87ccb13d5e292 ` | ` 3755d3e0e9b75d3cb7eba58e56422888e41197dd ` | ` 9677965cf2a54fc3c2f54e649da60a5655e13ca4 ` [条目](#entry-294) | gitlink-only / not-applicable | waylib-only |
| 295 / N6 | ` 28d97085e61eaa1c7fdfca9158d741508d74acaa ` | ` 1f2f4098c0b018fb6a46a128594ab0af29f9f9ba ` | ` abbf117e0632468d838cb92e5edd1c4c48236035 ` [条目](#entry-295) | gitlink-only / not-applicable | waylib-only |
| 296 / N6 | ` 6f77ec93958ceaf024988b7e3d074fae0690b69b ` | ` 4ea51d099dd3f60bc56d4f3860da92a69b64fbe9 ` | ` 0121a86a62762703b65b6307f9d35135e44fb66e ` [条目](#entry-296) | gitlink-only / not-applicable | waylib-only |
| 297 / N6 | ` 4864dabb6453b3eb7041c8e3b6703a183ecd565d ` | ` 3b7215542ec9247bdd3b34c3d73eff502c564eaa ` | ` 643dcb55fd497b5572a27c966b6954730c9b61e9 ` [条目](#entry-297) | gitlink-only / not-applicable | waylib-only |
| 298 / N6 | ` 4d23ec22fda34f1ca2670bde9ab4ede3184863bb ` | ` 67def39b94a52fc9f969342248cab3e4fb3882d9 ` | ` 64fc8a22a082ef6cdd3c8d7da77d6dd4b2a125de ` [条目](#entry-298) | gitlink-only / not-applicable | waylib-only |
| 299 / N6 | ` c36184c982fa24b4a4d234d361b01982ed7bb984 ` | ` bf5019a26b6bc321fab136c60b106c346036a83a ` | ` 524997c10e272535954425b0b847a53efa49e738 ` [条目](#entry-299) | gitlink-only / not-applicable | waylib-only |
| 300 / N6 | ` 9d02d0388ca2cd519deb342fbbdd290b67a9f6cd ` | ` 71ec973a0160c349cec14dcdf834357bcea44ea8 ` | ` 4b9d59bf3f87caf3db9cfee055f052c9c988ac20 ` [条目](#entry-300) | gitlink-only / not-applicable | waylib-only |
| 301 / N6 | ` 7b5eddb314e66f4fe69418fc3ae1ffede42d7969 ` | ` 132f4a300ee763ded8d39f59ef57db32e8ef80f0 ` | ` 7cedd4a07a90ab245e401db0828187550436f4b1 ` [条目](#entry-301) | gitlink-only / not-applicable | waylib-only |
| 302 / N6 | ` 6dc4affecbb95c861c13b134c04c55030270fc69 ` | ` 061f2ae64cb5f12815b8f435d3aefa368bbc1fac ` | ` 9e63f64733930596fb0f1045dd01c4519d22809a ` [条目](#entry-302) | gitlink-only / not-applicable | waylib-only |
| 303 / N6 | ` e567d0eb4f588c0bff923695dda75da1ef184a6d ` | ` 62be5c466232439260118f9cb58e389a96cde7f1 ` | ` 8576c5392fba0fa7a4e4e732620db3461a5f1381 ` [条目](#entry-303) | gitlink-only / not-applicable | waylib-only |
| 304 / N6 | ` fcb7f7e59ffaf681611e8cc382e3bdda2158e2ed ` | ` 4d0eae6f8fc7b67ed0229d61511909c2d6621a9d ` | ` 95aeffdc7a1813465336dfb4c76db46db1a485e7 ` [条目](#entry-304) | gitlink-only / not-applicable | waylib-only |
| 305 / N6 | ` b13cce374175a427ad3f8d0e050c89f9b99c0e87 ` | ` c7e62356929d5e11346e4a5824dfb0daa401da88 ` | ` 265af3e9d95d4d4774d9e5089fa69fd63c35b15d ` [条目](#entry-305) | gitlink-only / not-applicable | waylib-only |
| 306 / N6 | ` 58eb62c4764ed0a1d1e40db3ee56f1d4c9767b4c ` | ` b5290cf0547594113da1a1587eeb15187e58cdd2 ` | ` 7f5bde4a8c62fa986d487ba35f85d7daf5b7c8cf ` [条目](#entry-306) | gitlink-only / not-applicable | waylib-only |
| 307 / N6 | ` be50944f57d106eff1ca25b152998092a100eaad ` | ` 8d4679e0fb4bb2bb2f16475ec2d36dd81a4e060d ` | ` 871c4fb99a1ea849e53aa59bbc35e081043ec4d8 ` [条目](#entry-307) | gitlink-only / not-applicable | waylib-only |
| 308 / N6 | ` 71a5ae7444c554dda9a5c661aea316df073ae019 ` | ` 68551a9aa81d21179886dc1105ba1c45cc36ba20 ` | ` 5e75ffecb8ad30ad876fb450e821237078423da9 ` [条目](#entry-308) | gitlink-only / not-applicable | waylib-only |
| 309 / N6 | ` e8c9c2245a2eaf584b2f2de3d009ca906b437da9 ` | ` aa7882005cc00a688a5ac6783f0406291a2cb74e ` | ` 8db8ef9e197d0dbca7e8066409d9b86538dcca5a ` [条目](#entry-309) | gitlink-only / not-applicable | waylib-only |
| 310 / N6 | ` e034d859f2f76e51771de6558652ca570c0778f0 ` | ` 88d04ea9774e6a5fd44082f538b3ba5a342b355a ` | ` 0bc5807427508aa883748b18bb50d8f8f0e09977 ` [条目](#entry-310) | gitlink-only / not-applicable | waylib-only |
| 311 / N6 | ` e06bfb9853fc7bb854d7e9cad4d8728574384d52 ` | ` 1cac48ccc44691f35bc0b6db04b869f3aa94b77a ` | ` f560e21d0017973b83a18d901323e0e3d7ba0dab ` [条目](#entry-311) | gitlink-only / not-applicable | waylib-only |
| 312 / N6 | ` 4fa410097e83f574ba669117f79d6d20e42f5f43 ` | ` 99c09ccaecf99b89495ea5ee159c6f5d7e53389f ` | ` 920cc024980d0416ba1378022bf3cc98b4b920ef ` [条目](#entry-312) | gitlink-only / not-applicable | waylib-only |
| 313 / N6 | ` f73f0f111c1ccd89fb7adc63f0fd1b0e70a5e98a ` | ` 6b093b0788885252fd5582b2639d10ec1ec1597e ` | ` 83a84e8d88b01f6943e14850e01691868697cf0f ` [条目](#entry-313) | gitlink-only / not-applicable | waylib-only |
| 314 / N6 | ` c1458dcbc931cf644ca59b30012cb877905b4bb4 ` | ` 5a5e7f179b8ccfb795fd6a3b80d1357d4bc6dde8 ` | ` b67f37056da7b6a19acff7700a5801d9e4fd504c ` [条目](#entry-314) | gitlink-only / not-applicable | waylib-only |
| 315 / N6 | ` fbb806fdafe8c84afae72234394ae5856859456f ` | ` 887a735dd50eca595d09d42b86e8c7c855620403 ` | ` 8cdcff973d7c8e49b6f8d104ce674306601f4d1b ` [条目](#entry-315) | gitlink-only / not-applicable | waylib-only |
| 316 / N6 | ` 085c0c51de465e449d6ac15aae047f42b44c2b25 ` | ` 3860cd1a6c8014cb745045bf3e2ddf002cd9c77a ` | ` d1b8a1997bd4d5f877cd87c52beb590574000100 ` [条目](#entry-316) | gitlink-only / not-applicable | waylib-only |
| 317 / N6 | ` 944566dec88e50356d2bea6ced447771a84af8ff ` | ` e1db4e5abd80ad16c82f182ca9e584bfcf496922 ` | ` a20ab762a766ef08afc1bd7eb23265f46cc96baa ` [条目](#entry-317) | gitlink-only / not-applicable | waylib-only |
| 318 / N6 | ` 2455271ec8bfd1f0b41d0f3b8fbb2a516572e15d ` | ` 6327c5da8baddfc2c1205595f2d5df9a6f902fd5 ` | ` 0edf9f948fe7ba91d9e6f0a604b9416bbd954982 ` [条目](#entry-318) | gitlink-only / not-applicable | waylib-only |
| 319 / N6 | ` 7d8d255dd2f75ed9588c2b77d31ce3e5ae23a799 ` | ` 4ebc94fe3527fe73fa2c08a123316525950a0954 ` | ` 04c0f206359fa1ae4b917cfad84728cf142e80c4 ` [条目](#entry-319) | gitlink-only / not-applicable | waylib-only |
| 320 / N6 | ` 03dea01bc170d9a4a5208cb6f0312994a882d957 ` | ` b89ec9a6609741387c9c54cc55202075a91e0449 ` | ` ae39e2780a8f13cf911243603bc5ce57a8a0ea49 ` [条目](#entry-320) | gitlink-only / not-applicable | waylib-only |
| 321 / N6 | ` bd247488a513aa70965ffd13d3c3b313b33e8523 ` | ` 456beb1534566e28cb0e18349cb6b694e254d8c2 ` | ` 57f43265cd80a4a93c1acfb5a5a06433a6c9340d ` [条目](#entry-321) | gitlink-only / not-applicable | waylib-only |
| 322 / N6 | ` abb07e9a8cab1e2c855e881ec4a216b7a4d8943f ` | ` 1863be0193a231c22f195e002a6742d6eb9b6e59 ` | ` 71a104b03b0b4cbef52df077e2213499b658aca9 ` [条目](#entry-322) | gitlink-only / not-applicable | waylib-only |
| 323 / N6 | ` f42de4aad659d7cbc7d3cafe1ea574c3fed1898b ` | ` 39535b3b1935fb8934cfb1bcc7aa276d0d010f39 ` | ` 74ff1c28be06ca3d8d4ae3c680d0a9d03d2d20dc ` [条目](#entry-323) | gitlink-only / not-applicable | waylib-only |
| 324 / N6 | ` e8a3639bab3b83ff21a238ff49e7d92f1ff0acbb ` | ` d55bace60be798b20d5f866f69f9932b27880867 ` | ` 2edb7a0c08413a03a3cd58cdc9e1ba7c20602bde ` [条目](#entry-324) | gitlink-only / not-applicable | waylib-only |
| 325 / N6 | ` 0b88a499773b71f6be1d3eae9b3a56fe59b1070d ` | ` 722de85483002c44e2e037e10e325d7766dac1bb ` | ` c67cefc9d06c5fabfde6c68ca23f6c830b412cd8 ` [条目](#entry-325) | gitlink-only / not-applicable | waylib-only |
| 326 / N6 | ` 327493f4f869e1dc4a9dbb90df8d698d8e4d45cd ` | ` b9393bed06b25a190c7483f38d6c653faacf774e ` | ` 751200abe04f882d16899eaebadba3c2e2f18276 ` [条目](#entry-326) | gitlink-only / not-applicable | waylib-only |
| 327 / N6 | ` 4a57045bea78cb348fcf06add4ca8c33bc962014 ` | ` 1700418df8a8d0f0e6b8c8e70716e5eda892fe7f ` | ` 221afc1ec9145f235b5e952d604479c8a41adea3 ` [条目](#entry-327) | gitlink-only / not-applicable | waylib-only |
| 328 / N6 | ` 07b20196d39dfeea14c19ad20980bcefbeccf298 ` | ` 997dcee51e7aa6924b6cb3fbef7049f33e1a8d20 ` | ` def7870af55525af2332c6202404140212f591b7 ` [条目](#entry-328) | gitlink-only / not-applicable | waylib-only |
| 329 / N6 | ` ea645b18740f3435025b713223590b9ffb58d7ec ` | ` 6ac1a87c3d842e9492dff84be3ba2793e0237067 ` | ` ac9d0debfcfe2105c4e9141f22c8283be71a59ac ` [条目](#entry-329) | gitlink-only / not-applicable | waylib-only |
| 330 / N6 | ` 29005752b1cb2fd500f319609110aa881adcaa64 ` | ` 2e243c0eaee56c069be1b2dc69228f76ff9d4221 ` | ` 18f0ee6aaf8ed52f8222ae1a79e064af7b36287c ` [条目](#entry-330) | gitlink-only / not-applicable | waylib-only |
| 331 / N6 | ` 5b85ed5b09fbda6407a68416c2b214be489907ed ` | ` 92b126978d965c78aeb0d33595b8a001f14144f1 ` | ` adb440b017e6478e60fdad0d71000a832da0f038 ` [条目](#entry-331) | gitlink-only / not-applicable | waylib-only |
| 332 / N6 | ` 04e824869922bcedc67865f904f8ff4b6c4cb076 ` | ` d200db269847d16c4076d7edb18cf25df2841f85 ` | ` ddb94bc3d2a730bae34e15eecde1f6cc200de95a ` [条目](#entry-332) | gitlink-only / not-applicable | waylib-only |
| 333 / N6 | ` 2fad5dcfdcaf8394e118088173fc8be8ace13045 ` | ` ab88b3297d1f405ae2f5af5f619ad4f138e192cd ` | ` 801b4a53c8ab63c650d3570f02547b966a19ab5c ` [条目](#entry-333) | gitlink-only / not-applicable | waylib-only |
| 334 / N6 | ` e03e943d4766a6c670ee77b1b315b3c30c33c9fd ` | ` 35380a50bdd15b08b4af2a4ed4f10584dd90ad4b ` | ` 73041cf13aa75e46881034b659ea107c0f07ed23 ` [条目](#entry-334) | gitlink-only / not-applicable | waylib-only |
| 335 / N6 | ` 208e2d7f0c50b85095631b20db3ba8b451ae41a6 ` | ` 72986ba53dd9424ce04943d0d610617e406de66a ` | ` 285827451be680a2aec040f35ff7bb7f69d56a85 ` [条目](#entry-335) | gitlink-only / not-applicable | waylib-only |
| 336 / N6 | ` 11e27740fefae88af7cbb6349a388775882c7ec2 ` | ` 27be31e5c2a16be5a67be8fa50212e8bb0a6f653 ` | ` f2bc617902605dc61f4d0f974ef0cab55a9df869 ` [条目](#entry-336) | gitlink-only / not-applicable | waylib-only |
| 337 / N6 | ` 4963e7bc7daa0e2d29b546f10267bcf07569ef5c ` | ` 99331ac0b0a77576dc045311ce50067c01ed2bc5 ` | ` 49d45b5e663f9c01aafa9744ce5baa902e9b41f7 ` [条目](#entry-337) | gitlink-only / not-applicable | waylib-only |
| 338 / N6 | ` 5d445e265ea404db6e00eb30b1d9d8eb84572a16 ` | ` fcfeedea2cd87a7f181151fb3f98c515fd297ee7 ` | ` 6f701cf92a9fc588e21ca9a6399ca7854cac5ab8 ` [条目](#entry-338) | gitlink-only / not-applicable | waylib-only |
| 339 / N6 | ` 252e508d682bfb3eaedd6aecab26a2ca8544d8f7 ` | ` a3c46d22b234aff223e3ca26b8b4ebaaad5a32fa ` | ` 2d5d34f8df973c16d3f38f62de1a067cb7495693 ` [条目](#entry-339) | gitlink-only / not-applicable | waylib-only |
| 340 / N6 | ` b5d62efc17b9809001ac767199218fd70f8f4224 ` | ` ba722750335ddc4fb50d5a7fbad90ceaabac91d9 ` | ` a636f27f7862039675c223bf9ebfb50c3cc2d0c7 ` [条目](#entry-340) | gitlink-only / not-applicable | waylib-only |
| 341 / N6 | ` acb1a07ca29a1c96353095fc9400a636a8a586e8 ` | ` a1496802c9811c10165ad7e2f2786c98dc5195d4 ` | ` c257768894ec34f39d8cefad646b002e37ac56c0 ` [条目](#entry-341) | gitlink-only / not-applicable | waylib-only |
| 342 / N6 | ` 1c5061d5dc556ab87e855e27891c85a53c132703 ` | ` 85b8be26bec1b0b8dde58a6639d2d92fc28e418e ` | ` feb1cef26c4453fa97f0a275b0000c6fdb2afb55 ` [条目](#entry-342) | gitlink-only / not-applicable | waylib-only |
| 343 / N6 | ` 777ed58419d07e51038195608bcbec544748985d ` | ` e0fcd28156fb4716868480f8022945368d3f0815 ` | ` 22659b04f9f660e958a88ddab25e3b61dc5e9335 ` [条目](#entry-343) | gitlink-only / not-applicable | waylib-only |
| 344 / N6 | ` d2570147440a6707d9667d1ff7377f55dd91f8ab ` | ` 23cd5be8bd531ba3466baf7b6acdd0fcb0eead8d ` | ` 89ca6f8ed09564cf22b4b69a16636ec31f53fccf ` [条目](#entry-344) | gitlink-only / not-applicable | waylib-only |
| 345 / N6 | ` 80eb79813fa825180bd2681247a272350b7b8d25 ` | ` ee94d0e5814fbbb28a696144e8f1092f6e5ee318 ` | ` 60598870cc5a4aedd0933a116f4422d4e80ab79b ` [条目](#entry-345) | gitlink-only / not-applicable | waylib-only |
| 346 / N6 | ` 41aec9d71f90c68323d4de15c2ddf6f16bdc1a37 ` | ` 1ac830c42aad7fd68b0a91bf9f9253c7cabf4a89 ` | ` 0ffb5f08fe99a00e97803d12d022459d7f265ac1 ` [条目](#entry-346) | gitlink-only / not-applicable | waylib-only |
| 347 / N6 | ` 1afe33b15978c2682fd3a7d88e1191d4c8a01f60 ` | ` b1f864d47863f92b8438e098fb86958043c75887 ` | ` 42e32ba3bd19b45bf2fcce549a386b423c5a2d34 ` [条目](#entry-347) | gitlink-only / not-applicable | waylib-only |
| 348 / N6 | ` 7be5f6c58c2481e5289c114ca2cbfb61086eb7e8 ` | ` 6b6cd3b7812b977724b64654fc611cfd89083b9b ` | ` 709120f658cd1714526102b92d56fbba1658f6ec ` [条目](#entry-348) | gitlink-only / not-applicable | waylib-only |
| 349 / N6 | ` ef86cc7863d65c84955e6e27d20cf65ac2ce3675 ` | ` 1fc920ed9fb5a4c05f8bc8926370061e80c6bb53 ` | ` eeb918bc10d1fac474cf135e796a02d1e4477378 ` [条目](#entry-349) | gitlink-only / not-applicable | waylib-only |
| 350 / N6 | ` 99dfd9b78f387745f72c3c2ef964b258561d2fd9 ` | ` 8b78ec9269832cdbf4443329482b7c3ed47416ec ` | ` e940bae765bd33bb6a21ca7b6bf8f0e72fe11b77 ` [条目](#entry-350) | gitlink-only / not-applicable | waylib-only |
| 351 / N6 | ` efcf521d9e167344a0eaa88411323e0a682b4352 ` | ` b204d53215683ba45201a5f00bf49a007707268d ` | ` e23fbc92e357e141b51ae7b6c772ad5672c97da4 ` [条目](#entry-351) | gitlink-only / not-applicable | waylib-only |
| 352 / N6 | ` c72ebde4606fda987130454c43e3619dab48c9e0 ` | ` cec0549b6d67a28d7d16595d59f357cb00920739 ` | ` a3787782e27d50f6b54c87f74ffeb59ad43bdb6f ` [条目](#entry-352) | gitlink-only / not-applicable | waylib-only |
| 353 / N6 | ` d1834b51b4e9dcfb18351dece8769fe81bb2d1bb ` | ` 71c40bdb266ce3423486aa3dab16d48557a47469 ` | ` 598061603960e0fc9cb0f29d2b7644c90d65eeeb ` [条目](#entry-353) | gitlink-only / not-applicable | waylib-only |
| 354 / N6 | ` 8a3d1b8a4424bacf3f5beabde5ec66983ce8dca0 ` | ` 08cb77a53d89b49d1216ce4c34c0028d6de3bb93 ` | ` ea61afcf19fae29d5368ea378e967adae15a4f60 ` [条目](#entry-354) | gitlink-only / not-applicable | waylib-only |
| 355 / N6 | ` 4dad66cf6f99303e211dabc0e72c9f00e0c4c93d ` | ` a1cc7cd3654f222622fbfad7d04460a450a8b8e1 ` | ` 5e3135a80a99e2c0bc90059db62fbbd3789b51c2 ` [条目](#entry-355) | gitlink-only / not-applicable | waylib-only |
| 356 / N6 | ` aec82dd30308ad1f6aea17b4bccc363cd6b9c73c ` | ` 5443bb9539e70d9f9255f4e0695339b5b3405cb4 ` | ` 34335213c24f776e5aeaf43984c3f85546b36f05 ` [条目](#entry-356) | gitlink-only / not-applicable | waylib-only |
| 357 / N6 | ` 63790e1d8cd454f69947f141dbfc403844cc420e ` | ` 4b649ae37a673c0e6f2c21a327e8e1b48c5eb2bb ` | ` aa99c2ca8163855cb96c26eb38d88bc30e692a1e ` [条目](#entry-357) | gitlink-only / not-applicable | waylib-only |
| 358 / N6 | ` 1715ce5d5e91628b9323c096429781245c08b582 ` | ` 1ae941b1604de38c26eefce0eb9eb04bb39f6931 ` | ` e2111058e5f8e167bc1a6fdf4606cf21ee33649c ` [条目](#entry-358) | gitlink-only / not-applicable | waylib-only |
| 359 / N6 | ` 9f4afb87e591bb33912e3d7278cf49d6edf6b287 ` | ` 9b58dc87f5bd250515f8981ca2875539aa57447e ` | ` 9aab36caa3b74f44cc82405dffc65fd33278f4cb ` [条目](#entry-359) | gitlink-only / not-applicable | waylib-only |
| 360 / N6 | ` 39e7a61b472519868038242f95335616ba8f5b8e ` | ` 39bf76ba2561244986f81dbc416b78eb15b65a79 ` | ` 8f595393af06f839801a7465076ac542b3f285c5 ` [条目](#entry-360) | gitlink-only / not-applicable | waylib-only |
| 361 / N6 | ` d003741eaa4e1832e2554710175415628784c94b ` | ` 3785c332db0dafc2f31689005de3fcf013415aa9 ` | ` 21064eaf19346bedd9b08b59a8c8b246bff79225 ` [条目](#entry-361) | gitlink-only / not-applicable | waylib-only |
| 362 / N6 | ` 15bc8d04b8df33c82d0208c582e234e60aba60a0 ` | ` 478d84aa08ee09ceafbd2ad96c71d6fbcbf95343 ` | ` 744b97d6ed80b2a8ccdb909d33274424d254dce8 ` [条目](#entry-362) | gitlink-only / not-applicable | waylib-only |
| 363 / N6 | ` d37140d74ab9d0f8cb32f222ffbfd83937c0e891 ` | ` bc817082dde4c0cb31f50b140b89d8c97af24aa5 ` | ` 4e29cb94d91e391b442cc25324ebfab80ec88f37 ` [条目](#entry-363) | gitlink-only / not-applicable | waylib-only |
| 364 / N6 | ` d8829e42caefa988029a62148a9ababfe467640f ` | ` 7cacf98abe023616b2d29649a19f845cff796c0f ` | ` cd806fbbf93285e3c6d1a4ea97dccb68d7bc4457 ` [条目](#entry-364) | gitlink-only / not-applicable | waylib-only |
| 365 / N6 | ` 5c661fd02bed08c4b2e6a633688d6d5c944842c5 ` | ` b7525e569deb150bb03718d220a8c5b2f6644990 ` | ` 38147b44eafff95d519dd7d5023d277d7921ab0c ` [条目](#entry-365) | gitlink-only / not-applicable | waylib-only |
| 366 / N6 | ` d85ecab59bfe36b18a00a728810df435e6f1543e ` | ` 66f46e21d9388959996d78c8677885a2398a179b ` | ` 964e55ef572bac0b2187e711c93e3191b08b0d21 ` [条目](#entry-366) | gitlink-only / not-applicable | waylib-only |
| 367 / N6 | ` 324909af3e2b1fda50896fe9863747fb6011ec9a ` | ` e8aab674762dadfeb91495af8d7fcb80f8d38986 ` | ` 8f4ec1b09ba5f19cd70948f625fcedcfda774889 ` [条目](#entry-367) | gitlink-only / not-applicable | waylib-only |
| 368 / N6 | ` e4079612adb3e567c7f661dcb404663484817f39 ` | ` a8e5cac236bc01f7ce0d9aa782b588de857cc00b ` | ` 10beea71f6d2c09d6cec15d8b49425d3f6f8dfc4 ` [条目](#entry-368) | gitlink-only / not-applicable | waylib-only |
| 369 / N6 | ` 981ef4b18cbe7e908804e17bf7fd2ae4d65e6fca ` | ` adb3af1b9100b411d9bcd95cb53b6dafd5312641 ` | ` 7d30760134a5ff722319b83d7d244b12fee87ea0 ` [适配详情](adaptations/7d30760134a5ff722319b83d7d244b12fee87ea0.md) | adapted / adapted | waylib-only |
| 370 / N6 | ` 475f3cb6f5f21d0ecc059c6998e590a38f291560 ` | ` 7fbd74467a473b0e8e93d700f32d539e6512a5d4 ` | ` 404c5a67a0aef52038b9729265843ff8b83410f9 ` [条目](#entry-370) | applied / applied | waylib-only |
| 371 / N6 | ` 06ab77c1664548ef90e1f953ff00e2d5dacea166 ` | ` 6abb97a1033a928c276bc96a943447564c90f5c1 ` | ` cfbde75aa06eba39919406cb30bb2017be4e9c49 ` [适配详情](adaptations/cfbde75aa06eba39919406cb30bb2017be4e9c49.md) | adapted / adapted | waylib-only |
| 372 / N6 | ` ca160e1eb74ecb4f43102ac3f6463ab0e1a25137 ` | ` 983dd5707d2e6cb2a59434062ed2b45036f99452 ` | ` db0ff5dca7fde5c57b7029842c6f42cba91235e8 ` [适配详情](adaptations/db0ff5dca7fde5c57b7029842c6f42cba91235e8.md) | adapted / adapted | dual |
| 373 / N6 | ` f40f2fe7ba7daf686b3dbf352d592e56f9e182bc ` | ` 9f5ef46c65c4b5f4765468db73cf6368617841ba ` | ` f5fd08be82b50f706813c6248e56142095fcd97c ` [适配详情](adaptations/f5fd08be82b50f706813c6248e56142095fcd97c.md) | adapted / adapted | dual |
| 374 / N6 | ` 4cd2c672c10ec0e3004c88bbd48a18ded22872bd ` | ` 83365fc20abbfdb29b710446d5e3cc5fabc86efe ` | ` 219f4dee7780fb7c2b056e62186266b606d075bd ` [适配详情](adaptations/219f4dee7780fb7c2b056e62186266b606d075bd.md) | adapted / adapted | dual |
| 375 / N7 | ` a0329cd13c3071d658cf6043c4884b0cbf8844ec ` | ` 767ee8170341d0d20e1352afaaf95a9090a7ffe9 ` | ` 65e42e24b4dfa9d2637862e589c43024853bdc95 ` [适配详情](adaptations/65e42e24b4dfa9d2637862e589c43024853bdc95.md) | adapted / adapted | waylib-only |
| 376 / N7 | ` b9f6069fa3e1354091af377c9c9472fda290e2d8 ` | ` 6aea08e0bb8f4623b6c3ea294b4baa119e0922da ` | ` b17f567f1f6ef94ce3a2cf2c5a87f77f1a58df59 ` [条目](#entry-376) | applied / applied | dual |
| 377 / N7 | ` cf2dc0a911759ef9cc94fd9d8d81c76f4ccb4769 ` | ` 7809ec68cab35eed59341b5a0d8286589cde22ef ` | ` 24127943ee472d37b728fb113f8c1f180c9bdd22 ` [条目](#entry-377) | applied / applied | dual |
| 378 / N7 | ` 98c1a0c9347f4f3af593692261bbd8150ec85f2f ` | ` 7bb39c5721565690b7d77745a42b91f1723dc54b ` | ` 60b110eb8f75bb76b1c21cb1e8ad12bb3a8b4df5 ` [条目](#entry-378) | applied / applied | waylib-only |
| 379 / N7 | ` 12d4cff2dc6a81c6b891812d55b1a98378720d43 ` | ` 312ab98c1f9c28c6046e6c3c56466fffb41f47f2 ` | ` bb3491c7cfb6f4261fed9604be3d1bd30e79cf01 ` [条目](#entry-379) | applied / applied | dual |
| 380 / N7 | ` f2ebdf403cef739166a5aacc7324a24d3662176b ` | ` 566a4727ecd7590d054bdde46ddb71acc55cdc96 ` | ` ec253a9bc0de3d5f32aa6a6fdbbfcaae649f19e2 ` [条目](#entry-380) | applied / applied | dual |
| 381 / N7 | ` 9a36a9924ef6b74d944accd17e149ec015ef862d ` | ` a523bd2505b84fa5238b2b041320c6157ba265d8 ` | ` af00c1b0f1c1ebbb7d34a2435900192512188ee4 ` [条目](#entry-381) | applied / applied | waylib-only |
| 382 / N7 | ` 00f0a3572f081baab08ab21db8b018c4f0feec49 ` | ` 70aa2211dc13db005e115359e918810e548541f7 ` | ` 6ddaa982f7fb1339111f05973356f455d1626640 ` [条目](#entry-382) | applied / applied | dual |
| 383 / N7 | ` 5a69d2fe71dedb6f2a13ad9cf3d3dd593613623b ` | ` abd05da0bed28aec18c77a784a854f79a66d0ff7 ` | ` 1f6f594824b48569b157ac78f1b7dd84dcb393d8 ` [条目](#entry-383) | applied / applied | waylib-only |
| 384 / N7 | ` 90f6045bf432515698e9f5324b7e5fcf8a375331 ` | ` ea079e2c68ef826f9c41c24d04f87f1f93d3a634 ` | ` bb28166b0b41f2c947ee6cebabbf4465ee69e0ce ` [条目](#entry-384) | applied / applied | waylib-only |
| 385 / N7 | ` 593c48420d29f84f8cb320ea34dbf5ea67cb1abf ` | ` 123c60108ef98f8f6a240cdbdbec5513538a3011 ` | ` a687f61b1150c228fc259eea679bf2ebbf0b59c5 ` [条目](#entry-385) | applied / applied | dual |
| 386 / N7 | ` a610119f49b547467a8871c6853ed1c04932d198 ` | ` eadc4da0c975dbb65489bd990b48524b23489cc5 ` | ` be76893d3d5b20494567b8b7041420db299d3507 ` [条目](#entry-386) | applied / applied | dual |

## 逐项归属、路径与依赖

<a id="entry-1"></a>
### 1. N1 / ` fix(waylib): use notify_* API for keyboard focus operations `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：无。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/waylib-evidence.json`；以来源 ` 3eeb8956884cb9eb759ff81107a60cfa7841e756 ` 和原目标 ` 5832583291b2ad14c4e723e26f5c5b851e6dbe03 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` c56fa0d842eb03204827a7e6369bb97392207fc5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-2"></a>
### 2. N2 / ` 首次 wlroots 独立初始化 `

- 本仓内容路径：` .gitmodules `、` CMakeLists.txt `、` wlroots/CMakeLists.txt `。
- 实际改变：` .gitmodules `、` 3rdparty/wlroots `、` CMakeLists.txt `、` wlroots/CMakeLists.txt `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：registered；` None ` → ` 88a869855742281c98c22cab9641b317b8d065ef `。
  原证据引用：` None ` → ` 88a869855742281c98c22cab9641b317b8d065ef `。
- **独立初始化，不属于普通 replay/action 计数。**
- 来源第一父提交：` 2df4c21c0499b46229f1ef0080cc265994b4fd60 `；导入原始 R：` 88a869855742281c98c22cab9641b317b8d065ef `。
- 接入方式：` native-meson-via-local-pkg-config-imported-target `；原始历史对象不重写。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/initialization-report.json`；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/structure-proof.json`。
- 原审核说明：` N2 独立初始化新增 root wrapper 入口及未导出的 Meson imported SHARED 目标；显式 SONAME 和 location 固定本次 R 产物，保留真实含数字能力字段、既有核心、安装、导出与公共命名空间，不提前同步 N3。 `。
- 同一 Treeland 来源的 P / DeckShell 目标：` e1b74b4a9bc49a373edf883ee24ab55023d3412d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-3"></a>
### 3. N3 / ` build: add waylib-wlroots CMake module and switch consumers `

- 本仓内容路径：` qwlroots/CMakeLists.txt `、` qwlroots/debian/control `、` qwlroots/src/CMakeLists.txt `、` qwlroots/src/cmake/CMakeConfig.cmake.in `、` waylib/debian/control `、` waylib/src/server/CMakeLists.txt `、` wlroots/CMakeLists.txt `、` wlroots/UPSTREAM `、` wlroots/cmake/WlrootsProtocols.cmake `、` wlroots/cmake/WlrootsShaders.cmake `、` wlroots/cmake/WlrootsSources.cmake `、` wlroots/update-from-upstream.sh `。
- 实际改变：` 3rdparty/wlroots `、` qwlroots/debian/control `、` waylib/debian/control `、` wlroots/CMakeLists.txt `、` wlroots/UPSTREAM `、` wlroots/cmake/WlrootsProtocols.cmake `、` wlroots/cmake/WlrootsShaders.cmake `、` wlroots/cmake/WlrootsSources.cmake `、` wlroots/update-from-upstream.sh `。
- 排除的来源路径：` .github/workflows/qwlroots-archlinux-build.yml `、` .github/workflows/qwlroots-debian-build.yml `、` .github/workflows/qwlroots-deepin-build.yml `、` .github/workflows/treeland-archlinux-build.yml `、` .github/workflows/waylib-archlinux-build.yml `、` .github/workflows/waylib-debian-build.yml `、` .github/workflows/waylib-deepin-build.yml `、` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `、` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `、` 3rdparty/wlroots/xwayland/xwm.c `、` CMakeLists.txt `、` REUSE.toml `、` debian/control `、` src/modules/capture/CMakeLists.txt `、` src/modules/shortcut/CMakeLists.txt `、` src/modules/virtual-output/CMakeLists.txt `、` src/modules/wallpaper-color/CMakeLists.txt `、` src/modules/window-management/CMakeLists.txt `。
- 依赖 ` 3rdparty/wlroots `：updated；` 88a869855742281c98c22cab9641b317b8d065ef ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 88a869855742281c98c22cab9641b317b8d065ef ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 896a8953e3695577e05e9e93d10530920dc7d6d9 ` 和原目标 ` 2e9e9ce9ff975fb39b7a506d96562d94b216e831 ` 查询。
- 原审核说明：` 保留 qwlroots/Waylib 既有公共 PkgConfig::WLROOTS 依赖及安装模板；在同名既有 wrapper target 上采用来源 CMake 编译实现和私有本地元数据桥接。保留原生源码与生成器，按配置/源码表/shader 职责拆分长文件；updater 保留完整原文并前置拒绝写入，UPSTREAM 保留上游 pin。独立子项目开发包继续满足原有公开依赖。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/56a2765a569517f8f19b732e5bc1a75a65c476b5.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 26804e427f757e0185dc95e699d57f880045ec65 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-4"></a>
### 4. N3 / ` fix(surface): track subsurface teardown independently `

- 本仓内容路径：` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/qtquick/private/wsurfaceitem_p.h `、` waylib/src/server/qtquick/wsurfaceitem.cpp `。
- 实际改变：` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/qtquick/private/wsurfaceitem_p.h `、` waylib/src/server/qtquick/wsurfaceitem.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` aac67eea93c777558d41903c7a37f360ec0fbe81 ` 和原目标 ` f477380331437ea960565a87b8162f3a6aa65321 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` be239e909ce177626ad613ed819ca08115755f4a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-5"></a>
### 5. N3 / ` fix(surface): distinguish popup/IME/drag keyboard grabs `

- 本仓内容路径：` waylib/src/server/protocols/winputmethodhelper.cpp `、` waylib/src/server/protocols/winputmethodhelper.h `。
- 实际改变：` waylib/src/server/protocols/winputmethodhelper.cpp `、` waylib/src/server/protocols/winputmethodhelper.h `。
- 排除的来源路径：` src/core/shellhandler.h `、` src/surface/seatsurfacemanager.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` ff0aa9861d0d71b723da86483d0571b4aa1beab3 ` 和原目标 ` 30f6a61d4392ad4cc15dbfdd40a16155adfabe44 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 5f95519c1c6372d4352f564fe42b3ff0715c3a2f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-6"></a>
### 6. N3 / ` fix(surface): remove cached subsurface state `

- 本仓内容路径：` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `。
- 实际改变：` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 0d008c38411bb097ab66cc78a1593ea985dd6a06 ` 和原目标 ` 7bba19b60c4203f530c9b3ca79f521d9ed2d4bb2 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 42c438e244443ef53fe11b1fc29669f411a4a4f6 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-7"></a>
### 7. N3 / ` fix: resolve sfinae and qml type registration warnings `

- 本仓内容路径：` waylib/examples/tinywl/CMakeLists.txt `、` waylib/src/server/kernel/wbackend.h `、` waylib/src/server/kernel/woutputlayout.h `、` waylib/src/server/kernel/wseat.h `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/protocols/wlayershell.h `、` waylib/src/server/protocols/wxdgdialogmanagerv1.h `、` waylib/src/server/protocols/wxdgshell.h `、` waylib/src/server/protocols/wxwayland.h `。
- 实际改变：` waylib/examples/tinywl/CMakeLists.txt `、` waylib/src/server/kernel/wbackend.h `、` waylib/src/server/kernel/woutputlayout.h `、` waylib/src/server/kernel/wseat.h `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/protocols/wlayershell.h `、` waylib/src/server/protocols/wxdgdialogmanagerv1.h `、` waylib/src/server/protocols/wxdgshell.h `、` waylib/src/server/protocols/wxwayland.h `。
- 排除的来源路径：` src/CMakeLists.txt `、` src/core/shellhandler.h `、` src/modules/capture/CMakeLists.txt `、` src/modules/foreign-toplevel/foreigntoplevelhandlev1.h `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 5a90432efb33646a8d1e92ce2c5901e0dcb7fc04 ` 和原目标 ` 4a419790f030e9b5e92e2a9d3503b9e1ea56d944 ` 查询。
- 原审核说明：` 保留来源的全部类型注册调整。；QML IMPORTS 映射到本项目实际 URI WaylibShared.QuickSharedServer/DeckShell.Compositor，版本限定使用 Qt 的 URI/version 语法，并随后按来源移除限定。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/5e859f63bebca57be2237e75174a20f265611349.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` e40c04aa9f3db51e408c37421901341169860186 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-8"></a>
### 8. N3 / ` fix: fix XWayland cursor truncation on fractional-scaled multi-monitor `

- 本仓内容路径：` waylib/src/server/protocols/wxdgoutput.cpp `。
- 实际改变：` waylib/src/server/protocols/wxdgoutput.cpp `。
- 排除的来源路径：` src/seat/helper.cpp `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 4e21f708be59d24f4aac55bcdc3964a800feb74c ` 和原目标 ` c7f3abfdc806fc9b8dff1aada32d131e52c9aa2e ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 8200c899f854b92e643dae7134771be7e563ae5e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-9"></a>
### 9. N3 / ` fix(output): restore configured topology after output reconnect `

- 本仓内容路径：` waylib/src/server/qtquick/woutputviewport.cpp `。
- 实际改变：` waylib/src/server/qtquick/woutputviewport.cpp `。
- 排除的来源路径：` misc/dconfig/org.deepin.dde.treeland.json `、` misc/dconfig/org.deepin.dde.treeland.output.json `、` src/CMakeLists.txt `、` src/modules/virtual-output/virtualoutputmanagerinterfacev1.cpp `、` src/modules/virtual-output/virtualoutputmanagerinterfacev1.h `、` src/output/output.cpp `、` src/output/outputconfigstate.cpp `、` src/output/outputconfigstate.h `、` src/output/outputlifecyclemanager.cpp `、` src/output/outputlifecyclemanager.h `、` src/output/outputmanager.cpp `、` src/output/outputmanager.h `、` src/seat/helper.cpp `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 268ca973be0d5eeb33d6be03b5e51e4ce62f4997 ` 和原目标 ` ab88bfa08af0973888b967304b25c274a656c2ac ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 5f58534233351c8ce506c055726e46fe7e59b4c7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-10"></a>
### 10. N3 / ` fix: remove version pinning from QML module IMPORTS `

- 本仓内容路径：` waylib/examples/tinywl/CMakeLists.txt `。
- 实际改变：` waylib/examples/tinywl/CMakeLists.txt `。
- 排除的来源路径：` src/CMakeLists.txt `、` src/modules/capture/CMakeLists.txt `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 34049a416fb66f7c6c8ab73dbda3e42e9c59f309 ` 和原目标 ` 37609f7ef1d1cf24cc5490d5ed3198fb240a097b ` 查询。
- 原审核说明：` 保留来源的全部类型注册调整。；QML IMPORTS 映射到本项目实际 URI WaylibShared.QuickSharedServer/DeckShell.Compositor，版本限定使用 Qt 的 URI/version 语法，并随后按来源移除限定。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/c5ec822f8301881b46570c7e39148712f82b1809.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` bcb590e170012289b985f5334316a6bdd1c4d773 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-11"></a>
### 11. N3 / ` fix(waylib/xwayland): deny Activate for surfaces without Focus capability `

- 本仓内容路径：` waylib/src/server/protocols/wxwaylandsurface.cpp `。
- 实际改变：` waylib/src/server/protocols/wxwaylandsurface.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-evidence.json`；以来源 ` 25cb8dd422d381b64f18f535a51066c85d80818b ` 和原目标 ` 1db059be68d697b7c47c7003f7433e0d1836139a ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` b2e5001951b1c9456a74d3447154a374ac3d270d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-12"></a>
### 12. N4 / ` feat(waylib): add _NET_WM_WINDOW_TYPE_DIALOG support for XWayland `

- 本仓内容路径：` waylib/src/server/protocols/wxwayland.h `、` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `。
- 实际改变：` waylib/src/server/protocols/wxwayland.h `、` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` d4e547c9f0094626689b5db8e95db0da49164b50 ` 和原目标 ` d0b854c0fb58851c2da86e5e7a8d90f8fa354c48 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` f44914538e7facf862af0d35c21b6f41889a0f98 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-13"></a>
### 13. N4 / ` fix(input): handle drags without an icon `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` 1f5d35eadc6ce02d708a7edadba97a56bf2a7883 ` 和原目标 ` 55c904bbbe0e3520a86eca9792b748a530e171ac ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 957cefa6b47620adce0985efa6c689a680685779 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-14"></a>
### 14. N4 / ` fix(input): allow drag source to update cursor `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` 57fe3c71cafcefca1b2e419e3a008f1ebc0be38c ` 和原目标 ` 6e8369a56b958114ecac6b6424604a5b459771a2 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` b76493b280334371cb8485b8369309b017609b38 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-15"></a>
### 15. N4 / ` Revert "fix(input): allow drag source to update cursor" `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 6ce79949714fa802bcdebec733f8f03f99583a62 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` 63116956e9f77e691250b3326ac15a9dd4c6a47d ` 和原目标 ` f366cc17407f02f1249d002088da4aea0cdfc06e ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` a6425769eafee3e9cd253560cf5998876fb910d3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-16"></a>
### 16. N4 / ` fix(input): update cursor from DnD action `

- 本仓内容路径：` qwlroots/src/types/qwdatadevice.h `、` waylib/src/server/kernel/private/wcursor_p.h `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wcursor.h `、` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` 3rdparty/wlroots `、` qwlroots/src/types/qwdatadevice.h `、` waylib/src/server/kernel/private/wcursor_p.h `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wcursor.h `、` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `、` 3rdparty/wlroots/types/data_device/wlr_data_source.c `、` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6ce79949714fa802bcdebec733f8f03f99583a62 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4bc1705abf5b1250ea5888b6387b66d54718e331 ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` 3d1a458a7ee298ba190fd0b73b0418dd331d27bf ` 和原目标 ` 5b2456ea15df37dac357dc4eb8f12a14f109bad8 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` e5ca7b09b7fa94a3791d7bb0dfab8f265e08c6b3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-17"></a>
### 17. N4 / ` fix(seat): correct keyboard attach/detach and modifier forwarding `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1664601036f4712f93212c567b8d56825c086285 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` 371d32244323c914a6816fc7c14fec57c04fa333 ` 和原目标 ` 154a53703f463f4882b39bc98bb8b5c574a861af ` 查询。
- 原审核说明：` 完整合入来源的键盘切换修饰符去重及物理键盘共享 keymap；detach 分支保留来源的分组/虚拟设备排除条件，与现有本地保护等价，仅保留本地指针格式。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/495e18db5c4dd3b96d9d2fadbd529073cc1d6329.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` bb402df018ae3ac8e437b7212ae853cc575fe73a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-18"></a>
### 18. N4 / ` fix(seat): restore group keyboard when virtual keyboard is destroyed `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/protocols/winputmethodhelper.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/protocols/winputmethodhelper.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1664601036f4712f93212c567b8d56825c086285 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-evidence.json`；以来源 ` 07a7b175b71e5fb78a57e962db7b30d227e3936a ` 和原目标 ` 0d8c99c886084818a1caee37995390bb69603184 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 9f66cdf64764ef8ee2323f536d42a15a62ff559e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-19"></a>
### 19. N5 / ` fix(output): restore configured topology after output reconnect `

- 本仓内容路径：` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `。
- 实际改变：` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `。
- 排除的来源路径：` src/core/rootsurfacecontainer.cpp `、` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1664601036f4712f93212c567b8d56825c086285 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` ad91d436f0c7b8afd79153c766d6cccebc767370 ` 和原目标 ` 4f43ed9c7fe9b818f0565a7c44f4b49c2b871b75 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 51ee64ab8faf3baf667c17a054c3f2704c825ef0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-20"></a>
### 20. N5 / ` fix(output): remove disabled outputs from single-output layout `

- 本仓内容路径：` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `。
- 实际改变：` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `。
- 排除的来源路径：` src/output/output.cpp `、` src/output/outputmanager.cpp `、` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1664601036f4712f93212c567b8d56825c086285 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 97ed8df0b546f925c17388b71fdd78181b2cb861 ` 和原目标 ` 58f0bb706ed29f0cf6c16aeb89be1365d3846511 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 267e44a4c9109d47fc4e0332c13345035eb55791 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-21"></a>
### 21. N5 / ` feat: add containerOf utility for struct member offset calculation `

- 本仓内容路径：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/utils/WContainerOf `、` waylib/src/server/utils/wcontainerof.h `。
- 实际改变：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/utils/WContainerOf `、` waylib/src/server/utils/wcontainerof.h `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1664601036f4712f93212c567b8d56825c086285 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` a9df8d3d87256c84a593838057e587a6beee4ec4 ` 和原目标 ` 85bf4347afe2aaf028e8053f3429205ac7a15a2a ` 查询。
- 原审核说明：` 完整保留来源 containerOf 工具头及转发头，但按本次公共安装路径冻结约束登记为 PRIVATE_HEADERS；现有 utils 构建 include 已覆盖该路径，内部使用和后续源码测试不受影响，不新增公共安装头。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/13fb708ed222f89b4a4776b3513fb3f4264b4aee.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 3a92b7a76b0048b9bc1cbeba1763d4fca11a2303 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-22"></a>
### 22. N5 / ` fix(output): correct WOutputManagerV1::interfaceName return value `

- 本仓内容路径：` waylib/src/server/protocols/woutputmanagerv1.cpp `。
- 实际改变：` waylib/src/server/protocols/woutputmanagerv1.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1664601036f4712f93212c567b8d56825c086285 ` → ` 1664601036f4712f93212c567b8d56825c086285 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 4507a6f414191bcfc150a966ba251c89f864663f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 526308f00028711152378a181e29045342f78790 ` 和原目标 ` e31be11aedefe191b29d1106947f9d8f1ff96477 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 3b45db76bb11df355c90f29327c1253be74b2a51 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-23"></a>
### 23. N5 / ` fix(waylib): fix Vulkan scanout RT via wlroots render_buffer `

- 本仓内容路径：` waylib/src/server/kernel/wglobal.h `、` waylib/src/server/qtquick/private/wbufferrenderer.cpp `、` waylib/src/server/qtquick/private/wbufferrenderer_p.h `、` waylib/src/server/qtquick/private/woutputviewport_p.h `、` waylib/src/server/qtquick/woutputhelper.cpp `、` waylib/src/server/qtquick/woutputhelper.h `、` waylib/src/server/qtquick/woutputlayer.cpp `、` waylib/src/server/qtquick/woutputlayer.h `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/woutputviewport.cpp `、` waylib/src/server/qtquick/woutputviewport.h `、` waylib/src/server/qtquick/wrenderhelper.cpp `、` waylib/src/server/qtquick/wrenderhelper.h `、` waylib/src/server/qtquick/wsgtextureprovider.cpp `。
- 实际改变：` 3rdparty/wlroots `、` waylib/src/server/kernel/wglobal.h `、` waylib/src/server/qtquick/private/wbufferrenderer.cpp `、` waylib/src/server/qtquick/private/wbufferrenderer_p.h `、` waylib/src/server/qtquick/private/woutputviewport_p.h `、` waylib/src/server/qtquick/woutputhelper.cpp `、` waylib/src/server/qtquick/woutputhelper.h `、` waylib/src/server/qtquick/woutputlayer.cpp `、` waylib/src/server/qtquick/woutputlayer.h `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/woutputviewport.cpp `、` waylib/src/server/qtquick/woutputviewport.h `、` waylib/src/server/qtquick/wrenderhelper.cpp `、` waylib/src/server/qtquick/wrenderhelper.h `、` waylib/src/server/qtquick/wsgtextureprovider.cpp `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/wlroots.syms `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1664601036f4712f93212c567b8d56825c086285 ` → ` fede1a13c0f2c566a5865fbdc40d97cfb63b6785 `。
  原证据引用：` 4507a6f414191bcfc150a966ba251c89f864663f ` → ` 6459c7dba7129609610319dfaaaa7b83c6b8a830 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` b4d7bff91684db691da410dc4c49a3a4936044fa ` 和原目标 ` be08de9af5176fb71ee1a05c5b1ca140b26078fd ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` d0101a2b7346652365a535b2c7ab1ae841216bb9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-24"></a>
### 24. N5 / ` fix(lockscreen): add Vulkan-specific Blur placeholder `

- 本仓内容路径：` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/wrenderhelper.cpp `。
- 实际改变：` 3rdparty/wlroots `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/wrenderhelper.cpp `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `、` src/CMakeLists.txt `、` src/core/qml/Effects/+vulkan/Blur.qml `、` src/core/qml/Effects/Blur.qml `、` src/core/qml/overridable/InWindowBlur.qml `、` src/core/qmlengine.cpp `、` src/core/qmlengine.h `、` src/main.cpp `、` src/plugins/lockscreen/qml/SessionList.qml `、` src/plugins/lockscreen/qml/UserList.qml `。
- 依赖 ` 3rdparty/wlroots `：updated；` fede1a13c0f2c566a5865fbdc40d97cfb63b6785 ` → ` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf `。
  原证据引用：` 6459c7dba7129609610319dfaaaa7b83c6b8a830 ` → ` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 6ea349ac28b93b61ca3f9223ec021344141d6fce ` 和原目标 ` ed4f019301c0d3dd8434d842152f343a69e988d5 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 5b04ac8e277ac6d7887bf2ffb0be358f554d4bcc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-25"></a>
### 25. N5 / ` fix: avoid UB casting HoverMove to QMouseEvent `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/qtquick/wsurfaceitem.cpp `、` waylib/tests/manual/pinchhandler/eventitem.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/qtquick/wsurfaceitem.cpp `、` waylib/tests/manual/pinchhandler/eventitem.cpp `。
- 排除的来源路径：` examples/test_pinch_handler/eventitem.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf ` → ` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf `。
  原证据引用：` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 ` → ` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 4d4736f4dfa73b04192245446ac1bde05eb83563 ` 和原目标 ` e69ca1635752605a109dda3d05c61b93c9e05026 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 52f727ca188d6837bac23164983001f622fde376 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-26"></a>
### 26. N5 / ` fix: remove WBackend::activateSession/deactivateSession hack `

- 本仓内容路径：` waylib/src/server/kernel/wbackend.cpp `、` waylib/src/server/kernel/wbackend.h `。
- 实际改变：` waylib/src/server/kernel/wbackend.cpp `、` waylib/src/server/kernel/wbackend.h `。
- 排除的来源路径：` src/modules/ddm/ddminterfacev1.cpp `、` src/seat/helper.cpp `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf ` → ` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf `。
  原证据引用：` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 ` → ` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 0333a31456c7f90708c7f482939e23d939283b45 ` 和原目标 ` 54a49ec203485a02f6531b58020cabce631b0e14 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` a35e2d49279ba82d0892b73a9017feac71f64826 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-27"></a>
### 27. N5 / ` feat: remove qwlroots dependency, use wlroots C API directly `

- 本仓内容路径：` qwlroots/.clang-format `、` qwlroots/.cursorindexingignore `、` qwlroots/.envrc `、` qwlroots/.github/workflows/archlinux-build.yaml `、` qwlroots/.github/workflows/reuse-check.yml `、` qwlroots/.gitignore `、` qwlroots/.gitmodules `、` qwlroots/.obs/deepin_workflows.yml `、` qwlroots/.obs/workflows.yml `、` qwlroots/.reuse/dep5 `、` qwlroots/CMakeLists.txt `、` qwlroots/CMakePresets.json `、` qwlroots/LICENSES/Apache-2.0.txt `、` qwlroots/LICENSES/CC-BY-4.0.txt `、` qwlroots/LICENSES/CC0-1.0.txt `、` qwlroots/LICENSES/GPL-2.0-only.txt `、` qwlroots/LICENSES/GPL-3.0-only.txt `、` qwlroots/LICENSES/LGPL-3.0-only.txt `、` qwlroots/README.md `、` qwlroots/README.zh_CN.md `、` qwlroots/analyze_coverage.py `、` qwlroots/cmake/Helpers.cmake `、` qwlroots/cmake/PackageVersionHelper.cmake `、` qwlroots/debian/changelog `、` qwlroots/debian/control `、` qwlroots/debian/copyright `、` qwlroots/debian/rules `、` qwlroots/debian/source/format `、` qwlroots/debian/watch `、` qwlroots/default.nix `、` qwlroots/doc/ai/qwcolormanagementv1-usage-guide.md `、` qwlroots/doc/ai/qwlroots-wrapping-patterns-best-practices-en.md `、` qwlroots/doc/ai/qwlroots-wrapping-patterns-best-practices.md `、` qwlroots/examples/CMakeLists.txt `、` qwlroots/examples/tinywl/CMakeLists.txt `、` qwlroots/examples/tinywl/main.cpp `、` qwlroots/flake.lock `、` qwlroots/flake.nix `、` qwlroots/garnix.yaml `、` qwlroots/nix/default.nix `、` qwlroots/src/CMakeLists.txt `、` qwlroots/src/cmake/CMakeConfig.cmake.in `、` qwlroots/src/cmake/pkgconfig.pc.in `、` qwlroots/src/interfaces/qwbackendinterface.h `、` qwlroots/src/interfaces/qwbufferinterface.h `、` qwlroots/src/interfaces/qwextimagecapturesourcev1interface.h `、` qwlroots/src/interfaces/qwinterface.h `、` qwlroots/src/interfaces/qwkeyboardinterface.h `、` qwlroots/src/interfaces/qwoutputinterface.h `、` qwlroots/src/interfaces/qwpointerinterface.h `、` qwlroots/src/interfaces/qwrendererinterface.h `、` qwlroots/src/interfaces/qwswitchinterface.h `、` qwlroots/src/interfaces/qwtabletpadinterface.h `、` qwlroots/src/qwbackend.cpp `、` qwlroots/src/qwbackend.h `、` qwlroots/src/qwdisplay.h `、` qwlroots/src/qwglobal.h `、` qwlroots/src/qwobject.cpp `、` qwlroots/src/qwobject.h `、` qwlroots/src/qwsession.h `、` qwlroots/src/render/qwallocator.h `、` qwlroots/src/render/qwcolor.h `、` qwlroots/src/render/qwdmabuf.h `、` qwlroots/src/render/qwdrmformatset.h `、` qwlroots/src/render/qwdrmsyncobj.h `、` qwlroots/src/render/qwegl.h `、` qwlroots/src/render/qwrenderer.h `、` qwlroots/src/render/qwswapchain.h `、` qwlroots/src/render/qwtexture.h `、` qwlroots/src/types/qwalphamodifierv1.h `、` qwlroots/src/types/qwbuffer.h `、` qwlroots/src/types/qwcolormanagerv1.h `、` qwlroots/src/types/qwcompositor.h `、` qwlroots/src/types/qwcontenttypev1.h `、` qwlroots/src/types/qwcursor.h `、` qwlroots/src/types/qwcursorshapev1.h `、` qwlroots/src/types/qwdamagering.h `、` qwlroots/src/types/qwdatacontrolv1.h `、` qwlroots/src/types/qwdatadevice.h `、` qwlroots/src/types/qwdrm.h `、` qwlroots/src/types/qwdrmleasev1.h `、` qwlroots/src/types/qwexportdmabufv1.h `、` qwlroots/src/types/qwextdatacontrolv1.h `、` qwlroots/src/types/qwextforeigntoplevellistv1.h `、` qwlroots/src/types/qwextimagecapturesourcev1.h `、` qwlroots/src/types/qwextimagecopycapturev1.h `、` qwlroots/src/types/qwforeigntoplevelhandlev1.h `、` qwlroots/src/types/qwfractionalscalemanagerv1.h `、` qwlroots/src/types/qwfullscreenshellv1.h `、` qwlroots/src/types/qwgammacontorlv1.h `、` qwlroots/src/types/qwidleinhibitv1.h `、` qwlroots/src/types/qwidlenotifyv1.h `、` qwlroots/src/types/qwinputdevice.cpp `、` qwlroots/src/types/qwinputdevice.h `、` qwlroots/src/types/qwinputmethodv2.h `、` qwlroots/src/types/qwkeyboard.h `、` qwlroots/src/types/qwkeyboardgroup.h `、` qwlroots/src/types/qwkeyboardshortcutsinhibitv1.h `、` qwlroots/src/types/qwlayershellv1.h `、` qwlroots/src/types/qwlinuxdmabufv1.h `、` qwlroots/src/types/qwlinuxdrmsyncobjv1.h `、` qwlroots/src/types/qwoutput.h `、` qwlroots/src/types/qwoutputlayer.h `、` qwlroots/src/types/qwoutputlayout.h `、` qwlroots/src/types/qwoutputmanagementv1.h `、` qwlroots/src/types/qwoutputpowermanagementv1.h `、` qwlroots/src/types/qwpointer.h `、` qwlroots/src/types/qwpointerconstraintsv1.h `、` qwlroots/src/types/qwpointergesturesv1.h `、` qwlroots/src/types/qwpresentation.h `、` qwlroots/src/types/qwprimaryselection.h `、` qwlroots/src/types/qwprimaryselectionv1.h `、` qwlroots/src/types/qwrelativepointerv1.h `、` qwlroots/src/types/qwscene.h `、` qwlroots/src/types/qwscreencopyv1.h `、` qwlroots/src/types/qwseat.h `、` qwlroots/src/types/qwsecuritycontextmanagerv1.h `、` qwlroots/src/types/qwsessionlockv1.h `、` qwlroots/src/types/qwshm.h `、` qwlroots/src/types/qwsinglepixelbufferv1.h `、` qwlroots/src/types/qwsubcompositor.h `、` qwlroots/src/types/qwswitch.h `、` qwlroots/src/types/qwtablet.h `、` qwlroots/src/types/qwtabletpad.h `、` qwlroots/src/types/qwtabletv2.h `、` qwlroots/src/types/qwtearingcontrolv1.h `、` qwlroots/src/types/qwtextinputv3.h `、` qwlroots/src/types/qwtouch.h `、` qwlroots/src/types/qwtransientseatv1.h `、` qwlroots/src/types/qwviewporter.h `、` qwlroots/src/types/qwvirtualkeyboardv1.h `、` qwlroots/src/types/qwvirtualpointerv1.h `、` qwlroots/src/types/qwxcursormanager.h `、` qwlroots/src/types/qwxdgactivationv1.h `、` qwlroots/src/types/qwxdgdecorationmanagerv1.h `、` qwlroots/src/types/qwxdgdialogv1.h `、` qwlroots/src/types/qwxdgforeignregistry.h `、` qwlroots/src/types/qwxdgforeignv1.h `、` qwlroots/src/types/qwxdgforeignv2.h `、` qwlroots/src/types/qwxdgoutputv1.h `、` qwlroots/src/types/qwxdgshell.h `、` qwlroots/src/types/qwxwayland.h `、` qwlroots/src/types/qwxwaylandserver.h `、` qwlroots/src/types/qwxwaylandshellv1.h `、` qwlroots/src/types/qwxwaylandsurface.h `、` qwlroots/src/util/qwbox.h `、` qwlroots/src/util/qwlogging.h `、` qwlroots/src/util/qwsignalconnector.h `、` qwlroots/tests/CMakeLists.txt `、` qwlroots/tests/qwobject_test/CMakeLists.txt `、` qwlroots/tests/qwobject_test/qwabc.h `、` qwlroots/tests/qwobject_test/test_qwobject.cpp `、` qwlroots/tests/qwobject_test/wlr_abc.cpp `、` qwlroots/tests/qwobject_test/wlr_abc.h `、` qwlroots/tests/test_qwobject.cpp `、` waylib/.github/workflows/archlinux-build-wlroots-19.yaml `、` waylib/.gitmodules `、` waylib/.reuse/dep5 `、` waylib/CMakeLists.txt `、` waylib/README.md `、` waylib/README.zh_CN.md `、` qwlroots/cmake/WaylandScannerHelpers.cmake `、` waylib/cmake/WaylandScannerHelpers.cmake `、` waylib/debian/control `、` waylib/debian/rules `、` waylib/examples/blur/helper.h `、` waylib/examples/blur/main.cpp `、` waylib/examples/outputcopy/helper.h `、` waylib/examples/outputcopy/main.cpp `、` waylib/examples/outputviewport/helper.h `、` waylib/examples/outputviewport/main.cpp `、` waylib/examples/surface-delegate/main.cpp `、` waylib/examples/tinywl/helper.cpp `、` waylib/examples/tinywl/helper.h `、` waylib/examples/tinywl/main.cpp `、` waylib/examples/tinywl/output.cpp `、` waylib/examples/tinywl/rootsurfacecontainer.cpp `、` waylib/examples/tinywl/rootsurfacecontainer.h `、` waylib/examples/tinywl/surfacewrapper.cpp `、` waylib/flake.lock `、` waylib/flake.nix `、` waylib/nix/default.nix `、` waylib/src/cmake/WaylibServerConfig.cmake.in `、` waylib/src/server/CMakeLists.txt `、` qwlroots/src/cmake/qwconfig.h.in `、` waylib/src/server/cmake/wconfig.h.in `、` waylib/src/server/kernel/private/wcursor_p.h `、` waylib/src/server/kernel/private/wglobal_p.h `、` waylib/src/server/kernel/private/woutputlayout_p.h `、` waylib/src/server/kernel/private/wserver_p.h `、` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/private/wtoplevelsurface_p.h `、` waylib/src/server/kernel/wbackend.cpp `、` waylib/src/server/kernel/wbackend.h `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wcursor.h `、` waylib/src/server/kernel/wglobal.cpp `、` waylib/src/server/kernel/wglobal.h `、` waylib/src/server/kernel/winputdevice.cpp `、` waylib/src/server/kernel/winputdevice.h `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `、` waylib/src/server/kernel/woutput.cpp `、` waylib/src/server/kernel/woutput.h `、` waylib/src/server/kernel/woutputlayout.cpp `、` waylib/src/server/kernel/woutputlayout.h `、` waylib/src/server/kernel/wpointer.h `、` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/kernel/wseat.h `、` waylib/src/server/kernel/wserver.cpp `、` waylib/src/server/kernel/wserver.h `、` waylib/src/server/kernel/wsocket.cpp `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/kernel/wtoplevelsurface.cpp `、` waylib/src/server/kernel/wtoplevelsurface.h `、` waylib/src/server/kernel/wxcursorimage.cpp `、` waylib/src/server/kernel/wxcursorimage.h `、` waylib/src/server/pch/pch.hxx `、` waylib/src/server/platformplugin/qwlrootscreen.cpp `、` waylib/src/server/platformplugin/qwlrootscreen.h `、` waylib/src/server/platformplugin/qwlrootscursor.h `、` waylib/src/server/platformplugin/qwlrootsintegration.cpp `、` waylib/src/server/platformplugin/qwlrootsintegration.h `、` waylib/src/server/platformplugin/qwlrootswindow.cpp `、` waylib/src/server/platformplugin/qwlrootswindow.h `、` waylib/src/server/protocols/ext_foreign_toplevel_image_capture_source_manager_v1.h `、` waylib/src/server/protocols/private/winputmethodv2.cpp `、` waylib/src/server/protocols/private/winputmethodv2_p.h `、` waylib/src/server/protocols/private/wtextinputv1.cpp `、` waylib/src/server/protocols/private/wtextinputv1_p.h `、` waylib/src/server/protocols/private/wtextinputv2.cpp `、` waylib/src/server/protocols/private/wtextinputv2_p.h `、` waylib/src/server/protocols/private/wtextinputv3.cpp `、` waylib/src/server/protocols/private/wtextinputv3_p.h `、` waylib/src/server/protocols/private/wvirtualkeyboardv1.cpp `、` waylib/src/server/protocols/private/wvirtualkeyboardv1_p.h `、` waylib/src/server/protocols/private/wxwaylandsurface_p.h `、` waylib/src/server/protocols/qwextforeigntoplevelimagecapturesourcemanagerv1.h `、` waylib/src/server/protocols/wcursorshapemanagerv1.cpp `、` waylib/src/server/protocols/wcursorshapemanagerv1.h `、` waylib/src/server/protocols/wextforeigntoplevellistv1.cpp `、` waylib/src/server/protocols/wextforeigntoplevellistv1.h `、` waylib/src/server/protocols/wforeigntoplevelv1.cpp `、` waylib/src/server/protocols/wforeigntoplevelv1.h `、` waylib/src/server/protocols/winputmethodhelper.cpp `、` waylib/src/server/protocols/winputmethodhelper.h `、` waylib/src/server/protocols/winputpopupsurface.cpp `、` waylib/src/server/protocols/winputpopupsurface.h `、` waylib/src/server/protocols/wlayershell.cpp `、` waylib/src/server/protocols/wlayershell.h `、` waylib/src/server/protocols/wlayersurface.cpp `、` waylib/src/server/protocols/wlayersurface.h `、` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `、` waylib/src/server/protocols/wsecuritycontextmanager.cpp `、` waylib/src/server/protocols/wsecuritycontextmanager.h `、` waylib/src/server/protocols/wsessionlock.cpp `、` waylib/src/server/protocols/wsessionlock.h `、` waylib/src/server/protocols/wsessionlockmanager.cpp `、` waylib/src/server/protocols/wsessionlockmanager.h `、` waylib/src/server/protocols/wsessionlocksurface.cpp `、` waylib/src/server/protocols/wsessionlocksurface.h `、` waylib/src/server/protocols/wxdgdecorationmanager.cpp `、` waylib/src/server/protocols/wxdgdecorationmanager.h `、` waylib/src/server/protocols/wxdgdialogmanagerv1.cpp `、` waylib/src/server/protocols/wxdgdialogmanagerv1.h `、` waylib/src/server/protocols/wxdgoutput.cpp `、` waylib/src/server/protocols/wxdgpopupsurface.cpp `、` waylib/src/server/protocols/wxdgpopupsurface.h `、` waylib/src/server/protocols/wxdgshell.cpp `、` waylib/src/server/protocols/wxdgshell.h `、` waylib/src/server/protocols/wxdgsurface.cpp `、` waylib/src/server/protocols/wxdgsurface.h `、` waylib/src/server/protocols/wxdgtoplevelsurface.cpp `、` waylib/src/server/protocols/wxdgtoplevelsurface.h `、` waylib/src/server/protocols/wxdgtopleveltagmanager.cpp `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/src/server/protocols/wxwayland.h `、` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `、` waylib/src/server/qtquick/private/wbufferrenderer.cpp `、` waylib/src/server/qtquick/private/wbufferrenderer_p.h `、` waylib/src/server/qtquick/private/woutputitem_p.h `、` waylib/src/server/qtquick/private/woutputviewport_p.h `、` waylib/src/server/qtquick/private/wrenderbuffernode.cpp `、` waylib/src/server/qtquick/private/wsurfaceitem_p.h `、` waylib/src/server/qtquick/wbufferitem.cpp `、` waylib/src/server/qtquick/wbufferitem.h `、` waylib/src/server/qtquick/wlayersurfaceitem.cpp `、` waylib/src/server/qtquick/woutputhelper.cpp `、` waylib/src/server/qtquick/woutputhelper.h `、` waylib/src/server/qtquick/woutputitem.cpp `、` waylib/src/server/qtquick/woutputlayer.cpp `、` waylib/src/server/qtquick/woutputlayer.h `、` waylib/src/server/qtquick/woutputlayoutitem.cpp `、` waylib/src/server/qtquick/woutputlayoutitem.h `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/woutputrenderwindow.h `、` waylib/src/server/qtquick/woutputviewport.cpp `、` waylib/src/server/qtquick/woutputviewport.h `、` waylib/src/server/qtquick/wquickcursor.cpp `、` waylib/src/server/qtquick/wquickoutputlayout.cpp `、` waylib/src/server/qtquick/wrenderhelper.cpp `、` waylib/src/server/qtquick/wrenderhelper.h `、` waylib/src/server/qtquick/wsgtextureprovider.cpp `、` waylib/src/server/qtquick/wsgtextureprovider.h `、` waylib/src/server/qtquick/wsurfaceitem.cpp `、` waylib/src/server/qtquick/wxdgpopupsurfaceitem.cpp `、` waylib/src/server/qtquick/wxdgtoplevelsurfaceitem.cpp `、` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `、` waylib/src/server/utils/wbufferdumper.cpp `、` waylib/src/server/utils/wbufferdumper.h `、` waylib/src/server/utils/wcontainerof.h `、` waylib/src/server/utils/wcursorimage.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.h `、` waylib/src/server/utils/wimagebuffer.cpp `、` waylib/src/server/utils/wimagebuffer.h `、` waylib/src/server/utils/wlogging.h `、` waylib/src/server/utils/wscopedvalue.h `、` waylib/src/server/utils/wscoplistener.cpp `、` waylib/src/server/utils/wscoplistener.h `、` waylib/src/server/utils/wtools.cpp `、` waylib/src/server/utils/wwrappointer.h `、` waylib/src/server/wayliblogging.cpp `、` waylib/src/server/wayliblogging.h `、` waylib/tests/manual/live/helper.h `、` waylib/tests/manual/live/main.cpp `、` waylib/tests/unit_tests/CMakeLists.txt `、` waylib/tests/unit_tests/test_containerof/CMakeLists.txt `、` waylib/tests/unit_tests/test_containerof/main.cpp `、` waylib/tests/unit_tests/test_containerof/negative_compile.cpp `、` waylib/tests/unit_tests/test_native_handles/CMakeLists.txt `、` waylib/tests/unit_tests/test_native_handles/main.cpp `、` waylib/tests/unit_tests/test_native_lifecycle/CMakeLists.txt `、` waylib/tests/unit_tests/test_native_lifecycle/main.cpp `、` waylib/tests/unit_tests/test_wlog/CMakeLists.txt `、` waylib/tests/unit_tests/test_wlog/main.cpp `、` waylib/tests/unit_tests/test_wobject_listeners/CMakeLists.txt `、` waylib/tests/unit_tests/test_wobject_listeners/main.cpp `、` waylib/tests/unit_tests/test_wpointer/CMakeLists.txt `、` waylib/tests/unit_tests/test_wpointer/main.cpp `、` waylib/tests/unit_tests/test_wscoplistener/CMakeLists.txt `、` waylib/tests/unit_tests/test_wscoplistener/main.cpp `、` waylib/tests/unit_tests/test_wwrappointer/CMakeLists.txt `、` waylib/tests/unit_tests/test_wwrappointer/main.cpp `、` waylib/tests/unit_tests/test_wwrappointer/wrapobject.h `、` wlroots/CMakeLists.txt `、` wlroots/cmake/waylib-wlroots.pc.in `。
- 实际改变：` 3rdparty/wlroots `、` CMakeLists.txt `、` qwlroots/.clang-format `、` qwlroots/.cursorindexingignore `、` qwlroots/.envrc `、` qwlroots/.github/workflows/archlinux-build.yaml `、` qwlroots/.github/workflows/reuse-check.yml `、` qwlroots/.gitignore `、` qwlroots/.obs/deepin_workflows.yml `、` qwlroots/.obs/workflows.yml `、` qwlroots/.reuse/dep5 `、` qwlroots/CMakeLists.txt `、` qwlroots/CMakePresets.json `、` qwlroots/LICENSES/Apache-2.0.txt `、` qwlroots/LICENSES/CC-BY-4.0.txt `、` qwlroots/LICENSES/CC0-1.0.txt `、` qwlroots/LICENSES/GPL-2.0-only.txt `、` qwlroots/LICENSES/GPL-3.0-only.txt `、` qwlroots/LICENSES/LGPL-3.0-only.txt `、` qwlroots/README.md `、` qwlroots/README.zh_CN.md `、` qwlroots/analyze_coverage.py `、` qwlroots/cmake/Helpers.cmake `、` qwlroots/cmake/PackageVersionHelper.cmake `、` qwlroots/cmake/WaylandScannerHelpers.cmake `、` qwlroots/debian/changelog `、` qwlroots/debian/control `、` qwlroots/debian/copyright `、` qwlroots/debian/rules `、` qwlroots/debian/source/format `、` qwlroots/debian/watch `、` qwlroots/default.nix `、` qwlroots/doc/ai/qwcolormanagementv1-usage-guide.md `、` qwlroots/doc/ai/qwlroots-wrapping-patterns-best-practices-en.md `、` qwlroots/doc/ai/qwlroots-wrapping-patterns-best-practices.md `、` qwlroots/examples/CMakeLists.txt `、` qwlroots/examples/tinywl/CMakeLists.txt `、` qwlroots/examples/tinywl/main.cpp `、` qwlroots/flake.lock `、` qwlroots/flake.nix `、` qwlroots/garnix.yaml `、` qwlroots/nix/default.nix `、` qwlroots/src/CMakeLists.txt `、` qwlroots/src/cmake/CMakeConfig.cmake.in `、` qwlroots/src/cmake/pkgconfig.pc.in `、` qwlroots/src/cmake/qwconfig.h.in `、` qwlroots/src/interfaces/qwbackendinterface.h `、` qwlroots/src/interfaces/qwbufferinterface.h `、` qwlroots/src/interfaces/qwextimagecapturesourcev1interface.h `、` qwlroots/src/interfaces/qwinterface.h `、` qwlroots/src/interfaces/qwkeyboardinterface.h `、` qwlroots/src/interfaces/qwoutputinterface.h `、` qwlroots/src/interfaces/qwpointerinterface.h `、` qwlroots/src/interfaces/qwrendererinterface.h `、` qwlroots/src/interfaces/qwswitchinterface.h `、` qwlroots/src/interfaces/qwtabletpadinterface.h `、` qwlroots/src/qwbackend.cpp `、` qwlroots/src/qwbackend.h `、` qwlroots/src/qwdisplay.h `、` qwlroots/src/qwglobal.h `、` qwlroots/src/qwobject.cpp `、` qwlroots/src/qwobject.h `、` qwlroots/src/qwsession.h `、` qwlroots/src/render/qwallocator.h `、` qwlroots/src/render/qwcolor.h `、` qwlroots/src/render/qwdmabuf.h `、` qwlroots/src/render/qwdrmformatset.h `、` qwlroots/src/render/qwdrmsyncobj.h `、` qwlroots/src/render/qwegl.h `、` qwlroots/src/render/qwrenderer.h `、` qwlroots/src/render/qwswapchain.h `、` qwlroots/src/render/qwtexture.h `、` qwlroots/src/types/qwalphamodifierv1.h `、` qwlroots/src/types/qwbuffer.h `、` qwlroots/src/types/qwcolormanagerv1.h `、` qwlroots/src/types/qwcompositor.h `、` qwlroots/src/types/qwcontenttypev1.h `、` qwlroots/src/types/qwcursor.h `、` qwlroots/src/types/qwcursorshapev1.h `、` qwlroots/src/types/qwdamagering.h `、` qwlroots/src/types/qwdatacontrolv1.h `、` qwlroots/src/types/qwdatadevice.h `、` qwlroots/src/types/qwdrm.h `、` qwlroots/src/types/qwdrmleasev1.h `、` qwlroots/src/types/qwexportdmabufv1.h `、` qwlroots/src/types/qwextdatacontrolv1.h `、` qwlroots/src/types/qwextforeigntoplevellistv1.h `、` qwlroots/src/types/qwextimagecapturesourcev1.h `、` qwlroots/src/types/qwextimagecopycapturev1.h `、` qwlroots/src/types/qwforeigntoplevelhandlev1.h `、` qwlroots/src/types/qwfractionalscalemanagerv1.h `、` qwlroots/src/types/qwfullscreenshellv1.h `、` qwlroots/src/types/qwgammacontorlv1.h `、` qwlroots/src/types/qwidleinhibitv1.h `、` qwlroots/src/types/qwidlenotifyv1.h `、` qwlroots/src/types/qwinputdevice.cpp `、` qwlroots/src/types/qwinputdevice.h `、` qwlroots/src/types/qwinputmethodv2.h `、` qwlroots/src/types/qwkeyboard.h `、` qwlroots/src/types/qwkeyboardgroup.h `、` qwlroots/src/types/qwkeyboardshortcutsinhibitv1.h `、` qwlroots/src/types/qwlayershellv1.h `、` qwlroots/src/types/qwlinuxdmabufv1.h `、` qwlroots/src/types/qwlinuxdrmsyncobjv1.h `、` qwlroots/src/types/qwoutput.h `、` qwlroots/src/types/qwoutputlayer.h `、` qwlroots/src/types/qwoutputlayout.h `、` qwlroots/src/types/qwoutputmanagementv1.h `、` qwlroots/src/types/qwoutputpowermanagementv1.h `、` qwlroots/src/types/qwpointer.h `、` qwlroots/src/types/qwpointerconstraintsv1.h `、` qwlroots/src/types/qwpointergesturesv1.h `、` qwlroots/src/types/qwpresentation.h `、` qwlroots/src/types/qwprimaryselection.h `、` qwlroots/src/types/qwprimaryselectionv1.h `、` qwlroots/src/types/qwrelativepointerv1.h `、` qwlroots/src/types/qwscene.h `、` qwlroots/src/types/qwscreencopyv1.h `、` qwlroots/src/types/qwseat.h `、` qwlroots/src/types/qwsecuritycontextmanagerv1.h `、` qwlroots/src/types/qwsessionlockv1.h `、` qwlroots/src/types/qwshm.h `、` qwlroots/src/types/qwsinglepixelbufferv1.h `、` qwlroots/src/types/qwsubcompositor.h `、` qwlroots/src/types/qwswitch.h `、` qwlroots/src/types/qwtablet.h `、` qwlroots/src/types/qwtabletpad.h `、` qwlroots/src/types/qwtabletv2.h `、` qwlroots/src/types/qwtearingcontrolv1.h `、` qwlroots/src/types/qwtextinputv3.h `、` qwlroots/src/types/qwtouch.h `、` qwlroots/src/types/qwtransientseatv1.h `、` qwlroots/src/types/qwviewporter.h `、` qwlroots/src/types/qwvirtualkeyboardv1.h `、` qwlroots/src/types/qwvirtualpointerv1.h `、` qwlroots/src/types/qwxcursormanager.h `、` qwlroots/src/types/qwxdgactivationv1.h `、` qwlroots/src/types/qwxdgdecorationmanagerv1.h `、` qwlroots/src/types/qwxdgdialogv1.h `、` qwlroots/src/types/qwxdgforeignregistry.h `、` qwlroots/src/types/qwxdgforeignv1.h `、` qwlroots/src/types/qwxdgforeignv2.h `、` qwlroots/src/types/qwxdgoutputv1.h `、` qwlroots/src/types/qwxdgshell.h `、` qwlroots/src/types/qwxwayland.h `、` qwlroots/src/types/qwxwaylandserver.h `、` qwlroots/src/types/qwxwaylandshellv1.h `、` qwlroots/src/types/qwxwaylandsurface.h `、` qwlroots/src/util/qwbox.h `、` qwlroots/src/util/qwlogging.h `、` qwlroots/src/util/qwsignalconnector.h `、` qwlroots/tests/CMakeLists.txt `、` qwlroots/tests/qwobject_test/CMakeLists.txt `、` qwlroots/tests/qwobject_test/qwabc.h `、` qwlroots/tests/qwobject_test/test_qwobject.cpp `、` qwlroots/tests/qwobject_test/wlr_abc.cpp `、` qwlroots/tests/qwobject_test/wlr_abc.h `、` qwlroots/tests/test_qwobject.cpp `、` test_project/CMakeLists.txt `、` test_project/main.cpp `、` waylib/.github/workflows/archlinux-build-wlroots-19.yaml `、` waylib/.reuse/dep5 `、` waylib/CMakeLists.txt `、` waylib/README.md `、` waylib/README.zh_CN.md `、` waylib/cmake/WaylandScannerHelpers.cmake `、` waylib/debian/control `、` waylib/debian/rules `、` waylib/examples/blur/helper.h `、` waylib/examples/blur/main.cpp `、` waylib/examples/outputcopy/helper.h `、` waylib/examples/outputcopy/main.cpp `、` waylib/examples/outputviewport/helper.h `、` waylib/examples/outputviewport/main.cpp `、` waylib/examples/surface-delegate/main.cpp `、` waylib/examples/tinywl/helper.cpp `、` waylib/examples/tinywl/helper.h `、` waylib/examples/tinywl/main.cpp `、` waylib/examples/tinywl/output.cpp `、` waylib/examples/tinywl/rootsurfacecontainer.cpp `、` waylib/examples/tinywl/rootsurfacecontainer.h `、` waylib/examples/tinywl/surfacewrapper.cpp `、` waylib/flake.lock `、` waylib/flake.nix `、` waylib/nix/default.nix `、` waylib/src/cmake/WaylibServerConfig.cmake.in `、` waylib/src/cmake/WaylibSharedServerConfig.cmake.in `、` waylib/src/server/CMakeLists.txt `、` waylib/src/server/cmake/wconfig.h.in `、` waylib/src/server/kernel/private/wcursor_p.h `、` waylib/src/server/kernel/private/wglobal_p.h `、` waylib/src/server/kernel/private/woutputlayout_p.h `、` waylib/src/server/kernel/private/wserver_p.h `、` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/private/wtoplevelsurface_p.h `、` waylib/src/server/kernel/wbackend.cpp `、` waylib/src/server/kernel/wbackend.h `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wcursor.h `、` waylib/src/server/kernel/wglobal.cpp `、` waylib/src/server/kernel/wglobal.h `、` waylib/src/server/kernel/winputdevice.cpp `、` waylib/src/server/kernel/winputdevice.h `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `、` waylib/src/server/kernel/woutput.cpp `、` waylib/src/server/kernel/woutput.h `、` waylib/src/server/kernel/woutputlayout.cpp `、` waylib/src/server/kernel/woutputlayout.h `、` waylib/src/server/kernel/wpointer.h `、` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/kernel/wseat.h `、` waylib/src/server/kernel/wserver.cpp `、` waylib/src/server/kernel/wserver.h `、` waylib/src/server/kernel/wsocket.cpp `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/kernel/wtoplevelsurface.cpp `、` waylib/src/server/kernel/wtoplevelsurface.h `、` waylib/src/server/kernel/wxcursorimage.cpp `、` waylib/src/server/kernel/wxcursorimage.h `、` waylib/src/server/pch/pch.hxx `、` waylib/src/server/platformplugin/qwlrootscreen.cpp `、` waylib/src/server/platformplugin/qwlrootscreen.h `、` waylib/src/server/platformplugin/qwlrootscursor.h `、` waylib/src/server/platformplugin/qwlrootsintegration.cpp `、` waylib/src/server/platformplugin/qwlrootsintegration.h `、` waylib/src/server/platformplugin/qwlrootswindow.cpp `、` waylib/src/server/platformplugin/qwlrootswindow.h `、` waylib/src/server/protocols/ext_foreign_toplevel_image_capture_source_manager_v1.h `、` waylib/src/server/protocols/private/winputmethodv2.cpp `、` waylib/src/server/protocols/private/winputmethodv2_p.h `、` waylib/src/server/protocols/private/wtextinputv1.cpp `、` waylib/src/server/protocols/private/wtextinputv1_p.h `、` waylib/src/server/protocols/private/wtextinputv2.cpp `、` waylib/src/server/protocols/private/wtextinputv2_p.h `、` waylib/src/server/protocols/private/wtextinputv3.cpp `、` waylib/src/server/protocols/private/wtextinputv3_p.h `、` waylib/src/server/protocols/private/wvirtualkeyboardv1.cpp `、` waylib/src/server/protocols/private/wvirtualkeyboardv1_p.h `、` waylib/src/server/protocols/private/wxwaylandsurface_p.h `、` waylib/src/server/protocols/qwextforeigntoplevelimagecapturesourcemanagerv1.h `、` waylib/src/server/protocols/wcursorshapemanagerv1.cpp `、` waylib/src/server/protocols/wcursorshapemanagerv1.h `、` waylib/src/server/protocols/wextforeigntoplevellistv1.cpp `、` waylib/src/server/protocols/wextforeigntoplevellistv1.h `、` waylib/src/server/protocols/wforeigntoplevelv1.cpp `、` waylib/src/server/protocols/wforeigntoplevelv1.h `、` waylib/src/server/protocols/winputmethodhelper.cpp `、` waylib/src/server/protocols/winputmethodhelper.h `、` waylib/src/server/protocols/winputpopupsurface.cpp `、` waylib/src/server/protocols/winputpopupsurface.h `、` waylib/src/server/protocols/wlayershell.cpp `、` waylib/src/server/protocols/wlayershell.h `、` waylib/src/server/protocols/wlayersurface.cpp `、` waylib/src/server/protocols/wlayersurface.h `、` waylib/src/server/protocols/woutputmanagerv1.cpp `、` waylib/src/server/protocols/woutputmanagerv1.h `、` waylib/src/server/protocols/wsecuritycontextmanager.cpp `、` waylib/src/server/protocols/wsecuritycontextmanager.h `、` waylib/src/server/protocols/wsessionlock.cpp `、` waylib/src/server/protocols/wsessionlock.h `、` waylib/src/server/protocols/wsessionlockmanager.cpp `、` waylib/src/server/protocols/wsessionlockmanager.h `、` waylib/src/server/protocols/wsessionlocksurface.cpp `、` waylib/src/server/protocols/wsessionlocksurface.h `、` waylib/src/server/protocols/wxdgdecorationmanager.cpp `、` waylib/src/server/protocols/wxdgdecorationmanager.h `、` waylib/src/server/protocols/wxdgdialogmanagerv1.cpp `、` waylib/src/server/protocols/wxdgdialogmanagerv1.h `、` waylib/src/server/protocols/wxdgoutput.cpp `、` waylib/src/server/protocols/wxdgpopupsurface.cpp `、` waylib/src/server/protocols/wxdgpopupsurface.h `、` waylib/src/server/protocols/wxdgshell.cpp `、` waylib/src/server/protocols/wxdgshell.h `、` waylib/src/server/protocols/wxdgsurface.cpp `、` waylib/src/server/protocols/wxdgsurface.h `、` waylib/src/server/protocols/wxdgtoplevelsurface.cpp `、` waylib/src/server/protocols/wxdgtoplevelsurface.h `、` waylib/src/server/protocols/wxdgtopleveltagmanager.cpp `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/src/server/protocols/wxwayland.h `、` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.h `、` waylib/src/server/qtquick/private/wbufferrenderer.cpp `、` waylib/src/server/qtquick/private/wbufferrenderer_p.h `、` waylib/src/server/qtquick/private/woutputitem_p.h `、` waylib/src/server/qtquick/private/woutputviewport_p.h `、` waylib/src/server/qtquick/private/wrenderbuffernode.cpp `、` waylib/src/server/qtquick/private/wsurfaceitem_p.h `、` waylib/src/server/qtquick/wbufferitem.cpp `、` waylib/src/server/qtquick/wbufferitem.h `、` waylib/src/server/qtquick/wlayersurfaceitem.cpp `、` waylib/src/server/qtquick/woutputhelper.cpp `、` waylib/src/server/qtquick/woutputhelper.h `、` waylib/src/server/qtquick/woutputitem.cpp `、` waylib/src/server/qtquick/woutputlayer.cpp `、` waylib/src/server/qtquick/woutputlayer.h `、` waylib/src/server/qtquick/woutputlayoutitem.cpp `、` waylib/src/server/qtquick/woutputlayoutitem.h `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/woutputrenderwindow.h `、` waylib/src/server/qtquick/woutputviewport.cpp `、` waylib/src/server/qtquick/woutputviewport.h `、` waylib/src/server/qtquick/wquickcursor.cpp `、` waylib/src/server/qtquick/wquickoutputlayout.cpp `、` waylib/src/server/qtquick/wrenderhelper.cpp `、` waylib/src/server/qtquick/wrenderhelper.h `、` waylib/src/server/qtquick/wsgtextureprovider.cpp `、` waylib/src/server/qtquick/wsgtextureprovider.h `、` waylib/src/server/qtquick/wsurfaceitem.cpp `、` waylib/src/server/qtquick/wxdgpopupsurfaceitem.cpp `、` waylib/src/server/qtquick/wxdgtoplevelsurfaceitem.cpp `、` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `、` waylib/src/server/utils/wbufferdumper.cpp `、` waylib/src/server/utils/wbufferdumper.h `、` waylib/src/server/utils/wcontainerof.h `、` waylib/src/server/utils/wcursorimage.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.h `、` waylib/src/server/utils/wimagebuffer.cpp `、` waylib/src/server/utils/wimagebuffer.h `、` waylib/src/server/utils/wlogging.h `、` waylib/src/server/utils/wscopedvalue.h `、` waylib/src/server/utils/wscoplistener.cpp `、` waylib/src/server/utils/wscoplistener.h `、` waylib/src/server/utils/wtools.cpp `、` waylib/src/server/utils/wwrappointer.h `、` waylib/src/server/wayliblogging.cpp `、` waylib/src/server/wayliblogging.h `、` waylib/tests/manual/live/helper.h `、` waylib/tests/manual/live/main.cpp `、` waylib/tests/unit_tests/CMakeLists.txt `、` waylib/tests/unit_tests/test_containerof/CMakeLists.txt `、` waylib/tests/unit_tests/test_containerof/main.cpp `、` waylib/tests/unit_tests/test_containerof/negative_compile.cpp `、` waylib/tests/unit_tests/test_native_handles/CMakeLists.txt `、` waylib/tests/unit_tests/test_native_handles/main.cpp `、` waylib/tests/unit_tests/test_native_lifecycle/CMakeLists.txt `、` waylib/tests/unit_tests/test_native_lifecycle/main.cpp `、` waylib/tests/unit_tests/test_wlog/CMakeLists.txt `、` waylib/tests/unit_tests/test_wlog/main.cpp `、` waylib/tests/unit_tests/test_wobject_listeners/CMakeLists.txt `、` waylib/tests/unit_tests/test_wobject_listeners/main.cpp `、` waylib/tests/unit_tests/test_wpointer/CMakeLists.txt `、` waylib/tests/unit_tests/test_wpointer/main.cpp `、` waylib/tests/unit_tests/test_wscoplistener/CMakeLists.txt `、` waylib/tests/unit_tests/test_wscoplistener/main.cpp `、` waylib/tests/unit_tests/test_wwrappointer/CMakeLists.txt `、` waylib/tests/unit_tests/test_wwrappointer/main.cpp `、` waylib/tests/unit_tests/test_wwrappointer/wrapobject.h `、` wlroots/CMakeLists.txt `、` wlroots/cmake/waylib-wlroots.pc.in `。
- 排除的来源路径：` .github/workflows/qwlroots-archlinux-build.yml `、` .github/workflows/qwlroots-debian-build.yml `、` .github/workflows/qwlroots-deepin-build.yml `、` .github/workflows/treeland-archlinux-build.yml `、` .github/workflows/waylib-archlinux-build.yml `、` .github/workflows/waylib-debian-build.yml `、` .github/workflows/waylib-deepin-build.yml `、` .gitignore `、` 3rdparty/wlroots/types/buffer/buffer.c `、` CMakeLists.txt `、` README.md `、` README.zh_CN.md `、` debian/control `、` debian/treeland-dev.install `、` default.nix `、` examples/test_glass/CMakeLists.txt `、` examples/test_glass/helper.cpp `、` examples/test_glass/helper.h `、` examples/test_glass/main.cpp `、` examples/test_window_bg/main.cpp `、` flake.nix `、` nix/default.nix `、` src/core/imcandidatepanelmanager.cpp `、` src/core/lockscreen.cpp `、` src/core/qmlengine.cpp `、` src/core/qmlengine.h `、` src/core/rootsurfacecontainer.cpp `、` src/core/rootsurfacecontainer.h `、` src/core/shellhandler.cpp `、` src/core/shellhandler.h `、` src/input/inputdevice.cpp `、` src/input/inputmanager.cpp `、` src/input/inputmanager.h `、` src/main.cpp `、` src/modules/CMakeLists.txt `、` src/modules/activation/activationmanagerinterfacev1.cpp `、` src/modules/app-id-resolver/appidresolver.cpp `、` src/modules/capture/capture.cpp `、` src/modules/capture/capture.h `、` src/modules/capture/impl/capturev1impl.cpp `、` src/modules/capture/impl/capturev1impl.h `、` src/modules/dde-shell/ddeshellmanagerinterfacev1.cpp `、` src/modules/dde-shell/ddeshellmanagerinterfacev1.h `、` src/modules/ddm/ddminterfacev1.cpp `、` src/modules/ddm/ddminterfacev1.h `、` src/modules/foreign-toplevel/dockpreviewcontextv1.h `、` src/modules/foreign-toplevel/foreigntoplevelhandlev1.h `、` src/modules/foreign-toplevel/foreigntoplevelmanagerv1.cpp `、` src/modules/input-manager/inputmanagerinterfacev1.cpp `、` src/modules/input-manager/inputmanagerinterfacev1.h `、` src/modules/keyboard-state-notify/keyboardstatenotifymanagerinterfacev1.cpp `、` src/modules/output-manager/outputmanagement.cpp `、` src/modules/output-manager/outputmanagement.h `、` src/modules/personalization/personalizationmanagerinterfacev1.cpp `、` src/modules/personalization/personalizationmanagerinterfacev1.h `、` src/modules/prelaunch-splash/prelaunchsplash.cpp `、` src/modules/prelaunch-splash/prelaunchsplash.h `、` src/modules/screensaver/screensaverinterfacev1.cpp `、` src/modules/shortcut/shortcutmanager.cpp `、` src/modules/virtual-output/virtualoutputmanagerinterfacev1.cpp `、` src/modules/virtual-output/virtualoutputmanagerinterfacev1.h `、` src/modules/wallpaper-color/wallpapercolorinterfacev1.cpp `、` src/modules/wallpaper/wallpapermanagerinterfacev1.cpp `、` src/modules/wallpaper/wallpapermanagerinterfacev1.h `、` src/modules/wallpaper/wallpapernotifierinterfacev1.cpp `、` src/modules/wallpaper/wallpapernotifierinterfacev1.h `、` src/modules/wallpaper/wallpapershellinterfacev1.cpp `、` src/modules/wallpaper/wallpapershellinterfacev1.h `、` src/modules/window-management/windowmanagementinterfacev1.cpp `、` src/modules/wine-window-management/winewindowmanagement.cpp `、` src/modules/wine-window-state/winewindowstate.cpp `、` src/output/backlight.cpp `、` src/output/output.cpp `、` src/output/outputmanager.cpp `、` src/seat/helper.cpp `、` src/seat/helper.h `、` src/seat/seatsmanager.cpp `、` src/surface/seatsurfacemanager.cpp `、` src/surface/seatsurfacemanager.h `、` src/surface/surfacewrapper.cpp `、` src/surface/surfacewrapper.h `、` src/utils/fpsdisplaymanager.cpp `、` src/utils/fpsdisplaymanager.h `、` src/wallpaper/wallpaperitem.cpp `、` src/wallpaper/wallpapermanager.cpp `、` src/wallpaper/wallpapersurface.cpp `、` src/wallpaper/wallpapersurface.h `、` src/wallpaper/wallpaperswitcheritem.cpp `、` tests/test_effect_glass/CMakeLists.txt `、` tests/test_effect_glass/TestHelper.cpp `、` tests/test_effect_glass/TestHelper.h `、` tests/test_effect_glass/main.cpp `。
- 已审本地集成路径：` CMakeLists.txt `、` waylib/src/cmake/WaylibSharedServerConfig.cmake.in `、` test_project/CMakeLists.txt `、` test_project/main.cpp `。
- 依赖 ` 3rdparty/wlroots `：updated；` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 9582881ddc2e71c73f01eb1f8f5efd0b87a8b107 ` 和原目标 ` 93d893187e4bf4491a089d567e31a7a7da532c00 ` 查询。
- 原审核说明：` 完成已授权原生迁移及真实 pkg-config 消费检查；新增私有依赖安装仅排除无现存类声明或调用方的 WSurfaceHandler 陈旧实现头，不补造兼容接口，其他公共目标、命名空间和有效头保持完整。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/9e58c1f7a8e4af110340e8ada6d24398d2f90c1a.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` d3726e904dac69ac8d2e5f319c2d7f076b645e23 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-28"></a>
### 28. N5 / ` fix: restore declarativeData cleanup in WObject::teardown `

- 本仓内容路径：` waylib/src/server/kernel/wglobal.cpp `。
- 实际改变：` waylib/src/server/kernel/wglobal.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 1708d699270363c01d636bce8f444628ba6b95d1 ` 和原目标 ` 098ac7e1d82f7f8c0ac099eb34bbd5ec16ebaf4b ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 2e938af1ae80f934aa36823d7fd0e34e3f147589 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-29"></a>
### 29. N5 / ` fix(xwayland): synchronize EWMH desktop properties `

- 本仓内容路径：` waylib/src/server/protocols/wxdgoutput.cpp `、` waylib/src/server/protocols/wxdgoutput.h `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/src/server/protocols/wxwayland.h `。
- 实际改变：` waylib/src/server/protocols/wxdgoutput.cpp `、` waylib/src/server/protocols/wxdgoutput.h `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/src/server/protocols/wxwayland.h `。
- 排除的来源路径：` src/core/shellhandler.cpp `、` src/core/shellhandler.h `、` src/seat/helper.cpp `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 293dbe5ef45d3e3bf597126ba990a77003502210 ` 和原目标 ` c64f150a29bd79a6cacf14b4a7878de7f76d0978 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 6a4067b259530f22d6accd973cc7460f668d321c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-30"></a>
### 30. N5 / ` refactor: extract WWaylandResource from WObject `

- 本仓内容路径：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/private/wglobal_p.h `、` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/private/wtoplevelsurface_p.h `、` waylib/src/server/kernel/private/wwaylandresource_p.h `、` waylib/src/server/kernel/wglobal.cpp `、` waylib/src/server/kernel/wglobal.h `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/kernel/wtoplevelsurface.cpp `、` waylib/src/server/kernel/wtoplevelsurface.h `、` waylib/src/server/kernel/wwaylandresource.cpp `、` waylib/src/server/kernel/wwaylandresource.h `、` waylib/src/server/protocols/private/wtextinput_p.h `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/src/server/protocols/wxwayland.h `、` waylib/src/server/qtquick/private/wquicksocketattached.cpp `。
- 实际改变：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/private/wglobal_p.h `、` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/private/wtoplevelsurface_p.h `、` waylib/src/server/kernel/private/wwaylandresource_p.h `、` waylib/src/server/kernel/wglobal.cpp `、` waylib/src/server/kernel/wglobal.h `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/kernel/wtoplevelsurface.cpp `、` waylib/src/server/kernel/wtoplevelsurface.h `、` waylib/src/server/kernel/wwaylandresource.cpp `、` waylib/src/server/kernel/wwaylandresource.h `、` waylib/src/server/protocols/private/wtextinput_p.h `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/src/server/protocols/wxwayland.h `、` waylib/src/server/qtquick/private/wquicksocketattached.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` 78773de1f242c1438b78f716c7d11522b58022a5 ` 和原目标 ` 0a38730db85e772c6b80050210344fde60dddc61 ` 查询。
- 原审核说明：` 在剔除陈旧内部安装头后的真实相邻源码快照上接入 WWaylandResource；本来源的受保护差异仍仅为对应资源头的必要公开接入。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/b57b8ff6ca4f7d109a9fb60d5eba6793e4c1003e.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 8dac6a4963f2cf229258e8a2c40fb317c365883f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-31"></a>
### 31. N5 / ` fix(waylib): adapt native handles after qwlroots removal `

- 本仓内容路径：` waylib/src/server/protocols/wxdgoutput.cpp `、` waylib/src/server/protocols/wxwayland.cpp `。
- 实际改变：` waylib/src/server/protocols/wxdgoutput.cpp `、` waylib/src/server/protocols/wxwayland.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-evidence.json`；以来源 ` b037ac5c5dcd33032424d546a312d0ad702c4bf0 ` 和原目标 ` 11e096a97e13d4b8740cea0d735f758e66b6534c ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 9b069501667a3171600b360d65b6224ee4291fbd `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-32"></a>
### 32. N6 / ` fix(waylib): drop invalid rect count assertion in toPixmanRegion `

- 本仓内容路径：` waylib/src/server/utils/wtools.cpp `。
- 实际改变：` waylib/src/server/utils/wtools.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b248e3682368a351ee2d4622c06fbe5e9c2d3b16 ` 和原目标 ` a4ffa524241607aaeb72724845956ad5f26216da ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 829a3932472f2ba3021c52541660e52a0b5629a2 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-33"></a>
### 33. N6 / ` fix: support restart after WServer::stop `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/kernel/wserver.cpp `、` waylib/src/server/kernel/wserver.h `、` waylib/src/server/kernel/wsocket.cpp `、` waylib/src/server/kernel/wsocket.h `、` waylib/src/server/protocols/private/winputmethodv2.cpp `、` waylib/src/server/protocols/private/winputmethodv2_p.h `、` waylib/src/server/protocols/private/wtextinputv3.cpp `、` waylib/src/server/protocols/private/wvirtualkeyboardv1.cpp `、` waylib/src/server/protocols/private/wvirtualkeyboardv1_p.h `、` waylib/src/server/protocols/wcursorshapemanagerv1.cpp `、` waylib/src/server/protocols/wcursorshapemanagerv1.h `、` waylib/src/server/protocols/wextforeigntoplevellistv1.cpp `、` waylib/src/server/protocols/wforeigntoplevelv1.cpp `、` waylib/src/server/protocols/wlayershell.cpp `、` waylib/src/server/protocols/wsecuritycontextmanager.cpp `、` waylib/src/server/protocols/wsecuritycontextmanager.h `、` waylib/src/server/protocols/wsessionlockmanager.cpp `、` waylib/src/server/protocols/wxdgdecorationmanager.cpp `、` waylib/src/server/protocols/wxdgdialogmanagerv1.cpp `、` waylib/src/server/protocols/wxdgshell.cpp `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/tests/unit_tests/test_native_handles/main.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `、` waylib/src/server/kernel/wserver.cpp `、` waylib/src/server/kernel/wserver.h `、` waylib/src/server/kernel/wsocket.cpp `、` waylib/src/server/kernel/wsocket.h `、` waylib/src/server/protocols/private/winputmethodv2.cpp `、` waylib/src/server/protocols/private/winputmethodv2_p.h `、` waylib/src/server/protocols/private/wtextinputv3.cpp `、` waylib/src/server/protocols/private/wvirtualkeyboardv1.cpp `、` waylib/src/server/protocols/private/wvirtualkeyboardv1_p.h `、` waylib/src/server/protocols/wcursorshapemanagerv1.cpp `、` waylib/src/server/protocols/wcursorshapemanagerv1.h `、` waylib/src/server/protocols/wextforeigntoplevellistv1.cpp `、` waylib/src/server/protocols/wforeigntoplevelv1.cpp `、` waylib/src/server/protocols/wlayershell.cpp `、` waylib/src/server/protocols/wsecuritycontextmanager.cpp `、` waylib/src/server/protocols/wsecuritycontextmanager.h `、` waylib/src/server/protocols/wsessionlockmanager.cpp `、` waylib/src/server/protocols/wxdgdecorationmanager.cpp `、` waylib/src/server/protocols/wxdgdialogmanagerv1.cpp `、` waylib/src/server/protocols/wxdgshell.cpp `、` waylib/src/server/protocols/wxwayland.cpp `、` waylib/tests/unit_tests/test_native_handles/main.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f2773149b47ddca53b9fc234172830073964334b ` 和原目标 ` 09e92a03ef380917965047fb18010131303e4b98 ` 查询。
- 原审核说明：` 逐路径三方合入来源变化，保留已确认的目标布局、依赖接入、命名空间与非冲突本地修复；源前后对象及目标前后对象逐项绑定。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/c2fee2e4fd0aed29f0c8ee9537076b8a9d403c1c.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 7c717fbbc24f0c7d7b7dc6e6bc767a770bb0258f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-34"></a>
### 34. N6 / ` fix(waylib): guard removeListeners against null owner in detach `

- 本仓内容路径：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 实际改变：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ecb32e8a1fab02512038324e5a5e7a6cdf8ffa74 ` 和原目标 ` 41c86dc64620e0c8e71a709b070ba43fb6605cd9 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` cc3a40184cd538ce280aa46d9365cabb50c668e1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-35"></a>
### 35. N6 / ` fix(waylib): skip removeListeners in detach during window destruction `

- 本仓内容路径：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 实际改变：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ee787154f3035363bd1c3a95741fd5283b1796f3 ` 和原目标 ` f6c78a55d25f172bc9d682ac50ee3d3f09c8b231 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 96d32e9f367b37fe04f77d2b9e5a6e486b44a2aa `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-36"></a>
### 36. N6 / ` fix(waylib): commit a buffer for capture on static screens `

- 本仓内容路径：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 实际改变：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 447c3da6712695822738ee399ca08eb9c82eef4e ` 和原目标 ` ed0bd1a229adff58a1acffa0d2aeec5d28e1be5d ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` b303382581aaf549d9375a1f3dcaf2e9bf824da0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-37"></a>
### 37. N6 / ` refactor: move qtwaylandscanner from src/modules/tools to waylib/tools `

- 本仓内容路径：` waylib/CMakeLists.txt `、` waylib/tools/CMakeLists.txt `、` waylib/tools/qtwaylandscanner.cpp `。
- 实际改变：` waylib/CMakeLists.txt `、` waylib/tools/CMakeLists.txt `、` waylib/tools/qtwaylandscanner.cpp `。
- 排除的来源路径：` .agents/skills/treeland-private-wayland-protocol/SKILL.md `、` src/modules/CMakeLists.txt `、` src/modules/activation/CMakeLists.txt `、` src/modules/app-id-resolver/CMakeLists.txt `、` src/modules/dde-shell/CMakeLists.txt `、` src/modules/ddm/CMakeLists.txt `、` src/modules/foreign-toplevel/CMakeLists.txt `、` src/modules/input-manager/CMakeLists.txt `、` src/modules/keyboard-state-notify/CMakeLists.txt `、` src/modules/output-manager/CMakeLists.txt `、` src/modules/personalization/CMakeLists.txt `、` src/modules/prelaunch-splash/CMakeLists.txt `、` src/modules/screensaver/CMakeLists.txt `、` src/modules/shortcut/CMakeLists.txt `、` src/modules/virtual-output/CMakeLists.txt `、` src/modules/wallpaper-color/CMakeLists.txt `、` src/modules/wallpaper/CMakeLists.txt `、` src/modules/window-management/CMakeLists.txt `、` src/modules/wine-window-management/CMakeLists.txt `、` src/modules/wine-window-state/CMakeLists.txt `、` src/modules/tools/CMakeLists.txt `、` src/modules/tools/qtwaylandscanner.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2e27ca38141087e551e22330165c86d886bd8cdf ` 和原目标 ` 350e7b8af815d0ee111663f9686daae88f93df63 ` 查询。
- 原审核说明：` 将上游 scanner 和协议生成函数迁入 C，保留共享库与命名空间合同；移除来源 CMake 文件末尾多余空行。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/eb6e6905b6231c6be2292c7bbc57c9a1928c7b27.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 607d7c87fda0da5a019b40e7b339ea48c35c00fb `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-38"></a>
### 38. N6 / ` feat(wayland): implement cross-process subsurface protocol and rendering integration `

- 本仓内容路径：` waylib/debian/control `、` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/WSubsurface `、` waylib/src/server/kernel/private/wsubsurface_p.h `、` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/wsubsurface.cpp `、` waylib/src/server/kernel/wsubsurface.h `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `、` waylib/src/server/protocols/wremotesubsurfacemanagerv1.h `、` waylib/src/server/qtquick/private/wsurfaceitem_p.h `、` waylib/src/server/qtquick/wsurfaceitem.cpp `、` waylib/src/server/wayliblogging.cpp `、` waylib/src/server/wayliblogging.h `、` waylib/tools/CMakeLists.txt `。
- 实际改变：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/WSubsurface `、` waylib/src/server/kernel/private/wsubsurface_p.h `、` waylib/src/server/kernel/private/wsurface_p.h `、` waylib/src/server/kernel/wsubsurface.cpp `、` waylib/src/server/kernel/wsubsurface.h `、` waylib/src/server/kernel/wsurface.cpp `、` waylib/src/server/kernel/wsurface.h `、` waylib/src/server/protocols/wremotesubsurfacemanagerv1.cpp `、` waylib/src/server/protocols/wremotesubsurfacemanagerv1.h `、` waylib/src/server/qtquick/private/wsurfaceitem_p.h `、` waylib/src/server/qtquick/wsurfaceitem.cpp `、` waylib/src/server/wayliblogging.cpp `、` waylib/src/server/wayliblogging.h `、` waylib/tools/CMakeLists.txt `。
- 排除的来源路径：` .github/workflows/waylib-archlinux-build.yml `、` .github/workflows/waylib-debian-build.yml `、` .github/workflows/waylib-deepin-build.yml `、` REUSE.toml `、` src/modules/capture/capture.cpp `、` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8e41511b7dbc1ad148a23f5817b36527def9ddce ` 和原目标 ` 97a507e3b0bfff1a60d92c556ad890628bf87420 ` 查询。
- 原审核说明：` 同步已授权跨进程子表面 API；保留 WaylibShared 目标、实际命名空间与 QML URI。由显式 CMake 参数或环境变量指定本次 Git XML，省去不再使用的系统协议包依赖。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/773b23071dcd4ed01a82eb1c1218e00284403345.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 99ee1b5737ab41417d42ac4ea2ca452b6b9f1b19 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-39"></a>
### 39. N6 / ` refactor(waylib): rename OutputHelper output/qwoutput to outputViewport/output `

- 本仓内容路径：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 实际改变：` waylib/src/server/qtquick/woutputrenderwindow.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 53dffe1867ea3a13167eecff0d08343b3cc2a368 ` 和原目标 ` 055e192714a6f1fddb6619edaa694fc5a0ddfc35 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` ee48507b1f2e9b092d95c4a2b6f5e1588cffce7d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-40"></a>
### 40. N6 / ` docs: drop qwlroots references from agent docs and fix build instructions `

- 本仓内容路径：` waylib/README.md `、` waylib/README.zh_CN.md `、` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/wpointer.h `、` waylib/src/server/utils/wlogging.h `、` wlroots/CMakeLists.txt `、` wlroots/cmake/WlrootsProtocols.cmake `。
- 实际改变：` waylib/README.md `、` waylib/README.zh_CN.md `、` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/wpointer.h `、` waylib/src/server/utils/wlogging.h `、` wlroots/CMakeLists.txt `、` wlroots/cmake/WlrootsProtocols.cmake `。
- 排除的来源路径：` .agents/skills/logging-guidelines/SKILL.md `、` .agents/skills/treeland-private-wayland-protocol/SKILL.md `、` .agents/skills/upstream-wayland-protocol-wrapper/SKILL.md `、` AGENTS.md `、` REUSE.toml `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 30447d0582ccb582acf38cef4db4b729704dc6b6 ` 和原目标 ` 9e5db571fabf467e04cb9cee8c140fe25f8cede7 ` 查询。
- 原审核说明：` 同步 qwlroots 退休文档与注释，并按本地实际配置补齐 standalone 的显式协议目录参数；不更改原生包装和安装目标。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/95805e685187082bf4d98c48b3ad9b62aa3cb083.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 4256636980913e8d4f3f7e5d4991fb74dae43141 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-41"></a>
### 41. N6 / ` feat: support relative pointer motion `

- 本仓内容路径：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `、` waylib/src/server/kernel/wseat.h `、` waylib/src/server/protocols/WRelativePointerManagerV1 `、` waylib/src/server/protocols/wrelativepointermanagerv1.cpp `、` waylib/src/server/protocols/wrelativepointermanagerv1.h `。
- 实际改变：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `、` waylib/src/server/kernel/wseat.h `、` waylib/src/server/protocols/WRelativePointerManagerV1 `、` waylib/src/server/protocols/wrelativepointermanagerv1.cpp `、` waylib/src/server/protocols/wrelativepointermanagerv1.h `。
- 排除的来源路径：` REUSE.toml `、` src/seat/helper.cpp `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 80137e42c2dfa4b1ff7edb0c81ab75da9c9f171f ` 和原目标 ` 2eb3bb27299d7875cf3fc6b231f13a72b255cfab ` 查询。
- 原审核说明：` 按授权接入相对指针 API、WSeat 信号和新公共头；保留实际命名空间及完整独立开发包验收。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/bac6df1fc667642884ff0cf696e10c88c1f1e0ab.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` a4c3cc1f3934206dede125474835a9196c615d4e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-42"></a>
### 42. N6 / ` fix: use WPointer for cursorClient and skip redundant cursor updates `

- 本仓内容路径：` waylib/src/server/kernel/wseat.cpp `。
- 实际改变：` waylib/src/server/kernel/wseat.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 22609c6cb07f3493b948aeee2d018093478eca83 ` 和原目标 ` 2417ba7c1c5a418da1bfa917ff2ad26da20f333c ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` a7dc05dff36251c8395757fe172b2cd699408ca8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-43"></a>
### 43. N6 / ` build: bump version to 0.20.0-dev `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/.builds/archlinux.yml `、` 3rdparty/wlroots/.gitlab-ci.yml `、` 3rdparty/wlroots/backend/backend.c `、` 3rdparty/wlroots/backend/drm/drm.c `、` 3rdparty/wlroots/backend/libinput/events.c `、` 3rdparty/wlroots/backend/libinput/keyboard.c `、` 3rdparty/wlroots/backend/libinput/meson.build `、` 3rdparty/wlroots/backend/libinput/pointer.c `、` 3rdparty/wlroots/backend/libinput/switch.c `、` 3rdparty/wlroots/backend/libinput/tablet_pad.c `、` 3rdparty/wlroots/backend/libinput/tablet_tool.c `、` 3rdparty/wlroots/backend/session/session.c `、` 3rdparty/wlroots/include/backend/libinput.h `、` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/types/wlr_output.h `、` 3rdparty/wlroots/include/wlr/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `、` 3rdparty/wlroots/include/wlr/types/wlr_drm_lease_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_switch.h `、` 3rdparty/wlroots/include/xwayland/xwm.h `、` 3rdparty/wlroots/meson.build `、` 3rdparty/wlroots/render/allocator/shm.c `、` 3rdparty/wlroots/render/allocator/udmabuf.c `、` 3rdparty/wlroots/render/egl.c `、` 3rdparty/wlroots/render/pass.c `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/tinywl/Makefile `、` 3rdparty/wlroots/types/buffer/buffer.c `、` 3rdparty/wlroots/types/data_device/wlr_data_source.c `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `、` 3rdparty/wlroots/types/output/cursor.c `、` 3rdparty/wlroots/types/output/output.c `、` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `、` 3rdparty/wlroots/types/wlr_cursor.c `、` 3rdparty/wlroots/types/wlr_drm_lease_v1.c `、` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `、` 3rdparty/wlroots/types/wlr_transient_seat_v1.c `、` 3rdparty/wlroots/types/wlr_virtual_pointer_v1.c `、` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `、` 3rdparty/wlroots/util/box.c `、` 3rdparty/wlroots/wlroots.syms `、` 3rdparty/wlroots/xcursor/xcursor.c `、` 3rdparty/wlroots/xwayland/selection/outgoing.c `、` 3rdparty/wlroots/xwayland/xwayland.c `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
  原证据引用：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1921954d28e618fc3496d88d32b4063fbb56563e ` 和原目标 ` bfea5a19eb419cf1e849237feed13ce320eb52b0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 519189e1861788d17714f6c5b1bea7b63ff2ec1c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-44"></a>
### 44. N6 / ` Change all timespec pointers in events to owned `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `、` 3rdparty/wlroots/types/output/output.c `、` 3rdparty/wlroots/types/wlr_cursor.c `、` 3rdparty/wlroots/types/wlr_export_dmabuf_v1.c `、` 3rdparty/wlroots/types/wlr_screencopy_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 ` → ` 5b9cb413878a474c55c8bfd1e1b1b6a6e0b1edb1 `。
  原证据引用：` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 ` → ` 1e91ceefe2c5b9b1a958f2af6f4ed0b1b0057af1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8b6d1783cf48bc865d762701f97e376ce2449e50 ` 和原目标 ` 30317341c929cb749a3e7b948bec04da40f07021 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8f44e0d4fe9aa629736cbce7fd8145e5e7cbd0ab `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-45"></a>
### 45. N6 / ` output: don't send make/model `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5b9cb413878a474c55c8bfd1e1b1b6a6e0b1edb1 ` → ` b2e8f666caa11686be2cad95859782b6ccc4995f `。
  原证据引用：` 1e91ceefe2c5b9b1a958f2af6f4ed0b1b0057af1 ` → ` bfaf94c59e541af1df77d09cb1afc836242f731a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2d47e5ed21e1b2c9cfa5ba80f4ca8ba1200e9f5c ` 和原目标 ` 4c93c2ac341cc2c6092f8d8a338995075757c8a4 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cc7a35132f760e484b324e474636c657ceba36b1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-46"></a>
### 46. N6 / ` Add support for XKB_LED_NAME_COMPOSE and XKB_LED_NAME_KANA USB HID LEDs Requires xkbcommon 1.8.0 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_keyboard.h `、` 3rdparty/wlroots/meson.build `、` 3rdparty/wlroots/types/wlr_keyboard.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b2e8f666caa11686be2cad95859782b6ccc4995f ` → ` 0c090efabb309a32ac687298ee9b22040621dc02 `。
  原证据引用：` bfaf94c59e541af1df77d09cb1afc836242f731a ` → ` 09737a7bf0368f7ed8940760495ae1f19d184aa4 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b6b92729856e1cfb59a5f4abccfa73fea008852d ` 和原目标 ` 5b098ba0991facda3bd5a476dd08b256d3e9f928 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` daa1bdf9d47c490ff3adf74e5f94eb0c61fdf8c5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-47"></a>
### 47. N6 / ` text-input-v3: Name new text input event correctly `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_text_input_v3.h `、` 3rdparty/wlroots/types/wlr_text_input_v3.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0c090efabb309a32ac687298ee9b22040621dc02 ` → ` 5581197237fa72ffa329fe2ff32d4b23e46b5d3f `。
  原证据引用：` 09737a7bf0368f7ed8940760495ae1f19d184aa4 ` → ` 58b0d7a583f78e4f0213411eb651f7235a273041 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 92cf9d3d54f20cbf7bc509a2413678e89f8a0f25 ` 和原目标 ` 768c1a40227b489e92b427a1437c534bc4123a81 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 166a0f2bca42cacb506862cda5227d36c75c27b0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-48"></a>
### 48. N6 / `` text-input-v3: Use `NULL` when emitting signals ``

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_text_input_v3.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5581197237fa72ffa329fe2ff32d4b23e46b5d3f ` → ` 5d15ce88108ddd9cf86834ee3e71eb3d6aea49b8 `。
  原证据引用：` 58b0d7a583f78e4f0213411eb651f7235a273041 ` → ` 0f7aeb749e0544156a89d3f029c0d41295c49f71 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` eec5773b46a1e5286ba8f6f85a4da40eba85580f ` 和原目标 ` ee8a08b5d74c1bf52c28d847d779c09d7771093a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bd8a819e957b5b94e9edd37494fd7946db0ca59e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-49"></a>
### 49. N6 / ` backend/libinput: don't leak udev_device `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/libinput/tablet_pad.c `、` 3rdparty/wlroots/backend/libinput/tablet_tool.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5d15ce88108ddd9cf86834ee3e71eb3d6aea49b8 ` → ` fb0d654c9a446e0e08b8a24b15bfd1b81143ab09 `。
  原证据引用：` 0f7aeb749e0544156a89d3f029c0d41295c49f71 ` → ` ffc418d32d59d33973c1697000b92d6f0b051b31 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f1cbaab98b5d4568ebe244229931d5ae4665ea9d ` 和原目标 ` 943ac702b52165264a468b7209ba9b3902de6d30 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 502927a9a42a15937b00e7a2abd6db95dfb36da3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-50"></a>
### 50. N6 / ` xwayland: Remove has_utf8_title field `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/xwayland/xwayland.h `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` fb0d654c9a446e0e08b8a24b15bfd1b81143ab09 ` → ` 2e777e018fa7bbbc6bca97a7b70cc71fd8aa34d2 `。
  原证据引用：` ffc418d32d59d33973c1697000b92d6f0b051b31 ` → ` e318cb9a8f7ee6598cb15ac7b81786c57198c122 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 3b7e3f20e120dc85e9f08d0989075f17818334ef ` 和原目标 ` bc3da7afa4792fdb4610943273491af1e0316b2c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 27381571b68b314cc2c8584536e946158f778c47 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-51"></a>
### 51. N6 / ` cursor-shape-v1: use generated enum validator `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_cursor_shape_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2e777e018fa7bbbc6bca97a7b70cc71fd8aa34d2 ` → ` edc0925e101f120af103ecc921c742a2a955a7f2 `。
  原证据引用：` e318cb9a8f7ee6598cb15ac7b81786c57198c122 ` → ` 8c49865b02b57831d2daa45f41b735c0cf17c8f1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6ad1e1212a78210e7c6f8bec0476d40193852fde ` 和原目标 ` b74e13d52832ad7899e9bbb86558445b6c090e7d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 943d72afa97b954c9c461eaac6ea704c699a38d0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-52"></a>
### 52. N6 / ` cursor-shape-v1: bump to version 2 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/meson.build `、` 3rdparty/wlroots/types/wlr_cursor_shape_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` edc0925e101f120af103ecc921c742a2a955a7f2 ` → ` e2fbdbdde7cc6a5e12d27f7b1a5e8ce385ce7186 `。
  原证据引用：` 8c49865b02b57831d2daa45f41b735c0cf17c8f1 ` → ` ebc1bdba4bdd0de8dd128fee9bd1e6b13913d000 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 22b4fe8e7a5d0eb9688d407442ec941c715b1546 ` 和原目标 ` c0147dc4251f608e544615b1648de51915c502dc ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f973c44994ff4f21d3c4dc1628d77aa80be41437 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-53"></a>
### 53. N6 / ` render/pass: Ensure the precision is consistent during comparison `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e2fbdbdde7cc6a5e12d27f7b1a5e8ce385ce7186 ` → ` be873f0583b098385bd67f728c7d1c9c845d178b `。
  原证据引用：` ebc1bdba4bdd0de8dd128fee9bd1e6b13913d000 ` → ` 3f300635ae5f6e831217cca8a5fa95f36a0c3159 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8d1df35e6373636631bd0a46a1c89bd59763374e ` 和原目标 ` 406365476c29a57cd8429d619aabed63633981b9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bc4c18532be0b002fc840d6dab49710c9c5494bc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-54"></a>
### 54. N6 / ` xdg-shell: add support for v7 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_xdg_shell.h `、` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_shell.c `、` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_toplevel.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` be873f0583b098385bd67f728c7d1c9c845d178b ` → ` aa6efab090b5ee52334bce9bee328136fe3edf99 `。
  原证据引用：` 3f300635ae5f6e831217cca8a5fa95f36a0c3159 ` → ` 45cbf2895b6db319e42463ec33d51fbd3cb019d4 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1419b581afd87ad0ae5df76757add34cb9a98bde ` 和原目标 ` dca599a64b5009bea6b7a053bad4804c1271fc42 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cc2a056b7bb43df856357c4d1072dbd96ef967e0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-55"></a>
### 55. N6 / ` xwayland: Create a dummy no_focus_window to use for non-X window focus `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/xwayland/xwm.h `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` aa6efab090b5ee52334bce9bee328136fe3edf99 ` → ` 693c77a9773fd27decda302a45f847803146d5d8 `。
  原证据引用：` 45cbf2895b6db319e42463ec33d51fbd3cb019d4 ` → ` 372239c86761c2082506ea9efc0c2fc0dac6f488 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8c6229f9c4eacae14accc02f0a941b0a03ca622b ` 和原目标 ` 0293857a069034c7dbee77c02586a4e363490db3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ad05c755b4981e6758bbc1f45700fd21183d765c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-56"></a>
### 56. N6 / ` xwayland: Activate no_focus_window when a Wayland window is activated `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 693c77a9773fd27decda302a45f847803146d5d8 ` → ` c1923e12b92bdf99fb422f736df1f3fe00b8273c `。
  原证据引用：` 372239c86761c2082506ea9efc0c2fc0dac6f488 ` → ` 7ff2a3be09b13cee746d132f4f56eb5043d084a9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e6793bd93ffc041083e31d408c3e3aced255d8bf ` 和原目标 ` e19151928ab4e645c8b18ee4745fa362d972126d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2c4e376dacc5461807f3af0c0a3fd5af0a5fe49a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-57"></a>
### 57. N6 / ` idle_notify_v1: drop trailing spaces `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_idle_notify_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c1923e12b92bdf99fb422f736df1f3fe00b8273c ` → ` ff860931f4d29720b0778585328767e1b529c2c9 `。
  原证据引用：` 7ff2a3be09b13cee746d132f4f56eb5043d084a9 ` → ` d891dee20dd5f7e2e3a31d09cf336ec2961a0fbf `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 54187ff9b725b409e4f6533415a32dd3c11c442e ` 和原目标 ` 075b25aaacf1bf0119c80c15f60d96dad6455ff3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 4b9690cfdc181a5e675495f68586a1dcf7230dc8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-58"></a>
### 58. N6 / ` xwayland: require xcb-xfixes 1.15 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/meson.build `、` 3rdparty/wlroots/xwayland/xwayland.c `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ff860931f4d29720b0778585328767e1b529c2c9 ` → ` 766c1e1bc1ec49d0baaabf4e8d7407155abb935b `。
  原证据引用：` d891dee20dd5f7e2e3a31d09cf336ec2961a0fbf ` → ` c3f40c345dd851d4d326be825fcdb63ef9ec80be `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b3c71df01083877ecf3200323ea551c192d8a898 ` 和原目标 ` 8badc5ae8201eab5827b7adee05a17b4bc5b60bd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b7fcd9f1a7f28f35fc4d2c54ff4fd185104d1195 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-59"></a>
### 59. N6 / ` render/allocator/gbm: require GBM 21.1 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/allocator/gbm.c `、` 3rdparty/wlroots/render/allocator/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 766c1e1bc1ec49d0baaabf4e8d7407155abb935b ` → ` 5a8f297a382df017608997ff71f4ac670628faa5 `。
  原证据引用：` c3f40c345dd851d4d326be825fcdb63ef9ec80be ` → ` b52d9a7347015ecddead6fea9c9a7cb7c73a30fb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 3697e0f99a06e24895ac96cf0ee3c7a54bf1608b ` 和原目标 ` 4d713766203aa69f8093a8318401047d37787fde ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 750fc9c7ce6208577bcb5afc23f7acee3b838d9a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-60"></a>
### 60. N6 / ` swapchain: assert that size is not empty at creation time `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/swapchain.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5a8f297a382df017608997ff71f4ac670628faa5 ` → ` a81186d3d62ab8d731b28cb2343e073a3a51e0e4 `。
  原证据引用：` b52d9a7347015ecddead6fea9c9a7cb7c73a30fb ` → ` 29dbc2a899728062e627dbfc08495bc6ddd2b257 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 30f621f3623fcdf8d3256886584286f4aaf08f3a ` 和原目标 ` 2248d37a4527f86556c06daeffdd295e8b7d4648 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d9260e8190dcb26ba7d46abfa6e7c2cc31508cce `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-61"></a>
### 61. N6 / ` ext_image_capture_source_v1: add support for foreign toplevels `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_ext_image_capture_source_v1.h `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/foreign_toplevel.c `、` 3rdparty/wlroots/types/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` a81186d3d62ab8d731b28cb2343e073a3a51e0e4 ` → ` 277fc5b20bd4e274a9229f60a99d5bd95cc07d6d `。
  原证据引用：` 29dbc2a899728062e627dbfc08495bc6ddd2b257 ` → ` a76929aedccf5a27bf6ed0db6767c5627ed3ce9a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a7e0d3626ecafd17cbfc9c19f5807cced5b7dbf3 ` 和原目标 ` 0a62c6e4ef95240bcc8929f47e1103bdfde54233 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 4416ebd65ca782b694010cd8c38a5bc3f4f3871b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-62"></a>
### 62. N6 / ` ext_image_capture_source_v1: add helper to capture scene nodes `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/types/wlr_scene.h `、` 3rdparty/wlroots/include/wlr/types/wlr_ext_image_capture_source_v1.h `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `、` 3rdparty/wlroots/types/meson.build `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 277fc5b20bd4e274a9229f60a99d5bd95cc07d6d ` → ` 2b773026bccae4f125ff869c361ac7f2565478ba `。
  原证据引用：` a76929aedccf5a27bf6ed0db6767c5627ed3ce9a ` → ` daf5c21dd98f1f5f8099537e4ce7fbacad16e4d6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5912dc0f34fcecfdd5476656e3c34a26e74db765 ` 和原目标 ` ff44ffca1bf151d73f19560696ad23a80fdc5a08 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c017ab00d35e7282a45115fcf3d921e72e6980ff `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-63"></a>
### 63. N6 / ` scene: ignore outputs with too small intersection with nodes `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2b773026bccae4f125ff869c361ac7f2565478ba ` → ` 4ac8264958330d16ef5708a0150de37d55c22b68 `。
  原证据引用：` daf5c21dd98f1f5f8099537e4ce7fbacad16e4d6 ` → ` ef807654761353497151608e9df1ff5bf402546f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 622b27271a424a1dc392ad665f0ddfca06263231 ` 和原目标 ` 322f1c6c247bffd43727cee45d36f5d560644d51 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cca3a30d223eace840bb22dc9cdfbc0ccb30b8b0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-64"></a>
### 64. N6 / ` scene: configure clients with the highest output scale `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4ac8264958330d16ef5708a0150de37d55c22b68 ` → ` bfbb5de9123876fd050cdb06248672bcef94cb63 `。
  原证据引用：` ef807654761353497151608e9df1ff5bf402546f ` → ` ab6609c43614ffd22df99ccef95c7e6de7b14ffa `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 96bccf46d3653a46327e838e90d52d5ec96554f5 ` 和原目标 ` bf997e2f1535710dc1025ee170b468a166ae0341 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b27ec29f0395734053d864f8a7818f95e3f6c272 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-65"></a>
### 65. N6 / ` scene: filter frame_done primary output in surface handler `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` bfbb5de9123876fd050cdb06248672bcef94cb63 ` → ` 561634104c3917ca87ab08f0ed88c853933543a3 `。
  原证据引用：` ab6609c43614ffd22df99ccef95c7e6de7b14ffa ` → ` 42e1c61b871e141898c56fea958f7648d1b8a9db `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5515da6732aefbe2a23826617dd834bf9a2a7134 ` 和原目标 ` 4e3dc5ca8900acbeb5fdbfd0766cd3d77ed287d3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 764543acdbdcc02dd6210386b53c35c95f41819d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-66"></a>
### 66. N6 / ` scene: use output with highest refresh rate for frame pacing `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 561634104c3917ca87ab08f0ed88c853933543a3 ` → ` 8f79c69ec530001dcb1e6362f789643f24053eed `。
  原证据引用：` 42e1c61b871e141898c56fea958f7648d1b8a9db ` → ` 5cbbbf938451998d24977af1c2da192cdbb5a862 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ea887de23d872cf160647f8320633fc361d9f067 ` 和原目标 ` 7dc80eefa105c1a313e5c6b9a125aa5cdccbe0ff ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 33569503d0550352b10f397c8582e34c6b5351fb `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-67"></a>
### 67. N6 / ` scene: send surface preferred transform alongside DMA-BUF feedback `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 8f79c69ec530001dcb1e6362f789643f24053eed ` → ` f7f6c61de25788aaa9bb3b0a1cda3f3c872a735d `。
  原证据引用：` 5cbbbf938451998d24977af1c2da192cdbb5a862 ` → ` 05e22dd7964718b085c07d03caa610bce5b483f3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c96938ef3a78fc7d454eea5109cbde66d795ed6c ` 和原目标 ` 0614224aef588dfe07aa028c0add9ad5b1b114f1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9f030f1b40e015a5f6a2ae5f838da66e50b66a76 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-68"></a>
### 68. N6 / ` render/color: add wlr_color_transform_init() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/color_lcms2.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f7f6c61de25788aaa9bb3b0a1cda3f3c872a735d ` → ` 9554fac10b71391aee7516ee86b05d9a2aa577e2 `。
  原证据引用：` 05e22dd7964718b085c07d03caa610bce5b483f3 ` → ` 14532edd8f59c95298888b3a2d119be79f27a366 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 573e7aa6533edcbf765751bb3e2355eed15ba689 ` 和原目标 ` 029e32cc33f4268ee2c814bca7a1aec25976664a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ac005fa43d6c40e16d7eb0112c364031629214ce `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-69"></a>
### 69. N6 / ` render/color: use variable instead of type in sizeof() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/color_lcms2.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9554fac10b71391aee7516ee86b05d9a2aa577e2 ` → ` c9f65dd714af531ffeb6bf3c9836b43f2098e641 `。
  原证据引用：` 14532edd8f59c95298888b3a2d119be79f27a366 ` → ` f7e95d63f73e66fe5cf97dfa296cb03193ccfbe2 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a3ad65170cb0d59adde8d743d3c0efcb90f101ae ` 和原目标 ` 9a328e1c03d2fbca5f12d506162a971843d9e08f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2b1c6e6ccd9c4debae8619f85135a66ddf8cf409 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-70"></a>
### 70. N6 / ` render/color: replace COLOR_TRANSFORM_LUT_3D with COLOR_TRANSFORM_LCMS2 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/color_fallback.c `、` 3rdparty/wlroots/render/color_lcms2.c `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c9f65dd714af531ffeb6bf3c9836b43f2098e641 ` → ` 0956038612ceea8a2eb0425759160978d43d7a3e `。
  原证据引用：` f7e95d63f73e66fe5cf97dfa296cb03193ccfbe2 ` → ` c45b789a0f8ffbd353abce36aca386afe704c26c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 28b8cd207acf042de0cde21a419944f3a5e98c0a ` 和原目标 ` df635874401991d02b5949f8c45496d834249afb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8495a9d37621566d722d5cce964baa7ece08e304 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-71"></a>
### 71. N6 / ` render/color: introduce COLOR_TRANSFORM_LUT_3X1D `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0956038612ceea8a2eb0425759160978d43d7a3e ` → ` 4789b9c8fcbaed5b28a984b7681f38bfd30a38ab `。
  原证据引用：` c45b789a0f8ffbd353abce36aca386afe704c26c ` → ` ac0c524b9537ffeb335e8ceea39b21e3530927f3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fa6a35279263b8f45ed98922e408b371641ce6f4 ` 和原目标 ` 0587cc661376ffbfb7261cf4988c765d723f10ec ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b6988fea36f8a4c5cd7b055a85bca7c66d5e6974 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-72"></a>
### 72. N6 / ` output: add color transform to state `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `、` 3rdparty/wlroots/types/output/state.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4789b9c8fcbaed5b28a984b7681f38bfd30a38ab ` → ` 7e42ba446e3adffb0fc3e15785913d3a14fd5148 `。
  原证据引用：` ac0c524b9537ffeb335e8ceea39b21e3530927f3 ` → ` cd8431d35d6365264074d406e20c7db2e1fd331f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 3fa894cc040d4028e425492841f86d5556d46937 ` 和原目标 ` d517ac9cfbec29c1cb5f7385a08128712dec2b35 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 510071ba7c26c022ad3e6efce6cba5d83b34b93e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-73"></a>
### 73. N6 / ` backend/drm: add support for color transforms `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/backend/drm/drm.c `、` 3rdparty/wlroots/backend/drm/legacy.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7e42ba446e3adffb0fc3e15785913d3a14fd5148 ` → ` 563313e1a3301611af4724cf5b7aad7a4647273e `。
  原证据引用：` cd8431d35d6365264074d406e20c7db2e1fd331f ` → ` b50f11674c78359eb7ce0b48fc202bec5ae84a81 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d40797ab9cfd328185f3a3ba8290fc083c292758 ` 和原目标 ` 801c81c2c42e489afd6775a1bb1077617e05d76e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 37484f29a09561dd6dab1ae31717aeba155bfe8d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-74"></a>
### 74. N6 / ` wlr_gamma_control_v1: use color transforms `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_gamma_control_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 563313e1a3301611af4724cf5b7aad7a4647273e ` → ` 64de7be9aabaf96c7612ae54a4fdcea1641dee40 `。
  原证据引用：` b50f11674c78359eb7ce0b48fc202bec5ae84a81 ` → ` 8ba42e4f29681bfe106a04675727b4380aba1dc4 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7b15516aa256d738c76e32fdd62e8ca11069b42d ` 和原目标 ` 25bbb0582ecf710232588d9a28912f1629570a21 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` dfb53a755f865b8c1500d6bfb516bf55454612a7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-75"></a>
### 75. N6 / ` output: drop gamma LUT from state `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `、` 3rdparty/wlroots/types/output/state.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 64de7be9aabaf96c7612ae54a4fdcea1641dee40 ` → ` cb8932fb1d2ecf81d93d663b94e9b44451e21e43 `。
  原证据引用：` 8ba42e4f29681bfe106a04675727b4380aba1dc4 ` → ` 5645fe1251a11aa1a1b87076a0fc3fa7e87ca526 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 334c2b21f20cf142d6fada8c47b074c73b9976c2 ` 和原目标 ` cadeafa7b05c1bf9774e40481fcaf85494b8ba96 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 42997d773cedb420f5cbe29feafa12f8c94a9993 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-76"></a>
### 76. N6 / ` render/vulkan: add color transformation matrix `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` cb8932fb1d2ecf81d93d663b94e9b44451e21e43 ` → ` e1e562c95e0be04fcdcd7bfc5b7530e62acf4ee4 `。
  原证据引用：` 5645fe1251a11aa1a1b87076a0fc3fa7e87ca526 ` → ` de58104c61d202ba1aded36cdc18e3567a33ee40 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` bf5238919abe86a4fe0dd6909fc3f0bc76aa7369 ` 和原目标 ` ab789d57e7f02fc0cecbab772567c58fefd33f31 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 1225f4c75ff081903b19a17b97373ee08f55eb5f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-77"></a>
### 77. N6 / ` render/vulkan: use output_pipe_srgb for non-NULL sRGB color transform `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e1e562c95e0be04fcdcd7bfc5b7530e62acf4ee4 ` → ` 647565a1a5531ca2e58cc897871324ca764fc136 `。
  原证据引用：` de58104c61d202ba1aded36cdc18e3567a33ee40 ` → ` ae804436d8fd8561fd7dd600de6980d444972972 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` edd2ff863d2799591b41bfc6a633d205f240e7d4 ` 和原目标 ` 57427cc4073c32f9b11f41822d3cfa6ca5c246f2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d9f8f0d1b9fb875ae812abf28a5009a2befef08e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-78"></a>
### 78. N6 / ` render/vulkan: rename mat3_to_mat4() to encode_proj_matrix() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 647565a1a5531ca2e58cc897871324ca764fc136 ` → ` 8f43e6935d9f2bbda15b7a8e10adcbd3d627af27 `。
  原证据引用：` ae804436d8fd8561fd7dd600de6980d444972972 ` → ` b0038b5eed1206c7a9a91364551a04f28e40a982 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 85be1f0a54bb42dcf542ab6aeb12bf3360eb9b5a ` 和原目标 ` 877151afff019ab6d8432cdfb3abcd5ab68abb88 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 82329d6e0ab47a7f9349f42a34dcf2fb08417810 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-79"></a>
### 79. N6 / ` render/vulkan: use array declaration in encode_proj_matrix() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 8f43e6935d9f2bbda15b7a8e10adcbd3d627af27 ` → ` f42a0b42d3828f739e1574a7585507ddc9e5ab69 `。
  原证据引用：` b0038b5eed1206c7a9a91364551a04f28e40a982 ` → ` e2ac32638291cc6ad549df74c94eed8dd308ceda `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b02653d741e06f43e39329492ba348fea9081722 ` 和原目标 ` 07457c22502ae0b982bf97d216db1b84404556ce ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` abfe1114159e3db29551286a3599e5dd5b634bad `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-80"></a>
### 80. N6 / ` render, render/vulkan: add primaries to wlr_buffer_pass_options `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f42a0b42d3828f739e1574a7585507ddc9e5ab69 ` → ` af45d6adef4eddffbbf0d9da4562b20722b11b11 `。
  原证据引用：` e2ac32638291cc6ad549df74c94eed8dd308ceda ` → ` cf857efda52deddcd88db3b69f7286fdc0ad5db3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ef9eb4e7391ebcb5e0ed8de36ee2d16e7a35ccf5 ` 和原目标 ` 458aed70573092e3957a567244761d1b840d1e7c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0ab0b4c63231fafa94a7921f5d985b09f243d05d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-81"></a>
### 81. N6 / ` output: add color primaries to output state `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `、` 3rdparty/wlroots/types/output/state.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` af45d6adef4eddffbbf0d9da4562b20722b11b11 ` → ` 165a61c593febe3a2223f15cbc763cad5fd4d344 `。
  原证据引用：` cf857efda52deddcd88db3b69f7286fdc0ad5db3 ` → ` 2e74c1e33110742fd3596dd62d9a49bdb5a5666b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 9604e4859299596f83425af79e7dfdea0d180b99 ` 和原目标 ` 436d2769bf185affcecc83b9c8154ef287026920 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 606a90e69a10c5d72197e134d1fbd599f79d5494 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-82"></a>
### 82. N6 / ` backend/drm: add support for color primaries `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/backend/drm/drm.c `、` 3rdparty/wlroots/backend/drm/meson.build `、` 3rdparty/wlroots/backend/drm/properties.c `、` 3rdparty/wlroots/backend/drm/util.c `、` 3rdparty/wlroots/include/backend/drm/drm.h `、` 3rdparty/wlroots/include/backend/drm/properties.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 165a61c593febe3a2223f15cbc763cad5fd4d344 ` → ` 7fabf10a119936272d7b8ed1ce586d91d2d85eae `。
  原证据引用：` 2e74c1e33110742fd3596dd62d9a49bdb5a5666b ` → ` c45dff5c727ecf3c7b3cdc16042a63e9f60302f1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8f52ccea285f0f3c8a52142d597f5382c9b64197 ` 和原目标 ` eb071219e32d9b8f9cc0ead3fa982b90762bf1f3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a102cd592527a8d8bb347856de6cba45f9496e1f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-83"></a>
### 83. N6 / ` render/vulkan: add PQ inverse EOTF to output shader `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7fabf10a119936272d7b8ed1ce586d91d2d85eae ` → ` de958f949490b76a7fc721f315e10506ed20ce58 `。
  原证据引用：` c45dff5c727ecf3c7b3cdc16042a63e9f60302f1 ` → ` d93a73c16c421cdba2f26ace046ff29ddd79f96e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a730f12008999409a4b07957833e1c0a494d43af ` 和原目标 ` cc164c99997248a38bf8cd2de937f9f72793d3ba ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b1eacbeba95bcedf2f92e5dcc2093efffe9ef22e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-84"></a>
### 84. N6 / ` render/color, render/vulkan: add support for PQ transfer function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` de958f949490b76a7fc721f315e10506ed20ce58 ` → ` 3caf09bf3db99a13c863763410f0cdddc98235a4 `。
  原证据引用：` d93a73c16c421cdba2f26ace046ff29ddd79f96e ` → ` 93d1e201d7b31d7f6f3c87f1e1edb9323ee073a5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8808fbce11b8159413957d64adfb844dd068d5bc ` 和原目标 ` cc2ecd2f5dbeb469b830623d2f406d27476335fa ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e7bd185ab81aff1cfe77b5d75c5a9c9153dd744b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-85"></a>
### 85. N6 / ` output: add transfer function to image description `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3caf09bf3db99a13c863763410f0cdddc98235a4 ` → ` 48edf64f061c560d17a29a0bd0feb5b52fa36927 `。
  原证据引用：` 93d1e201d7b31d7f6f3c87f1e1edb9323ee073a5 ` → ` ab954e5a32e6e78e4bf66fa0e877a07e2a1536ab `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f686dfea1e1d783715acf91889f317ca1a94a151 ` 和原目标 ` e005ddb13a02652f853aed332557253e8c4029af ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6a4deb7098882fc321aef03fccf64aa5072f0ec7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-86"></a>
### 86. N6 / ` backend/drm: add support for image description transfer function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/backend/drm/properties.c `、` 3rdparty/wlroots/backend/drm/util.c `、` 3rdparty/wlroots/include/backend/drm/drm.h `、` 3rdparty/wlroots/include/backend/drm/properties.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 48edf64f061c560d17a29a0bd0feb5b52fa36927 ` → ` f4fb9ceec3975b037d79240268b25e9d43bfd2ae `。
  原证据引用：` ab954e5a32e6e78e4bf66fa0e877a07e2a1536ab ` → ` 6346f2c79cac58f77207b14537f1ab3b381ed933 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 34f1e53916440ad471d025e5c118cf7769ec0af3 ` 和原目标 ` 84b1a3b4edee7c1ca46b3ad21e5415a8a7e76200 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ea500e0cc5d58440e8c5c08ceb0f29ed370aa2b3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-87"></a>
### 87. N6 / ` render/vulkan: add luminance multipler for output shader `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` f4fb9ceec3975b037d79240268b25e9d43bfd2ae ` → ` 93beba8a8d100e922d69bddef579e237c3087b9e `。
  原证据引用：` 6346f2c79cac58f77207b14537f1ab3b381ed933 ` → ` 0bacc41148f46c5554077e4e6e51d0d50b2ee11a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4ec0a9e4bf7ef12a6a6830b3ef15cd260bbb2de0 ` 和原目标 ` 3281c4f0f154d1ba8faf6280e27ff26c1ab98ec9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ebf05518ccdc5cf8693fd34e6f89e38280b70820 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-88"></a>
### 88. N6 / ` render/vulkan: fix multiplication order for output color matrix `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 93beba8a8d100e922d69bddef579e237c3087b9e ` → ` c855352198005a9995c8b5daf3be244fed46c271 `。
  原证据引用：` 0bacc41148f46c5554077e4e6e51d0d50b2ee11a ` → ` bebc9e9fdf84d0b7a3db667a786d3d92eb70c2cc `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7a009f2f18007c6afc7c11fa72948af9fabf990c ` 和原目标 ` 0c42501119b972e76fd2fd60197656eb33edb14d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 67fab95475a74479a16caae0466653b92300ba16 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-89"></a>
### 89. N6 / ` render/color, render/vulkan: add EXT_LINEAR to enum wlr_color_transfer_function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` c855352198005a9995c8b5daf3be244fed46c271 ` → ` bd433f92d51f81d6c71c26a49c40d37b1a231cb7 `。
  原证据引用：` bebc9e9fdf84d0b7a3db667a786d3d92eb70c2cc ` → ` 838b82f9dead618f3fe6b6bd7aca1b05492fc0eb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e2e62b6ea6965c65f499de1b40a08330f371c9c8 ` 和原目标 ` 606e8363df106909de8e2b4dd904f514560c8ef9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 301e294f429d71e8fd11a1e96bbae85b81e25c69 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-90"></a>
### 90. N6 / ` color-management-v1: add EXT_LINEAR `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` bd433f92d51f81d6c71c26a49c40d37b1a231cb7 ` → ` f58459510ef19788b2c03cdd94ebb133878a065f `。
  原证据引用：` 838b82f9dead618f3fe6b6bd7aca1b05492fc0eb ` → ` e52c291e7b14965a7380d97412a803cfe090aeeb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1fcd0c9da6a25d58a23b9450acdcd0d5609e9bbe ` 和原目标 ` 6086d6be5d6c3d1abdd5900402586c30c961a354 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d0ae74d8e134c65035a6e8689dff77b132bcb4d5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-91"></a>
### 91. N6 / ` render/pass: add wlr_render_texture_options.transfer_function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/include/wlr/render/wlr_renderer.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` f58459510ef19788b2c03cdd94ebb133878a065f ` → ` 316479ba4fb43f5a9aca006e7c92db47b918b122 `。
  原证据引用：` e52c291e7b14965a7380d97412a803cfe090aeeb ` → ` 526a7e7fad60de6be6f1d41b4f61b04ed7dc318a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 04f282f3f12debe935a41ec6e709d40575ee8c8e ` 和原目标 ` 9dcd00d1b7aa3804d008ed25a7d5d472ff357035 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b76a76271c82c0249782008321ccb0634915528b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-92"></a>
### 92. N6 / ` render/vulkan: fix typo in wlr_vk_texture.views comment `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 316479ba4fb43f5a9aca006e7c92db47b918b122 ` → ` 1d53abe176c7c50a24cb7c5ca97b60dd882b5c90 `。
  原证据引用：` 526a7e7fad60de6be6f1d41b4f61b04ed7dc318a ` → ` fc2c2623bf3d1cfabd103822ff1faf93587c2561 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 116c2281e863d65584756b8ff2eb3f8b34490bc5 ` 和原目标 ` 140ba9d203f2191d92d42e6a9514cc4b715e62ad ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 30e536d48a72dc5e2fd7d8a46187a69619800b39 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-93"></a>
### 93. N6 / ` render/vulkan: add support for texture transfer functions `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/texture.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1d53abe176c7c50a24cb7c5ca97b60dd882b5c90 ` → ` ca3da9907e1f119f426cbd673bfcdd3aa500e9f1 `。
  原证据引用：` fc2c2623bf3d1cfabd103822ff1faf93587c2561 ` → ` fe032f8e48c5d98a90fd662b117e24ca4bde6707 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ca49086f7f6582a8efa246fa1e1c93624b825a74 ` 和原目标 ` 8fb1466ff9a864cfa5be1a4ef7bc03b7e9aedf4b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 81ede01ad391c1ce72eb532bfaff00d1300b80ea `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-94"></a>
### 94. N6 / ` scene: add transfer function support for wlr_scene_buffer `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ca3da9907e1f119f426cbd673bfcdd3aa500e9f1 ` → ` 956b88ad3b40d509967155deec17637851e1ecf6 `。
  原证据引用：` fe032f8e48c5d98a90fd662b117e24ca4bde6707 ` → ` af5894d4d1958918f6b21148174a37d93b9e640c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d04c4477b8dff7b358d8950acc974dfe353f9602 ` 和原目标 ` b180b97f41e105abcc0b03e68d478c039c6da4d5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 303f99c25aa097ae4179389a95f75be1e8f0604f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-95"></a>
### 95. N6 / ` scene: add support for color-management-v1 transfer functions `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 956b88ad3b40d509967155deec17637851e1ecf6 ` → ` a1b1e20614b3e6c556b858c8990be006df2f55fa `。
  原证据引用：` af5894d4d1958918f6b21148174a37d93b9e640c ` → ` b4cecce5ef5119e7847350febad92a4fd3375a33 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 31c96911257d84b52b6e85590d2c7a0ae1fbbde3 ` 和原目标 ` 63043d254c76bcd774aea910d736b40cf26e03df ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b1e6e2901d5699271b6df0b83a07f73605931c47 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-96"></a>
### 96. N6 / ` render/vulkan: prepare texture shader for new transforms `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` a1b1e20614b3e6c556b858c8990be006df2f55fa ` → ` 6946cb784310977d6e69d40529fae2e74c03822a `。
  原证据引用：` b4cecce5ef5119e7847350febad92a4fd3375a33 ` → ` 976043a4b8a50a6ae2ff25f9bd013685f42f2001 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` dfdbade3b1fba232c2d723922e1c95f3a7e0fbf4 ` 和原目标 ` ce5de5ae0cf2ce282be13a9d91b1e48c4fcac7b5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ce637ce16b90c42e462120dad494550c297c4fef `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-97"></a>
### 97. N6 / ` render/vulkan: introduce wlr_vk_frag_texture_pcr_data `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6946cb784310977d6e69d40529fae2e74c03822a ` → ` 5e8ed01232676fb4c9ec15ae121054af6e942a31 `。
  原证据引用：` 976043a4b8a50a6ae2ff25f9bd013685f42f2001 ` → ` b577433187c990a81073ecb4fedf0fb0ff8f7f71 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 385d8feaab802bcd0f29086eb7397fc0d45f5525 ` 和原目标 ` bf2b0e440a767dd23271904be70f32cf408c5114 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8bc79e55826a496a81abf8b085ea7ec050fbdfd1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-98"></a>
### 98. N6 / ` render/vulkan: add texture color transformation matrix `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5e8ed01232676fb4c9ec15ae121054af6e942a31 ` → ` 2d94abd5c531540a3d5b85f24c6aa1b092d897c8 `。
  原证据引用：` b577433187c990a81073ecb4fedf0fb0ff8f7f71 ` → ` 91ac9056c9ab7b35c958cf7aa8681f19150171bd `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` cc8a61bcb5cffc94a98020891c6839002714738c ` 和原目标 ` ae3aa1344fc4a4d39be90807338717ce0ec7bf77 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ce71660226663f13e2d35e84e9726e421c9e5b2b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-99"></a>
### 99. N6 / ` render/vulkan: add support for PQ for textures `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2d94abd5c531540a3d5b85f24c6aa1b092d897c8 ` → ` cdb5cd7c3609a0e3fd8f6cb279069a8afc0c2336 `。
  原证据引用：` 91ac9056c9ab7b35c958cf7aa8681f19150171bd ` → ` bc96535cea2aa2a11564e0464d434af956cbc12b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 19383eccf888693daab4cc2fca8dc60a44906c37 ` 和原目标 ` 0fbc7fa696eaaebb144808a400c5b3d89145efeb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 66f1d53d8c746b0d68fcd33f9b834ea7901332bd `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-100"></a>
### 100. N6 / ` render, render/vulkan: add primaries to wlr_render_texture_options `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` cdb5cd7c3609a0e3fd8f6cb279069a8afc0c2336 ` → ` c13e8756a34e2d4564c45c0c12fde26f35e09a58 `。
  原证据引用：` bc96535cea2aa2a11564e0464d434af956cbc12b ` → ` 4603ca9bf62d03a7bd4f2ec7ba289fb8e3e75a97 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d14e882d30f6edf50ed2cdc90526e46b671f9897 ` 和原目标 ` 7f368248d231c14d597586aafe1abd6e7a52ced1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 93a849b415cc7eab5b11185e97bf6c1b31bdca34 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-101"></a>
### 101. N6 / ` render/vulkan: add luminance multiplier for texture shader `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` c13e8756a34e2d4564c45c0c12fde26f35e09a58 ` → ` 87d29071cef150943ca8677823c2c8da26f36958 `。
  原证据引用：` 4603ca9bf62d03a7bd4f2ec7ba289fb8e3e75a97 ` → ` 7ceaa6e18b87ec23a8c5e3bea4a7f3db98cfdcc1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 09e79cdfc902341d74cbe20bf8c31c14dac8db71 ` 和原目标 ` 3d200c3472fb185035f7c15d8cf386250f4f8df6 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 524712e93c9c057986aef88a5f2c15be7315a54d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-102"></a>
### 102. N6 / ` scene: add primaries support to wlr_scene_buffer `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 87d29071cef150943ca8677823c2c8da26f36958 ` → ` 910a90f81ad51bfc49bc733271508ebad4a30196 `。
  原证据引用：` 7ceaa6e18b87ec23a8c5e3bea4a7f3db98cfdcc1 ` → ` 3506d64db9aca28941e1f2db6a3a7bf0cf59e7ae `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ab42b16e5dcd895822b003517d7927906a1f41d1 ` 和原目标 ` 5763401d4ef38c47ba8a9fd0cb5874a31b5a2a5d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c022902959434260a6aca54d93b72643ee95993c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-103"></a>
### 103. N6 / ` scene: add support for color-management-v1 primaries `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 910a90f81ad51bfc49bc733271508ebad4a30196 ` → ` 2ef85efc80c312771ba60dec0b4f7d9ecfd081fe `。
  原证据引用：` 3506d64db9aca28941e1f2db6a3a7bf0cf59e7ae ` → ` 94c25c55817909f8e913d7a8c6940105cb34890a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f4af38c3cba717b2fcc9f6bd264a3c00abcf5f7c ` 和原目标 ` 2287d97c348369714c3b9ea158025d760d4ce41b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8d9eccee4181919b77a95290753066cfc6d66e14 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-104"></a>
### 104. N6 / ` output: shorten output enabled checks `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2ef85efc80c312771ba60dec0b4f7d9ecfd081fe ` → ` 32d78d33f9e3d50cbf21795275e7aa5d91f924db `。
  原证据引用：` 94c25c55817909f8e913d7a8c6940105cb34890a ` → ` 3ff12df8b52ecb656e4f9874c40a7c0bc950097f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f570342baf591db7616dc5befeb70b6f235d1713 ` 和原目标 ` 94fbfd48d2a619b1d6bb5502704c341c0500137b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7cbab831d359ffaa40bd3e9821cea61f1586b3a8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-105"></a>
### 105. N6 / ` util/box: set dest to empty if boxes don't intersect `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/util/box.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 32d78d33f9e3d50cbf21795275e7aa5d91f924db ` → ` d55b3acb1e0d9ec2fb4670405a39f1a862c5c9bc `。
  原证据引用：` 3ff12df8b52ecb656e4f9874c40a7c0bc950097f ` → ` 0a96e7f1b1c6620a817bfd99ebf3f0f944cc715e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d67047baf7fc29be4808d31dcfc0174be85a2f40 ` 和原目标 ` 626e6ce5f1172f825d794f2eb94112051669982a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d77ad8d73b97175a52b8b568c8de9d186edebe57 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-106"></a>
### 106. N6 / ` xwm: add support for _NET_WM_ICON `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/xwayland/xwayland.h `、` 3rdparty/wlroots/include/xwayland/xwm.h `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d55b3acb1e0d9ec2fb4670405a39f1a862c5c9bc ` → ` c008a81728769fa94005ed4191bfc470b2009111 `。
  原证据引用：` 0a96e7f1b1c6620a817bfd99ebf3f0f944cc715e ` → ` fe3452324e8dd2a499f4c1deff4db0cc6ee39ff7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 06511afe2c784af2714aee5588bfbffa91c87f0a ` 和原目标 ` 4e4c8fac93fc4a370d70172fd9e946e7e27d18a8 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9b83068369b8842b1618ce4e2eb3efe5854e91c0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-107"></a>
### 107. N6 / ` output: add wlr_output.image_description `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c008a81728769fa94005ed4191bfc470b2009111 ` → ` 3c54d320d2a3616d9479a07c8e428476fc796d0b `。
  原证据引用：` fe3452324e8dd2a499f4c1deff4db0cc6ee39ff7 ` → ` 0ff9b8a5d3144487ea7fde6f46ca076afd9ce940 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 880b5241663166d65ba65243ffaeff01a6ce5073 ` 和原目标 ` 5c9618d70af274ac5d49f8ada1d3a60d405b9fcb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ae0d40c9a03f64d16b7a126d5b547df923874f94 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-108"></a>
### 108. N6 / ` output: add output_pending_image_description() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3c54d320d2a3616d9479a07c8e428476fc796d0b ` → ` 1f0468ca958fb2818adecb65002d2610c7811c07 `。
  原证据引用：` 0ff9b8a5d3144487ea7fde6f46ca076afd9ce940 ` → ` e6201250abc7866604483ce04e270b9f9a9725f7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5b55eddc4888fbe9a49197d49fe58b98c0bf03af ` 和原目标 ` b6281114ff1d73227b0b11a672e4559bf4d3c668 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 365b2ef28bda509b073fb335734289660cc351a7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-109"></a>
### 109. N6 / ` scene: grab image description from output state `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1f0468ca958fb2818adecb65002d2610c7811c07 ` → ` 26c6aa9a39a2769f89e76e24f6075502d99a7b7d `。
  原证据引用：` e6201250abc7866604483ce04e270b9f9a9725f7 ` → ` d4032a15e3e6967c7aae4b918a8b8dfb0d8008e9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ff043fe802074ca7ee9dd46d17ecb9d482016948 ` 和原目标 ` 1db9e9e4cd41eb95fb4217ec823cb29b7af10a44 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9f451838680c5c95f939570660982b1a3dae6c50 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-110"></a>
### 110. N6 / ` output: add full HDR metadata to wlr_output_image_description `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 26c6aa9a39a2769f89e76e24f6075502d99a7b7d ` → ` 27c46bab84e47746cedfaea213889a7fd45fd6be `。
  原证据引用：` d4032a15e3e6967c7aae4b918a8b8dfb0d8008e9 ` → ` c21ae8a512cccf5a096293e6a0a6df0a594a8050 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 019c13f41d3538924467c7ef1a3a34695a7ff255 ` 和原目标 ` c442691f263c156509e71a6fac0eac912061a175 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2b4664d03374dcbb4691de5b774a0a4249b61079 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-111"></a>
### 111. N6 / ` backend/drm: relay full HDR metadata `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 27c46bab84e47746cedfaea213889a7fd45fd6be ` → ` f7da61ec7afe8c698077b338616fa50f81003ba6 `。
  原证据引用：` c21ae8a512cccf5a096293e6a0a6df0a594a8050 ` → ` 6ccf9d106d5008b19639309179717ec7c29e21f8 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 29ea403f65a802989dda25824ff9476dc7b77c12 ` 和原目标 ` d20d87bcf1b7da6976bb58edbed41ee328582ac0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c5b06653de74824ee84344413a24eacb119165a8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-112"></a>
### 112. N6 / ` render/egl: fix software rendering check `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/egl.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f7da61ec7afe8c698077b338616fa50f81003ba6 ` → ` 23c7bf4e3ea138261d37d37a8f02c92bfb51f440 `。
  原证据引用：` 6ccf9d106d5008b19639309179717ec7c29e21f8 ` → ` d8dc59921c881aa9b4b11b63e848b22d9638d72c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` bd81e21bc6c1cab671d0594f0b41d28f38d1d1a6 ` 和原目标 ` 3c5223d48bee39855ef774ce822d1ceef9b146f8 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d3474ecba9c0b307bc37ea6344cfce593ce828ac `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-113"></a>
### 113. N6 / ` scene: Block damage on single-pixel buffer textures `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 23c7bf4e3ea138261d37d37a8f02c92bfb51f440 ` → ` ca689b625f2f48e9e0e9aa740af35611704dc612 `。
  原证据引用：` d8dc59921c881aa9b4b11b63e848b22d9638d72c ` → ` 40a347eed22ba9f056c24412a8eab52b9ba1983f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e17a03422776f63782cc9ddeb94bdb879651adf8 ` 和原目标 ` 295067471966906cd88f3cb9fa2b71c6f550b738 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 32f5b112ea9a4d0e16e3592bf4664297072bdff0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-114"></a>
### 114. N6 / ` scene: fix output transfer functions `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ca689b625f2f48e9e0e9aa740af35611704dc612 ` → ` 50c2e443f8a4a06ae5c3b0db57a7832fba42f599 `。
  原证据引用：` 40a347eed22ba9f056c24412a8eab52b9ba1983f ` → ` f4f1edfbceadaec1c8422db2b4de71da945f167b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 08fb9384626292da9eefe05bbebdc57ba5f26517 ` 和原目标 ` 630eb48af7c3277f5f35d1467d066859bd56ab22 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7957f97443449fd940d188a2319a34caf852e479 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-115"></a>
### 115. N6 / ` wlr_text_input_v3: remove event arguments from header `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_text_input_v3.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 50c2e443f8a4a06ae5c3b0db57a7832fba42f599 ` → ` b445b1be270981a8b73d7c96a40d23c1c5bbba7d `。
  原证据引用：` f4f1edfbceadaec1c8422db2b4de71da945f167b ` → ` 14d8858499688ae08ca838dcb800b1e8674bb404 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 700447dfa49073a8cea8fdba86c929171a97bb2b ` 和原目标 ` 505f341937f6d8d31457ba60069dcf050afb27fd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 924616655e4ed541cfe5f157d703f81eb42181be `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-116"></a>
### 116. N6 / ` xdg-toplevel-tag-v1: new protocol `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_xdg_toplevel_tag_v1.h `、` 3rdparty/wlroots/protocol/meson.build `、` 3rdparty/wlroots/types/meson.build `、` 3rdparty/wlroots/types/wlr_xdg_toplevel_tag_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b445b1be270981a8b73d7c96a40d23c1c5bbba7d ` → ` ea47067fed26c453255a5bede0376031f5fa37a1 `。
  原证据引用：` 14d8858499688ae08ca838dcb800b1e8674bb404 ` → ` bab84f59804cfaa8f052b0cdce28f0c60b40f451 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fa6c1816fc2d18e430fca57a5da9760e48c70a06 ` 和原目标 ` d4cb66d72bdf14ec87a3bc787acdfec5ef8b2d92 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 56a6ff604a16df11d4787e788bd74e6a6bebab30 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-117"></a>
### 117. N6 / ` transient_seat: initialize seat destroy listener `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_transient_seat_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ea47067fed26c453255a5bede0376031f5fa37a1 ` → ` 62981893cad3b1915b580006b23c025f55fc13e0 `。
  原证据引用：` bab84f59804cfaa8f052b0cdce28f0c60b40f451 ` → ` 561dc1ed7d3465458bd0eab25e9d533475532dfe `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b99faa4272d5b51540fa0ce6bcac13fb16dad171 ` 和原目标 ` 84443cb2c2653bd27d98a11bc80e3b2cd1736fc6 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b7c756cef12fc05774a41b32c7ffc9f567de9a56 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-118"></a>
### 118. N6 / ` render/vulkan: destroy vulkan instance when drm phdev mismatch `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 62981893cad3b1915b580006b23c025f55fc13e0 ` → ` b4441fecfdb067b087606dc53125d2baf4a4d6db `。
  原证据引用：` 561dc1ed7d3465458bd0eab25e9d533475532dfe ` → ` 4238b5f719247de6729fa041a41e46c668e93dee `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8e41c92ee120806a59baf7347e9f13487e23bdd6 ` 和原目标 ` 40eba48d8f4c546fb7b2b68086b110f05d8a4bbb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 30a2acc5f19c7803e691a356f54b85d994427817 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-119"></a>
### 119. N6 / ` util/mem: Move memdup to new util/mem.c file `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/util/mem.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `、` 3rdparty/wlroots/util/mem.c `、` 3rdparty/wlroots/util/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` b4441fecfdb067b087606dc53125d2baf4a4d6db ` → ` a0e0f6c01188b3d9d89df0c856c7df6c45863c62 `。
  原证据引用：` 4238b5f719247de6729fa041a41e46c668e93dee ` → ` 59d2807b451d2a80228bb458cf7a843daba2b218 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8b3fa373749ffd6da4b8500fca8883f43f171d1e ` 和原目标 ` 255e11dc2d2dea8a258c67f21e976a181e34c534 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 70d315b206485d8d31dad6898204aa08e013c0ed `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-120"></a>
### 120. N6 / ` color-representation-v1: new protocol `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_representation_v1.h `、` 3rdparty/wlroots/protocol/meson.build `、` 3rdparty/wlroots/types/meson.build `、` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a0e0f6c01188b3d9d89df0c856c7df6c45863c62 ` → ` 92f83353494fa4b599cce7e338fba66a19e00cd4 `。
  原证据引用：` 59d2807b451d2a80228bb458cf7a843daba2b218 ` → ` 72b25c460e0fbd2c7e6a5154956be9c82f9e9cf3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 0202d8213967db6169f13fe42637fe9d35ab4d1f ` 和原目标 ` fea7929bfe8c43639be45fa900e13922ff4c2245 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0e9685826f6b4c70665e87b25a06b56992de385c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-121"></a>
### 121. N6 / ` color-representation-v1: Add wlr enums + converters `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/include/wlr/types/wlr_color_representation_v1.h `、` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 92f83353494fa4b599cce7e338fba66a19e00cd4 ` → ` 0205c17a1fb22e9a92e1c555f2be2444e3f26026 `。
  原证据引用：` 72b25c460e0fbd2c7e6a5154956be9c82f9e9cf3 ` → ` 423c48205a96f1c5990a43d610e7f95fd3c08817 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b7e086318c74d3e39442fa3e30aa07ef1e0c7243 ` 和原目标 ` df38a8207221f136710996014f96de6506b16025 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 76bf00442bb979eabbfa66d0ff14418b084de2e7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-122"></a>
### 122. N6 / ` types/color_representation: correctly cleanup in manager create `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0205c17a1fb22e9a92e1c555f2be2444e3f26026 ` → ` 3ccebc6c0684966c0ae58b1e01f1538dcd5c2cdb `。
  原证据引用：` 423c48205a96f1c5990a43d610e7f95fd3c08817 ` → ` 07a72c729ee126df04f7bc661b33323a53727781 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 18b4d8410b7d8897e0d723a85a60a1782adeb8ca ` 和原目标 ` 3303770f4fc3ca6d2d1cc6b2161939a1e0df326f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` de42bc7a90ba3a1a502d6251a81400ff0e59870b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-123"></a>
### 123. N6 / ` types/color_management: check on invalid image description `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3ccebc6c0684966c0ae58b1e01f1538dcd5c2cdb ` → ` 701d6445c5ccb71840e21720f8c0f8a2dcf507e9 `。
  原证据引用：` 07a72c729ee126df04f7bc661b33323a53727781 ` → ` cc227e255e1d50f8e72c87248130fdcbf25d6678 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6dfa30759182985cad9215e1a56df24098706961 ` 和原目标 ` 4d4257417a71ccf0713dbdf15284764dfeede308 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6013a73bb7e443d223044c05e7be580969754303 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-124"></a>
### 124. N6 / ` ext-image-capture-source: output: Apply transform to cursor `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 701d6445c5ccb71840e21720f8c0f8a2dcf507e9 ` → ` 639f68675ac832f376ca8e88028a3bb682a7c888 `。
  原证据引用：` cc227e255e1d50f8e72c87248130fdcbf25d6678 ` → ` c2ea9253fb50d805063d704900c48bded1d22272 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c0ffefdd17ff771496458051a89686879768a182 ` 和原目标 ` ec987bed0fb5b6ac72822355ac704aa94b1bbe94 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 78177b68153ccbbc65cb68a97224c48aa1368a54 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-125"></a>
### 125. N6 / ` cursor: update output cursor even if output is disabled `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 639f68675ac832f376ca8e88028a3bb682a7c888 ` → ` 9ebeefa2fdc83e64a9d299f03738b4a628e718b9 `。
  原证据引用：` c2ea9253fb50d805063d704900c48bded1d22272 ` → ` 5bdbd971783eccb17e0156a4dc7cf481030c9eae `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 159aa593b87db474536c89b6cd75586fd0f88170 ` 和原目标 ` 512813df914c640ffee3bdae69d10940c331c601 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d74498ea452790cecfc97ba7249c94f0c1d29b06 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-126"></a>
### 126. N6 / ` ext_image_capture_source_v1: remove unused struct definition `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/foreign_toplevel.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9ebeefa2fdc83e64a9d299f03738b4a628e718b9 ` → ` c3fb8c3222834b8a1055bb031d5640f5e54eb174 `。
  原证据引用：` 5bdbd971783eccb17e0156a4dc7cf481030c9eae ` → ` 1561e3901125a32185c766a528d24429f799f646 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d4e343cd04c5cbda3fe649b593cad22b41adff3c ` 和原目标 ` 83a423d59ef7761c3f2a9b4cc4582b4288320e34 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 21d157c501883ec3ab4d1c82cc567aad966c2e45 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-127"></a>
### 127. N6 / ` meson: bump minimum wayland-protocols version `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` c3fb8c3222834b8a1055bb031d5640f5e54eb174 ` → ` 252d7d90fa3d43e528a8cf62e3e538a5e77b4e7b `。
  原证据引用：` 1561e3901125a32185c766a528d24429f799f646 ` → ` 7e4077fee3d222d1d8dad0c09324f8d3d3f58154 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fcd0b60f3dbaef8e45ad1e2609811dfcd11c63b1 ` 和原目标 ` 37335dc2ea50b83b6380405b20bca832faf94dda ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 58a2d6d3d46e1b4013f0ba0ef3bd42add944319c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-128"></a>
### 128. N6 / ` color_management_v1: add helpers to convert TF/primaries enums `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_management_v1.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 252d7d90fa3d43e528a8cf62e3e538a5e77b4e7b ` → ` 0c369bcbde8c298457180222b39a72194796b750 `。
  原证据引用：` 7e4077fee3d222d1d8dad0c09324f8d3d3f58154 ` → ` 4ce3c9424bf48dd74ee340c846cadbcbfa0eea8e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 094f8fa20e188f0da667df121b0eb9bb6f202ca2 ` 和原目标 ` 83cbb6602a8647cb7eb6aef7f607c27bad19d9ad ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9ac4f1da1e18b29c08361007954770487b2e033b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-129"></a>
### 129. N6 / ` scene: use helpers to convert TF/primaries enums `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0c369bcbde8c298457180222b39a72194796b750 ` → ` 37f94b5c90bdfd10889e57f7d52af71facc256c0 `。
  原证据引用：` 4ce3c9424bf48dd74ee340c846cadbcbfa0eea8e ` → ` 500d89ba821aae98fd93edfa25d8f4bfe96f41bc `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` df2d519225b3fefb5c63cf6c9386b4f62c2defa2 ` 和原目标 ` 5152415872d63670e09aa25f4389fccb6eb6f192 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 167e28ab77de171f995819d670b0e3436ac0f287 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-130"></a>
### 130. N6 / ` tinywl: fix cursor disappears when focused window is closed `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/tinywl/tinywl.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 37f94b5c90bdfd10889e57f7d52af71facc256c0 ` → ` 85bd8dc7ca358431bdbb0a770420e51d49dcb323 `。
  原证据引用：` 500d89ba821aae98fd93edfa25d8f4bfe96f41bc ` → ` a359872975bb2dea4a407e7baee8ad0e6c9abd36 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8ed92bbc78a136c4adb16182b38121ca5b44ed46 ` 和原目标 ` cf54921b2cfcece3a288ae931fa9400fab0577da ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 1b0da6aac0d2f7c9bb43817e176174e7110c6b8f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-131"></a>
### 131. N6 / ` color_management_v1: set output color properties `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 85bd8dc7ca358431bdbb0a770420e51d49dcb323 ` → ` cd71f6932efd2248c8b0eafeb7633d4cd439f8c5 `。
  原证据引用：` a359872975bb2dea4a407e7baee8ad0e6c9abd36 ` → ` da59ecf790c3632127e5f58b898593aa09bfe285 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5d2ed41d2be0afe22cd28ee05db3cd47305ca11a ` 和原目标 ` ad97f2a7e76791819024ac24e4dcd819f90253cf ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 157ad0ec24094e58beeacb38efcdf792da28235e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-132"></a>
### 132. N6 / ` wlr_ext_data_control_v1: Make all listeners private `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_ext_data_control_v1.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` cd71f6932efd2248c8b0eafeb7633d4cd439f8c5 ` → ` 4a8fb590f835c526341964965e5dc9d39fd408de `。
  原证据引用：` da59ecf790c3632127e5f58b898593aa09bfe285 ` → ` e4f9cc977df1aafff5827b1dc30a36e99c11d806 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fa71f552d76b9565cc79f3a48768342f9186bd06 ` 和原目标 ` 6122a0d44b5df1d5dd5b5ea545640a5cc92f0f33 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b543ef933f7e785f047ad6adccb0fa115d4dac22 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-133"></a>
### 133. N6 / ` color-representation-v1: Fix missing destroy signal init `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4a8fb590f835c526341964965e5dc9d39fd408de ` → ` 4048d22c403904468689f36393de14f4be86eb54 `。
  原证据引用：` e4f9cc977df1aafff5827b1dc30a36e99c11d806 ` → ` f1ee56f70c1973d42a065927cc55eedfdcd54f59 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 33471be4c733a280bc804957c0bd307c07943e19 ` 和原目标 ` c54870a6a4a2105f831a263d643a47b9b3d4fea9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 48746f475a14ff83dc64b4b4ca409c685de1ac49 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-134"></a>
### 134. N6 / ` ext_image_capture_source_v1: advertise fallback {A,X}RGB8888 formats `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/base.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4048d22c403904468689f36393de14f4be86eb54 ` → ` db3fbfaa3e52153af246a9a31cd59f9b2747b670 `。
  原证据引用：` f1ee56f70c1973d42a065927cc55eedfdcd54f59 ` → ` 5c729b02288a7adf2f561f1e50350ba07211f0c6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 682273cf854842c378362d2e167785898b256806 ` 和原目标 ` 27ea05296e44507a0fd9d1f64322e8bba4c94f7a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 52e681cb4bbd348ffe4af6642d010ab9edc53746 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-135"></a>
### 135. N6 / ` output/cursor: Fix double cursor bug `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` db3fbfaa3e52153af246a9a31cd59f9b2747b670 ` → ` 11e4816bd4afc0056c8d1eca35119e8b3d43c9da `。
  原证据引用：` 5c729b02288a7adf2f561f1e50350ba07211f0c6 ` → ` c5c3a7667ba4e4d803184b2ce48d3ab766430373 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 74da40725dca4808b943e17d5bce82b9ce87f6b3 ` 和原目标 ` c5379333c311c9630453391ec0e9869a5bbfa22f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 1528e2c65fac189eb81857ebb17c8bdb00a0af7f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-136"></a>
### 136. N6 / ` backend, output: send commit events after applying all in wlr_backend_commit() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/backend.c `、` 3rdparty/wlroots/include/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 11e4816bd4afc0056c8d1eca35119e8b3d43c9da ` → ` 7b1f2d068345616cd48c7f9cd6cda0ca30113cc7 `。
  原证据引用：` c5c3a7667ba4e4d803184b2ce48d3ab766430373 ` → ` a02989adcc45ecdeb79661d1bf5102313477805e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e9490f064a03e6c201149528e6c0c4c72f10ab86 ` 和原目标 ` 0ad3139584c534aeaddb4a1bf255d1f17e7ae018 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 29304f4502495c7c1b9d5c07414cb7b81c747d3d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-137"></a>
### 137. N6 / ` fixes: add implementation `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_fixes.h `、` 3rdparty/wlroots/meson.build `、` 3rdparty/wlroots/types/meson.build `、` 3rdparty/wlroots/types/wlr_fixes.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7b1f2d068345616cd48c7f9cd6cda0ca30113cc7 ` → ` d09d1430eed8c64f53ad98b70b411f905a5df76c `。
  原证据引用：` a02989adcc45ecdeb79661d1bf5102313477805e ` → ` 901903022fb7d2d09a12a9399dfe9be2a76d1cf6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5c5b0af13756a49fd922031a621465f01b73d7e6 ` 和原目标 ` 255d487493af28800c16f54e732431af3aa26bdf ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` caa0f11234979fff36ac20566357339c1d0a34b9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-138"></a>
### 138. N6 / ` Avoid including generated headers publicly where possible `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_management_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_color_representation_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_content_type_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_cursor_shape_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_ext_image_copy_capture_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_pointer_constraints_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_tablet_v2.h `、` 3rdparty/wlroots/include/wlr/types/wlr_tearing_control_v1.h `、` 3rdparty/wlroots/include/wlr/types/wlr_xdg_shell.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `、` 3rdparty/wlroots/types/wlr_content_type_v1.c `、` 3rdparty/wlroots/types/wlr_cursor_shape_v1.c `、` 3rdparty/wlroots/types/wlr_ext_image_copy_capture_v1.c `、` 3rdparty/wlroots/types/wlr_pointer_constraints_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d09d1430eed8c64f53ad98b70b411f905a5df76c ` → ` ff0aa94ea42b404587c20533c02f29387e115dff `。
  原证据引用：` 901903022fb7d2d09a12a9399dfe9be2a76d1cf6 ` → ` 32458e6b95225c3dc33e1a7226dad2b1c95403aa `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d42414caafb7b6627440a0665d371210c0d47e7a ` 和原目标 ` d1c54c851b469ed0dd1cc8d0a0bb70c31edfcf14 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` dbf154b328cf94a45e35e39e68abc1ee9e3e6270 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-139"></a>
### 139. N6 / ` compositor: use wl_resource_post_error_vargs() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_compositor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ff0aa94ea42b404587c20533c02f29387e115dff ` → ` 514afb1f243489b6f29644fecf084ae2ed2e7fd2 `。
  原证据引用：` 32458e6b95225c3dc33e1a7226dad2b1c95403aa ` → ` 4e3e70f01f3e94213627fdef120cc8d73f03b099 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 859718dc888c11841a8a460349ad5748c121e3e8 ` 和原目标 ` 735774f7062d42b8886c63dd144674c12f4b249b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c8f8384d8deebddbf3d7908743bb6efe15ffbdd4 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-140"></a>
### 140. N6 / ` color-management-v1: handle inert outputs in get_output `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 514afb1f243489b6f29644fecf084ae2ed2e7fd2 ` → ` 4ed2a03a944105458ddde388c1080389bb4001b9 `。
  原证据引用：` 4e3e70f01f3e94213627fdef120cc8d73f03b099 ` → ` 9ec0cc4cecafdaa4034897656caaa94cceebe0dd `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 87d58d55d9bbd55f89c667abb8641b707fc593d5 ` 和原目标 ` db39a0807bfe4b8269c0de2298bb1e97783e9bed ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 3e397c34ddf92281062b10d3d155c606c3f113d5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-141"></a>
### 141. N6 / ` render/allocator/gbm: insert buffer after export gbm bo `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/allocator/gbm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4ed2a03a944105458ddde388c1080389bb4001b9 ` → ` 493537e29b3e827b6dd331511b5b12b4b8487cbe `。
  原证据引用：` 9ec0cc4cecafdaa4034897656caaa94cceebe0dd ` → ` 729983f5d099c7f55e7db2a0a083ad12a452f948 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ee0d9a7de7b275592767c8c3429b4fe472f79e20 ` 和原目标 ` 94d605647f80a638793accdc03f27c371bacca5f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 232247f88d886bc4720d8aa92d9c6d778ff5f0f3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-142"></a>
### 142. N6 / ` wlr_xdg_toplevel_icon_v1: check the correct resource `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_xdg_toplevel_icon_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 493537e29b3e827b6dd331511b5b12b4b8487cbe ` → ` 7e43330bd3d5e9870fa6903f0a4e39117b2d566a `。
  原证据引用：` 729983f5d099c7f55e7db2a0a083ad12a452f948 ` → ` 9d80294f8b879863c4e51f78ebab4ec183650ae5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 73caa1c03a8b26eec23a253152f3ae893ff6d85f ` 和原目标 ` c983e6f2c19bcb48eeb36cc9bfaf93bc4e7bfce9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 34eefa983f26491bcf3d27baece2a25af7c398ee `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-143"></a>
### 143. N6 / ` tinywl: stop generating xdg-shell header `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/tinywl/Makefile `、` 3rdparty/wlroots/tinywl/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7e43330bd3d5e9870fa6903f0a4e39117b2d566a ` → ` 27df2a7f2df56e3bd5360e7f9512b5b65f9b3c2c `。
  原证据引用：` 9d80294f8b879863c4e51f78ebab4ec183650ae5 ` → ` 901a1cbebf0ea5ef530b0fabe2312954213cb5e5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 033a7c7b4278b88eec561d97307b111a7bbc0c06 ` 和原目标 ` 3bfeaa6f61185af3216ca3fbd07e6e3bc277857d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b4e6513699f35015dcd96db7b73fc4eb8b9352e0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-144"></a>
### 144. N6 / ` render/vulkan: fix VkPushConstantRange for wlr_vk_frag_texture_pcr_data `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 27df2a7f2df56e3bd5360e7f9512b5b65f9b3c2c ` → ` 054698c0a08560689e6571cd77332bf1bdee5009 `。
  原证据引用：` 901a1cbebf0ea5ef530b0fabe2312954213cb5e5 ` → ` dcabfb9ff4c53912727a43a1c581fcb76ddac421 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` aa980f02c6e0e119ab271141fa42adecfae48707 ` 和原目标 ` 38313286cb2f0cdbb686b5b9d1e0f82562066381 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bbcf1d4997f7c2dd5ff121ae8ee364161e07263c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-145"></a>
### 145. N6 / ` render/vulkan: remove hardcoded counts `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/texture.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 054698c0a08560689e6571cd77332bf1bdee5009 ` → ` 4d9ddfbcb385a5f48c4af4912d0e85ef666c09dd `。
  原证据引用：` dcabfb9ff4c53912727a43a1c581fcb76ddac421 ` → ` 5465d7521fe4178dbef89580b8853b949dc4e3c3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d4dfa7caab388a3c682d86be0aad378851f7363d ` 和原目标 ` 8f27778fb594600be4cf98e218df5d56fadae940 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d988b1cdf1cc12f11740e5feee7fbe8bc8a869c9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-146"></a>
### 146. N6 / ` docs: deprecate legacy wlr_data_control_v1 interface `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_data_control_v1.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4d9ddfbcb385a5f48c4af4912d0e85ef666c09dd ` → ` aa4a779455ba73b5fae1d2238d98d4f50c5d8ae6 `。
  原证据引用：` 5465d7521fe4178dbef89580b8853b949dc4e3c3 ` → ` 8a7c3638b53e718877e1244712ed82f6948ea4d1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fe8906bcfbf6eb65d0c68669ffd177efe282f178 ` 和原目标 ` ac80308713fa8b514efb32197a4b9ad56c74dd68 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5e71e56056ce957273ed7ab42a64ef682044fe6d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-147"></a>
### 147. N6 / ` build: add wayland-protocols to dependencies array `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` aa4a779455ba73b5fae1d2238d98d4f50c5d8ae6 ` → ` 2734d7a5856e9db09def5f34272f8230ab854086 `。
  原证据引用：` 8a7c3638b53e718877e1244712ed82f6948ea4d1 ` → ` da3bc57763c039c0e05481ed61a0082b764612ed `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5ffc9a8b7bf68b5da60ef9f6cdd52bca9e8e1a6c ` 和原目标 ` 4c94a790857b65e9cbb5ead713ec591c4e2d35ec ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0038748c15e5a84f3a2bf569eff60170f373f4c7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-148"></a>
### 148. N6 / ` types: deprecate wlr-screencopy-unstable-v1 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_screencopy_v1.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2734d7a5856e9db09def5f34272f8230ab854086 ` → ` 5f7aa4cc8a237f8be9a0c100e2bca5447033bd85 `。
  原证据引用：` da3bc57763c039c0e05481ed61a0082b764612ed ` → ` ee4336a33ffcc07554bfc59825928bee5e830015 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 9cad8d729fd3550040a7ece3fe2d4cfafd67e5b6 ` 和原目标 ` 6d67edafbc0dd0e5fbaf3fdcf702e94da9a33684 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9d06f307721223ab84c0610e042c23a56cf53b9a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-149"></a>
### 149. N6 / ` drm-lease-v1: remove connector active_lease & lease connectors `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_drm_lease_v1.h `、` 3rdparty/wlroots/types/wlr_drm_lease_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5f7aa4cc8a237f8be9a0c100e2bca5447033bd85 ` → ` c68b2fc7900ed4bd6290561337baa3a91c99c0d0 `。
  原证据引用：` ee4336a33ffcc07554bfc59825928bee5e830015 ` → ` 1f75f25cb7451e3dca8b92cf104c3e56dfe5b1f2 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c7439c3833d0cd35720a5d229617602e5ba5fcb1 ` 和原目标 ` 0beec9fd2bfd2778054a29dd0a1aacbee949d80c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6d3bc12b97ed97368057174d7fc61b1340d5c088 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-150"></a>
### 150. N6 / ` input-method: rename input_method event to new_input_method `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_input_method_v2.h `、` 3rdparty/wlroots/types/wlr_input_method_v2.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c68b2fc7900ed4bd6290561337baa3a91c99c0d0 ` → ` ef285b3250a7e02cb9ced72fc43b06b11ae655e9 `。
  原证据引用：` 1f75f25cb7451e3dca8b92cf104c3e56dfe5b1f2 ` → ` 6387f1e533f41166a5a53f2ed59e1cee893bc48c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 45194c916e691c9228f30d87085da35052b75a72 ` 和原目标 ` 3c44f2c16a20e94419b7714f4a728cd5e525988c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 412f33e565e11158057be57ef6046f72602ea72e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-151"></a>
### 151. N6 / `` input-method: use `NULL` when emitting signals ``

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_input_method_v2.h `、` 3rdparty/wlroots/types/wlr_input_method_v2.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ef285b3250a7e02cb9ced72fc43b06b11ae655e9 ` → ` 9acc74c0e7417f2c61d8bd99263f37f6eb256026 `。
  原证据引用：` 6387f1e533f41166a5a53f2ed59e1cee893bc48c ` → ` 7fa0c54a3ca93dec3295a58551faeacd0d0f3e68 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 908ba59932df7cbe837af6280a6de083abcb69c6 ` 和原目标 ` a3fd28122b984e932256090d5cb6cd39f8a886f1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b4fcca336237a0cfdb0a62b4df2aef3553bb96e1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-152"></a>
### 152. N6 / ` color-representation-v1: Actually set supported_*_len `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9acc74c0e7417f2c61d8bd99263f37f6eb256026 ` → ` 01caacfe668cb2c5fcc97194b1594cfeac198981 `。
  原证据引用：` 7fa0c54a3ca93dec3295a58551faeacd0d0f3e68 ` → ` 056eb6beba9dfbaa21b937122210f8271720e49d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 564a3ca2e2e219480b75df745aa61aa706ec6e19 ` 和原目标 ` 0b8ddc517c64cd19d2d73409343d80f89186ae5d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ea4b8aa9513646f49ab84b1809923ff86a325bd8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-153"></a>
### 153. N6 / ` protocols: sync with wlr-protocols, apply non-breaking updates and doc improvements `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/wlr-export-dmabuf-unstable-v1.xml `、` 3rdparty/wlroots/protocol/wlr-foreign-toplevel-management-unstable-v1.xml `、` 3rdparty/wlroots/protocol/wlr-gamma-control-unstable-v1.xml `、` 3rdparty/wlroots/protocol/wlr-output-management-unstable-v1.xml `、` 3rdparty/wlroots/protocol/wlr-output-power-management-unstable-v1.xml `、` 3rdparty/wlroots/protocol/wlr-screencopy-unstable-v1.xml `。
- 依赖 ` 3rdparty/wlroots `：updated；` 01caacfe668cb2c5fcc97194b1594cfeac198981 ` → ` b7742e520aac43add3722018fc3af9f6555ac411 `。
  原证据引用：` 056eb6beba9dfbaa21b937122210f8271720e49d ` → ` 04316b174b3d1644daa28b6a19b9d9dfffc1c6f9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2b85c5d40accb13fc3acb33fdca64bc795e7c74b ` 和原目标 ` 54cc1ebfc617551c0df45d0670381ea657aad4fd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 29ccd138f6572251952424add96ca97f9fbc41a1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-154"></a>
### 154. N6 / ` drm_lease_v1: initialize device resource link during abnormal exit `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_drm_lease_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b7742e520aac43add3722018fc3af9f6555ac411 ` → ` 64fea1e61ef73c7e77e9703088f0dd7561f55f31 `。
  原证据引用：` 04316b174b3d1644daa28b6a19b9d9dfffc1c6f9 ` → ` b19e8379cbc7f28c60ca91c16899d5b916d3afdc `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 276ea2949d7d0b42e6d9a28f186c378293cae922 ` 和原目标 ` a72f14ead3d638724c1243d4f484340674fb26f2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b865bb07d2bf5a943b841cbac02f68325c40d082 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-155"></a>
### 155. N6 / ` output/cursor: fix missing second cursor `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 64fea1e61ef73c7e77e9703088f0dd7561f55f31 ` → ` 4ef46a0ec3520e8b2ac70028d353d804fc9b7e67 `。
  原证据引用：` b19e8379cbc7f28c60ca91c16899d5b916d3afdc ` → ` 2fb2b1cacf39f7e55d7fc380c395f30c994fb386 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c4c3d95a38040104339e8ed8984b847290df294d ` 和原目标 ` 86f7f4a88490878eeca920043298b23f6f6e89a3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 1a7ab86e77c711381d7d08d55802bcf48a981f39 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-156"></a>
### 156. N6 / ` scene/surface: simplify single-pixel-buffer check in surface_reconfigure() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4ef46a0ec3520e8b2ac70028d353d804fc9b7e67 ` → ` ffa0920d4682e51665d7ad2e29ff143d5c9896d2 `。
  原证据引用：` 2fb2b1cacf39f7e55d7fc380c395f30c994fb386 ` → ` a5da7eb77ba4559e7fa40879e11c8c8f317a1f20 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f827a249077f26ad91928b581d3fc5a96af3ec01 ` 和原目标 ` 245c3d0c2131b1b6d138f6ccbace8448d4aae1e9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 46bf3361d5a3986291ca177fd618a7a01764de56 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-157"></a>
### 157. N6 / ` scene/surface: fix NULL deref when source buffer is destroyed `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ffa0920d4682e51665d7ad2e29ff143d5c9896d2 ` → ` e54e91d2d2297bb107de9b342432eaf27e02d48c `。
  原证据引用：` a5da7eb77ba4559e7fa40879e11c8c8f317a1f20 ` → ` b5d280f1b9e4758f6a109d000a3038045c5ab231 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f23cb2387656aab8d243c8814a53da6c0a70db48 ` 和原目标 ` 3fbdf7d9068eb0d49cf9c552879b94d2d9faaa8e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` be8f9274a06014d5c9c45691ce88aecbf196dec5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-158"></a>
### 158. N6 / ` cursor: use source buffer to signal release timeline point `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e54e91d2d2297bb107de9b342432eaf27e02d48c ` → ` 1f71048942c388e2b00b857f6fe140c32dacdeb2 `。
  原证据引用：` b5d280f1b9e4758f6a109d000a3038045c5ab231 ` → ` cbc996f4ebf40d8c40081ee3c72a7fd8b354fcc3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5b8b45b08e13328031c464d9913eef55e39c91d0 ` 和原目标 ` 7b7f276e65ed9176774ae57e5bcd65dfc44e1091 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 43c5ca5643823f5b9ca57622617ab0e3df2a9e65 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-159"></a>
### 159. N6 / ` xwayland: fix assertion failure in wlr_xwayland_shell_v1 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwayland.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1f71048942c388e2b00b857f6fe140c32dacdeb2 ` → ` 972faa2dc79cb2bd1594585876f59d99a95e581e `。
  原证据引用：` cbc996f4ebf40d8c40081ee3c72a7fd8b354fcc3 ` → ` c840a92e157660fcaf664f5ff1410f27adda658e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 529950cb158ad7a02c6ac3a446fac29d87028ab3 ` 和原目标 ` a3ba725bfe8f6776293e7ac51297e9ecba2c47ae ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a059b5edb7a293dc89cb0b2a6aceb4a42717cb2c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-160"></a>
### 160. N6 / ` render/vulkan: Handle multi-descriptor sets `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 972faa2dc79cb2bd1594585876f59d99a95e581e ` → ` 37e084ff147376dd747bce0709f047c901587193 `。
  原证据引用：` c840a92e157660fcaf664f5ff1410f27adda658e ` → ` 49a0ad98d98230b101382875e6c5fb5ce1a85750 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 93864b26690744c7b9f9eba8d128acde6e98b379 ` 和原目标 ` c4594d98268350bdd3a264687eaf2ec477e8088c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 63641c7162099432a4bb33011db099ad5dc49776 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-161"></a>
### 161. N6 / ` render/vulkan: rename plain to two_pass `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 37e084ff147376dd747bce0709f047c901587193 ` → ` 35c4d33a4b3b52e7773551cf8cbe5f14fff31c22 `。
  原证据引用：` 49a0ad98d98230b101382875e6c5fb5ce1a85750 ` → ` a59226bf40c87c8961a5445833ad476aff5cd40b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6e63017817a6ce37cc822f527ba57ac222e9d2c7 ` 和原目标 ` ff1547c2a7cd3f8a3ce19fd6c5215a2eea852470 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c939af0b217281c9232dde230aa7144b347a4be1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-162"></a>
### 162. N6 / ` render/vulkan: use sRGB image view when color transform is set `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 35c4d33a4b3b52e7773551cf8cbe5f14fff31c22 ` → ` 9e1db13c41142e11214801bc1ae2e73d382d34b5 `。
  原证据引用：` a59226bf40c87c8961a5445833ad476aff5cd40b ` → ` 3d76d688332a302797e304cf992e1ec9d12d6d4e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8b61f805d33f81a7afe2a18c336867fc32b8620a ` 和原目标 ` ce5d2e79b5eaeebcef0e694cd9afa325382f7328 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5c9e26f4ff5d0850eb5d961c09d694022721490e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-163"></a>
### 163. N6 / ` render/vulkan: rename vulkan_setup_srgb_framebuffer() for linear `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9e1db13c41142e11214801bc1ae2e73d382d34b5 ` → ` 44a2a0a9e32ace84c91212ec1572dad323f1f8fc `。
  原证据引用：` 3d76d688332a302797e304cf992e1ec9d12d6d4e ` → ` 20c5e1b478a1b91332dce52fd1a2038787c2cfb1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b7b7012f449273e29486ebdc9a4eddd5e76ec7af ` 和原目标 ` a59c3078306c25bf394eb00674cca481ea33da53 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` fefd0297618a3c9327411e6355eebde2c6ade15e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-164"></a>
### 164. N6 / ` render/vulkan: introduce wlr_vk_render_buffer_out `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 44a2a0a9e32ace84c91212ec1572dad323f1f8fc ` → ` dd7d950ee98ce756ac26c772aedf302725a55da1 `。
  原证据引用：` 20c5e1b478a1b91332dce52fd1a2038787c2cfb1 ` → ` 0d19dab3df8326e9b2ffb6429c28be90d22f60d7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 86dbbae0f5f21fe7220137c59ba76d385399dc58 ` 和原目标 ` 4d34886e98057e8efade91bbb6e66da6007fe8be ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bf841edb69b6b206cadea5c7bd448b2991d17643 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-165"></a>
### 165. N6 / ` render/vulkan: add wlr_vk_render_pass.render_setup `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` dd7d950ee98ce756ac26c772aedf302725a55da1 ` → ` 6e1290b06fe805221d28658e1ddc5189073706bb `。
  原证据引用：` 0d19dab3df8326e9b2ffb6429c28be90d22f60d7 ` → ` 939ae0e60e7c6dd05fcc62b8b9394438e4a7f985 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6dc50b9db882b034646f79db6fc49914f5fb40d1 ` 和原目标 ` f7c73e944853dfcb00631c04d726975a0ac1f532 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 91ac826f226da9f5a671d93f3d5829558399e560 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-166"></a>
### 166. N6 / ` render/vulkan: add wlr_vk_render_pass.render_buffer_out `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6e1290b06fe805221d28658e1ddc5189073706bb ` → ` db5c63456de594114d3b8c8b2a57a21f414571cd `。
  原证据引用：` 939ae0e60e7c6dd05fcc62b8b9394438e4a7f985 ` → ` ebe1fa0dee9d87f2f46bcea25ca545b1c0843bf9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f02da149ffd4c801ab386b93f01061eec6eea06b ` 和原目标 ` 58872f39769740cc784e37d80aeb7e745eca86d0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b52d37e523acff6b8e3273592b0767772705b4be `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-167"></a>
### 167. N6 / ` render/vulkan: replace wlr_vk_render_pass.srgb_pathway with two_pass `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` db5c63456de594114d3b8c8b2a57a21f414571cd ` → ` b440e7d5950e4a45a81d75149129a417701d354a `。
  原证据引用：` ebe1fa0dee9d87f2f46bcea25ca545b1c0843bf9 ` → ` 0a127e70b42b8319a1e129fca1e248dd8a99374c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 34dc93862257c1c9f69958379fd8d1e8b75e5461 ` 和原目标 ` 638b0db58146d07990785d434cdfb2ea70a307e8 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cc0ccaaf1655b2f022867cfbeb747313285cef8c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-168"></a>
### 168. N6 / ` render/vulkan: add linear single-subpass `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b440e7d5950e4a45a81d75149129a417701d354a ` → ` 4f3cd97b5dfbddc525f6b5aafe12bde4267f05bc `。
  原证据引用：` 0a127e70b42b8319a1e129fca1e248dd8a99374c ` → ` 9802015bcfa7c9086d3b644c833ae5cc48e445ce `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 950bbb8fe1b23fa77e0953d40d76cfaf46f0d92f ` 和原目标 ` 1e043e87e6ec146503757cefe8869be88ea99cd0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 86086a7a051d4696c7d0d3b1a2581c1f55325ca8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-169"></a>
### 169. N6 / ` wlr_drag: drag motion signal also needs to be sent `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/data_device/wlr_drag.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4f3cd97b5dfbddc525f6b5aafe12bde4267f05bc ` → ` febbe0dff300cef8e9e37f7d609e427ea96f36b5 `。
  原证据引用：` 9802015bcfa7c9086d3b644c833ae5cc48e445ce ` → ` 4081e7524710bc961cd2b95277f10cfb3ee4fe0a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 75c10a1391360aa29920a801f59ff7461912d6aa ` 和原目标 ` bce6ec5113af1d3f61f9bec9d1716dd8b73b39ab ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 50d9b9cdfd92f9202ab567d4e178ff3e52944cda `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-170"></a>
### 170. N6 / ` Add release script `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/release.sh `。
- 依赖 ` 3rdparty/wlroots `：updated；` febbe0dff300cef8e9e37f7d609e427ea96f36b5 ` → ` d3dbee739bfaee39b8f78a44ae7cba621e590025 `。
  原证据引用：` 4081e7524710bc961cd2b95277f10cfb3ee4fe0a ` → ` 55efeaf5b01429392018c57f8874acabb4b4dc35 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 635bf146b865db63416f82bd6092442de594f507 ` 和原目标 ` 29706cdf213c8aaa699bf0ded75ad8066fb0b796 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a3bbfe7c2ac3bb5d5647721b33657d9ff0508afc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-171"></a>
### 171. N6 / ` color_management_v1: drop duplicated enum converters `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d3dbee739bfaee39b8f78a44ae7cba621e590025 ` → ` 5301b4f3f0ca7cd797bc260f3eb16c941cc95565 `。
  原证据引用：` 55efeaf5b01429392018c57f8874acabb4b4dc35 ` → ` 381c7978cc443ab826aeba00f418c775bc56fae3 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8e64fba9494a4dc8c2c9845a2c2724c7632b81a4 ` 和原目标 ` 9475851a2a60521eef5043019f5ae2d0b871a7a5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6d8842aaf556568dfaa2a7a15495b3f386002ac8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-172"></a>
### 172. N6 / ` color_management_v1: make from_wlr enum converters public `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_management_v1.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5301b4f3f0ca7cd797bc260f3eb16c941cc95565 ` → ` 39285d968f5d116c83b55a0013609f8b551fa4a4 `。
  原证据引用：` 381c7978cc443ab826aeba00f418c775bc56fae3 ` → ` 7db4dcef622864168074541f87097cbb248c11e6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a378e058a4bd3bc87edf943504258c76f668ed9b ` 和原目标 ` ab3ff3155d3f88be9f00515a562ace463c4193a7 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ac14a5b3ba48f0afeca76304af54d4b16148de68 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-173"></a>
### 173. N6 / ` color_management_v1: add destroy event to manager `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_management_v1.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 39285d968f5d116c83b55a0013609f8b551fa4a4 ` → ` b7d1ef2bc58ac6bb3c611e24910ca19d20c2b77c `。
  原证据引用：` 7db4dcef622864168074541f87097cbb248c11e6 ` → ` 5f4b6c5768d585d0ef777e8219b619d32b27bb7a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 263e98177d78628e1aeb6d90dd9e0598db87454b ` 和原目标 ` aebe5b083205c86a52532454f52c0aaf56ddf902 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2e8ee72a7a6dd147984a3a88d95f883e5c7b31cf `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-174"></a>
### 174. N6 / ` scene: send color_management_v1 surface feedback `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b7d1ef2bc58ac6bb3c611e24910ca19d20c2b77c ` → ` ff23997f87d4ae47b144759972f625b7714e88c6 `。
  原证据引用：` 5f4b6c5768d585d0ef777e8219b619d32b27bb7a ` → ` f9ce13ad39839c4fbec391d381a1092686ae131b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 437174b43a3832b1d812eb88af1f716d748197b1 ` 和原目标 ` 7f9b603040163279eaae6f2d9e9e6aa30a299ffb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 331893bfdd7c48771358a8db6f02f9effb1e5338 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-175"></a>
### 175. N6 / ` render/color: fix bounds check in lut_1d_get() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/color.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ff23997f87d4ae47b144759972f625b7714e88c6 ` → ` 7902329fb81b8996e084b5eb7d35bfc8b2b97dd7 `。
  原证据引用：` f9ce13ad39839c4fbec391d381a1092686ae131b ` → ` 320d5adebc3220a6e068bca5419cc2eab8791913 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 505329bf071892244a4e8b80e8595429f68230c8 ` 和原目标 ` d34d8520a8ac9192ae882afd90432e99ca8e7427 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5a25b40c3a0c4615aa1cdcf66ba45669707807e1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-176"></a>
### 176. N6 / ` backend/wayland: log when getting disconnected from remote display `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/wayland/backend.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7902329fb81b8996e084b5eb7d35bfc8b2b97dd7 ` → ` 381dee6115c40e1640cb697bd2edd50d2d331925 `。
  原证据引用：` 320d5adebc3220a6e068bca5419cc2eab8791913 ` → ` bd0a4ace517258e4e14180cde4a49c505cd75bcb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 91921354b90f4eeadd031b2baaeeba95e9996644 ` 和原目标 ` 4a7c08161fed07b7cf4f583b4774d5434a067098 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 48bb13c8ee6c7b59a80a99b6d0479051f23e4c2a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-177"></a>
### 177. N6 / ` backend/wayland: continue reading on hangup `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/wayland/backend.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 381dee6115c40e1640cb697bd2edd50d2d331925 ` → ` e32bb165e2887325427377a1f9fb9301801eea7f `。
  原证据引用：` bd0a4ace517258e4e14180cde4a49c505cd75bcb ` → ` 6caed8a345483a8288998d8e467e82dda60c6f1a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b66698bab2ac579ad52fb40e3438a45110f104c4 ` 和原目标 ` ec0c5a6454025e942d1dab727090ced8e485262d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a8b4c51fb6ee320da65df0b18efb904edd8ba275 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-178"></a>
### 178. N6 / ` backend/drm: avoid error message when EDID is missing `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/drm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e32bb165e2887325427377a1f9fb9301801eea7f ` → ` ebc03d7bbc6409ef640ad00894beb056a0fafbe6 `。
  原证据引用：` 6caed8a345483a8288998d8e467e82dda60c6f1a ` → ` d8605c1464bbdfcc8942fadd18298584dfd93781 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 52382ecfe26abb0987212c5d019770cfd29a38cf ` 和原目标 ` 5616e031674c4328473e3bcbd499152cf676deac ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0ef4890bb77d07a4962c1a2005bcc05a154302af `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-179"></a>
### 179. N6 / ` backend/session: fix crash on udev device remove event `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/session/session.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ebc03d7bbc6409ef640ad00894beb056a0fafbe6 ` → ` 339693dea618a403748e8c168ec5a2e80581f38e `。
  原证据引用：` d8605c1464bbdfcc8942fadd18298584dfd93781 ` → ` c6e03b639cf84e92a070b888a775679c2a13fc37 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4353caeb24222b3e9a9862997814d794ae00b94d ` 和原目标 ` 35be5103a38fc87995ab0978592ed0d29f1918f7 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 72e369f6d3b56d9fd5a9f8050cd27d04bf9932c7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-180"></a>
### 180. N6 / ` wlr_scene: fix tf/prim comparison for scanout attempt `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 339693dea618a403748e8c168ec5a2e80581f38e ` → ` 5b1db19746b5e9d849aa236a946f105b4387ab2c `。
  原证据引用：` c6e03b639cf84e92a070b888a775679c2a13fc37 ` → ` e19df4af1b227cd90fdd0b9bbcb2db7f95896211 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7b7c401f960cb323ac70ba3b3523f3f0df15970a ` 和原目标 ` c6a5860a50f7a539b247732ecc194b204400ca5f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2851ae97f00835f7e0854bc0069f3510dc385e3d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-181"></a>
### 181. N6 / ` wlr_scene: return scene_direct_scanout_result instead of bool `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5b1db19746b5e9d849aa236a946f105b4387ab2c ` → ` 15547d1adac913a566a3ca619e0c0163b0fc2e70 `。
  原证据引用：` e19df4af1b227cd90fdd0b9bbcb2db7f95896211 ` → ` 421dae231ad91a23895d6aa35fbc903e2ba18eea `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ab94ac3465ed64e79b82c0c33bebc84c650d9d4c ` 和原目标 ` a2a5005855607fed13c9012e7d0d4f06733b0e51 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 789350b65690a09a0eb4165fe200d500aed7ae94 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-182"></a>
### 182. N6 / ` Revert "wlr_scene: fix tf/prim comparison for scanout attempt" `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 15547d1adac913a566a3ca619e0c0163b0fc2e70 ` → ` ce1337e155370d20d87e57769735ec4d70b12422 `。
  原证据引用：` 421dae231ad91a23895d6aa35fbc903e2ba18eea ` → ` 287b0f3758ccfe5742ac26181fd034c1530601a2 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8cb8af048a6aab2dfe8e972ebbac757d18952ebf ` 和原目标 ` 333ceace41e49e0ff23dd859cc290657c2717793 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 832f8b37f4577efbb92d0b03d7152fce60a46572 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-183"></a>
### 183. N6 / ` render: introduce Gamma 2.2 color transform `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `、` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ce1337e155370d20d87e57769735ec4d70b12422 ` → ` 018f75906cb1ef53e700c282e24c3b7225d67553 `。
  原证据引用：` 287b0f3758ccfe5742ac26181fd034c1530601a2 ` → ` fee73bb79bd9a583ee75f7bd64eea4ede1634ca2 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` de8a45ad87af71675c2d1e8bdff0b84578e4afe2 ` 和原目标 ` 39ee5addc607aa03dbe9ee9852f7bfc87e4ad5db ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 494e361c18cdf43534a07b6aafdc19ac09d2e8a0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-184"></a>
### 184. N6 / ` scene, render: use Gamma 2.2 TF as default `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 018f75906cb1ef53e700c282e24c3b7225d67553 ` → ` d282690f11c5b5d9e7555b69998d4c2749621e34 `。
  原证据引用：` fee73bb79bd9a583ee75f7bd64eea4ede1634ca2 ` → ` ba62031f6bf52ac3e47ecf46167308e107138851 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 14bc196ab3bd402cfbf024ad7161ea740d9438d5 ` 和原目标 ` 2dfd5d13a5cf247a7f2fe95e3065bc83f4c28e1b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 95338802c3174b0f3dfa215166e553743f260b9c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-185"></a>
### 185. N6 / ` render: introduce bt.1886 transfer function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `、` 3rdparty/wlroots/types/scene/surface.c `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d282690f11c5b5d9e7555b69998d4c2749621e34 ` → ` fe4e3bbb0b5e978a4b267fc4d979f02b41f977fa `。
  原证据引用：` ba62031f6bf52ac3e47ecf46167308e107138851 ` → ` bb0966ed2b4d3c15a5def048d89a3ecc28b8fe78 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1b12bc8f66b4b00a3106978d5dbfdc32f79477f1 ` 和原目标 ` bac499735f6e48518ed5ceb261681a43108b615f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5547b4a50a480cdc14adcc81ff8145dbcfdc1420 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-186"></a>
### 186. N6 / ` wlr_scene: fix direct scanout for gamma2.2 buffers `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` fe4e3bbb0b5e978a4b267fc4d979f02b41f977fa ` → ` 3ec756c2dc4449106c07c057d285fb814ccc2962 `。
  原证据引用：` bb0966ed2b4d3c15a5def048d89a3ecc28b8fe78 ` → ` cdbb40689cf086dc18d54e58247e90a1054e8029 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 281b27d95f3c8a0530023f2f33e514c894a2a4eb ` 和原目标 ` 5d86cfdcbe12e04ac1dea1a9f2e3bdf263bd8d07 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 3c4e1ee8d72fd6372929ade67a39d399bcfbd3ab `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-187"></a>
### 187. N6 / ` ci: fix VKMS lookup after faux bus migration `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/.builds/archlinux.yml `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3ec756c2dc4449106c07c057d285fb814ccc2962 ` → ` 481518c7c0237c10f675d60ad20de4e6dbc74ef1 `。
  原证据引用：` cdbb40689cf086dc18d54e58247e90a1054e8029 ` → ` 30cd39916ae691f08018fa32f97eef13800f00a7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d9a79f78d0d3e7dca79fd1ec3c42bbb93b4d9119 ` 和原目标 ` 9948c3378df5182c86cc868d721a58627872aacb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` aac09e833eb365c85d7717b2a5c623024ef43bfd `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-188"></a>
### 188. N6 / ` input-method-v2: Destroy keyboard grab before input method `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_input_method_v2.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 481518c7c0237c10f675d60ad20de4e6dbc74ef1 ` → ` c7465d7f575fc067e699e9527ca528c4f847db24 `。
  原证据引用：` 30cd39916ae691f08018fa32f97eef13800f00a7 ` → ` b5b94d13cc9e0f41c02402b4779f363bc749fad6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 176a8cc2e8a5aee7d7f658a0e48aae7273bd0164 ` 和原目标 ` 469767a5d16acaebfe27b6510c9a5bacb8bde0c3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 93888d169a47c665f177091460f2bc857c12c078 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-189"></a>
### 189. N6 / ` util/box.c: use 1/256 instead of 1/65536 in wlr_box_closest_point() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/util/box.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c7465d7f575fc067e699e9527ca528c4f847db24 ` → ` 323da48290ee6f5f0d755f9d9ff74ef7b39e4341 `。
  原证据引用：` b5b94d13cc9e0f41c02402b4779f363bc749fad6 ` → ` 0085ef5ad41ae9151c1d3689f3638d46ee17971f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d1aad42faaf0e715d3ef79f329827ab6bdad8709 ` 和原目标 ` a6a7ab0654d73cb08b5558e08312ad61390582f1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c5d1408b1cfb31e0406233c9ea991092ec2690eb `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-190"></a>
### 190. N6 / ` linux_drm_syncobj_v1: fix use-after-free in surface_commit_destroy() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 323da48290ee6f5f0d755f9d9ff74ef7b39e4341 ` → ` 2383bbd2f665f32ef9e41507e7396c5831e06aae `。
  原证据引用：` 0085ef5ad41ae9151c1d3689f3638d46ee17971f ` → ` f5e922c6e1a40aeb14ddddfd9397a4e2e8f568f1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 067a405aee6453f2be435febaeac6bb00fea3b5a ` 和原目标 ` 47a22ef4f5384c4905607b57104c83a66d8b7642 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9b68323a5565c00c26f1c60ea7bbe1885d481373 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-191"></a>
### 191. N6 / `` backend/session: use device `boot_display` ``

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/session/session.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2383bbd2f665f32ef9e41507e7396c5831e06aae ` → ` 10989ae5309dd226e2007f2c837767a0aa3adf8d `。
  原证据引用：` f5e922c6e1a40aeb14ddddfd9397a4e2e8f568f1 ` → ` b4bb496f8a5bdbdbf223918f020fb6b206b03ee7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 376af70c54377ce8266a194c98b8f6b89a07abb8 ` 和原目标 ` e7d50f2d68812ef676b37bb82fc1c73736584a60 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cee008a6094cb958ee5b35189606cd496dfa43a0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-192"></a>
### 192. N6 / ` render/color: add wlr_color_transform_eval() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 10989ae5309dd226e2007f2c837767a0aa3adf8d ` → ` 595ec6543a57b8e91345dc1d9a349e9838d5042b `。
  原证据引用：` b4bb496f8a5bdbdbf223918f020fb6b206b03ee7 ` → ` 1cb627e5ea78d11e62f70965c43b515aa5d32ea6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f6962a9d32fe455341ece7d6c90b4dfb976f9755 ` 和原目标 ` 435b53c728b394feff1b9fe83e1b09c9cac9b2b5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 58949a4a89491ad2d62c7f828a4ea8d040211d10 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-193"></a>
### 193. N6 / ` render/color: add wlr_color_transform_pipeline `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 595ec6543a57b8e91345dc1d9a349e9838d5042b ` → ` b6c31fc9d68003d5005e6de561fc02d27407c159 `。
  原证据引用：` 1cb627e5ea78d11e62f70965c43b515aa5d32ea6 ` → ` b0345a1f86e84faa4267f68241ed63e4f7cf0816 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a193b80ad2a620584e4ef3ef276f0df67a9abb1a ` 和原目标 ` 3890e8c825b20c2562d597c07519f4fd771e25fa ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 180194f1dcfd4e4d52b1b3501ab9594870957636 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-194"></a>
### 194. N6 / ` output: check for color transform no-op changes `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b6c31fc9d68003d5005e6de561fc02d27407c159 ` → ` 35857785c05b80402fe092f14645281c700b0dcb `。
  原证据引用：` b0345a1f86e84faa4267f68241ed63e4f7cf0816 ` → ` 5b7de26d386254814e90faee276e340457018875 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 157c8e5c6d66ac8f8bf878bf9314cc18f796d576 ` 和原目标 ` 6340677ee09372979b7f03342bf5827e7e005a7d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 61426fa0b91a8ea79ccfeb00784772010b784b5c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-195"></a>
### 195. N6 / ` gamma_control_v1: add wlr_gamma_control_v1_get_color_transform() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_gamma_control_v1.h `、` 3rdparty/wlroots/types/wlr_gamma_control_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 35857785c05b80402fe092f14645281c700b0dcb ` → ` d8964335277c25f41bcb8dac3aa1b270718e3ec4 `。
  原证据引用：` 5b7de26d386254814e90faee276e340457018875 ` → ` 898d4e5cd71a8a09a6c5ceb2f94b5982d7f90f5b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8a1c9cb02c96da1e87b6648f729154c30d57dc61 ` 和原目标 ` 31f8b57dad90c9765bbe0f7e5ea7ad7277470413 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 4b5cc8f4a41cc64ab9a58320cb05ed3b7d064d9b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-196"></a>
### 196. N6 / ` gamma_control_v1: introduce fallback_gamma_size `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_gamma_control_v1.h `、` 3rdparty/wlroots/types/wlr_gamma_control_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d8964335277c25f41bcb8dac3aa1b270718e3ec4 ` → ` b593be582369380fa605fc0aa462390b8bc65d28 `。
  原证据引用：` 898d4e5cd71a8a09a6c5ceb2f94b5982d7f90f5b ` → ` 373ae6578ab5144cbf5965a719e4fe12b1bd0d90 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6af85fa8f6fbec935f4395475f7af72e798ee51c ` 和原目标 ` e13321f0b6514f884522c6666d3053706246a920 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` aa407fc97c89c512b044054c947b500069faa7aa `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-197"></a>
### 197. N6 / ` scene: add software fallback for gamma LUT `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b593be582369380fa605fc0aa462390b8bc65d28 ` → ` e19d0a0d1843fb5a2658dfd72594cb899dc933ec `。
  原证据引用：` 373ae6578ab5144cbf5965a719e4fe12b1bd0d90 ` → ` c7106119c38a6df8f8f8f0cc3530b22c1c30ab6c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a8ad377c4b0933fda640a95ead1786e39a479152 ` 和原目标 ` a9e6ef3bd25e5152b77ddd3fe247f2453910f924 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 00b092c18591f708685043e9cb5c187021f24909 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-198"></a>
### 198. N6 / ` xwm: Fix double-close `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/xwayland/xwm.h `、` 3rdparty/wlroots/xwayland/xwayland.c `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e19d0a0d1843fb5a2658dfd72594cb899dc933ec ` → ` 816c23f7b02cd285abfbd5a0a7c7216a181d1fed `。
  原证据引用：` c7106119c38a6df8f8f8f0cc3530b22c1c30ab6c ` → ` a0bf3d4ecd4ce53504501cab0899e85a29edeb19 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ee51b8c2d6ab1f641b3923d85cf3f3d400806a6b ` 和原目标 ` c62697e15c37d50319ae115a8cbc125352578b45 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d07041af35fdb7e381996279e720cf2fd7c709a9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-199"></a>
### 199. N6 / ` render/vulkan: clip negative values before applying transfer function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/shaders/output.frag `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` 816c23f7b02cd285abfbd5a0a7c7216a181d1fed ` → ` 2e80099b2c77693a0a4a3fece4a0ba5abec769b4 `。
  原证据引用：` a0bf3d4ecd4ce53504501cab0899e85a29edeb19 ` → ` d6294f7c717c8e063d74d664084f29758f6dbaee `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 0ad625e31c0e3db7cc06ed5fcb78bdc264bd8963 ` 和原目标 ` 03e713f506cf6bd6a6c658823bbc8110bc3dcae8 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c80e529bfff58ea003287bc5fe5a02b5f7040d14 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-200"></a>
### 200. N6 / ` types/wlr_input_device: name maybe NULL `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_input_device.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2e80099b2c77693a0a4a3fece4a0ba5abec769b4 ` → ` c50d408deb4fbea97633bb59599b627bf18963b6 `。
  原证据引用：` d6294f7c717c8e063d74d664084f29758f6dbaee ` → ` 10ca5eab7ed5e9867f2083fc0d0b8e2c994c2bed `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` cd468f22a2d22b122ae7f90a106b2e17be4425ed ` 和原目标 ` 0ad0aec09c0f996024d853100a1505df1d8c5f57 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` dcca27213df1e1744cc76e01ef5c5282fb2a8b84 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-201"></a>
### 201. N6 / ` drm: save edid color characteristics in wlr_output `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/util.c `、` 3rdparty/wlroots/include/wlr/types/wlr_output.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` c50d408deb4fbea97633bb59599b627bf18963b6 ` → ` a0d0dbfe765569ae63f2eeccc82680a42b5ccef1 `。
  原证据引用：` 10ca5eab7ed5e9867f2083fc0d0b8e2c994c2bed ` → ` 0dc396c2f8776d88447e23346af209e32cdcb38a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ec2cc0d8f046917b349beec7427acebe1e9fb92a ` 和原目标 ` abf173ac9c35d54c2c8342daab35f34996937b61 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7f3de74732416e8454a798cc0e01aa936edc4c1b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-202"></a>
### 202. N6 / ` wlr_virtual_pointer: Set axis source on all axis `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_virtual_pointer_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a0d0dbfe765569ae63f2eeccc82680a42b5ccef1 ` → ` 4779fde87a598dbcde6da9626bc371b90acc34bf `。
  原证据引用：` 0dc396c2f8776d88447e23346af209e32cdcb38a ` → ` 60ceda76eac07d74fe1ed8374110f1be13656c02 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 74ddba3ad69645de9c9d0574ad1b51f31f6acc15 ` 和原目标 ` 1c4ab8ff2a6f1589fb4faa26d7c87b48113769cf ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` be5f3cff6cd846e2c3578dd9e7c65b71381251ad `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-203"></a>
### 203. N6 / ` cursor: apply output image description when preparing texture `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/cursor.c `、` 3rdparty/wlroots/types/wlr_cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4779fde87a598dbcde6da9626bc371b90acc34bf ` → ` 6aa18128cec596e55b81c8c7a4b19b422849b779 `。
  原证据引用：` 60ceda76eac07d74fe1ed8374110f1be13656c02 ` → ` 93a0cf5782bd6f2dbac6e0f4e5ff12c1665c1888 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 98311478a1842967c73b02182288a3d8f6794605 ` 和原目标 ` bf752bda90e5c1488f0c8ff1231a3591d5a99ac7 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 99eb280a48054145e29d034573f8715b4ab54adc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-204"></a>
### 204. N6 / ` render/color: turn enum wlr_color_encoding into a bitfield `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/color.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6aa18128cec596e55b81c8c7a4b19b422849b779 ` → ` 5ead67aa602aaaa38922d49b223807832b03f56b `。
  原证据引用：` 93a0cf5782bd6f2dbac6e0f4e5ff12c1665c1888 ` → ` 47e25181f5f12b99b7f8b3b68f0a6aaed306730d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7975208b038626a0df83fc285aaba339c52d8115 ` 和原目标 ` f44c24bbad12e4bcfc9eefc2fc0e0a63a57abd49 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b7d8183b5ab7cee1c9fa8125b6e14f740413cf8b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-205"></a>
### 205. N6 / ` render: add color encoding and range to wlr_render_texture_options `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/include/wlr/render/wlr_renderer.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5ead67aa602aaaa38922d49b223807832b03f56b ` → ` be8ec22ab73e8bd5ae5300e8559b623a31a8606d `。
  原证据引用：` 47e25181f5f12b99b7f8b3b68f0a6aaed306730d ` → ` 09b61a3d0b882254caf93008ef6765d275221def `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a6acfaa2493ccfb4848ad4455df0e048d0f250a0 ` 和原目标 ` e97e9564a6cd81d22649d6bb16f8fa0fd5e75721 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 34c5ccfeab948c1bc147500bc91fbd483c1fb735 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-206"></a>
### 206. N6 / ` render/vulkan: add suport for color encoding and range `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` be8ec22ab73e8bd5ae5300e8559b623a31a8606d ` → ` a7cdf8cd56f4fc88f74d7741bb061281f439f135 `。
  原证据引用：` 09b61a3d0b882254caf93008ef6765d275221def ` → ` b2bcb7fbf977d8b1044fff3769b3dd64de31cbe5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 062478639d1a54ce37b217b56ab0da36cdd567cd ` 和原目标 ` 5d88280805504f8af8c3a209cbb0b920df613fec ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ad97f50fc149aad7250542ce0136157260071e35 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-207"></a>
### 207. N6 / ` color_representation_v1: make supported_alpha_modes const `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_representation_v1.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` a7cdf8cd56f4fc88f74d7741bb061281f439f135 ` → ` 687f1b2edf247ab1d78b6bee30d3e52fb4d2f3fc `。
  原证据引用：` b2bcb7fbf977d8b1044fff3769b3dd64de31cbe5 ` → ` be06b6343fada49366c347efc6faf3642b6a8e3e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6c857fd08e4b9f38cf859052a51e0f70b0bc0534 ` 和原目标 ` 1d733bf5d94155dd172744add15ff667c7946e60 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c9b8092c287ff3c87064efb1713a5b1801a5d1ed `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-208"></a>
### 208. N6 / ` scene: add support for color encoding and range `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 687f1b2edf247ab1d78b6bee30d3e52fb4d2f3fc ` → ` 98916d234e9972cce3eea9e2e813f76c1b51114f `。
  原证据引用：` be06b6343fada49366c347efc6faf3642b6a8e3e ` → ` 1d52f153bfba7984cd4d821d81f35e084649fa87 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5706871fba99a052671e17f8f9ecab92fb5927a3 ` 和原目标 ` a48f9c3a39697e0560d8ce4c27cc95f9d32650ee ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 50a35a22550f814a31c911b654515ce704f66969 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-209"></a>
### 209. N6 / ` scene: add support for color-representation-v1 coeffs and range `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 98916d234e9972cce3eea9e2e813f76c1b51114f ` → ` f510b4e3c3c03c8a4f832b3de39f69a86c886222 `。
  原证据引用：` 1d52f153bfba7984cd4d821d81f35e084649fa87 ` → ` 4186371f3f0e9b18446ff3061a27fc087a8fa8e5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d8a3e90459942b4af5d0869901d8f1be12fbc40a ` 和原目标 ` d61d3c34cf3751a5e910b29bc1a99ad88786f9cd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 1c583946cbb9fa982b8e26e15cdc6a2278f69799 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-210"></a>
### 210. N6 / ` color_representation_v1: add helper to create global from renderer `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_representation_v1.h `、` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f510b4e3c3c03c8a4f832b3de39f69a86c886222 ` → ` 98c0b8e5ceda7120297c25a4fa84bb3d9cf190ce `。
  原证据引用：` 4186371f3f0e9b18446ff3061a27fc087a8fa8e5 ` → ` 78c050257c42da5d8e26a213e8806707c9cb97e1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7a6e9e84bb9a20d6d8d4c170b40689b05044176d ` 和原目标 ` ffea25ff5d2cf70c46bb162637bad57e31b97d6a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2ce3ca69bd7f46c986ba868ca98e99486fe2f601 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-211"></a>
### 211. N6 / ` output/state: add missing unref for color_transform `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/state.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 98c0b8e5ceda7120297c25a4fa84bb3d9cf190ce ` → ` 962ad27107731d34420b21bcf7ecedeba62fc973 `。
  原证据引用：` 78c050257c42da5d8e26a213e8806707c9cb97e1 ` → ` 9b7a7f3ad3bd1427f90657ce7b9ac5f5a7f6ced9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 185dbab6bd716e5de74581d12a903e3eba742f83 ` 和原目标 ` 4ee3e69b97d6a9b4f2d2659d05bed11a136e4b53 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c6036f5ba8c1190c8419d92f4e8c5421a261e5c1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-212"></a>
### 212. N6 / ` render/vulkan: fix single-pass linear path `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 962ad27107731d34420b21bcf7ecedeba62fc973 ` → ` 32574744af93312ef630fc3fd57c72d95ddef981 `。
  原证据引用：` 9b7a7f3ad3bd1427f90657ce7b9ac5f5a7f6ced9 ` → ` fa6aea4fbd30d906564fd57be6a5609f1cbc11b1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b134d3316de3017b1b520e4dd0077e703b50438c ` 和原目标 ` 8b6e6292269b6a2f77fd734324670cbb5edd94e2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a67ca2959eb32efec463438d33f869b8dc345795 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-213"></a>
### 213. N6 / ` input-method-unstable-v2: There are no enable / disable events `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/input-method-unstable-v2.xml `。
- 依赖 ` 3rdparty/wlroots `：updated；` 32574744af93312ef630fc3fd57c72d95ddef981 ` → ` 0ec361a47167dcf5773ab15721f4a4364874a602 `。
  原证据引用：` fa6aea4fbd30d906564fd57be6a5609f1cbc11b1 ` → ` e89cd6275b0b6dd623894b4b98306e1ad1f0ebf6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 57c36469b466184c578da62d73bed578e4783258 ` 和原目标 ` a5a5156e043dbae5a4fea949de69bfe2808f3000 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b07341aba6873e2000c905617c6daa6f2c49fb67 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-214"></a>
### 214. N6 / ` input-method-unstable-v2: surrounding text sends surrounding text `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/input-method-unstable-v2.xml `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0ec361a47167dcf5773ab15721f4a4364874a602 ` → ` 78cf496b425779fc1fa623a439fcd85e3a24ac06 `。
  原证据引用：` e89cd6275b0b6dd623894b4b98306e1ad1f0ebf6 ` → ` 1077861e0dbe86599aa1e8e0e25bc9eac1154940 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2bcefab7736eec802cee9293c3e1ef45b94c5391 ` 和原目标 ` c21e778590050003da863eaa6981bae3b18261f1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 76ba22e9daf87be7edc4a9fca6012eb5a0162d04 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-215"></a>
### 215. N6 / ` render/color: add wlr_color_primaries_transform_absolute_colorimetric `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 78cf496b425779fc1fa623a439fcd85e3a24ac06 ` → ` e2ce6baeeeea748fe9968074caecf06fe4a04227 `。
  原证据引用：` 1077861e0dbe86599aa1e8e0e25bc9eac1154940 ` → ` 87185a0345538b7ad944dbeb9a10bc563e018bfc `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d6a6ecfb0ba65b1e0142740edc046ed95a45c733 ` 和原目标 ` 2e94fd024418d2178396a6c1b4f5985047eb3f6f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 657f379f9287ec44cb160ce60516376aaa237702 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-216"></a>
### 216. N6 / ` render/color: introduce wlr_color_transform_matrix `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/wlr/render/color.h `、` 3rdparty/wlroots/render/color.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e2ce6baeeeea748fe9968074caecf06fe4a04227 ` → ` c0f6bd810151fae94ced7055d50ff8abda577927 `。
  原证据引用：` 87185a0345538b7ad944dbeb9a10bc563e018bfc ` → ` 1cf868f254be0f1bc85cca31bc169184396eca57 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b22ff363877fff122484669b129585f21fb1789a ` 和原目标 ` b6e14aabfe22cfb77c62e9fed4f06cffd986bc03 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 88c92df65dbb870732588af1cc31fd4346bd1369 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-217"></a>
### 217. N6 / ` render/vulkan: apply "matrix" color transforms in shader `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c0f6bd810151fae94ced7055d50ff8abda577927 ` → ` 11c9f1a3dccccd665668c528b0a97f83e70b7dc3 `。
  原证据引用：` 1cf868f254be0f1bc85cca31bc169184396eca57 ` → ` fbe836e2f70cf4ff7aaf7583c7724ea5b7ccacef `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5b312c3ecee51220bdd55cf7ac94482d45039f22 ` 和原目标 ` cd84c9be93be4ccd1d86e52c42388bdd84e88160 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 651a758800b465952c1d8f27675a52c4f18a92f0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-218"></a>
### 218. N6 / ` scene: always apply user gamma after scene color transform `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 11c9f1a3dccccd665668c528b0a97f83e70b7dc3 ` → ` 77f7166a8282536f20721603ac51b40fdad001c5 `。
  原证据引用：` fbe836e2f70cf4ff7aaf7583c7724ea5b7ccacef ` → ` 167a5be273ebf66e460ac3a43a33c93bbd3c091e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2db1217d9547190f1a0636321ac9d92018a18511 ` 和原目标 ` 6e174b3638e16de7620b8e401f9e72c077963d2a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 30283e60da9f64f8ff548b8ebd0a46828d8a51f5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-219"></a>
### 219. N6 / ` render: remove buffer primaries from pass options `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/types/output/cursor.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 77f7166a8282536f20721603ac51b40fdad001c5 ` → ` a7a8c1556da5292d9ea6afd5673d499e206ea5ed `。
  原证据引用：` 167a5be273ebf66e460ac3a43a33c93bbd3c091e ` → ` d996f85289f90232519795eff16ebede045ebea0 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2016ffa81ceff6c6bbc6e95f53cae5bb8a101d66 ` 和原目标 ` 6ecf0de43938531d04334cbc5e19ce8cb4d2eaa6 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ac07f3647e4c353ed7bbf0c34908abb692316b78 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-220"></a>
### 220. N6 / ` scene: don't rebuild color transforms each frame `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a7a8c1556da5292d9ea6afd5673d499e206ea5ed ` → ` 8ff1891d7c9ec27d91d9a33f69700e08483a6917 `。
  原证据引用：` d996f85289f90232519795eff16ebede045ebea0 ` → ` ee221e1e27ed31b85a7da3ff9cd6cb30416fa5ad `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2b150ee90c8091c9f9a798521e566b7fe3dce935 ` 和原目标 ` 0ece1b83e012398758abdae5bf3e5417792e80d2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 3a961d238c82737c11b23fcd14897df92b29065a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-221"></a>
### 221. N6 / ` output: don't rebuild cursor color transform for each update `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/types/wlr_output.h `、` 3rdparty/wlroots/include/wlr/types/wlr_output.h `、` 3rdparty/wlroots/types/output/cursor.c `、` 3rdparty/wlroots/types/output/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 8ff1891d7c9ec27d91d9a33f69700e08483a6917 ` → ` 3d220de3c167be71ce3202881b02c8b2309df057 `。
  原证据引用：` ee221e1e27ed31b85a7da3ff9cd6cb30416fa5ad ` → ` 12e5d3dd5aa19178dfb50c1130cb738fc2d63206 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5937df5c87b4785cba5b8a81886f4850d5dd61fb ` 和原目标 ` cfc190c2232ccda4c95fe9be062a1a16b16c076a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 39496aa77247e776b50b5441bafddba9143f2bab `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-222"></a>
### 222. N6 / ` wlr-foreign-toplevel: avoid wl_resource_find_for_client() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_foreign_toplevel_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3d220de3c167be71ce3202881b02c8b2309df057 ` → ` 472a6aa658bf4694ee5bde059d028e561f1891e2 `。
  原证据引用：` 12e5d3dd5aa19178dfb50c1130cb738fc2d63206 ` → ` 7c1f6a2b7642ac7804ac3f617f8bccd2304a27af `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d842378e12e4a35671be9d5c21d37cd08d13c459 ` 和原目标 ` bf4d2cd0f91bbca6d9ea9ff2f07edb6a3b8d0056 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7aebbd9d87e206f547e1350af75950737edd439a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-223"></a>
### 223. N6 / ` Add "const" to eliminate "error: initialization discards ‘const’ qualifier from pointer target type" `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xcursor/xcursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 472a6aa658bf4694ee5bde059d028e561f1891e2 ` → ` 049df3a0e56cdd1993e84009fb270e891d5ea998 `。
  原证据引用：` 7c1f6a2b7642ac7804ac3f617f8bccd2304a27af ` → ` 6be1b7be9c03686950afd014473faad54ce83906 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 90691cdea7530c371e3805e28b479c06b8c04aa0 ` 和原目标 ` 0a70b71d3a2be3b90851cd33d0ea2493fe47ec5f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a4e8ac77be3a1e2fc29d4af7a9b7cea437f380e3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-224"></a>
### 224. N6 / ` color_representation_v1: don't leak supported_* on display destroy `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 049df3a0e56cdd1993e84009fb270e891d5ea998 ` → ` 90fd11be731e27ee9f644ff5a9b7608045f03ecf `。
  原证据引用：` 6be1b7be9c03686950afd014473faad54ce83906 ` → ` 3dbbc8746af642bdff040e70da80bd80065a7d62 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` da21f4e5915a14fea778d9fa038fb434f893d4e7 ` 和原目标 ` 72b4c95e7f58c13133c7db0f5dc30099a3544e5c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e5dcab202049de7bee386c71c5957f1cc8e8e306 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-225"></a>
### 225. N6 / ` render/color: make wlr_color_primaries_from_named public `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/wlr/render/color.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 90fd11be731e27ee9f644ff5a9b7608045f03ecf ` → ` 8bccbcadc72e043781cd508b9e75547ce428e08a `。
  原证据引用：` 3dbbc8746af642bdff040e70da80bd80065a7d62 ` → ` e3f01fb528200937fe08deebbe03936d03077721 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f7face1e13784f9b4de186ccffc70891c0fe63d4 ` 和原目标 ` df41a402fe84df688ca472f9a31dc6ca6f02047e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2de8d4fb7be37e4809b326bd2884a2ee2a7e4997 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-226"></a>
### 226. N6 / ` render/vulkan: normalize luminance range in bt.1886 formula `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/shaders/output.frag `、` 3rdparty/wlroots/render/vulkan/shaders/texture.frag `。
- 依赖 ` 3rdparty/wlroots `：updated；` 8bccbcadc72e043781cd508b9e75547ce428e08a ` → ` 31030e631716dc127621533f26367483573d545d `。
  原证据引用：` e3f01fb528200937fe08deebbe03936d03077721 ` → ` 3d88608edfa07d84045b7ce21ae1fceeb04fa1fa `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 81aba2cb86984a3be3b18bdd56b7d7fd14e6f7dd ` 和原目标 ` 1f9a1d93771f928eaee3a4b8edf662f34e12c92b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 447834bedca70f05578b2c3728e5ce415c89dac6 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-227"></a>
### 227. N6 / ` drag: destroy data source on touch_up `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/data_device/wlr_drag.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 31030e631716dc127621533f26367483573d545d ` → ` d1e250df442f1e9ccdc9ea2d8fd3a45384a5062b `。
  原证据引用：` 3d88608edfa07d84045b7ce21ae1fceeb04fa1fa ` → ` 42c05746dcf2d0f7cba9392a7164238f5a1becff `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e967582c197f412fc46eab0890e8181de7455e8b ` 和原目标 ` b16a4f233df6d23a5afaf7b7ca8651f0e8676dfb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 42b50405a9da9ad7a3d2207aa5e848f59a568d76 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-228"></a>
### 228. N6 / ` seat: add wlr_seat_touch_notify_clear_focus `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_seat.h `、` 3rdparty/wlroots/types/data_device/wlr_drag.c `、` 3rdparty/wlroots/types/seat/wlr_seat_touch.c `、` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d1e250df442f1e9ccdc9ea2d8fd3a45384a5062b ` → ` 4b81b60568825c871ba3db4c083a65c6188634d9 `。
  原证据引用：` 42c05746dcf2d0f7cba9392a7164238f5a1becff ` → ` 9d1592fb9b26f48f681b94dbc40a7af660e3bbb2 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ba5abbbf116d925c10ce8f9f3113849df5d87aa8 ` 和原目标 ` 4730a9fdffc23f8a8cdf5e531fd3342ff4041c50 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9c6b3c922bce2a308daac0c3f0f0f35e74ed17bb `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-229"></a>
### 229. N6 / ` Add wlr_version_get_{major,minor,micro}() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/version.h.in `、` 3rdparty/wlroots/util/meson.build `、` 3rdparty/wlroots/util/version.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4b81b60568825c871ba3db4c083a65c6188634d9 ` → ` 9de0785507fee99f745c8248c4f7de07b58f545d `。
  原证据引用：` 9d1592fb9b26f48f681b94dbc40a7af660e3bbb2 ` → ` ca088ef278cba72f73d4bf405b1e6bcb47ce39a5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4ea7c83c74b513e9f2113805e58ffd761593373e ` 和原目标 ` 5ea5c48a077577ae2932768b2e0163a6f06b963c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9b28550b923a8bfb7bbb7084a491a512b0972743 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-230"></a>
### 230. N6 / ` color_management_v1: add helpers to get supported TFs/primaries `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_management_v1.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9de0785507fee99f745c8248c4f7de07b58f545d ` → ` a230d2fd202530ff90570c5c579d9a26dc868399 `。
  原证据引用：` ca088ef278cba72f73d4bf405b1e6bcb47ce39a5 ` → ` c6a94bf825bb2188dc7fb3e2304c30aea5216424 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 71c789fbe3542417423e61363791d565240c9da0 ` 和原目标 ` 594a84cc08e1b328214a70a673590b89db1a0331 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ccaffc93fc93a1dc215ca1f75b13bed77fb17693 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-231"></a>
### 231. N6 / ` tinywl: fix duplicate object files passed to linker `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/tinywl/Makefile `。
- 依赖 ` 3rdparty/wlroots `：updated；` a230d2fd202530ff90570c5c579d9a26dc868399 ` → ` 34b9612fd487c5fc101b30987ec27bf265f1ecaa `。
  原证据引用：` c6a94bf825bb2188dc7fb3e2304c30aea5216424 ` → ` fc6ed7de2704089632e0e8ccd517f23e29110919 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4b83bf88e9e763439c03a01e733e0946e0b52cdc ` 和原目标 ` 7859f18b11f7f04d4b1cb1ca80f05866879140d5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8394128a0a3596ffbde00aaa07cd0cb835670741 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-232"></a>
### 232. N6 / ` render/pixman: add support for ABGR16161616 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/pixman/meson.build `、` 3rdparty/wlroots/render/pixman/pixel_format.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 34b9612fd487c5fc101b30987ec27bf265f1ecaa ` → ` b95f5afd40ea5d831e34b5d5e249b66ac9829332 `。
  原证据引用：` fc6ed7de2704089632e0e8ccd517f23e29110919 ` → ` d90caee6e368e5d6031787b221a2ce7ac99db202 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4f0ce89fb2c884c5109838d66a6e5f24d2383e5d ` 和原目标 ` e5643820dbbd5e8087277b4ccb4511bdf29ba949 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 344eb8798615835499798f53400f9f639d9d50c8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-233"></a>
### 233. N6 / ` color_management_v1: add BT.1886 to TF-from-renderer helper `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b95f5afd40ea5d831e34b5d5e249b66ac9829332 ` → ` a0adc25a9fa92460cf1609c36c2dc8d5d52e38c1 `。
  原证据引用：` d90caee6e368e5d6031787b221a2ce7ac99db202 ` → ` 8058a4fa02f6d166eb6f91f7f5a0037488e7f630 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4c0f2e48eb8c07c157d541770862f10887d05201 ` 和原目标 ` 87fbf7b932a9512c270550e45f6f6a3a43ca380f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8606a1b93364a43cc07bd33afbbf80963c0f074e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-234"></a>
### 234. N6 / ` render/color: introduce color_transform_compose `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/render/color.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a0adc25a9fa92460cf1609c36c2dc8d5d52e38c1 ` → ` 0c9c8852eb4a22395e1f412f027c16c857bb29b4 `。
  原证据引用：` 8058a4fa02f6d166eb6f91f7f5a0037488e7f630 ` → ` 8be523f7597031070b104c13d0b6a72234f08800 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 067b0ade78281960f9e31aa4820de0bc86883cf8 ` 和原目标 ` 06468d74a91e408c964f7fa7e15b9b3d76a5c261 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c2296ad4d7fbc7592eb4d0dbd8b49d34ddb8195d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-235"></a>
### 235. N6 / ` render/color: assert that wlr_color_transform_pipeline contains no NULLs `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/color.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0c9c8852eb4a22395e1f412f027c16c857bb29b4 ` → ` 29233a50ad77580f0d531f1ebcbfe1f615262ffb `。
  原证据引用：` 8be523f7597031070b104c13d0b6a72234f08800 ` → ` f3a9cd1972cecf66c7e7df53aa72546630ef4e75 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 75d29da9934335df1a7717be0d795765e46af7c7 ` 和原目标 ` 8e5cb1a3e427a457cf794d2430ca60691dff1afb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 114a2fa26ceadcbc90a235a3b2c4e510b0f52646 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-236"></a>
### 236. N6 / ` backend/session: respond to event hangup or error `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/session/session.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 29233a50ad77580f0d531f1ebcbfe1f615262ffb ` → ` 12a0ceeade3859681b70c93ecdc50a13a85750ed `。
  原证据引用：` f3a9cd1972cecf66c7e7df53aa72546630ef4e75 ` → ` 673e148641b84f26635f5e69474b25c41e33d724 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ad86e8232cf0a4304b39f03826a85c8d99daa4da ` 和原目标 ` 7aef90609f1bd9581344130b58b76b5fec1be2f3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 084bee35f3dcaf2bf8d512d515203bbff5ad70a3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-237"></a>
### 237. N6 / ` render/allocator: add missing wlr_buffer_finish() in destroy impls `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/allocator/shm.c `、` 3rdparty/wlroots/render/allocator/udmabuf.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 12a0ceeade3859681b70c93ecdc50a13a85750ed ` → ` a2647814104d93ce53cbd1afdfe1814bd2a7f419 `。
  原证据引用：` 673e148641b84f26635f5e69474b25c41e33d724 ` → ` e3d213ae5d53230f5785ea93d5dcb5a3d9bf3e61 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 76e9d812c4171953af224eb9c2261ad4d406fc07 ` 和原目标 ` e19937cd0b75f67b8a84d6b99e643c1176e17199 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f1fcb4bad6074463539fcac77aeaf91aa251467c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-238"></a>
### 238. N6 / ` session: simplify libudev unref handling `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/session/session.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a2647814104d93ce53cbd1afdfe1814bd2a7f419 ` → ` 164f6dfd0fbb50453f404788707407958de775c2 `。
  原证据引用：` e3d213ae5d53230f5785ea93d5dcb5a3d9bf3e61 ` → ` b6f9064c2dc49c31729505b487204e4b985245e1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 0c10122d1ebb57b0643585fc2c7528d5d7cdf36a ` 和原目标 ` 131eec8d8ad3dab03425e42e1a3ab760e8033f95 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e51c6487cdffad26bd619c413d37ffd09c452039 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-239"></a>
### 239. N6 / ` scene: don't assign outputs to invisible nodes `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 164f6dfd0fbb50453f404788707407958de775c2 ` → ` 7dbd34584bed04f6445807fd83011652e0d3f094 `。
  原证据引用：` b6f9064c2dc49c31729505b487204e4b985245e1 ` → ` 369007909de1076025f596790ed39fa544667d51 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e9c267ff80ded1d3d9aad35557242b393ffba4e6 ` 和原目标 ` c9328ea6bf5e5b565f56f9622ea59c2d10ee83dd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c025ec667ee9dfbf4b56bc130269e5130115b523 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-240"></a>
### 240. N6 / ` scene: constify pixman_region32_t `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7dbd34584bed04f6445807fd83011652e0d3f094 ` → ` fd2191bcdb72659990b97ba92f773bc52ad8783d `。
  原证据引用：` 369007909de1076025f596790ed39fa544667d51 ` → ` d903403845cd7db5ed282c22cfe26b5b8a2ebe75 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b00c4f4321a6811340eb21790513eaef257daad7 ` 和原目标 ` 661a80244c200cdd937c1428ce6d0c359b5d9785 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ed546f1542dcb04ca0f0748c43ca1725681f177b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-241"></a>
### 241. N6 / ` render: add new 16- and 32-bits-per-component pixel formats `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `、` 3rdparty/wlroots/render/pixel_format.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` fd2191bcdb72659990b97ba92f773bc52ad8783d ` → ` ee6fc2b687dd0a099ad31e1d9fb3c215ab333430 `。
  原证据引用：` d903403845cd7db5ed282c22cfe26b5b8a2ebe75 ` → ` 722d31962f183be00db66e32dd104cbf61996b17 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 26876224f2460506f1eb0a6ca43ed7910c3e9a4c ` 和原目标 ` abd30eed4cebbc09f4acaf3962257357edffa8c1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 936631b80d5805cd7587fb9a76bac61ff2ff812f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-242"></a>
### 242. N6 / ` render/gles2: add BGR161616F and BGR161616 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/gles2/pixel_format.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ee6fc2b687dd0a099ad31e1d9fb3c215ab333430 ` → ` 43996d220a15251151b3fe2ff6353754648345c3 `。
  原证据引用：` 722d31962f183be00db66e32dd104cbf61996b17 ` → ` 6affe1d02bf973619690a3a6a6fd2d5e24ad4dea `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 39f129f848fd5a310087dfdca21f65912b755eed ` 和原目标 ` ff628ba2a014f7be0451bc36a55f63b265648e7c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9e01af0b314903de42242b1f8f033deeec84a603 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-243"></a>
### 243. N6 / ` render/vulkan: add new 16- and 32-bits-per-component pixel formats `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/pixel_format.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 43996d220a15251151b3fe2ff6353754648345c3 ` → ` 6c31dc4cfa1cc88d93507213010433db96ef72e4 `。
  原证据引用：` 6affe1d02bf973619690a3a6a6fd2d5e24ad4dea ` → ` 16ab1af6e28e8c50051bf89c933b1c514a90dd2c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 43c1fe1ed8f964937cd59101f3a0dae71c2aaac7 ` 和原目标 ` dd0baf6974db81b84410bc10c3023659f7c04e18 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e44c6a4d03c798256cbdbc3158f441e652417998 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-244"></a>
### 244. N6 / ` scene: keep last preferred configuration when leaving last output `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6c31dc4cfa1cc88d93507213010433db96ef72e4 ` → ` 93a72ca30cb9a7c0ee10e5a80ab6aa450463eb30 `。
  原证据引用：` 16ab1af6e28e8c50051bf89c933b1c514a90dd2c ` → ` f072ba1233999615ef9a78a4d268ec97929ecdc5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a8ebb8932f8f28fa247f54e394db0133f1363051 ` 和原目标 ` 57fc34692f54351354b7634be6dbe67247d60c85 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 29373194fca092344904817f2c20c5e113df8317 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-245"></a>
### 245. N6 / ` render: drop <linux/dma-buf.h> compat defines `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/dmabuf_linux.c `、` 3rdparty/wlroots/render/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 93a72ca30cb9a7c0ee10e5a80ab6aa450463eb30 ` → ` 9e675c00fcfeef95ccf73328ccc218180307e5ae `。
  原证据引用：` f072ba1233999615ef9a78a4d268ec97929ecdc5 ` → ` 98ba5371e889f739017628c4a71a527bcac5aebe `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 36d6251519cb258e33455dcbeee700b29c818a80 ` 和原目标 ` 142ed073a76f3d7a468effd3a634ce8cb7021c26 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a888f6aa6a79afd2e1784090d2b56aa47c2d957c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-246"></a>
### 246. N6 / ` ext_image_capture_source_v1/scene: fix stop for parallel captures `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9e675c00fcfeef95ccf73328ccc218180307e5ae ` → ` 62da332b65661e7ae6440b1e3510ec1384a25ef7 `。
  原证据引用：` 98ba5371e889f739017628c4a71a527bcac5aebe ` → ` badb2fbaae51b739af0dadef5fe39b2b0896b94f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b5bfbe09427cf35324917c2cbc2606490bbb0a57 ` 和原目标 ` 17ffe4fb6db56248185e9aefe1c9c62bbace3a4e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d5c2a8ea0941c5951f36417876f0a38db9259ce6 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-247"></a>
### 247. N6 / ` scene/surface: don't cache frame pacing output `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 62da332b65661e7ae6440b1e3510ec1384a25ef7 ` → ` b0d37b83767b38b553336f2bce4d65dec553d71a `。
  原证据引用：` badb2fbaae51b739af0dadef5fe39b2b0896b94f ` → ` 3b1acb0f0b89670b6b700dddbc0383158f1b8572 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` bc8eee2feea24b094f952da1c8c5dd31ffd2c703 ` 和原目标 ` cb3f9854c36378a1aad3be81671a650ab4cf6da0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f50be821ee6d923e78751f09fd3a078f6ddde67f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-248"></a>
### 248. N6 / ` scene: add knob to turn off Xwayland surface restacking `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b0d37b83767b38b553336f2bce4d65dec553d71a ` → ` 9c2e8bdf048777fb7b049fbd718a1f548613c8e5 `。
  原证据引用：` 3b1acb0f0b89670b6b700dddbc0383158f1b8572 ` → ` fc1d812d039164a4b1823828ea11f3da37b39fcb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5d82753f7c09aaec904c85b54225b64301afe61c ` 和原目标 ` 9e69a2e75f18e8bd0887731b1512b545ab343d37 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 30ee81905f8a0f14c009dfbb695fdbede77ed31e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-249"></a>
### 249. N6 / ` render/gles2: skip glslang check when shaders are unchanged `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/gles2/shaders/check.sh `、` 3rdparty/wlroots/render/gles2/shaders/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9c2e8bdf048777fb7b049fbd718a1f548613c8e5 ` → ` 3b4b61556da8e0e61f51fae0d3be5f45e2268738 `。
  原证据引用：` fc1d812d039164a4b1823828ea11f3da37b39fcb ` → ` 44e57d35e27395d5e955234f94af549d7f4334e2 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b174ad188ccd15d8a3121b97a9cc36c6a2f67fbf ` 和原目标 ` c6d486144ac796d0044055734353de9110f9647c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9ec56b0a0e1a5ffd0cdf28e5d0b7ff1d6a4ee925 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-250"></a>
### 250. N6 / ` xcursor: add shared helper to create a wlr_xcursor_image `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xcursor/wlr_xcursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3b4b61556da8e0e61f51fae0d3be5f45e2268738 ` → ` ceafa41d32fda303d16f1f6c0c52561db632024d `。
  原证据引用：` 44e57d35e27395d5e955234f94af549d7f4334e2 ` → ` 32c3297db477f675e21a9dd57b5c7000f84d003b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 58f9eed9aba894fe667600c3e00a7310da425099 ` 和原目标 ` 4716a4077513ad9979581320e74df1aec3a253df ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 13cc75567aaa4c9bddf9e1b4c6c650c491b474e9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-251"></a>
### 251. N6 / ` xcursor: introduce wlr_xcursor_image_get_buffer() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/xcursor.h `、` 3rdparty/wlroots/xcursor/wlr_xcursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ceafa41d32fda303d16f1f6c0c52561db632024d ` → ` ac54f13580598ccfc995eaf44ae9f879cc3d4aec `。
  原证据引用：` 32c3297db477f675e21a9dd57b5c7000f84d003b ` → ` 674e419bde0d0f5b4bb3576f00df8f356e1793f8 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 47b86e3a72846d16bc15de91d9e25307e74a6f9d ` 和原目标 ` e300d7e68a6303be0042dd104d61ba2710d02c07 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9c86ef3e8325d97635497a2bb858e9792676b0cc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-252"></a>
### 252. N6 / ` cursor: use wlr_xcursor_image_get_buffer() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ac54f13580598ccfc995eaf44ae9f879cc3d4aec ` → ` c4af94b6b2dfd1cfd7df28b811bc1c6d2c83084c `。
  原证据引用：` 674e419bde0d0f5b4bb3576f00df8f356e1793f8 ` → ` 3b2d1e6ab21e13ef55e290ef29955a2d54ad98d5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6cc4e12f5165d20d987ba17874e9082c96b31092 ` 和原目标 ` efb71eb145a20694f5e3d3341233e6bfca923fa0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 90f2abdc72afe54382604a0e049869a74e37e9f1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-253"></a>
### 253. N6 / ` xwayland: take wlr_buffer in wlr_xwayland_set_cursor() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/xwayland/xwayland.h `、` 3rdparty/wlroots/include/xwayland/xwm.h `、` 3rdparty/wlroots/xwayland/xwayland.c `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c4af94b6b2dfd1cfd7df28b811bc1c6d2c83084c ` → ` a92fd671608611bebe0696629a27c8f0fae1fcac `。
  原证据引用：` 3b2d1e6ab21e13ef55e290ef29955a2d54ad98d5 ` → ` e0248e291663ea7ae151c3823dbaf58c6ec31cbe `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f1a83816508406225f8e5658e32d7e5a52066daf ` 和原目标 ` b46dfbd14945f492f41b692605506ce131e42a59 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bcc82dd5c00fd9ff770254f10a0f026cd25ba234 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-254"></a>
### 254. N6 / ` xwayland: lock new buffer instead of the old one `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwayland.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a92fd671608611bebe0696629a27c8f0fae1fcac ` → ` 345785ed8c2ffe25373ff345d431b96ef1bd8f1f `。
  原证据引用：` e0248e291663ea7ae151c3823dbaf58c6ec31cbe ` → ` dc8b2d1cc6165359eb0e149b7a15c90a28afee22 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e2f55b8c3b12ee79a38c3140c31c3d7d22656a3c ` 和原目标 ` d0280f5eb56d40117d2a64b3cb58bfbcb1b8e392 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2fb00f544e96d31aea0d93297f27af5b3d582adc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-255"></a>
### 255. N6 / ` ext_image_copy_capture_v1: replace schedule_frame with request_frame `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/interfaces/wlr_ext_image_capture_source_v1.h `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `、` 3rdparty/wlroots/types/wlr_ext_image_copy_capture_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 345785ed8c2ffe25373ff345d431b96ef1bd8f1f ` → ` 3bd8ecc58ce9b04f0c501edd546f114598283f36 `。
  原证据引用：` dc8b2d1cc6165359eb0e149b7a15c90a28afee22 ` → ` 8658c1e01e01258d9f4514a2701f299b0e3b54eb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 389983c28b815abf4a3c963de2dce0ddaffc0986 ` 和原目标 ` 40dc6023c9f84c67fd648d3964b4e65349ab840c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9a88afde1f46e50e0eada648c55c680d264f4041 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-256"></a>
### 256. N6 / ` ext_image_capture_source_v1: wait for capture client before sending frame event `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3bd8ecc58ce9b04f0c501edd546f114598283f36 ` → ` bb566905557eaedeaf00978339f1bc3fa51ca6fb `。
  原证据引用：` 8658c1e01e01258d9f4514a2701f299b0e3b54eb ` → ` 6561236254325f1d90887ca41ac21f6e54c8c472 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4b62fd3265ddbc26db3c6c7d062bf102fb6c7d9a ` 和原目标 ` d2abaa46859f87f1b917ccc6849b906ea85a28cb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7ab27c9c7f6648899f18c669ea8db8d66f912fc7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-257"></a>
### 257. N6 / ` wlr_ext_image_copy_capture_v1: new_session event `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_ext_image_copy_capture_v1.h `、` 3rdparty/wlroots/types/wlr_ext_image_copy_capture_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` bb566905557eaedeaf00978339f1bc3fa51ca6fb ` → ` f921447743765c61fe70af72f895b0018bbd13dc `。
  原证据引用：` 6561236254325f1d90887ca41ac21f6e54c8c472 ` → ` 3b86fc6f73c30dd3a56df4f842bd009068b70630 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8b3d05ae4538d8d4cd72d5d63ee3109d6e76e32b ` 和原目标 ` cb437cb0d6940129fa29e2d17f96ca10af2164f7 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` aa37c75b7ca2e75de2fb0db0f7afef55ccbbd165 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-258"></a>
### 258. N6 / ` image_capture_source: wlr_output_try_from_ext_image_capture_source_v1() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_ext_image_capture_source_v1.h `、` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f921447743765c61fe70af72f895b0018bbd13dc ` → ` d4e53867921874f07782b25a1eb775958e4e7d02 `。
  原证据引用：` 3b86fc6f73c30dd3a56df4f842bd009068b70630 ` → ` 042dcfebb9ecebd3099ed1393be6b0a276f816ef `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f5243d5d08f98aa662592fb94c9032ba21bcb343 ` 和原目标 ` c8dc5bbb1b5d741ce2835f14f5839e5706933056 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ccbe31412220d9a03e0d6d08afb2127e14db8dc5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-259"></a>
### 259. N6 / ` wlr_scene: Make restack_xwayland_surface_below generic `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d4e53867921874f07782b25a1eb775958e4e7d02 ` → ` 66d818509f19802e33ec71cb7f83788b59af6e89 `。
  原证据引用：` 042dcfebb9ecebd3099ed1393be6b0a276f816ef ` → ` da350dc93b7de9d730380c6a8de4de6d5aec0ed0 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 48264e43b25daf9f396478ed753be4a47533cbc6 ` 和原目标 ` 79e488ab49492895ca73dc633673d08f885608f7 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ba84a23d38e2c41aff16abfe143a135b15179393 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-260"></a>
### 260. N6 / ` wlr_scene: Don't recurse when disabling scene node if a child is already disabled `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 66d818509f19802e33ec71cb7f83788b59af6e89 ` → ` dc9b3e57af16416057917ae82099b36e1ec27eed `。
  原证据引用：` da350dc93b7de9d730380c6a8de4de6d5aec0ed0 ` → ` c1de2ce26500e33def4f4cd80c1f0380847df088 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 82fc3c6fd467be4b146db30daeae46e7c17857f3 ` 和原目标 ` 91dfad4a074021d9e5437873ba3a06da6d64d378 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 331558aa00a3b53b88ddd97a8bfd10a84b4fe5ee `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-261"></a>
### 261. N6 / ` wlr_scene: Update outputs when node is disabled `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` dc9b3e57af16416057917ae82099b36e1ec27eed ` → ` 5c5061a4ff6bfde80f8b1dea0b3f5c4b11a1e778 `。
  原证据引用：` c1de2ce26500e33def4f4cd80c1f0380847df088 ` → ` 44819e8d426edc419a1e3dc9335dceee2df8be2e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6ba97a939ab4869d29102b4539ad9a4f1a9e8cae ` 和原目标 ` 2f3a868607636cc98430a4a1dd3487a0bcf96334 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 57a45a1b87e3c5158c4db4feda67b36791661923 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-262"></a>
### 262. N6 / ` wlr_scene: Only do disable cleanup when explicit damage is given `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5c5061a4ff6bfde80f8b1dea0b3f5c4b11a1e778 ` → ` 560a67056dc4c83c47e13b3aa94c7111fe17f924 `。
  原证据引用：` 44819e8d426edc419a1e3dc9335dceee2df8be2e ` → ` 3d628d7f4f584d309851c953d8aa9e23a81710cd `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 83fe6dd04a62bdb7f28406b90f61a0cc921e36dc ` 和原目标 ` 97aa3e409a80d4404dd81edc14852af2b603952e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 76945575c1902a7a7c38498d97011a41c012bdfe `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-263"></a>
### 263. N6 / ` wlr_scene: Add documentation to scene_node_update() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 560a67056dc4c83c47e13b3aa94c7111fe17f924 ` → ` ab7e945a5b003b5922117742d42f9bbb539ad307 `。
  原证据引用：` 3d628d7f4f584d309851c953d8aa9e23a81710cd ` → ` 49b38ff2d43413253928a3bca4aab52b1657e5be `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 59871dc496250d6b03de9749a4422098e8f18906 ` 和原目标 ` 36c4eb0e809781eea7036d9c727f0a11b4704ebc ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 42dbc70aa923d69231d2682293989ec27344384c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-264"></a>
### 264. N6 / ` wlr_ext_image_copy_capture_v1: Fix segmentation fault when using cursor session `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_ext_image_copy_capture_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ab7e945a5b003b5922117742d42f9bbb539ad307 ` → ` 3e6ebb223326c052d4ed4582de75f19e41a77e28 `。
  原证据引用：` 49b38ff2d43413253928a3bca4aab52b1657e5be ` → ` 4aa0f01a875c5ae1d0f6962cbeec86f82e424a30 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7774ea8fda1917293324caae6922529bc1a7a846 ` 和原目标 ` 0684c2b09c3bf69f763d0bb65532a0f3972dfcc2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f3291c84055ff827ec9eed3352336ade7ba4ff68 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-265"></a>
### 265. N6 / ` xwayland: add set_size_hints signal `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/xwayland/xwayland.h `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3e6ebb223326c052d4ed4582de75f19e41a77e28 ` → ` b7c215f9134487e0e720c3d207cca67a520438c0 `。
  原证据引用：` 4aa0f01a875c5ae1d0f6962cbeec86f82e424a30 ` → ` e26dcc2bf277dcdb305bca958d614dbf23ac6360 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 021cc6c2cf8255c98c74b4a18b7945de424ac65c ` 和原目标 ` 8c386affe272d2979ea5cea748f04fcfdbdb1927 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6393f9c16b071ffc19b097af76e4df73a7ab502a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-266"></a>
### 266. N6 / ` xwm: don't leak msg in case of realloc failure `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b7c215f9134487e0e720c3d207cca67a520438c0 ` → ` 9dcc4eb7cf198597d3caa53e73506a077ecf31c5 `。
  原证据引用：` e26dcc2bf277dcdb305bca958d614dbf23ac6360 ` → ` 0ad8dbbc7ec4ec5786528242beb0024c58beb270 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c852ee8d9ce7dc8072f1be44b1349f17eda236de ` 和原目标 ` bf83ba94c4b4bb9fa51f60e84d1dcec6f150806e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d8d844979b762d79f2e9cf55aeccc7506cfb36fa `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-267"></a>
### 267. N6 / ` backend/libinput: expose libinput_tablet_tool `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/libinput/tablet_tool.c `、` 3rdparty/wlroots/include/wlr/backend/libinput.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9dcc4eb7cf198597d3caa53e73506a077ecf31c5 ` → ` ab082bec13dbbc29ef711201022d43d427489263 `。
  原证据引用：` 0ad8dbbc7ec4ec5786528242beb0024c58beb270 ` → ` ec1e760ee8fdd9b04f4d153ef3fcd1fe4ccbdab5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ddc9c388e4567b395043144773ebf06251178895 ` 和原目标 ` 1182e5b8fa26d92b0b96aca9edc5c3bf93e0d1cc ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c77c5549d77dcd0965eac8523887df3ef02c7e64 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-268"></a>
### 268. N6 / ` xwayland/selection/dnd: fix parameter type `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/dnd.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ab082bec13dbbc29ef711201022d43d427489263 ` → ` 28d07cd91fe4c7dac354813962d71caebc517216 `。
  原证据引用：` ec1e760ee8fdd9b04f4d153ef3fcd1fe4ccbdab5 ` → ` fd4bc8b9cdabcf4d09a3a78d99a7eed80537d728 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c93555dc03169fdbf42ab4aaf8e7bb1a74904084 ` 和原目标 ` b4da6ca707c91d27814326227734f1efa1c1be87 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 68ca12a70353f32975bbac30b8b3dc8abbc4368a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-269"></a>
### 269. N6 / ` output-swapchain-manager: Reject zero resolution `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_output_swapchain_manager.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 28d07cd91fe4c7dac354813962d71caebc517216 ` → ` 4105a1e373281a01428cc38e310ee17dfbba7612 `。
  原证据引用：` fd4bc8b9cdabcf4d09a3a78d99a7eed80537d728 ` → ` aacc0203f82636d90fd32cde1982a9a263db92ae `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fadf5214d54853c1852e5be59e9b569e4068adf6 ` 和原目标 ` d31017c5c4016856b4783024026bf4e74de9bb0d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 58be65f5a8b25e0936653ac084469905a49ca1a1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-270"></a>
### 270. N6 / ` meson: bump minimum wayland-protocols version `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4105a1e373281a01428cc38e310ee17dfbba7612 ` → ` 62e495381b2f104faccf12d230319bce4929ed10 `。
  原证据引用：` aacc0203f82636d90fd32cde1982a9a263db92ae ` → ` ab1a64a9fcf719ad00a4c53193ceeb6a9305e71d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ab75ae1c5270a293dc63a07819982896abbc58f5 ` 和原目标 ` e0d8238f92b74e0fde50e55ea45d9e28ffdb07d3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b45304ff64778f67b12754854f9e676f8a81bb90 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-271"></a>
### 271. N6 / ` color_management_v1: relax restrictions on maxCLL and maxFALL `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 62e495381b2f104faccf12d230319bce4929ed10 ` → ` 1137fd79f3f2f12cac4b6e6f9ccfdd39be52cd21 `。
  原证据引用：` ab1a64a9fcf719ad00a4c53193ceeb6a9305e71d ` → ` 558f6985a45b73f92beffb336edecadf605f77ba `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fd27ca253c30c4f08e7f31af1631c69824741b13 ` 和原目标 ` 5d7616bc433e0daeb93160b5934ebcb72459d60e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9ffe3104a356ed5419d4d466ee75fb024ba33172 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-272"></a>
### 272. N6 / ` color_management_v1: use 64bit image description identities `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_color_management_v1.h `、` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1137fd79f3f2f12cac4b6e6f9ccfdd39be52cd21 ` → ` e811bd39577ddef143a0c8ad80871cd8324ba08c `。
  原证据引用：` 558f6985a45b73f92beffb336edecadf605f77ba ` → ` 74fa10d976e97b432b68fff87ea8ca51cf4e1385 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a3bbf452fc9968d58d8c6e8c5eea7152d9ab867c ` 和原目标 ` 5c37c1d548a92abcb99da0e73bef0bd507a8df1b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7891c981be27e7514f43ad8a8a17b1f221baaa89 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-273"></a>
### 273. N6 / ` color_management_v1: new enum value for 'srgb' transfer function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` e811bd39577ddef143a0c8ad80871cd8324ba08c ` → ` 7db765dfd5d91d743db09af8e1877d9582ec1f22 `。
  原证据引用：` 74fa10d976e97b432b68fff87ea8ca51cf4e1385 ` → ` ebdd96fa38f0b4ffa9b45e885706b3a7e2038599 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 26af21548c5d80dc1142f5c44557833632c4ff5d ` 和原目标 ` 5b07b395e78acfbd5e1edae43db6baba168bcb91 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5cbbcff6541bc809072f2d86bd441dcb02fb1b3a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-274"></a>
### 274. N6 / ` render: don't infer luminance multipliers from color TF `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/render/pass.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/output.frag `、` 3rdparty/wlroots/types/output/cursor.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7db765dfd5d91d743db09af8e1877d9582ec1f22 ` → ` 1fa8c12af507892c2515c8237bae2f8d03efa98e `。
  原证据引用：` ebdd96fa38f0b4ffa9b45e885706b3a7e2038599 ` → ` 5d55fefc8f79cfcbdb8ea5c36cc9296ebae49b29 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` bd6b287ac9d76591a55f554c0bdde1b3832a2309 ` 和原目标 ` 75226b52af65afd1a8582f9386e16b979efc12ac ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 3ec4283130ed887ebf651ac4b5ec2dfd7f494c98 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-275"></a>
### 275. N6 / ` ext_image_copy_capture_v1: Only render scene source on damage `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1fa8c12af507892c2515c8237bae2f8d03efa98e ` → ` 4e84420dedbb8908677001d797945afcd675042f `。
  原证据引用：` 5d55fefc8f79cfcbdb8ea5c36cc9296ebae49b29 ` → ` b0089fbbdb6ec1396cf80aad7801e1bf395d305d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5d3fb87c4b682ee30b0633166127e2dac28f114c ` 和原目标 ` 7bf7f33aef63e6f2516ccabd2a0d2718e17c3e0a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e82fbe80a5840a6908cdec24c4dde63dffffc04c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-276"></a>
### 276. N6 / ` ext-workspace-v1: add implementation `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_ext_workspace_v1.h `、` 3rdparty/wlroots/protocol/meson.build `、` 3rdparty/wlroots/types/meson.build `、` 3rdparty/wlroots/types/wlr_ext_workspace_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4e84420dedbb8908677001d797945afcd675042f ` → ` 20c4cf898cdc8eea1388b1aac2bf32b30d2881f0 `。
  原证据引用：` b0089fbbdb6ec1396cf80aad7801e1bf395d305d ` → ` e1825639a7f231bc68a00aa3e09a0ce7fd152341 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c2390909a26d9a9fc3c246c551ad80a69a7b66ef ` 和原目标 ` 20d1f3af2c0985dd51836052ba87d37ebdc9504c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8b0d7a188fbde3aa81fe48307e9d9b0fe2c7a3d4 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-277"></a>
### 277. N6 / ` color_representation_v1: send chroma_location protocol error `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 20c4cf898cdc8eea1388b1aac2bf32b30d2881f0 ` → ` d6f9fc338f553e5baba55abcf0541f9f0f015673 `。
  原证据引用：` e1825639a7f231bc68a00aa3e09a0ce7fd152341 ` → ` 6c112d815867d521eceac60e016daaf2af0c73cb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 71270845bf373f80251e45756a8c286318294cc3 ` 和原目标 ` 867364fe32fdd665cfe4ef171c0411264b10d0f5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ba8dccaed3a138b9a204e572b1f28c4df6ddb6c5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-278"></a>
### 278. N6 / ` build: bump version to 0.20.0-rc1 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` d6f9fc338f553e5baba55abcf0541f9f0f015673 ` → ` 076df8105ba3d6757ab0bc47de764eed9d05fadc `。
  原证据引用：` 6c112d815867d521eceac60e016daaf2af0c73cb ` → ` 3b1cca08797a2cab085b53879dd21ebd016ff3cd `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` eb77b4b14501c40f1b1de2b99fb8bac620ee4071 ` 和原目标 ` 840a465bb3af3688794989094adcc008936da4b3 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e122a8822f7ce5ddbce9103375af573a102c044c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-279"></a>
### 279. N6 / ` render/drm_syncobj: drop unnecessary drmSyncobjTimelineWait() arg `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/drm_syncobj.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 076df8105ba3d6757ab0bc47de764eed9d05fadc ` → ` ac131366cd5774f26889f5c921e41d5649b3971e `。
  原证据引用：` 3b1cca08797a2cab085b53879dd21ebd016ff3cd ` → ` 5c6356ca37ad0facbadb564d0ae2055e7825cc16 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7a8f3e20c4cd9a4d66cb804af2a00f2d385a7c5f ` 和原目标 ` 6e6b0712fb7c892ba6fb04705b34ce4cc818b036 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 20286a49a5f1dab357ec5a638a3de8debdfd7cb0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-280"></a>
### 280. N6 / ` render/drm_syncobj: fix function name in drmSyncobjTimelineWait() error log `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/drm_syncobj.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ac131366cd5774f26889f5c921e41d5649b3971e ` → ` 6e4468c76f0e942ba687a12750fb19c2a01a9f00 `。
  原证据引用：` 5c6356ca37ad0facbadb564d0ae2055e7825cc16 ` → ` a7b942d672493ed864251662b7d53a10e86b8a5e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6dd43c98dde630107bae193867bc4f6d69cdf092 ` 和原目标 ` afa7c04b65e5c3fbd3c87c086e1f18cb76dca883 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b2596cc7a17095820237975c9ac79f64e06a6f1a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-281"></a>
### 281. N6 / ` types: Simplify wlr_keyboard_group_destroy `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_keyboard_group.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6e4468c76f0e942ba687a12750fb19c2a01a9f00 ` → ` 7fb26661d78c94e4176e367227bcbd750a4fa9a6 `。
  原证据引用：` a7b942d672493ed864251662b7d53a10e86b8a5e ` → ` fa9f129b29bdcaacdea69b0ac17ff2a305376f74 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 3e2c4ba46b2a4048b8e7beb961080920c7ef0ea7 ` 和原目标 ` 052416800f62a795d758813791d2d70b42704de9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5ef1edae59fc3d4e5e2a853117c19fd1776e833f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-282"></a>
### 282. N6 / ` wlr_cursor: add comments for signal parameters `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_cursor.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7fb26661d78c94e4176e367227bcbd750a4fa9a6 ` → ` 51f0774aa44870ffdc8f44aad814ac483fd88ce3 `。
  原证据引用：` fa9f129b29bdcaacdea69b0ac17ff2a305376f74 ` → ` e191998bdcfe95444f0efd8dacee1722a24e232b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 99fccac3fbc2267c2750508111f70639ffb0ea75 ` 和原目标 ` 4d9a16dee1aef5619897347c7967d0696f9a676c ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` eb45e900c0e93c61251379cbae57ecfa8ab6ae7c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-283"></a>
### 283. N6 / ` wlr_cursor: fix event type in handle_tablet_tool_button `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 51f0774aa44870ffdc8f44aad814ac483fd88ce3 ` → ` 20b66cdd3d24467533b12f9985ebaef3efa9efa6 `。
  原证据引用：` e191998bdcfe95444f0efd8dacee1722a24e232b ` → ` dddde4687b6f883c94bbd00729b87ed275fc7a74 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a69221cdcccb767a6167b5854239ddc519f27788 ` 和原目标 ` c5aba193fe95ea8882ed8a6c958cb597c5b52b94 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d7f82ea567cfb2ceed502a59d3151ea44c0b7c7e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-284"></a>
### 284. N6 / ` xwayland: try flushing immediately in xwm_schedule_flush() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 20b66cdd3d24467533b12f9985ebaef3efa9efa6 ` → ` 5f36e5bf4826ae19834627a3b7426803b85c00f0 `。
  原证据引用：` dddde4687b6f883c94bbd00729b87ed275fc7a74 ` → ` 10a088411da0a1e3fb031baae6798751b4ab34ee `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1f07ad74867449605c595af816f92dd3e73bcce5 ` 和原目标 ` 45e74431f528559eb6d96ea58a0e412a32a75e04 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f072ded8d436dd90f6daa2c2725ee1fa34bd2bfe `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-285"></a>
### 285. N6 / ` xwayland: fix wl_array rollback when adding selection targets `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/incoming.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5f36e5bf4826ae19834627a3b7426803b85c00f0 ` → ` 209f428f16242ddb3753cc41b68e9f3de98c55cc `。
  原证据引用：` 10a088411da0a1e3fb031baae6798751b4ab34ee ` → ` 6868bfaaa60e24a36d496574be675030be0a5ad4 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ed9c8498336eeff3fd9502740ec48191b2c6d984 ` 和原目标 ` ffbf14786afd89d6560f9455c65de1c6aee274e9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9657647d5ae4382cfbd802d0cb8bccf5adfdb516 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-286"></a>
### 286. N6 / ` ext_image_capture_source_v1: remove unused variable `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 209f428f16242ddb3753cc41b68e9f3de98c55cc ` → ` ee9eb844b942d92685a911a70578ebd5e236103b `。
  原证据引用：` 6868bfaaa60e24a36d496574be675030be0a5ad4 ` → ` 2dc58384da428eb7f18526f11a00f9ebcc562d9e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 092a194ac64c581e62bd64ca05c904d01b143296 ` 和原目标 ` 0eda0092ea7dc54f87a0672cb50dcecde0a0332a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 90ec2bc1e8202ca49ea6ef07691e17aff896fc44 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-287"></a>
### 287. N6 / ` output/cursor: fix missing newline at end of file `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/output/cursor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ee9eb844b942d92685a911a70578ebd5e236103b ` → ` 4e8c6edca6d59a922b2732a7592edc470b0d55c3 `。
  原证据引用：` 2dc58384da428eb7f18526f11a00f9ebcc562d9e ` → ` 72485afd6af6bea2c2361c0e8523721d39658c32 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 50f1a3b7acc17d93ac453b95b31db4b0f14eb00d ` 和原目标 ` 64cfebe0c736503bffd90aac6d76f42e1b03fd9a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c94acc2109f0dc97141e4ed2590ef5c19699be6e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-288"></a>
### 288. N6 / ` render/pixel-format: add function to determine YCbCr from drm fourcc `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/pixel_format.h `、` 3rdparty/wlroots/render/pixel_format.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4e8c6edca6d59a922b2732a7592edc470b0d55c3 ` → ` 5676b230796d424bf86747772ff4d0156ffb87b1 `。
  原证据引用：` 72485afd6af6bea2c2361c0e8523721d39658c32 ` → ` d5db29410758b29d16ad4ef91b51ae1e1f2cec82 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` a05e29aa1f38147a6795a90b3572e9ae00b1d523 ` 和原目标 ` b685fc886d3d5fe6b7f7710bb0caa987041ad859 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7d93d454d4340fe1acb1ef05c37267ea47a19e3f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-289"></a>
### 289. N6 / ` vulkan: make use of new pixel_format_is_ycbcr function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/pixel_format.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/render/vulkan/texture.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5676b230796d424bf86747772ff4d0156ffb87b1 ` → ` f3b73e87aea99a667be090f0e7b5024fd9412a53 `。
  原证据引用：` d5db29410758b29d16ad4ef91b51ae1e1f2cec82 ` → ` 7ed907f86257672db95a6e2e5493bb289e212d6d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6ca4dfa6fc6fdfe86af2adbb5d9c8c907b6d6c15 ` 和原目标 ` a0bb80d1741fbe721b572b09221ed292e4b6aec2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ff9b126fc7ea93235089ae3532364e3e0d7d1cf0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-290"></a>
### 290. N6 / ` color_representation: ensure encoding/range/drm formats compatibility `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f3b73e87aea99a667be090f0e7b5024fd9412a53 ` → ` 122450f3de031ec7e813af1409426fa0a52eba29 `。
  原证据引用：` 7ed907f86257672db95a6e2e5493bb289e212d6d ` → ` 72ca5270b40011b4c5caac5976c11de61fd14b45 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f2b078c4f9d952d9115904183c11a187ffdebf1a ` 和原目标 ` 4e5409f3fdc005141806de6450add455c313a650 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8a23737046c95d6efd280b41390e12c6df6bc83d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-291"></a>
### 291. N6 / ` color-representation: add support for identity+full `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `、` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 122450f3de031ec7e813af1409426fa0a52eba29 ` → ` bcf04107aaeaf22951bdc0e00db9407eee12bfd0 `。
  原证据引用：` 72ca5270b40011b4c5caac5976c11de61fd14b45 ` → ` 59e9cf979892ab393913a3be1f8853e5e5e200e5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d8728e7e6240203c615eff349735f3daed8429c5 ` 和原目标 ` 3ca9d77948007b470ef56db93c58fcdf7f691065 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e37de2693fd4153bb8fd9736a605be25215509ec `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-292"></a>
### 292. N6 / ` types/wlr_buffer: add buffer_get_drm_format helper function `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/x11/output.c `、` 3rdparty/wlroots/include/types/wlr_buffer.h `、` 3rdparty/wlroots/types/buffer/buffer.c `、` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` bcf04107aaeaf22951bdc0e00db9407eee12bfd0 ` → ` 512aecef5cd8ac2d45bcd3f119660957254c769c `。
  原证据引用：` 59e9cf979892ab393913a3be1f8853e5e5e200e5 ` → ` 87b128dc14bb7e0ff3bc251d63195c67c146b21e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c2e66806de72b0a4a12220a752e4c69386a946fc ` 和原目标 ` 08c017dea15a32cb2d0d985a20667a5551032837 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b3b23a7770a5855226896d3acc7394b62b836ef6 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-293"></a>
### 293. N6 / ` color-representation-v1: fix condition in surface commit `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_representation_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 512aecef5cd8ac2d45bcd3f119660957254c769c ` → ` b8842e50112e235d0dcbed917afadbbc3dc2d23e `。
  原证据引用：` 87b128dc14bb7e0ff3bc251d63195c67c146b21e ` → ` 56888f3d5e0c4a23ff5354d3c2b520b405041789 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 59d835a1f7b3211dfc09070ea0aa7a509c125e45 ` 和原目标 ` 8eb74114ccf23e2bd126f6b28b024808f92187e2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0f9dc6d7a10ae711afe208cdb6fde64e0fb0b113 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-294"></a>
### 294. N6 / ` backend/libinput: fix build with libinput 1.31 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/libinput/meson.build `、` 3rdparty/wlroots/backend/libinput/switch.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b8842e50112e235d0dcbed917afadbbc3dc2d23e ` → ` b873a6a678aa57bdc97c07f142afe7792181d9ec `。
  原证据引用：` 56888f3d5e0c4a23ff5354d3c2b520b405041789 ` → ` d1d7eb9260a003975dba4879643e761274ba76f7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2870ec3689bda747464e5127b0d87ccb13d5e292 ` 和原目标 ` 3755d3e0e9b75d3cb7eba58e56422888e41197dd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0a57af26c65950601b06a01d8537ce4c01f263f2 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-295"></a>
### 295. N6 / ` backend/libinput: add support for LIBINPUT_SWITCH_KEYPAD_SLIDE `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/libinput/switch.c `、` 3rdparty/wlroots/include/wlr/types/wlr_switch.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` b873a6a678aa57bdc97c07f142afe7792181d9ec ` → ` 22170cdcabeedb9a8d9d4e264ceaedccd68d0e2f `。
  原证据引用：` d1d7eb9260a003975dba4879643e761274ba76f7 ` → ` 15f6d9ff6e0119747b561c8b0d99e0fbd2a72931 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 28d97085e61eaa1c7fdfca9158d741508d74acaa ` 和原目标 ` 1f2f4098c0b018fb6a46a128594ab0af29f9f9ba ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cf66f597b27c9ea8c4c8007d6303a26c4defa2e4 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-296"></a>
### 296. N6 / ` build: bump version to 0.20.0-rc2 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 22170cdcabeedb9a8d9d4e264ceaedccd68d0e2f ` → ` dbd588d4217e87d4e1f9a6892d54c34df947faaf `。
  原证据引用：` 15f6d9ff6e0119747b561c8b0d99e0fbd2a72931 ` → ` 46dd26c7753661bd1831e4685b9fee5ade18f1ce `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6f77ec93958ceaf024988b7e3d074fae0690b69b ` 和原目标 ` 4ea51d099dd3f60bc56d4f3860da92a69b64fbe9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 02a604d4d31a87739ea49a6672ab03dbbd1f957c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-297"></a>
### 297. N6 / ` backend/x11: reject shm buffers with non-min strides `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/x11/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` dbd588d4217e87d4e1f9a6892d54c34df947faaf ` → ` a8c0ab303ab88b870ac548b051db751def339f25 `。
  原证据引用：` 46dd26c7753661bd1831e4685b9fee5ade18f1ce ` → ` 2b02ea5135bdba197efb14ca510ba3c001c223eb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4864dabb6453b3eb7041c8e3b6703a183ecd565d ` 和原目标 ` 3b7215542ec9247bdd3b34c3d73eff502c564eaa ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 94935594ef29f3d7746a62169d3adefe5cfe1dcb `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-298"></a>
### 298. N6 / ` backend/libinput: guard against new enum entries `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/libinput/events.c `、` 3rdparty/wlroots/backend/libinput/keyboard.c `、` 3rdparty/wlroots/backend/libinput/pointer.c `、` 3rdparty/wlroots/backend/libinput/switch.c `、` 3rdparty/wlroots/backend/libinput/tablet_pad.c `、` 3rdparty/wlroots/backend/libinput/tablet_tool.c `、` 3rdparty/wlroots/include/backend/libinput.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` a8c0ab303ab88b870ac548b051db751def339f25 ` → ` 4ec32b94a67d6a09afc24ed4be986ef0be94d3b3 `。
  原证据引用：` 2b02ea5135bdba197efb14ca510ba3c001c223eb ` → ` f43be16dfc12d4b8e3fa10e419a1e650224b8d2a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4d23ec22fda34f1ca2670bde9ab4ede3184863bb ` 和原目标 ` 67def39b94a52fc9f969342248cab3e4fb3882d9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d411d61b5f41555f3e2c3c8a07f69e0e856fdd96 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-299"></a>
### 299. N6 / ` backend/drm: Close non-master drm fd on failure `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/drm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4ec32b94a67d6a09afc24ed4be986ef0be94d3b3 ` → ` 14f9bd4b377898e570ab13beca242c96ccf6ddf4 `。
  原证据引用：` f43be16dfc12d4b8e3fa10e419a1e650224b8d2a ` → ` d54a8f7f2ca914a5b59148935a96cdee1882d928 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c36184c982fa24b4a4d234d361b01982ed7bb984 ` 和原目标 ` bf5019a26b6bc321fab136c60b106c346036a83a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f0bd11a7a917a4b9573ac4c106e9994e1a4e0511 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-300"></a>
### 300. N6 / ` CONTRIBUTING.md: update git host `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/CONTRIBUTING.md `。
- 依赖 ` 3rdparty/wlroots `：updated；` 14f9bd4b377898e570ab13beca242c96ccf6ddf4 ` → ` 0fa6cfb37eebd3003ffcd8ea9e41f53a4859eb2e `。
  原证据引用：` d54a8f7f2ca914a5b59148935a96cdee1882d928 ` → ` a4f0d2001629474f39df0c30ec2ab0e1f7b70e51 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 9d02d0388ca2cd519deb342fbbdd290b67a9f6cd ` 和原目标 ` 71ec973a0160c349cec14dcdf834357bcea44ea8 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ca4dbc1b1c460a044f7c6afd49a53c3f61a4159d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-301"></a>
### 301. N6 / ` build: bump version to 0.20.0-rc3 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 0fa6cfb37eebd3003ffcd8ea9e41f53a4859eb2e ` → ` d852c95ff806b50bd58ecc66f7f4d18439904223 `。
  原证据引用：` a4f0d2001629474f39df0c30ec2ab0e1f7b70e51 ` → ` 2623f7ef0ac5d00821965bb219f486f10c79187c `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7b5eddb314e66f4fe69418fc3ae1ffede42d7969 ` 和原目标 ` 132f4a300ee763ded8d39f59ef57db32e8ef80f0 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 7da32fe003ed1cb41816afd5c1210a9656508f7e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-302"></a>
### 302. N6 / ` render/vulkan: introduce buffer_import_sync_file() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d852c95ff806b50bd58ecc66f7f4d18439904223 ` → ` 46675caea94e1475084382378935d8a98c6e4604 `。
  原证据引用：` 2623f7ef0ac5d00821965bb219f486f10c79187c ` → ` 8ca34b8fc2369fb8c31fccc0c5a88dd09ba56d16 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 6dc4affecbb95c861c13b134c04c55030270fc69 ` 和原目标 ` 061f2ae64cb5f12815b8f435d3aefa368bbc1fac ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c979989888e47ffaaac0676197c2657a496c947c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-303"></a>
### 303. N6 / ` render/vulkan: take render pass in vulkan_sync_render_buffer() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 46675caea94e1475084382378935d8a98c6e4604 ` → ` c2270ab21b476a421dae55d733c3494ff2fa5c14 `。
  原证据引用：` 8ca34b8fc2369fb8c31fccc0c5a88dd09ba56d16 ` → ` 57847df9de2bd58a1a0ac428df92814bbf02e309 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e567d0eb4f588c0bff923695dda75da1ef184a6d ` 和原目标 ` 62be5c466232439260118f9cb58e389a96cde7f1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a37e470d946d22cf45885880135b3988295d02d5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-304"></a>
### 304. N6 / ` render/vulkan: fix missing DMA-BUF implicit read fence for textures `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c2270ab21b476a421dae55d733c3494ff2fa5c14 ` → ` 4c39891c0296fba93110b78cbd79b9b26f2480fb `。
  原证据引用：` 57847df9de2bd58a1a0ac428df92814bbf02e309 ` → ` 4b0283c017a9ce379cd56550f56825a04adfd065 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fcb7f7e59ffaf681611e8cc382e3bdda2158e2ed ` 和原目标 ` 4d0eae6f8fc7b67ed0229d61511909c2d6621a9d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` cd7a9c1717e8cf3dcbd0f66bab69bea2d999952c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-305"></a>
### 305. N6 / ` render/vulkan: introduce buffer_export_sync_file() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 4c39891c0296fba93110b78cbd79b9b26f2480fb ` → ` f71108d574ff04d002840f67dfbb78e30e18810f `。
  原证据引用：` 4b0283c017a9ce379cd56550f56825a04adfd065 ` → ` ab4549e28a89145106bcb3bb7c22f6c9ef4d5f37 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b13cce374175a427ad3f8d0e050c89f9b99c0e87 ` 和原目标 ` c7e62356929d5e11346e4a5824dfb0daa401da88 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b0f357149187ca1d065b45da2bed883ffaf307b6 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-306"></a>
### 306. N6 / ` render/vulkan: add "acquire" to vulkan_sync_foreign_texture() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f71108d574ff04d002840f67dfbb78e30e18810f ` → ` dc510595ece691827fcbc7bc1c330a1181f240e3 `。
  原证据引用：` ab4549e28a89145106bcb3bb7c22f6c9ef4d5f37 ` → ` 3287a05fb314922466b4bb9348e248fb3bb9eea6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 58eb62c4764ed0a1d1e40db3ee56f1d4c9767b4c ` 和原目标 ` b5290cf0547594113da1a1587eeb15187e58cdd2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6ba34f48d17996cf2ceed1bbbedea1ec71184f7b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-307"></a>
### 307. N6 / ` render/vulkan: fix missing DMA-BUF implicit write fence for render buffer `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/render/vulkan/pass.c `、` 3rdparty/wlroots/render/vulkan/renderer.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` dc510595ece691827fcbc7bc1c330a1181f240e3 ` → ` f5b8b6e31bef0e1ff7500e6bda27c282336274de `。
  原证据引用：` 3287a05fb314922466b4bb9348e248fb3bb9eea6 ` → ` 9bf758fb84c491aa4d459d4a88450376c34d9948 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` be50944f57d106eff1ca25b152998092a100eaad ` 和原目标 ` 8d4679e0fb4bb2bb2f16475ec2d36dd81a4e060d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 21fad14ea4c3b7073e6b709d4e870753de3e1281 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-308"></a>
### 308. N6 / ` scene/layer_shell_v1: Add support for exclusive_edge `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/layer_shell_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f5b8b6e31bef0e1ff7500e6bda27c282336274de ` → ` f6cb440d160317e526c9a28ca580a06af325196e `。
  原证据引用：` 9bf758fb84c491aa4d459d4a88450376c34d9948 ` → ` 3a29f8e302f85834df8fcfa168aa96d019ed1e00 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 71a5ae7444c554dda9a5c661aea316df073ae019 ` 和原目标 ` 68551a9aa81d21179886dc1105ba1c45cc36ba20 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 14a9a564531a697f2e51c3a5c212bc12e2dd076a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-309"></a>
### 309. N6 / ` treewide: fix typos `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/drm.c `、` 3rdparty/wlroots/backend/wayland/seat.c `、` 3rdparty/wlroots/include/render/color.h `、` 3rdparty/wlroots/include/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/xcursor.h `、` 3rdparty/wlroots/render/egl.c `、` 3rdparty/wlroots/render/pixman/pass.c `、` 3rdparty/wlroots/render/vulkan/shaders/common.vert `、` 3rdparty/wlroots/render/vulkan/texture.c `、` 3rdparty/wlroots/render/vulkan/vulkan.c `、` 3rdparty/wlroots/tinywl/tinywl.c `、` 3rdparty/wlroots/types/scene/wlr_scene.c `、` 3rdparty/wlroots/util/array.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` f6cb440d160317e526c9a28ca580a06af325196e ` → ` 534d4ce993694622586c68d0e29bc61d7ff55949 `。
  原证据引用：` 3a29f8e302f85834df8fcfa168aa96d019ed1e00 ` → ` 664a95bebb3f77be35dfdfa4c48c2ff33448462f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e8c9c2245a2eaf584b2f2de3d009ca906b437da9 ` 和原目标 ` aa7882005cc00a688a5ac6783f0406291a2cb74e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 925deae538b5891fa558b5be5220888b14903a7b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-310"></a>
### 310. N6 / ` xwayland: fix memory leak on pipe() failure `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/outgoing.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 534d4ce993694622586c68d0e29bc61d7ff55949 ` → ` cbb05989e0745fbdc463522b4a2373cf90f8796f `。
  原证据引用：` 664a95bebb3f77be35dfdfa4c48c2ff33448462f ` → ` e599620192441ff937c7855fd80ff485adfd7345 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e034d859f2f76e51771de6558652ca570c0778f0 ` 和原目标 ` 88d04ea9774e6a5fd44082f538b3ba5a342b355a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b1c7f5158de5376c2c034a8a9340caf8044fb78c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-311"></a>
### 311. N6 / ` render/gles: use optimized clears for unblended rects `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/gles2/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` cbb05989e0745fbdc463522b4a2373cf90f8796f ` → ` ebe3a5435784547437b411698c86c4bb9a1b0334 `。
  原证据引用：` e599620192441ff937c7855fd80ff485adfd7345 ` → ` 11e75ed7da2d8bd712a4454ee9904cc3a44b190a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e06bfb9853fc7bb854d7e9cad4d8728574384d52 ` 和原目标 ` 1cac48ccc44691f35bc0b6db04b869f3aa94b77a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 21f7e8e8cd398ee20b9301efedbe74e8e33dd761 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-312"></a>
### 312. N6 / ` screencopy: simplify capture error handling `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_screencopy_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ebe3a5435784547437b411698c86c4bb9a1b0334 ` → ` 88869626b2f163fbb8520733e6aa2c1999e87b6a `。
  原证据引用：` 11e75ed7da2d8bd712a4454ee9904cc3a44b190a ` → ` 3a264aaa905ba255678f7fdc7672f701605356cf `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4fa410097e83f574ba669117f79d6d20e42f5f43 ` 和原目标 ` 99c09ccaecf99b89495ea5ee159c6f5d7e53389f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 6b5768ed8e64bf07592942ed041f0bb3b0d87cee `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-313"></a>
### 313. N6 / ` build: bump version to 0.20.0-rc4 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 88869626b2f163fbb8520733e6aa2c1999e87b6a ` → ` 640b96621aecfe4be187cf3d85617183ba9d5238 `。
  原证据引用：` 3a264aaa905ba255678f7fdc7672f701605356cf ` → ` 5ba9be7cfa1e36991f76f43540d3aa2dec3d79ee `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f73f0f111c1ccd89fb7adc63f0fd1b0e70a5e98a ` 和原目标 ` 6b093b0788885252fd5582b2639d10ec1ec1597e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c7ec648d25b462a8c9396dcd9422fd50318e21f9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-314"></a>
### 314. N6 / ` image_capture_source/output: Update constraints on enable `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 640b96621aecfe4be187cf3d85617183ba9d5238 ` → ` 5360f00435c07ed445d02ba2443503b9507b5bf3 `。
  原证据引用：` 5ba9be7cfa1e36991f76f43540d3aa2dec3d79ee ` → ` 0ed88856a41177313cb40ce657348ad8b11fb56e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c1458dcbc931cf644ca59b30012cb877905b4bb4 ` 和原目标 ` 5a5e7f179b8ccfb795fd6a3b80d1357d4bc6dde8 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` edbe96b2f8381bf807b28972bb67f9770edc835d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-315"></a>
### 315. N6 / ` ci: update dalligi upstream repo `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/.gitlab-ci.yml `。
- 依赖 ` 3rdparty/wlroots `：updated；` 5360f00435c07ed445d02ba2443503b9507b5bf3 ` → ` 69d1cddf60cd956a6073ea48b5c25705ac86f969 `。
  原证据引用：` 0ed88856a41177313cb40ce657348ad8b11fb56e ` → ` 7ad2fb8a121449f1cdb073b010ae4269789f027f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` fbb806fdafe8c84afae72234394ae5856859456f ` 和原目标 ` 887a735dd50eca595d09d42b86e8c7c855620403 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d97642f30ee1addb53ecd5d0ac1e846c278b7adc `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-316"></a>
### 316. N6 / ` scene: fix color format compare `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 69d1cddf60cd956a6073ea48b5c25705ac86f969 ` → ` d398b532a41b23d3413969df29c57796a37a1c46 `。
  原证据引用：` 7ad2fb8a121449f1cdb073b010ae4269789f027f ` → ` 35371560081d514a05f54273c47348bf6ff16dbf `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 085c0c51de465e449d6ac15aae047f42b44c2b25 ` 和原目标 ` 3860cd1a6c8014cb745045bf3e2ddf002cd9c77a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 463779e862d89983faffcee644a5df1518897e8a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-317"></a>
### 317. N6 / ` util/box: Use integer min/max for intersection `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/util/box.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d398b532a41b23d3413969df29c57796a37a1c46 ` → ` d8793526807f95e6ed15ad8be5af33ae7724ba8e `。
  原证据引用：` 35371560081d514a05f54273c47348bf6ff16dbf ` → ` 1c1c03f01ed4da6776d45dbbf4154e973d10912d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 944566dec88e50356d2bea6ced447771a84af8ff ` 和原目标 ` e1db4e5abd80ad16c82f182ca9e584bfcf496922 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b928859be3fdcc5154e9be88962d6e1fb9c518f2 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-318"></a>
### 318. N6 / ` backend/x11: ignore DestroyNotify events `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/x11/backend.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d8793526807f95e6ed15ad8be5af33ae7724ba8e ` → ` dc263bd7cbcaf8cfcde74dc8ee75d05b882e51ad `。
  原证据引用：` 1c1c03f01ed4da6776d45dbbf4154e973d10912d ` → ` be9d08490ab469a30e17aa23cdb8b52c58ffb281 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2455271ec8bfd1f0b41d0f3b8fbb2a516572e15d ` 和原目标 ` 6327c5da8baddfc2c1205595f2d5df9a6f902fd5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 581d7a627a68a855df30352b01d8c1e2dfda54f8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-319"></a>
### 319. N6 / ` wlr-export-dmabuf-unstable-v1: fix typo `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/protocol/wlr-export-dmabuf-unstable-v1.xml `。
- 依赖 ` 3rdparty/wlroots `：updated；` dc263bd7cbcaf8cfcde74dc8ee75d05b882e51ad ` → ` d07309b5094ba108336b52987c555ac688e91a30 `。
  原证据引用：` be9d08490ab469a30e17aa23cdb8b52c58ffb281 ` → ` 5de2d69c4260950a96b9ab083dbc641c5960c0d6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7d8d255dd2f75ed9588c2b77d31ce3e5ae23a799 ` 和原目标 ` 4ebc94fe3527fe73fa2c08a123316525950a0954 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` b2d7bda88ea77bf2b26d08795a3fcb31c1d19fa4 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-320"></a>
### 320. N6 / ` scene: avoid redundant wl_surface.enter/leave events `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d07309b5094ba108336b52987c555ac688e91a30 ` → ` 9256b5354a942019b55a03b7ec51c4f05117ef4d `。
  原证据引用：` 5de2d69c4260950a96b9ab083dbc641c5960c0d6 ` → ` 16f20471fd7fbb16257d1dd21d00dabb9783f9e5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 03dea01bc170d9a4a5208cb6f0312994a882d957 ` 和原目标 ` b89ec9a6609741387c9c54cc55202075a91e0449 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 128d4a6b4dcc72678e939df8948debdc0e0f90ee `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-321"></a>
### 321. N6 / ` scene: use wl_list_for_each_safe to iterate outputs `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9256b5354a942019b55a03b7ec51c4f05117ef4d ` → ` 620327d2dbc7de56762cbd8073ed0fe155024f95 `。
  原证据引用：` 16f20471fd7fbb16257d1dd21d00dabb9783f9e5 ` → ` 8603a0f33116533a0183ad7e300c92fedc5fa7e9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` bd247488a513aa70965ffd13d3c3b313b33e8523 ` 和原目标 ` 456beb1534566e28cb0e18349cb6b694e254d8c2 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 3f0192bbefd7410f7aa93f09adabb25ada89d115 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-322"></a>
### 322. N6 / ` wlr_ext_image_copy_capture_v1: Fix crash when client creates a cursor session not implemented server side `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_ext_image_copy_capture_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 620327d2dbc7de56762cbd8073ed0fe155024f95 ` → ` 939ad2410f1f8b863c5161a4d324cb930af5744f `。
  原证据引用：` 8603a0f33116533a0183ad7e300c92fedc5fa7e9 ` → ` 186d2357f4c9b28f27fdc7211d04a63553f35eba `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` abb07e9a8cab1e2c855e881ec4a216b7a4d8943f ` 和原目标 ` 1863be0193a231c22f195e002a6742d6eb9b6e59 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c8702b4a6c1dec7fa343b762c512e6eefc3b879d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-323"></a>
### 323. N6 / ` virtual-keyboard: add wlr_virtual_keyboard_v1_from_resource() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_virtual_keyboard_v1.h `、` 3rdparty/wlroots/types/wlr_virtual_keyboard_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 939ad2410f1f8b863c5161a4d324cb930af5744f ` → ` ed365208c9e22eaa2748439604bf9b5505fb64cb `。
  原证据引用：` 186d2357f4c9b28f27fdc7211d04a63553f35eba ` → ` 467d05348def201d281550281791054798c381b8 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f42de4aad659d7cbc7d3cafe1ea574c3fed1898b ` 和原目标 ` 39535b3b1935fb8934cfb1bcc7aa276d0d010f39 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` e5a4f448db16f677d19d5e0aa965d75b73ecfa82 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-324"></a>
### 324. N6 / ` virtual-keyboard: handle seat destroy `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_virtual_keyboard_v1.h `、` 3rdparty/wlroots/types/wlr_virtual_keyboard_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ed365208c9e22eaa2748439604bf9b5505fb64cb ` → ` 42267ea853a1d97070518316a1ca717f97050f46 `。
  原证据引用：` 467d05348def201d281550281791054798c381b8 ` → ` 9b8d0cbe966ada72e41a02dabdb13edf46a22b20 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e8a3639bab3b83ff21a238ff49e7d92f1ff0acbb ` 和原目标 ` d55bace60be798b20d5f866f69f9932b27880867 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 36d0c496fdb1fd886acec6f12bfc4c3ca3f81eb8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-325"></a>
### 325. N6 / ` render/drm_syncobj: add wlr_drm_syncobj_timeline_signal() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/drm_syncobj.h `、` 3rdparty/wlroots/render/drm_syncobj.c `、` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 42267ea853a1d97070518316a1ca717f97050f46 ` → ` 40f76834b10471a7d13886ee884b3e6a34f19223 `。
  原证据引用：` 9b8d0cbe966ada72e41a02dabdb13edf46a22b20 ` → ` e658360c1733e6a11b93404be7038e63d2e70615 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 0b88a499773b71f6be1d3eae9b3a56fe59b1070d ` 和原目标 ` 722de85483002c44e2e037e10e325d7766dac1bb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` be561d7e449482b7aaf768be4c448118bb717dfe `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-326"></a>
### 326. N6 / ` scene: add buffer release point to 'sample' event `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_scene.h `、` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 40f76834b10471a7d13886ee884b3e6a34f19223 ` → ` 6603523739f51a426bae4b2ef4893f4c696b6dae `。
  原证据引用：` e658360c1733e6a11b93404be7038e63d2e70615 ` → ` f5132e25653893f82dd1a20602b996efd140f824 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 327493f4f869e1dc4a9dbb90df8d698d8e4d45cd ` 和原目标 ` b9393bed06b25a190c7483f38d6c653faacf774e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2af8b3f873ccfaa7b2e0c4eb34bdf4aa4d0de7e9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-327"></a>
### 327. N6 / ` drm/syncobj: add timeline point merger utility `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/render/drm_syncobj_merger.h `、` 3rdparty/wlroots/render/drm_syncobj_merger.c `、` 3rdparty/wlroots/render/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6603523739f51a426bae4b2ef4893f4c696b6dae ` → ` 991330bdba4a4980bd50f5fb1fc108588a3d7759 `。
  原证据引用：` f5132e25653893f82dd1a20602b996efd140f824 ` → ` 60db7eff3d4c5f4953048f656a305a2b74963391 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4a57045bea78cb348fcf06add4ca8c33bc962014 ` 和原目标 ` 1700418df8a8d0f0e6b8c8e70716e5eda892fe7f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 22e6f3e74e30f24be2c8d513f30b9f7c8851304b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-328"></a>
### 328. N6 / ` linux_drm_syncobj_v1: add release point accumulation `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_linux_drm_syncobj_v1.h `、` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 991330bdba4a4980bd50f5fb1fc108588a3d7759 ` → ` d6f50b2def5e2290d36426c7ef24f95ccdcf3f18 `。
  原证据引用：` 60db7eff3d4c5f4953048f656a305a2b74963391 ` → ` a73c38f5a60791b19d130216fa5f4570bee6a5f7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 07b20196d39dfeea14c19ad20980bcefbeccf298 ` 和原目标 ` 997dcee51e7aa6924b6cb3fbef7049f33e1a8d20 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 081460343395858ef7dc29f040baad614395d106 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-329"></a>
### 329. N6 / ` scene: transfer sample syncobj to client timeline `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` d6f50b2def5e2290d36426c7ef24f95ccdcf3f18 ` → ` b0780782b10ffbb5aeb7bd9886894b2a63002ebe `。
  原证据引用：` a73c38f5a60791b19d130216fa5f4570bee6a5f7 ` → ` 5f01c83c92407d2143142bc1e664f28c8da12881 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ea645b18740f3435025b713223590b9ffb58d7ec ` 和原目标 ` 6ac1a87c3d842e9492dff84be3ba2793e0237067 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 4f0d8d19f22df10267d0b0d3e54b1a74eb34852a `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-330"></a>
### 330. N6 / ` backend/drm: properly delay syncobj signalling `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/backend/drm/drm.c `、` 3rdparty/wlroots/include/backend/drm/drm.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` b0780782b10ffbb5aeb7bd9886894b2a63002ebe ` → ` 19f9d98f71228cf3e6d68bce6ac345e622b6fdc4 `。
  原证据引用：` 5f01c83c92407d2143142bc1e664f28c8da12881 ` → ` 66f17fff2849288cf64012797bdf3c570df59660 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 29005752b1cb2fd500f319609110aa881adcaa64 ` 和原目标 ` 2e243c0eaee56c069be1b2dc69228f76ff9d4221 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9520fe32165432c2eca9efa350da9a1aa9f4e499 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-331"></a>
### 331. N6 / ` output/drm: don't use OUT_FENCE_PTR `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/backend/drm/atomic.c `、` 3rdparty/wlroots/backend/drm/drm.c `、` 3rdparty/wlroots/backend/drm/libliftoff.c `、` 3rdparty/wlroots/include/backend/drm/drm.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 19f9d98f71228cf3e6d68bce6ac345e622b6fdc4 ` → ` de5cf50b669263663ab739509bdcc6f34617ed47 `。
  原证据引用：` 66f17fff2849288cf64012797bdf3c570df59660 ` → ` de59a4b9b6c61e8de94519129c91ecf2361d1cc6 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5b85ed5b09fbda6407a68416c2b214be489907ed ` 和原目标 ` 92b126978d965c78aeb0d33595b8a001f14144f1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 4b203dba65044dda9cd0fec4a7aac5e283f575d5 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-332"></a>
### 332. N6 / ` build: bump version to 0.20.0-rc5 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` de5cf50b669263663ab739509bdcc6f34617ed47 ` → ` 3670253bc8817ab2d3b3d5822baff9a6321471f6 `。
  原证据引用：` de59a4b9b6c61e8de94519129c91ecf2361d1cc6 ` → ` e493b3c46a1a6c9b493d37ca3f85539f721b8322 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 04e824869922bcedc67865f904f8ff4b6c4cb076 ` 和原目标 ` d200db269847d16c4076d7edb18cf25df2841f85 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 390ed18e8e46dec35013c90b634460e4759b74b1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-333"></a>
### 333. N6 / ` color_management_v1: use early continue in surface loop `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3670253bc8817ab2d3b3d5822baff9a6321471f6 ` → ` 2f641cf1ce4d34f3cd8b13e6a8aad0b2932d952d `。
  原证据引用：` e493b3c46a1a6c9b493d37ca3f85539f721b8322 ` → ` 8817f4881b82362a2542ec4582a78e102b55552e `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 2fad5dcfdcaf8394e118088173fc8be8ace13045 ` 和原目标 ` ab88b3297d1f405ae2f5af5f619ad4f138e192cd ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` ad6b1de9410a5ac14e310219acbbaf141904499b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-334"></a>
### 334. N6 / ` color_management_v1: ignore surface update if no-op `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_color_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2f641cf1ce4d34f3cd8b13e6a8aad0b2932d952d ` → ` deb73c107423354688b02adcfe33a4e163f4aca8 `。
  原证据引用：` 8817f4881b82362a2542ec4582a78e102b55552e ` → ` e43bb8c62da04dee1699614114d164a7b008e662 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e03e943d4766a6c670ee77b1b315b3c30c33c9fd ` 和原目标 ` 35380a50bdd15b08b4af2a4ed4f10584dd90ad4b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c513d428f17f2702f9e25163bfb635b687317865 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-335"></a>
### 335. N6 / ` linux_drm_syncobj_v1: fix handling of empty first commit `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_linux_drm_syncobj_v1.h `、` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` deb73c107423354688b02adcfe33a4e163f4aca8 ` → ` 208ab4dad188c40ca5a55f445e74a6dded198740 `。
  原证据引用：` e43bb8c62da04dee1699614114d164a7b008e662 ` → ` f4aaf7d6c95d48495ff5e647200e0ac232b7cce8 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 208e2d7f0c50b85095631b20db3ba8b451ae41a6 ` 和原目标 ` 72986ba53dd9424ce04943d0d610617e406de66a ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 3832d44d69c3b348909a4450a4c81ee05cb6bff2 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-336"></a>
### 336. N6 / ` render/vulkan: compile against vulkan 1.2 header `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/util.c `、` 3rdparty/wlroots/render/vulkan/vulkan.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 208ab4dad188c40ca5a55f445e74a6dded198740 ` → ` d00cf3dccc5d9e68af52cf50deb649a49eb99e43 `。
  原证据引用：` f4aaf7d6c95d48495ff5e647200e0ac232b7cce8 ` → ` 43d73a23ade8a556eb6cfedea324e9f926d302d7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 11e27740fefae88af7cbb6349a388775882c7ec2 ` 和原目标 ` 27be31e5c2a16be5a67be8fa50212e8bb0a6f653 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` eb83e9d4e376587acd646073e1485c74cc7a848e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-337"></a>
### 337. N6 / ` build: bump version to 0.20.0 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` d00cf3dccc5d9e68af52cf50deb649a49eb99e43 ` → ` 3a691ce140757c7318b91e18d0ae6cb3873c253b `。
  原证据引用：` 43d73a23ade8a556eb6cfedea324e9f926d302d7 ` → ` de7ca4d51e1985603c23b55d10752bbcc94cf4d1 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4963e7bc7daa0e2d29b546f10267bcf07569ef5c ` 和原目标 ` 99331ac0b0a77576dc045311ce50067c01ed2bc5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 55918546eddcff1e553af37d623f77a646f70095 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-338"></a>
### 338. N6 / ` ext_image_capture_source_v1/scene: fix extents `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3a691ce140757c7318b91e18d0ae6cb3873c253b ` → ` a835235bc6a4a3c4b63ded04f159b2730e2f6fe4 `。
  原证据引用：` de7ca4d51e1985603c23b55d10752bbcc94cf4d1 ` → ` 310707293869548cecce52f63718e290ae72f17f `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5d445e265ea404db6e00eb30b1d9d8eb84572a16 ` 和原目标 ` fcfeedea2cd87a7f181151fb3f98c515fd297ee7 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` c928b5dc0376302784200c8ab917c43ac33d5a78 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-339"></a>
### 339. N6 / ` toplevel_capture: allocate new_request argument on the stack `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/foreign_toplevel.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a835235bc6a4a3c4b63ded04f159b2730e2f6fe4 ` → ` a491653da5392e532917840b55afcebe936b5355 `。
  原证据引用：` 310707293869548cecce52f63718e290ae72f17f ` → ` 61d8cbf57651947ea7e9ddbc2d857eb193b93571 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 252e508d682bfb3eaedd6aecab26a2ca8544d8f7 ` 和原目标 ` a3c46d22b234aff223e3ca26b8b4ebaaad5a32fa ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f884174bfeb69d696c28cbfabc6e355d5f4b7a12 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-340"></a>
### 340. N6 / ` wlr-foreign-toplevel-management: add new toplevels to end of list `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_foreign_toplevel_management_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` a491653da5392e532917840b55afcebe936b5355 ` → ` 13f0f6a75de1acd9196584768c66b6550864d1bb `。
  原证据引用：` 61d8cbf57651947ea7e9ddbc2d857eb193b93571 ` → ` aa37a795cffa700d949d07576069b54134df34d5 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` b5d62efc17b9809001ac767199218fd70f8f4224 ` 和原目标 ` ba722750335ddc4fb50d5a7fbad90ceaabac91d9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bff0e7984a8e9233e0d2440e7c3bd9709cd4fdca `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-341"></a>
### 341. N6 / ` ext-foreign-toplevel-list: add new toplevels to end of list `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_ext_foreign_toplevel_list_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 13f0f6a75de1acd9196584768c66b6550864d1bb ` → ` b195f5ebf3662e5f0b31d41f512639bb7878849d `。
  原证据引用：` aa37a795cffa700d949d07576069b54134df34d5 ` → ` c941160eb6a5f64fdba0820bf41022a80e7ebbab `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` acb1a07ca29a1c96353095fc9400a636a8a586e8 ` 和原目标 ` a1496802c9811c10165ad7e2f2786c98dc5195d4 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 862606ecd4a027215c334d7415238fd6f7042baf `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-342"></a>
### 342. N6 / ` wlr_ext_workspace_v1.c: add new workspaces to end of list `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_ext_workspace_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` b195f5ebf3662e5f0b31d41f512639bb7878849d ` → ` 7d495c0e09b212e063913dca167e5fde29b76fb6 `。
  原证据引用：` c941160eb6a5f64fdba0820bf41022a80e7ebbab ` → ` 2e404663e9031d49d8608a42d28e1270c891a96a `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1c5061d5dc556ab87e855e27891c85a53c132703 ` 和原目标 ` 85b8be26bec1b0b8dde58a6639d2d92fc28e418e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 95898859748492d1f8393723d7adb42f84ede90d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-343"></a>
### 343. N6 / ` wlr_virtual_keyboard_v1: specify size when creating keymap `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_virtual_keyboard_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7d495c0e09b212e063913dca167e5fde29b76fb6 ` → ` adc9d96dd62c876e5d802a2b11e99247b1976b88 `。
  原证据引用：` 2e404663e9031d49d8608a42d28e1270c891a96a ` → ` dfcca46ff1d479700127e77e2138ae5a2a5473c0 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 777ed58419d07e51038195608bcbec544748985d ` 和原目标 ` e0fcd28156fb4716868480f8022945368d3f0815 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f3588f2dde8bebdc643172bb3b9f11762b2c2298 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-344"></a>
### 344. N6 / ` render/pixman: fix bilinear filtering to match gles2 renderer `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/render/pixman/pass.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` adc9d96dd62c876e5d802a2b11e99247b1976b88 ` → ` c323f127a9c6987024805a77e75cac61dce3b34b `。
  原证据引用：` dfcca46ff1d479700127e77e2138ae5a2a5473c0 ` → ` 057c637dc39afe9c8fb2e67a70b96e87f0225faf `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d2570147440a6707d9667d1ff7377f55dd91f8ab ` 和原目标 ` 23cd5be8bd531ba3466baf7b6acdd0fcb0eead8d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a492b1376f0ce3fcf67a5e91302dcee3ac83960f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-345"></a>
### 345. N6 / ` keyboard: fix modifiers event when no keymap set `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_keyboard.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` c323f127a9c6987024805a77e75cac61dce3b34b ` → ` 2fba13503e873ef7819053b87971127c31583f3d `。
  原证据引用：` 057c637dc39afe9c8fb2e67a70b96e87f0225faf ` → ` e3bdb880c2740f03fb39686fc4e6bcc6c97d7b07 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 80eb79813fa825180bd2681247a272350b7b8d25 ` 和原目标 ` ee94d0e5814fbbb28a696144e8f1092f6e5ee318 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 43ccae7d6e288441eb3c3f3d5ceaa08c9051db1f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-346"></a>
### 346. N6 / ` scene/surface: schedule on frame pacing output `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2fba13503e873ef7819053b87971127c31583f3d ` → ` 3b5c2463c209c7ca5379b80fc68bc70cb9700d79 `。
  原证据引用：` e3bdb880c2740f03fb39686fc4e6bcc6c97d7b07 ` → ` 9830932fb0a853995772c03fdaa6b62fc88381af `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 41aec9d71f90c68323d4de15c2ddf6f16bdc1a37 ` 和原目标 ` 1ac830c42aad7fd68b0a91bf9f9253c7cabf4a89 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 76443e553a6e1d487662d9348d3905c0e0b859ae `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-347"></a>
### 347. N6 / ` wlr_compositor: Apply state before updating surface_damage `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_compositor.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 3b5c2463c209c7ca5379b80fc68bc70cb9700d79 ` → ` 7e1c88d87b018ca70e4c576f5fcae8ffa0a1e74d `。
  原证据引用：` 9830932fb0a853995772c03fdaa6b62fc88381af ` → ` 73c1e8c89c825f761a8cbbf2647ec84704486464 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1afe33b15978c2682fd3a7d88e1191d4c8a01f60 ` 和原目标 ` b1f864d47863f92b8438e098fb86958043c75887 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` daee6b5e7dd504cfdfc864998625b56e02c19649 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-348"></a>
### 348. N6 / ` linux_drm_syncobj_v1: fix memory leak `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 7e1c88d87b018ca70e4c576f5fcae8ffa0a1e74d ` → ` 100d0c81c45c3e63c6bcaa6146c20830026d3fb1 `。
  原证据引用：` 73c1e8c89c825f761a8cbbf2647ec84704486464 ` → ` 913bbe0ffb9e1c6b729aecb509a68b5f8733b281 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 7be5f6c58c2481e5289c114ca2cbfb61086eb7e8 ` 和原目标 ` 6b6cd3b7812b977724b64654fc611cfd89083b9b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0c793fc518a4f0b8cb1a170ddd3767a0defc23ca `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-349"></a>
### 349. N6 / ` scene: only send leave events to outputs with matching scene root `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_compositor.h `、` 3rdparty/wlroots/types/scene/surface.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 100d0c81c45c3e63c6bcaa6146c20830026d3fb1 ` → ` 42b9294538f0fa55198a800ca4f8feef39110206 `。
  原证据引用：` 913bbe0ffb9e1c6b729aecb509a68b5f8733b281 ` → ` 39f05cd1b9e9269ba7676bc0f75e04c1d61a1adb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ef86cc7863d65c84955e6e27d20cf65ac2ce3675 ` 和原目标 ` 1fc920ed9fb5a4c05f8bc8926370061e80c6bb53 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 379a60d6205624b6831ede0039f47b2306bae0a1 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-350"></a>
### 350. N6 / ` build: bump version to 0.20.1 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 42b9294538f0fa55198a800ca4f8feef39110206 ` → ` 8825c1861052ae84f92a2a74fc237bf59f63d554 `。
  原证据引用：` 39f05cd1b9e9269ba7676bc0f75e04c1d61a1adb ` → ` a6c93228bc6c91d422865d72fd590f90dd328674 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 99dfd9b78f387745f72c3c2ef964b258561d2fd9 ` 和原目标 ` 8b78ec9269832cdbf4443329482b7c3ed47416ec ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 70560f1219926b5535555527938778b1f9583d89 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-351"></a>
### 351. N6 / ` xwayland/selection: stop using VLAs for MIME type atom lists `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/dnd.c `、` 3rdparty/wlroots/xwayland/selection/outgoing.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 8825c1861052ae84f92a2a74fc237bf59f63d554 ` → ` 55c4a15857499f8c7c7e28a0523e057c08b99f30 `。
  原证据引用：` a6c93228bc6c91d422865d72fd590f90dd328674 ` → ` e54f15fb0febdc4d1c6c0949e122e4bd30cd3f9d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` efcf521d9e167344a0eaa88411323e0a682b4352 ` 和原目标 ` b204d53215683ba45201a5f00bf49a007707268d ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a8045448f768721e53c272a466253dc533c53933 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-352"></a>
### 352. N6 / ` xwayland: use const pointers for xcb_get_property_value() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/incoming.c `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 55c4a15857499f8c7c7e28a0523e057c08b99f30 ` → ` 2f153eb18e6c70467389ae6828e8491f5b2ac7b6 `。
  原证据引用：` e54f15fb0febdc4d1c6c0949e122e4bd30cd3f9d ` → ` 640618ac7dec6a00b8e28d906c9c546babbf3adf `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` c72ebde4606fda987130454c43e3619dab48c9e0 ` 和原目标 ` cec0549b6d67a28d7d16595d59f357cb00920739 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 1cc1168ddc1471a1fa2558cad3dd452e5403ce13 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-353"></a>
### 353. N6 / ` xwayland/xwm: fix out-of-bounds strndup() in read_surface_class() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 2f153eb18e6c70467389ae6828e8491f5b2ac7b6 ` → ` 9716029ce79c394f567403794bf1e26c7c6fe2b3 `。
  原证据引用：` 640618ac7dec6a00b8e28d906c9c546babbf3adf ` → ` e8f383e0dc1f5838eee4ff06eb675ce7f8536025 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d1834b51b4e9dcfb18351dece8769fe81bb2d1bb ` 和原目标 ` 71c40bdb266ce3423486aa3dab16d48557a47469 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 44f81d82d96c1511cd92f350e7ced7192699b365 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-354"></a>
### 354. N6 / ` xwayland/xwm: pluralize array variable in read_surface_net_wm_state() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9716029ce79c394f567403794bf1e26c7c6fe2b3 ` → ` 64f4207c31110de8fdfbe9780c4a633bf492c23f `。
  原证据引用：` e8f383e0dc1f5838eee4ff06eb675ce7f8536025 ` → ` ef7e1d173df2985f8a88739738df13bdf0b646a9 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 8a3d1b8a4424bacf3f5beabde5ec66983ce8dca0 ` 和原目标 ` 08cb77a53d89b49d1216ce4c34c0028d6de3bb93 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 21634c9529237ed8972236cccc157ab74575a827 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-355"></a>
### 355. N6 / ` xwayland: stop using xcb_get_property_reply_t.value_len `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/incoming.c `、` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 64f4207c31110de8fdfbe9780c4a633bf492c23f ` → ` 6c6f0ed26fe18f7f23be4ab454f997d313aeba86 `。
  原证据引用：` ef7e1d173df2985f8a88739738df13bdf0b646a9 ` → ` 0e91e6a5205ee456a95802e35ef38b1dae7ee230 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4dad66cf6f99303e211dabc0e72c9f00e0c4c93d ` 和原目标 ` a1cc7cd3654f222622fbfad7d04460a450a8b8e1 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 447747c2ba68afcd483d6119dd8efe2dc33deb0b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-356"></a>
### 356. N6 / ` xwayland/xwm: align WL_SURFACE_ID error message with WL_SURFACE_SERIAL `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6c6f0ed26fe18f7f23be4ab454f997d313aeba86 ` → ` 6acd34d2176b63290601e8411c324466db14f249 `。
  原证据引用：` 0e91e6a5205ee456a95802e35ef38b1dae7ee230 ` → ` 4c1708cd30ddb8c4f9ab54a78b9313e66b4d978d `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` aec82dd30308ad1f6aea17b4bccc363cd6b9c73c ` 和原目标 ` 5443bb9539e70d9f9255f4e0695339b5b3405cb4 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 8ee7ac9eacdcc190c1b14e011ae1e81eb43f57b8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-357"></a>
### 357. N6 / ` xwayland/xwm: expand comment about WL_SURFACE_ID event ordering `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 6acd34d2176b63290601e8411c324466db14f249 ` → ` ad0432003a0b74fea4eb2cd451ddd9b40d69cae8 `。
  原证据引用：` 4c1708cd30ddb8c4f9ab54a78b9313e66b4d978d ` → ` 0c4d6608fa9cfb40e772558ccd4d74569d92273b `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 63790e1d8cd454f69947f141dbfc403844cc420e ` 和原目标 ` 4b649ae37a673c0e6f2c21a327e8e1b48c5eb2bb ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 5a0975cee991f6194aaeba00374c3f48c9b25700 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-358"></a>
### 358. N6 / ` xwayland/xwm: check whether surface is already associated for WL_SURFACE_ID `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` ad0432003a0b74fea4eb2cd451ddd9b40d69cae8 ` → ` 719e8172b674dca5dff1d4218bdc51451265f770 `。
  原证据引用：` 0c4d6608fa9cfb40e772558ccd4d74569d92273b ` → ` a1ae81671669d980cfc52576f92fd042f83ab1d4 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 1715ce5d5e91628b9323c096429781245c08b582 ` 和原目标 ` 1ae941b1604de38c26eefce0eb9eb04bb39f6931 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 9076299f2beb0cbe43edd47ebd14e06cec67ba64 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-359"></a>
### 359. N6 / ` xwayland/xwm: check object type in xwm_handle_surface_id_message() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 719e8172b674dca5dff1d4218bdc51451265f770 ` → ` 032311d745b71d7d9b8438871e2cf4aba099dad8 `。
  原证据引用：` a1ae81671669d980cfc52576f92fd042f83ab1d4 ` → ` 401d3932e41e90ad3da1b3770f942c7e5d0fdfbd `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 9f4afb87e591bb33912e3d7278cf49d6edf6b287 ` 和原目标 ` 9b58dc87f5bd250515f8981ca2875539aa57447e ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` a344edbb80d08367cb6eaad383d1f99aa36e86cb `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-360"></a>
### 360. N6 / ` xwayland/xwm: check WM_TRANSIENT_FOR length `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 032311d745b71d7d9b8438871e2cf4aba099dad8 ` → ` 1e8e264792ca6f3499b6112702e41cb5ccbb24cf `。
  原证据引用：` 401d3932e41e90ad3da1b3770f942c7e5d0fdfbd ` → ` e861462b9a942f49426f9234306c17c4671ae7fd `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 39e7a61b472519868038242f95335616ba8f5b8e ` 和原目标 ` 39bf76ba2561244986f81dbc416b78eb15b65a79 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 75e7124d01cd56be02c99348e1c3a26243c448d0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-361"></a>
### 361. N6 / ` xwayland: emit set_parent signal when parent is destroyed `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/xwm.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 1e8e264792ca6f3499b6112702e41cb5ccbb24cf ` → ` 34cccc06b6a23e0afe1915b675f45fe89e081cb7 `。
  原证据引用：` e861462b9a942f49426f9234306c17c4671ae7fd ` → ` 18bb9a21f376892bb140cbbef6dbedd9690aa371 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d003741eaa4e1832e2554710175415628784c94b ` 和原目标 ` 3785c332db0dafc2f31689005de3fcf013415aa9 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 0faca04c0fd9421d3415c6f37eeffd8ef1df7a1f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-362"></a>
### 362. N6 / ` scene: don't send new dmabuf feedback after node disable `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 34cccc06b6a23e0afe1915b675f45fe89e081cb7 ` → ` 06c56fbb6f19179eb3fb5579e99523b09864ee36 `。
  原证据引用：` 18bb9a21f376892bb140cbbef6dbedd9690aa371 ` → ` 8543e7be3b57869a34eff82d6f8aee32e1f5f161 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 15bc8d04b8df33c82d0208c582e234e60aba60a0 ` 和原目标 ` 478d84aa08ee09ceafbd2ad96c71d6fbcbf95343 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 79ca1642d3d94a2e7527b49183a135c8abff8ab3 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-363"></a>
### 363. N6 / ` drag: check dnd action and accepted on touch up `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/data_device/wlr_drag.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` 06c56fbb6f19179eb3fb5579e99523b09864ee36 ` → ` db3d0e3938ad144b10286e23a0029c54b0be26ab `。
  原证据引用：` 8543e7be3b57869a34eff82d6f8aee32e1f5f161 ` → ` 9788e00f54ed24c0ca6faf1ffc32d6813902cdb7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d37140d74ab9d0f8cb32f222ffbfd83937c0e891 ` 和原目标 ` bc817082dde4c0cb31f50b140b89d8c97af24aa5 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` bfa552f64ea6835a64048468d618d74c5ca62e2e `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-364"></a>
### 364. N6 / ` xwayland:use size of the pointed type instead of pointer `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/xwayland/selection/incoming.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` db3d0e3938ad144b10286e23a0029c54b0be26ab ` → ` fd406bf55a366ad1a8762d97f743f35a156da60f `。
  原证据引用：` 9788e00f54ed24c0ca6faf1ffc32d6813902cdb7 ` → ` 1dae8c24289bb2862a8d7f6ace0803a77c4e03c7 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d8829e42caefa988029a62148a9ababfe467640f ` 和原目标 ` 7cacf98abe023616b2d29649a19f845cff796c0f ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 2180ecd076075bc5ccb21d791b42a80f416f2132 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-365"></a>
### 365. N6 / ` scene: intersect visible area with output layout in update_node_update_outputs() `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/types/scene/wlr_scene.c `。
- 依赖 ` 3rdparty/wlroots `：updated；` fd406bf55a366ad1a8762d97f743f35a156da60f ` → ` 643e04c02b599225a3eaf42ba64508a2ed2b447e `。
  原证据引用：` 1dae8c24289bb2862a8d7f6ace0803a77c4e03c7 ` → ` 4b4751c1e573c560028f20683730f5b64db89756 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 5c661fd02bed08c4b2e6a633688d6d5c944842c5 ` 和原目标 ` b7525e569deb150bb03718d220a8c5b2f6644990 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` f97d448b4d88d98915e364a28c08c14dc0f57742 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-366"></a>
### 366. N6 / ` security_context_v1: set CLOEXEC for client FDs `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/util/fd.h `、` 3rdparty/wlroots/types/wlr_security_context_v1.c `、` 3rdparty/wlroots/util/fd.c `、` 3rdparty/wlroots/util/meson.build `、` 3rdparty/wlroots/xwayland/server.c `、` 3rdparty/wlroots/xwayland/sockets.c `、` 3rdparty/wlroots/xwayland/sockets.h `。
- 依赖 ` 3rdparty/wlroots `：updated；` 643e04c02b599225a3eaf42ba64508a2ed2b447e ` → ` 873a387a97c942d7b6990731effb9874fead1c04 `。
  原证据引用：` 4b4751c1e573c560028f20683730f5b64db89756 ` → ` b89753f4c0fe298a16341595a63569d936117a86 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` d85ecab59bfe36b18a00a728810df435e6f1543e ` 和原目标 ` 66f46e21d9388959996d78c8677885a2398a179b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 473e4539caf9e28a9a29262d5f17f17e8292c32b `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-367"></a>
### 367. N6 / ` build: bump version to 0.20.2 `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/meson.build `。
- 依赖 ` 3rdparty/wlroots `：updated；` 873a387a97c942d7b6990731effb9874fead1c04 ` → ` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 `。
  原证据引用：` b89753f4c0fe298a16341595a63569d936117a86 ` → ` 3288879d3c1c82156d580114e8393bddfe8ee131 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 324909af3e2b1fda50896fe9863747fb6011ec9a ` 和原目标 ` e8aab674762dadfeb91495af8d7fcb80f8d38986 ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` d16389b69a645d4cfc6bf358147b8a2e8629b4db `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-368"></a>
### 368. N6 / ` Update '3rdparty/wlroots/' from upstream commit '88a869855742281c98c22cab9641b317b8d065ef' to 'd783533489e1f75d6886c2ab5c5960090ef268f8' `

- 本仓内容路径：无。
- 实际改变：` 3rdparty/wlroots `。
- 排除的来源路径：` 3rdparty/wlroots/include/wlr/render/vulkan.h `、` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `、` 3rdparty/wlroots/render/vulkan/renderer.c `、` 3rdparty/wlroots/types/buffer/buffer.c `、` 3rdparty/wlroots/types/data_device/wlr_data_source.c `、` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `、` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `、` 3rdparty/wlroots/wlroots.syms `。
- 依赖 ` 3rdparty/wlroots `：updated；` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
  原证据引用：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` e4079612adb3e567c7f661dcb404663484817f39 ` 和原目标 ` a8e5cac236bc01f7ce0d9aa782b588de857cc00b ` 查询。
- **仅依赖引用传播，不是本仓源码适配。**
- 同一 Treeland 来源的 P / DeckShell 目标：` 45cdb04acc57153006dc234bab392d94dea913a4 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-369"></a>
### 369. N6 / ` fix(wlroots): define HAVE_LINUX_SYNC_FILE for CMake builds `

- 本仓内容路径：` wlroots/CMakeLists.txt `。
- 实际改变：` wlroots/CMakeLists.txt `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
  原证据引用：` f230870062b4ac32900ee070492e16e706b3d1fb ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 981ef4b18cbe7e908804e17bf7fd2ae4d65e6fca ` 和原目标 ` adb3af1b9100b411d9bcd95cb53b6dafd5312641 ` 查询。
- 原审核说明：` 接入 linux/sync_file.h 的真实检测，并作为 R 编译目标的私有定义发布结果；保留本地独立配置生成 helper 及仍被 helper 引用的旧 GBM 检测初值，不重复生成头。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/7d30760134a5ff722319b83d7d244b12fee87ea0.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` b4bb1dccdafa6e8d551eabf37b3c3153ab590380 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-370"></a>
### 370. N6 / ` fix: guard wlroots C99 array parameters in C++ headers `

- 本仓内容路径：` waylib/src/server/kernel/wlr_all.h `。
- 实际改变：` waylib/src/server/kernel/wlr_all.h `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
  原证据引用：` f230870062b4ac32900ee070492e16e706b3d1fb ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 475f3cb6f5f21d0ecc059c6998e590a38f291560 ` 和原目标 ` 7fbd74467a473b0e8e93d700f32d539e6512a5d4 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` b9a05b795109edd2c383d557ba09b264d73ff4ec `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-371"></a>
### 371. N6 / ` feat(wlroots): upgrade vendored wlroots to 0.20.2 `

- 本仓内容路径：` wlroots/CMakeLists.txt `、` wlroots/UPSTREAM `、` wlroots/cmake/WlrootsProtocols.cmake `、` wlroots/cmake/WlrootsSources.cmake `。
- 实际改变：` wlroots/CMakeLists.txt `、` wlroots/UPSTREAM `、` wlroots/cmake/WlrootsProtocols.cmake `、` wlroots/cmake/WlrootsSources.cmake `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
  原证据引用：` f230870062b4ac32900ee070492e16e706b3d1fb ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 06ab77c1664548ef90e1f953ff00e2d5dacea166 ` 和原目标 ` 6abb97a1033a928c276bc96a943447564c90f5c1 ` 查询。
- 原审核说明：` 同步 wlroots 0.20.2 版本、最低依赖、协议和源文件集合；保留本地独立 R 布局、原生版本变量和现有 helper 结构，不以源 monorepo 的函数缩进覆盖本地已验收构建入口。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/cfbde75aa06eba39919406cb30bb2017be4e9c49.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 73f73be5d4dd72a348375e730e794f60066415b0 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-372"></a>
### 372. N6 / ` feat(wlroots): adapt to wlroots 0.20.2 API changes `

- 本仓内容路径：` waylib/examples/tinywl/helper.cpp `、` waylib/src/server/CMakeLists.txt `、` waylib/src/server/protocols/ext_foreign_toplevel_image_capture_source.c `、` waylib/src/server/protocols/ext_foreign_toplevel_image_capture_source_manager_v1.h `、` waylib/src/server/protocols/private/winputmethodv2.cpp `、` waylib/src/server/protocols/private/wtextinputv3.cpp `、` waylib/src/server/qtquick/woutputhelper.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.h `。
- 实际改变：` 3rdparty/wlroots `、` waylib/examples/tinywl/helper.cpp `、` waylib/src/server/CMakeLists.txt `、` waylib/src/server/protocols/ext_foreign_toplevel_image_capture_source.c `、` waylib/src/server/protocols/ext_foreign_toplevel_image_capture_source_manager_v1.h `、` waylib/src/server/protocols/private/winputmethodv2.cpp `、` waylib/src/server/protocols/private/wtextinputv3.cpp `、` waylib/src/server/qtquick/woutputhelper.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.cpp `、` waylib/src/server/utils/wextimagecapturesourcev1impl.h `。
- 排除的来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `、` src/output/output.cpp `、` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：updated；` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` f230870062b4ac32900ee070492e16e706b3d1fb ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` ca160e1eb74ecb4f43102ac3f6463ab0e1a25137 ` 和原目标 ` 983dd5707d2e6cb2a59434062ed2b45036f99452 ` 查询。
- 原审核说明：` 按来源迁移原生 0.20.2 API，删除重复捕获实现和已退休公共头，保留本地 CMake 集成结构与固定命名空间。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/db0ff5dca7fde5c57b7029842c6f42cba91235e8.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 543dce9a1873bd78b5654ce8587a889e10d20848 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-373"></a>
### 373. N6 / ` feat: gate dev file installation behind TREELAND_INSTALL_DEV option (default OFF) `

- 本仓内容路径：` waylib/CMakeLists.txt `、` waylib/src/CMakeLists.txt `、` waylib/src/server/CMakeLists.txt `、` wlroots/CMakeLists.txt `。
- 实际改变：` CMakeLists.txt `、` waylib/CMakeLists.txt `、` waylib/src/CMakeLists.txt `、` waylib/src/server/CMakeLists.txt `、` wlroots/CMakeLists.txt `。
- 排除的来源路径：` CMakeLists.txt `、` debian/control `、` debian/rules `、` debian/treeland-dev.install `、` misc/cmake/CMakeLists.txt `、` src/CMakeLists.txt `、` src/modules/capture/CMakeLists.txt `、` src/modules/personalization/CMakeLists.txt `。
- 已审本地集成路径：` CMakeLists.txt `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` f40f2fe7ba7daf686b3dbf352d592e56f9e182bc ` 和原目标 ` 9f5ef46c65c4b5f4765468db73cf6368617841ba ` 查询。
- 原审核说明：` 按来源分离开发与运行时安装；开发开启时以真实库安装记录生成导出和公共头，关闭时使用 NAMELINK_SKIP，仅用 NAMELINK_COMPONENT 区分开发符号链接，避免空导出。C 默认开启，P 的缓存默认值优先。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/f5fd08be82b50f706813c6248e56142095fcd97c.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 139051af09f25abf4fbc2b2d3737a6f282268a2c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-374"></a>
### 374. N6 / ` feat: support pointer-constraints protocol `

- 本仓内容路径：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/private/wcursor_p.h `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wcursor.h `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `、` waylib/src/server/protocols/WPointerConstraintsV1 `、` waylib/src/server/protocols/wpointerconstraintsv1.cpp `、` waylib/src/server/protocols/wpointerconstraintsv1.h `。
- 实际改变：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/private/wcursor_p.h `、` waylib/src/server/kernel/wcursor.cpp `、` waylib/src/server/kernel/wcursor.h `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `、` waylib/src/server/protocols/WPointerConstraintsV1 `、` waylib/src/server/protocols/wpointerconstraintsv1.cpp `、` waylib/src/server/protocols/wpointerconstraintsv1.h `。
- 排除的来源路径：` REUSE.toml `、` src/CMakeLists.txt `、` src/core/rootsurfacecontainer.cpp `、` src/core/rootsurfacecontainer.h `、` src/seat/helper.cpp `、` src/seat/helper.h `、` src/seat/pointerconstraintsmanager.cpp `、` src/seat/pointerconstraintsmanager.h `、` tests/CMakeLists.txt `、` tests/test_protocol_pointerconstraints/CMakeLists.txt `、` tests/test_protocol_pointerconstraints/main.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-evidence.json`；以来源 ` 4cd2c672c10ec0e3004c88bbd48a18ded22872bd ` 和原目标 ` 83365fc20abbfdb29b710446d5e3cc5fabc86efe ` 查询。
- 原审核说明：` 接入指针约束公共头和原生包装，并在修复开发安装后按真实相邻对象重建逐路径证明。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/219f4dee7780fb7c2b056e62186266b606d075bd.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` b7d2ffd21cccc75e75d0d58d992232294c57804c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-375"></a>
### 375. N7 / ` fix: use wlr_xdg_toplevel_tag_v1 API instead of custom C implementation `

- 本仓内容路径：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/protocols/wxdgtopleveltagmanager.cpp `。
- 实际改变：` waylib/src/server/CMakeLists.txt `、` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/protocols/wxdgtopleveltagmanager.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` a0329cd13c3071d658cf6043c4884b0cbf8844ec ` 和原目标 ` 767ee8170341d0d20e1352afaaf95a9090a7ffe9 ` 查询。
- 原审核说明：` 上游直接改用当前 R 的原生 xdg-toplevel-tag 实现，精确审批本地重复协议生成入口的退休；不新增兼容实现，不改变固定包目标或命名空间。 `。
- 逐路径理由与增量对照：[本仓适配详情](adaptations/65e42e24b4dfa9d2637862e589c43024853bdc95.md)。
- 同一 Treeland 来源的 P / DeckShell 目标：` 8452d15c1bbc974f17d55e49f52b91bac57e47f4 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-376"></a>
### 376. N7 / ` chore: clean up Qt < 6.8 compatibility code `

- 本仓内容路径：` waylib/examples/tinywl/helper.cpp `、` waylib/examples/tinywl/surfacewrapper.cpp `、` waylib/src/server/platformplugin/qwlrootsintegration.cpp `、` waylib/src/server/platformplugin/qwlrootsintegration.h `、` waylib/src/server/platformplugin/qwlrootswindow.cpp `、` waylib/src/server/qtquick/private/wrenderbuffernode.cpp `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/wqmlcreator.cpp `、` waylib/src/server/qtquick/wquickobserver.cpp `、` waylib/src/server/qtquick/wquickobserver.h `、` waylib/src/server/qtquick/wrenderhelper.cpp `。
- 实际改变：` waylib/examples/tinywl/helper.cpp `、` waylib/examples/tinywl/surfacewrapper.cpp `、` waylib/src/server/platformplugin/qwlrootsintegration.cpp `、` waylib/src/server/platformplugin/qwlrootsintegration.h `、` waylib/src/server/platformplugin/qwlrootswindow.cpp `、` waylib/src/server/qtquick/private/wrenderbuffernode.cpp `、` waylib/src/server/qtquick/woutputrenderwindow.cpp `、` waylib/src/server/qtquick/wqmlcreator.cpp `、` waylib/src/server/qtquick/wquickobserver.cpp `、` waylib/src/server/qtquick/wquickobserver.h `、` waylib/src/server/qtquick/wrenderhelper.cpp `。
- 排除的来源路径：` examples/test_pinch_handler/main.cpp `、` src/effects/tsgradiusimagenode.cpp `、` src/modules/item-selector/itemselector.cpp `、` src/seat/helper.cpp `、` src/xsettings/xsettings.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` b9f6069fa3e1354091af377c9c9472fda290e2d8 ` 和原目标 ` 6aea08e0bb8f4623b6c3ea294b4baa119e0922da ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` b4afb2b36ae594780ee51343ada5a33828a796b8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-377"></a>
### 377. N7 / ` feat(protocol-tests): add production Wayland protocol integration suite `

- 本仓内容路径：` waylib/src/server/qtquick/wtextureproviderprovider.cpp `。
- 实际改变：` waylib/src/server/qtquick/wtextureproviderprovider.cpp `。
- 排除的来源路径：` .agents/skills/wayland-protocol-test/SKILL.md `、` .github/workflows/treeland-deepin-build.yml `、` src/CMakeLists.txt `、` src/core/treeland.cpp `、` src/core/treelandinit.cpp `、` src/core/treelandinit.h `、` src/core/windowpicker.cpp `、` src/core/windowpicker.h `、` src/main.cpp `、` src/modules/capture/capture.cpp `、` src/modules/capture/capture.h `、` src/modules/wallpaper/wallpapershellinterfacev1.cpp `、` src/plugins/lockscreen/qml/ShutdownButton.qml `、` src/plugins/multitaskview/qml/WindowSelectionGrid.qml `、` src/plugins/multitaskview/qml/WorkspaceSelectionList.qml `、` src/seat/helper.cpp `、` tests/CMakeLists.txt `、` tests/protocols/CMakeLists.txt `、` tests/protocols/INDEX.md `、` tests/protocols/README.md `、` tests/protocols/framework/ProtocolTest.cmake `、` tests/protocols/framework/README.md `、` tests/protocols/framework/client-connection.c `、` tests/protocols/framework/client-connection.h `、` tests/protocols/framework/protocol-test-entry.cpp `、` tests/protocols/framework/server-bridge-api.h `、` tests/protocols/framework/server-bridge.cpp `、` tests/protocols/framework/server-bridge.h `、` tests/protocols/framework/test-accounts-service.cpp `、` tests/protocols/framework/test-accounts-service.h `、` tests/protocols/framework/test-dconfig-service.cpp `、` tests/protocols/framework/test-dconfig-service.h `、` tests/protocols/framework/xdg-toplevel-client.c `、` tests/protocols/framework/xdg-toplevel-client.h `、` tests/protocols/protocol-specification-template.md `、` tests/protocols/treeland-app-id-resolver-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-desktop-v1/setup.cpp `、` tests/protocols/treeland-app-id-resolver-desktop-v1/treeland-app-id-resolver-desktop-v1.c `、` tests/protocols/treeland-app-id-resolver-desktop-v1/treeland-app-id-resolver-desktop-v1.h `、` tests/protocols/treeland-app-id-resolver-v1/CMakeLists.txt `、` tests/protocols/treeland-app-id-resolver-v1/README.md `、` tests/protocols/treeland-app-id-resolver-v1/setup.cpp `、` tests/protocols/treeland-app-id-resolver-v1/treeland-app-id-resolver-v1.c `、` tests/protocols/treeland-app-id-resolver-v1/treeland-app-id-resolver-v1.h `、` tests/protocols/treeland-capture-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-capture-desktop-v1/setup.cpp `、` tests/protocols/treeland-capture-desktop-v1/treeland-capture-desktop-v1.c `、` tests/protocols/treeland-capture-desktop-v1/treeland-capture-desktop-v1.h `、` tests/protocols/treeland-capture-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-capture-unstable-v1/README.md `、` tests/protocols/treeland-capture-unstable-v1/setup.cpp `、` tests/protocols/treeland-capture-unstable-v1/treeland-capture-unstable-v1.c `、` tests/protocols/treeland-capture-unstable-v1/treeland-capture-unstable-v1.h `、` tests/protocols/treeland-dde-shell-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-dde-shell-desktop-v1/setup.cpp `、` tests/protocols/treeland-dde-shell-desktop-v1/treeland-dde-shell-desktop-v1.c `、` tests/protocols/treeland-dde-shell-desktop-v1/treeland-dde-shell-desktop-v1.h `、` tests/protocols/treeland-dde-shell-lockscreen-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-dde-shell-lockscreen-desktop-v1/setup.cpp `、` tests/protocols/treeland-dde-shell-lockscreen-desktop-v1/treeland-dde-shell-lockscreen-desktop-v1.c `、` tests/protocols/treeland-dde-shell-lockscreen-desktop-v1/treeland-dde-shell-lockscreen-desktop-v1.h `、` tests/protocols/treeland-dde-shell-multitask-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-dde-shell-multitask-desktop-v1/setup.cpp `、` tests/protocols/treeland-dde-shell-multitask-desktop-v1/treeland-dde-shell-multitask-desktop-v1.c `、` tests/protocols/treeland-dde-shell-multitask-desktop-v1/treeland-dde-shell-multitask-desktop-v1.h `、` tests/protocols/treeland-dde-shell-picker-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-dde-shell-picker-desktop-v1/setup.cpp `、` tests/protocols/treeland-dde-shell-picker-desktop-v1/treeland-dde-shell-picker-desktop-v1.c `、` tests/protocols/treeland-dde-shell-picker-desktop-v1/treeland-dde-shell-picker-desktop-v1.h `、` tests/protocols/treeland-dde-shell-v1/CMakeLists.txt `、` tests/protocols/treeland-dde-shell-v1/README.md `、` tests/protocols/treeland-dde-shell-v1/setup.cpp `、` tests/protocols/treeland-dde-shell-v1/treeland-dde-shell-v1.c `、` tests/protocols/treeland-dde-shell-v1/treeland-dde-shell-v1.h `、` tests/protocols/treeland-ddm-v1/CMakeLists.txt `、` tests/protocols/treeland-ddm-v1/README.md `、` tests/protocols/treeland-ddm-v1/setup.cpp `、` tests/protocols/treeland-ddm-v1/treeland-ddm-v1.c `、` tests/protocols/treeland-ddm-v1/treeland-ddm-v1.h `、` tests/protocols/treeland-foreign-toplevel-manager-v1/CMakeLists.txt `、` tests/protocols/treeland-foreign-toplevel-manager-v1/README.md `、` tests/protocols/treeland-foreign-toplevel-manager-v1/setup.cpp `、` tests/protocols/treeland-foreign-toplevel-manager-v1/treeland-foreign-toplevel-manager-v1.c `、` tests/protocols/treeland-foreign-toplevel-manager-v1/treeland-foreign-toplevel-manager-v1.h `、` tests/protocols/treeland-input-manager-uinput-v1/CMakeLists.txt `、` tests/protocols/treeland-input-manager-uinput-v1/setup.cpp `、` tests/protocols/treeland-input-manager-uinput-v1/treeland-input-manager-uinput-v1.c `、` tests/protocols/treeland-input-manager-uinput-v1/treeland-input-manager-uinput-v1.h `、` tests/protocols/treeland-input-manager-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-input-manager-unstable-v1/README.md `、` tests/protocols/treeland-input-manager-unstable-v1/setup.cpp `、` tests/protocols/treeland-input-manager-unstable-v1/treeland-input-manager-unstable-v1.c `、` tests/protocols/treeland-input-manager-unstable-v1/treeland-input-manager-unstable-v1.h `、` tests/protocols/treeland-keyboard-state-notify-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-keyboard-state-notify-unstable-v1/README.md `、` tests/protocols/treeland-keyboard-state-notify-unstable-v1/setup.cpp `、` tests/protocols/treeland-keyboard-state-notify-unstable-v1/treeland-keyboard-state-notify-unstable-v1.c `、` tests/protocols/treeland-keyboard-state-notify-unstable-v1/treeland-keyboard-state-notify-unstable-v1.h `、` tests/protocols/treeland-output-manager-v1/CMakeLists.txt `、` tests/protocols/treeland-output-manager-v1/README.md `、` tests/protocols/treeland-output-manager-v1/setup.cpp `、` tests/protocols/treeland-output-manager-v1/treeland-output-manager-v1.c `、` tests/protocols/treeland-output-manager-v1/treeland-output-manager-v1.h `、` tests/protocols/treeland-personalization-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-personalization-desktop-v1/setup.cpp `、` tests/protocols/treeland-personalization-desktop-v1/treeland-personalization-desktop-v1.c `、` tests/protocols/treeland-personalization-desktop-v1/treeland-personalization-desktop-v1.h `、` tests/protocols/treeland-personalization-manager-v1/CMakeLists.txt `、` tests/protocols/treeland-personalization-manager-v1/README.md `、` tests/protocols/treeland-personalization-manager-v1/setup.cpp `、` tests/protocols/treeland-personalization-manager-v1/treeland-personalization-manager-v1.c `、` tests/protocols/treeland-personalization-manager-v1/treeland-personalization-manager-v1.h `、` tests/protocols/treeland-prelaunch-splash-desktop-v2/CMakeLists.txt `、` tests/protocols/treeland-prelaunch-splash-desktop-v2/setup.cpp `、` tests/protocols/treeland-prelaunch-splash-desktop-v2/treeland-prelaunch-splash-desktop-v2.c `、` tests/protocols/treeland-prelaunch-splash-desktop-v2/treeland-prelaunch-splash-desktop-v2.h `、` tests/protocols/treeland-prelaunch-splash-v2/CMakeLists.txt `、` tests/protocols/treeland-prelaunch-splash-v2/README.md `、` tests/protocols/treeland-prelaunch-splash-v2/setup.cpp `、` tests/protocols/treeland-prelaunch-splash-v2/treeland-prelaunch-splash-v2.c `、` tests/protocols/treeland-prelaunch-splash-v2/treeland-prelaunch-splash-v2.h `、` tests/protocols/treeland-screensaver-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-screensaver-desktop-v1/setup.cpp `、` tests/protocols/treeland-screensaver-desktop-v1/treeland-screensaver-desktop-v1.c `、` tests/protocols/treeland-screensaver-desktop-v1/treeland-screensaver-desktop-v1.h `、` tests/protocols/treeland-screensaver-v1/CMakeLists.txt `、` tests/protocols/treeland-screensaver-v1/README.md `、` tests/protocols/treeland-screensaver-v1/setup.cpp `、` tests/protocols/treeland-screensaver-v1/treeland-screensaver-v1.c `、` tests/protocols/treeland-screensaver-v1/treeland-screensaver-v1.h `、` tests/protocols/treeland-shortcut-manager-desktop-v2/CMakeLists.txt `、` tests/protocols/treeland-shortcut-manager-desktop-v2/setup.cpp `、` tests/protocols/treeland-shortcut-manager-desktop-v2/treeland-shortcut-manager-desktop-v2.c `、` tests/protocols/treeland-shortcut-manager-desktop-v2/treeland-shortcut-manager-desktop-v2.h `、` tests/protocols/treeland-shortcut-manager-v2/CMakeLists.txt `、` tests/protocols/treeland-shortcut-manager-v2/README.md `、` tests/protocols/treeland-shortcut-manager-v2/setup.cpp `、` tests/protocols/treeland-shortcut-manager-v2/treeland-shortcut-manager-v2.c `、` tests/protocols/treeland-shortcut-manager-v2/treeland-shortcut-manager-v2.h `、` tests/protocols/treeland-virtual-output-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-virtual-output-desktop-v1/README.md `、` tests/protocols/treeland-virtual-output-desktop-v1/setup.cpp `、` tests/protocols/treeland-virtual-output-desktop-v1/treeland-virtual-output-desktop-v1.c `、` tests/protocols/treeland-virtual-output-desktop-v1/treeland-virtual-output-desktop-v1.h `、` tests/protocols/treeland-virtual-output-manager-v1/CMakeLists.txt `、` tests/protocols/treeland-virtual-output-manager-v1/README.md `、` tests/protocols/treeland-virtual-output-manager-v1/setup.cpp `、` tests/protocols/treeland-virtual-output-manager-v1/treeland-virtual-output-manager-v1.c `、` tests/protocols/treeland-virtual-output-manager-v1/treeland-virtual-output-manager-v1.h `、` tests/protocols/treeland-wallpaper-color-v1/CMakeLists.txt `、` tests/protocols/treeland-wallpaper-color-v1/README.md `、` tests/protocols/treeland-wallpaper-color-v1/setup.cpp `、` tests/protocols/treeland-wallpaper-color-v1/treeland-wallpaper-color-v1.c `、` tests/protocols/treeland-wallpaper-color-v1/treeland-wallpaper-color-v1.h `、` tests/protocols/treeland-wallpaper-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-wallpaper-desktop-v1/README.md `、` tests/protocols/treeland-wallpaper-desktop-v1/setup.cpp `、` tests/protocols/treeland-wallpaper-desktop-v1/treeland-wallpaper-desktop-v1.c `、` tests/protocols/treeland-wallpaper-desktop-v1/treeland-wallpaper-desktop-v1.h `、` tests/protocols/treeland-wallpaper-manager-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-wallpaper-manager-unstable-v1/README.md `、` tests/protocols/treeland-wallpaper-manager-unstable-v1/setup.cpp `、` tests/protocols/treeland-wallpaper-manager-unstable-v1/treeland-wallpaper-manager-unstable-v1.c `、` tests/protocols/treeland-wallpaper-manager-unstable-v1/treeland-wallpaper-manager-unstable-v1.h `、` tests/protocols/treeland-wallpaper-shell-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-wallpaper-shell-unstable-v1/README.md `、` tests/protocols/treeland-wallpaper-shell-unstable-v1/setup.cpp `、` tests/protocols/treeland-wallpaper-shell-unstable-v1/treeland-wallpaper-shell-unstable-v1.c `、` tests/protocols/treeland-wallpaper-shell-unstable-v1/treeland-wallpaper-shell-unstable-v1.h `、` tests/protocols/treeland-window-management-desktop-v1/CMakeLists.txt `、` tests/protocols/treeland-window-management-desktop-v1/setup.cpp `、` tests/protocols/treeland-window-management-desktop-v1/treeland-window-management-desktop-v1.c `、` tests/protocols/treeland-window-management-desktop-v1/treeland-window-management-desktop-v1.h `、` tests/protocols/treeland-window-management-v1/CMakeLists.txt `、` tests/protocols/treeland-window-management-v1/README.md `、` tests/protocols/treeland-window-management-v1/setup.cpp `、` tests/protocols/treeland-window-management-v1/treeland-window-management-v1.c `、` tests/protocols/treeland-window-management-v1/treeland-window-management-v1.h `、` tests/protocols/treeland-wine-window-management-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-wine-window-management-unstable-v1/README.md `、` tests/protocols/treeland-wine-window-management-unstable-v1/setup.cpp `、` tests/protocols/treeland-wine-window-management-unstable-v1/treeland-wine-window-management-unstable-v1.c `、` tests/protocols/treeland-wine-window-management-unstable-v1/treeland-wine-window-management-unstable-v1.h `、` tests/protocols/treeland-wine-window-state-unstable-v1/CMakeLists.txt `、` tests/protocols/treeland-wine-window-state-unstable-v1/README.md `、` tests/protocols/treeland-wine-window-state-unstable-v1/setup.cpp `、` tests/protocols/treeland-wine-window-state-unstable-v1/treeland-wine-window-state-unstable-v1.c `、` tests/protocols/treeland-wine-window-state-unstable-v1/treeland-wine-window-state-unstable-v1.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` cf2dc0a911759ef9cc94fd9d8d81c76f4ccb4769 ` 和原目标 ` 7809ec68cab35eed59341b5a0d8286589cde22ef ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 38bf63ee2a56c08d0b852f54337c63131f8c6064 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-378"></a>
### 378. N7 / ` fix: extract protocol interface versions into static constexpr InterfaceVersion `

- 本仓内容路径：` waylib/src/server/protocols/private/wtextinputv1.cpp `、` waylib/src/server/protocols/private/wtextinputv1_p.h `、` waylib/src/server/protocols/private/wtextinputv2.cpp `、` waylib/src/server/protocols/private/wtextinputv2_p.h `、` waylib/src/server/protocols/wcursorshapemanagerv1.cpp `、` waylib/src/server/protocols/wcursorshapemanagerv1.h `、` waylib/src/server/protocols/wextforeigntoplevellistv1.cpp `、` waylib/src/server/protocols/wextforeigntoplevellistv1.h `、` waylib/src/server/protocols/wlayershell.cpp `、` waylib/src/server/protocols/wlayershell.h `、` waylib/src/server/protocols/wxdgdialogmanagerv1.cpp `、` waylib/src/server/protocols/wxdgdialogmanagerv1.h `、` waylib/src/server/protocols/wxdgtopleveltagmanager.cpp `、` waylib/src/server/protocols/wxdgtopleveltagmanager.h `。
- 实际改变：` waylib/src/server/protocols/private/wtextinputv1.cpp `、` waylib/src/server/protocols/private/wtextinputv1_p.h `、` waylib/src/server/protocols/private/wtextinputv2.cpp `、` waylib/src/server/protocols/private/wtextinputv2_p.h `、` waylib/src/server/protocols/wcursorshapemanagerv1.cpp `、` waylib/src/server/protocols/wcursorshapemanagerv1.h `、` waylib/src/server/protocols/wextforeigntoplevellistv1.cpp `、` waylib/src/server/protocols/wextforeigntoplevellistv1.h `、` waylib/src/server/protocols/wlayershell.cpp `、` waylib/src/server/protocols/wlayershell.h `、` waylib/src/server/protocols/wxdgdialogmanagerv1.cpp `、` waylib/src/server/protocols/wxdgdialogmanagerv1.h `、` waylib/src/server/protocols/wxdgtopleveltagmanager.cpp `、` waylib/src/server/protocols/wxdgtopleveltagmanager.h `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 98c1a0c9347f4f3af593692261bbd8150ec85f2f ` 和原目标 ` 7bb39c5721565690b7d77745a42b91f1723dc54b ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 7365a7e8d9670ba620c6c32ca90222086ae28048 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-379"></a>
### 379. N7 / ` feat(multi-output): forward client fullscreen output to surface handler `

- 本仓内容路径：` waylib/src/server/kernel/wtoplevelsurface.h `、` waylib/src/server/protocols/wxdgtoplevelsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.cpp `。
- 实际改变：` waylib/src/server/kernel/wtoplevelsurface.h `、` waylib/src/server/protocols/wxdgtoplevelsurface.cpp `、` waylib/src/server/protocols/wxwaylandsurface.cpp `。
- 排除的来源路径：` src/modules/foreign-toplevel/foreigntoplevelmanagerv1.cpp `、` src/surface/surfacewrapper.cpp `、` src/surface/surfacewrapper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 12d4cff2dc6a81c6b891812d55b1a98378720d43 ` 和原目标 ` 312ab98c1f9c28c6046e6c3c56466fffb41f47f2 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 569e4c863f8996b68b7f0209638b60e113ff12e8 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-380"></a>
### 380. N7 / ` fix(surface): set maximized on initial surface commit `

- 本仓内容路径：` waylib/src/server/qtquick/wxdgtoplevelsurfaceitem.cpp `。
- 实际改变：` waylib/src/server/qtquick/wxdgtoplevelsurfaceitem.cpp `。
- 排除的来源路径：` src/core/shellhandler.cpp `、` src/surface/surfacewrapper.cpp `、` src/surface/surfacewrapper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` f2ebdf403cef739166a5aacc7324a24d3662176b ` 和原目标 ` 566a4727ecd7590d054bdde46ddb71acc55cdc96 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 0cf9ae3c48e4c18be22f895ba4fb44e12f67c5a6 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-381"></a>
### 381. N7 / ` fix: avoid invalid pointer constraint warp `

- 本仓内容路径：` waylib/src/server/kernel/wcursor.cpp `。
- 实际改变：` waylib/src/server/kernel/wcursor.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 9a36a9924ef6b74d944accd17e149ec015ef862d ` 和原目标 ` a523bd2505b84fa5238b2b041320c6157ba265d8 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 454bc766e594dbbce4d6fb297645ec3b3558b8d9 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-382"></a>
### 382. N7 / ` feat: support wp_single_pixel_buffer_manager_v1 protocol `

- 本仓内容路径：` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `。
- 实际改变：` waylib/src/server/kernel/wlr_all.h `、` waylib/src/server/kernel/wlr_fwd.h `。
- 排除的来源路径：` src/seat/helper.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 00f0a3572f081baab08ab21db8b018c4f0feec49 ` 和原目标 ` 70aa2211dc13db005e115359e918810e548541f7 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 927a692d2ed71014e924f320a075cc0f323d37e7 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-383"></a>
### 383. N7 / ` fix(xwayland): acknowledge client configure requests `

- 本仓内容路径：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 实际改变：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 5a69d2fe71dedb6f2a13ad9cf3d3dd593613623b ` 和原目标 ` abd05da0bed28aec18c77a784a854f79a66d0ff7 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` d7c37307ae4ffee0b3d3654b8fe82304430c6b16 `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-384"></a>
### 384. N7 / ` fix(xwayland): handle size hint updates `

- 本仓内容路径：` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/tests/unit_tests/test_native_handles/main.cpp `。
- 实际改变：` waylib/src/server/protocols/wxwaylandsurface.cpp `、` waylib/tests/unit_tests/test_native_handles/main.cpp `。
- 排除的来源路径：无。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 90f6045bf432515698e9f5324b7e5fcf8a375331 ` 和原目标 ` ea079e2c68ef826f9c41c24d04f87f1f93d3a634 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 54575de7c248bd8052673002d8bcac70d69bc26c `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-385"></a>
### 385. N7 / ` feat(keyboard-shortcuts-inhibit): implement zwp_keyboard_shortcuts_inhibit_v1 server `

- 本仓内容路径：` waylib/src/server/kernel/wlr_all.h `。
- 实际改变：` waylib/src/server/kernel/wlr_all.h `。
- 排除的来源路径：` src/common/treelandlogging.cpp `、` src/common/treelandlogging.h `、` src/modules/CMakeLists.txt `、` src/modules/keyboard-shortcuts-inhibit/CMakeLists.txt `、` src/modules/keyboard-shortcuts-inhibit/keyboardshortcutsinhibitmanager.cpp `、` src/modules/keyboard-shortcuts-inhibit/keyboardshortcutsinhibitmanager.h `、` src/seat/helper.cpp `、` src/seat/helper.h `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` 593c48420d29f84f8cb320ea34dbf5ea67cb1abf ` 和原目标 ` 123c60108ef98f8f6a240cdbdbec5513538a3011 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 8a2ed96d1c61331af681ee2fb8540c2ab49d099d `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

<a id="entry-386"></a>
### 386. N7 / ` fix(xwayland): honor client resize configure requests `

- 本仓内容路径：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 实际改变：` waylib/src/server/qtquick/wxwaylandsurfaceitem.cpp `。
- 排除的来源路径：` src/surface/surfacewrapper.cpp `。
- 依赖 ` 3rdparty/wlroots `：unchanged；` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a ` → ` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `。
  原证据引用：` eace3155cdc96d6bea3b708255e27f3b28499078 ` → ` eace3155cdc96d6bea3b708255e27f3b28499078 `。
  当时 URL：` R / wlroots.git `；这里只记录历史，不修改当前配置。
- lane 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-evidence.json`；以来源 ` a610119f49b547467a8871c6853ed1c04932d198 ` 和原目标 ` eadc4da0c975dbb65489bd990b48524b23489cc5 ` 查询。
- 同一 Treeland 来源的 P / DeckShell 目标：` 8deb95382d4e45d5e7f2132ea3a223498ce7df6f `；跨仓定位 ` doc/treeland-sync/20260909_treeland_0_8_14_to_0_9_1_local_sync/summary.md `，不是本仓相对链接。

## 独立 R 的依赖内容

以下源码属于独立 R，不属于 C 的普通 wlroots/ 包装层。C 的 gitlink 更新在对应条目单列；R 不新增独立记录目录。

### R 来源 ` 896a8953e3695577e05e9e93d10530920dc7d6d9 `

- R 目标：` 6ce79949714fa802bcdebec733f8f03f99583a62 `；action=applied。
- 原 R 目标：` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
- R 内容路径：` types/seat/wlr_seat_pointer.c `、` types/xdg_shell/wlr_xdg_popup.c `、` xwayland/xwm.c `。
- 关联 C：` 56a2765a569517f8f19b732e5bc1a75a65c476b5 `；节点 N3。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/wlroots-evidence.json`。

### R 来源 ` 3d1a458a7ee298ba190fd0b73b0418dd331d27bf `

- R 目标：` 1664601036f4712f93212c567b8d56825c086285 `；action=applied。
- 原 R 目标：` 4507a6f414191bcfc150a966ba251c89f864663f `。
- R 内容路径：` include/wlr/types/wlr_data_device.h `、` types/data_device/wlr_data_source.c `。
- 关联 C：` 41bdc82765653b610ae06c25549d419124faf509 `；节点 N4。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/wlroots-evidence.json`。

### R 来源 ` b4d7bff91684db691da410dc4c49a3a4936044fa `

- R 目标：` fede1a13c0f2c566a5865fbdc40d97cfb63b6785 `；action=applied。
- 原 R 目标：` 6459c7dba7129609610319dfaaaa7b83c6b8a830 `。
- R 内容路径：` include/wlr/render/vulkan.h `、` render/vulkan/renderer.c `、` wlroots.syms `。
- 关联 C：` 8d64ef27ffd82c64501e79ca0ce5058594582ceb `；节点 N5。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/wlroots-evidence.json`。

### R 来源 ` 6ea349ac28b93b61ca3f9223ec021344141d6fce `

- R 目标：` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf `；action=applied。
- 原 R 目标：` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 5d193f6dccab6ad38890d453710c38dc69f53c0b `；节点 N5。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/wlroots-evidence.json`。

### R 来源 ` 9582881ddc2e71c73f01eb1f8f5efd0b87a8b107 `

- R 目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `；action=adapted。
- 原 R 目标：` c254362a1f79c88d21c773e22373ebe538194169 `。
- R 内容路径：` types/buffer/buffer.c `。
- 关联 C：` 9e58c1f7a8e4af110340e8ada6d24398d2f90c1a `；节点 N5。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/wlroots-evidence.json`。
- 原 R 说明：` 保留来源原子缓冲区计数逻辑，在同一来源拥有的 buffer.c 补充完整前置声明以满足原生 Meson -Wmissing-prototypes/-Werror；不关闭诊断、不改变计数及生命周期行为。 `。
### ` types/buffer/buffer.c ` / modified

- 原审核理由：` 保留来源原子缓冲区计数逻辑，在同一来源拥有的 buffer.c 补充完整前置声明以满足原生 Meson -Wmissing-prototypes/-Werror；不关闭诊断、不改变计数及生命周期行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/adaptations/9582881ddc2e71c73f01eb1f8f5efd0b87a8b107/wlroots-0-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/buffer/buffer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 0333a31456c7f90708c7f482939e23d939283b45 ` → ` 9582881ddc2e71c73f01eb1f8f5efd0b87a8b107 `。
- 原目标增量端点：` 8a43866bb3d2aec2b57876cb6020dac8c31c7503 ` → ` c254362a1f79c88d21c773e22373ebe538194169 `。
- 本次目标：` d29bb3573ac2d4a2d2130ad2e4a3eaba777a7adf ` → ` 1957b488f87b8fff65be72b4898f2fe53bb107d0 `。
- 目标文件项（mode/type/blob）：` 100644 blob d56255b0d8216ce59c13985d74832d138a2b9072 ` → ` 100644 blob 37087f852d6394069e4e82d1f724d55442efa633 `。
- 来源文件项 ` 3rdparty/wlroots/types/buffer/buffer.c `：` 100644 blob d56255b0d8216ce59c13985d74832d138a2b9072 ` → ` 100644 blob 4e4dd9d30b1d1ac4a0f302483160398c07ea3ae2 `。

两侧零上下文增量的文本对照（保留 hunk 位置；尾空格/Tab 显示为 ␠/⇥；不是可直接应用的纯适配补丁）：

```diff
--- 来源的本次增量
+++ 本仓的本次增量
@@ -1,11 +1,14 @@
 @@ -3,0 +4 @@
 +#include <stdatomic.h>
-@@ -7,0 +9,2 @@
+@@ -7,0 +9,5 @@
 +static _Atomic size_t buffer_count;
 +
-@@ -24,0 +28 @@ void wlr_buffer_init(struct wlr_buffer *buffer,
++/** 返回尚未结束生命周期的原生缓冲区数量。 */
++size_t waylib_buffer_get_count(void);
++
+@@ -24,0 +31 @@ void wlr_buffer_init(struct wlr_buffer *buffer,
 +	atomic_fetch_add_explicit(&buffer_count, 1, memory_order_relaxed);
-@@ -32,0 +37,6 @@ void wlr_buffer_finish(struct wlr_buffer *buffer) {
+@@ -32,0 +40,6 @@ void wlr_buffer_finish(struct wlr_buffer *buffer) {
 +	size_t previous = atomic_fetch_sub_explicit(&buffer_count, 1, memory_order_relaxed);
 +	assert(previous > 0);
 +}
```



### R 来源 ` 1921954d28e618fc3496d88d32b4063fbb56563e `

- R 目标：` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `；action=adapted。
- 原 R 目标：` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- R 内容路径：` .builds/archlinux.yml `、` .gitlab-ci.yml `、` backend/backend.c `、` backend/drm/drm.c `、` backend/libinput/events.c `、` backend/libinput/keyboard.c `、` backend/libinput/meson.build `、` backend/libinput/pointer.c `、` backend/libinput/switch.c `、` backend/libinput/tablet_pad.c `、` backend/libinput/tablet_tool.c `、` backend/session/session.c `、` include/backend/libinput.h `、` include/render/vulkan.h `、` include/types/wlr_output.h `、` include/wlr/render/vulkan.h `、` include/wlr/types/wlr_data_device.h `、` include/wlr/types/wlr_drm_lease_v1.h `、` include/wlr/types/wlr_switch.h `、` include/xwayland/xwm.h `、` meson.build `、` render/allocator/shm.c `、` render/allocator/udmabuf.c `、` render/egl.c `、` render/pass.c `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `、` tinywl/Makefile `、` types/buffer/buffer.c `、` types/data_device/wlr_data_source.c `、` types/ext_image_capture_source_v1/output.c `、` types/output/cursor.c `、` types/output/output.c `、` types/scene/surface.c `、` types/seat/wlr_seat_pointer.c `、` types/wlr_cursor.c `、` types/wlr_drm_lease_v1.c `、` types/wlr_linux_drm_syncobj_v1.c `、` types/wlr_transient_seat_v1.c `、` types/wlr_virtual_pointer_v1.c `、` types/xdg_shell/wlr_xdg_popup.c `、` util/box.c `、` wlroots.syms `、` xcursor/xcursor.c `、` xwayland/selection/outgoing.c `、` xwayland/xwayland.c `、` xwayland/xwm.c `。
- 关联 C：` bda29d68784ae59019163cebca299ebcbf32d8bf `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。
- 原 R 说明：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
### ` .builds/archlinux.yml ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-0-proof.json`。
- 来源路径：` 3rdparty/wlroots/.builds/archlinux.yml `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob fae04ab31ca78906df72f6f6dfc7bfd93d4197f3 ` → ` 100644 blob 8457ed58599871c2d972cfa0f5d4e0e98b27ba6d `。
- 来源文件项 ` 3rdparty/wlroots/.builds/archlinux.yml `：` 100644 blob fae04ab31ca78906df72f6f6dfc7bfd93d4197f3 ` → ` 100644 blob 8457ed58599871c2d972cfa0f5d4e0e98b27ba6d `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` .gitlab-ci.yml ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-1-proof.json`。
- 来源路径：` 3rdparty/wlroots/.gitlab-ci.yml `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 3b02ef16f492ab4e64096e597db74671d5ed2255 ` → ` 100644 blob e02463a9c9834d0a9ed8aa5653a591ce71702e7d `。
- 来源文件项 ` 3rdparty/wlroots/.gitlab-ci.yml `：` 100644 blob 3b02ef16f492ab4e64096e597db74671d5ed2255 ` → ` 100644 blob e02463a9c9834d0a9ed8aa5653a591ce71702e7d `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/backend.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-2-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/backend.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 3d84aa636fc6d70d5f129a50e6d1cc65fed9c7e5 ` → ` 100644 blob a130d9045a402fb3bff7c73e685913b04aa2757e `。
- 来源文件项 ` 3rdparty/wlroots/backend/backend.c `：` 100644 blob 3d84aa636fc6d70d5f129a50e6d1cc65fed9c7e5 ` → ` 100644 blob a130d9045a402fb3bff7c73e685913b04aa2757e `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/drm/drm.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-3-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/drm/drm.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 054c24a4bf2022667589aea2d5994a02d2bf055c ` → ` 100644 blob e9e4c6db202ee7f665741b2b64c14541eed3cb5a `。
- 来源文件项 ` 3rdparty/wlroots/backend/drm/drm.c `：` 100644 blob 054c24a4bf2022667589aea2d5994a02d2bf055c ` → ` 100644 blob e9e4c6db202ee7f665741b2b64c14541eed3cb5a `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/events.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-4-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/events.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 9be5def87e4be1b596ce2075967af5483210e9bd ` → ` 100644 blob 6cfe34e0832585572a9242b42035bfd86ca6e980 `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/events.c `：` 100644 blob 9be5def87e4be1b596ce2075967af5483210e9bd ` → ` 100644 blob 6cfe34e0832585572a9242b42035bfd86ca6e980 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/keyboard.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-5-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/keyboard.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob a99461040f097db6ecc8c4be5ba10744631de04c ` → ` 100644 blob 7518453e607dfd913bc116739b6fa56a54df61f8 `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/keyboard.c `：` 100644 blob a99461040f097db6ecc8c4be5ba10744631de04c ` → ` 100644 blob 7518453e607dfd913bc116739b6fa56a54df61f8 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/meson.build ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-6-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/meson.build `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 091b0e0eb00b921f1b407a5d64d9cb1bddd7f9ce ` → ` 100644 blob c244eb77a529c337cb99fad28e47981727d45a41 `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/meson.build `：` 100644 blob 091b0e0eb00b921f1b407a5d64d9cb1bddd7f9ce ` → ` 100644 blob c244eb77a529c337cb99fad28e47981727d45a41 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/pointer.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-7-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/pointer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob d09164a71950d51263261052fe1d733e5981af47 ` → ` 100644 blob 9b99967807a2fd4c8290cf539a71e46ecb34a89f `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/pointer.c `：` 100644 blob d09164a71950d51263261052fe1d733e5981af47 ` → ` 100644 blob 9b99967807a2fd4c8290cf539a71e46ecb34a89f `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/switch.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-8-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/switch.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 2055d88f511d94a1f2d91acf46a1cd3f90145cc6 ` → ` 100644 blob abeec86d7ab3b9d0e4cb101f413666338be842fc `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/switch.c `：` 100644 blob 2055d88f511d94a1f2d91acf46a1cd3f90145cc6 ` → ` 100644 blob abeec86d7ab3b9d0e4cb101f413666338be842fc `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/tablet_pad.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-9-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/tablet_pad.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 9d090198ad703360a20c3cfdbd69872d63d9c45d ` → ` 100644 blob 98b3e4f4b3490a7f7f6cf9545a76f4551167cce7 `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/tablet_pad.c `：` 100644 blob 9d090198ad703360a20c3cfdbd69872d63d9c45d ` → ` 100644 blob 98b3e4f4b3490a7f7f6cf9545a76f4551167cce7 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/libinput/tablet_tool.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-10-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/libinput/tablet_tool.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 86d2353ccde702e8ae5be4d4116411344ee6d7a7 ` → ` 100644 blob eec697c49383863bd99a2bde08c7f7270fcaa3cb `。
- 来源文件项 ` 3rdparty/wlroots/backend/libinput/tablet_tool.c `：` 100644 blob 86d2353ccde702e8ae5be4d4116411344ee6d7a7 ` → ` 100644 blob eec697c49383863bd99a2bde08c7f7270fcaa3cb `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` backend/session/session.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-11-proof.json`。
- 来源路径：` 3rdparty/wlroots/backend/session/session.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 9a36dd9534519267f843dfbc79dfcf10bdc66760 ` → ` 100644 blob dcf07c7086ad6942dfb5f9d0b346952a55814cb0 `。
- 来源文件项 ` 3rdparty/wlroots/backend/session/session.c `：` 100644 blob 9a36dd9534519267f843dfbc79dfcf10bdc66760 ` → ` 100644 blob dcf07c7086ad6942dfb5f9d0b346952a55814cb0 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/backend/libinput.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-12-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/backend/libinput.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob e7123884e0b4feb9679673a105936659b2bdb54c ` → ` 100644 blob 874e9aa1f76a25881aa96ab0160d33f1d4b2893b `。
- 来源文件项 ` 3rdparty/wlroots/include/backend/libinput.h `：` 100644 blob e7123884e0b4feb9679673a105936659b2bdb54c ` → ` 100644 blob 874e9aa1f76a25881aa96ab0160d33f1d4b2893b `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/render/vulkan.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-13-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/render/vulkan.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 5bcf001f40a1e57c6600b7b56019d9fb3e9023aa ` → ` 100644 blob abeb11cc52a301e1c87038f3f3d48c8b52cd8912 `。
- 来源文件项 ` 3rdparty/wlroots/include/render/vulkan.h `：` 100644 blob 5bcf001f40a1e57c6600b7b56019d9fb3e9023aa ` → ` 100644 blob abeb11cc52a301e1c87038f3f3d48c8b52cd8912 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/types/wlr_output.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-14-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/types/wlr_output.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob b0acac4e8cbcd947733d0b32312b5a05dab3ad73 ` → ` 100644 blob 2dc979c66c70674193d57d681bef19e687eac28f `。
- 来源文件项 ` 3rdparty/wlroots/include/types/wlr_output.h `：` 100644 blob b0acac4e8cbcd947733d0b32312b5a05dab3ad73 ` → ` 100644 blob 2dc979c66c70674193d57d681bef19e687eac28f `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/wlr/render/vulkan.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-15-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/wlr/render/vulkan.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 5ee84e05fb0b4e2b83e29bf52f4360139f34e442 ` → ` 100644 blob 50f8c558d3675c69fab120d9664e1d03c94faa0c `。
- 来源文件项 ` 3rdparty/wlroots/include/wlr/render/vulkan.h `：` 100644 blob 5ee84e05fb0b4e2b83e29bf52f4360139f34e442 ` → ` 100644 blob 50f8c558d3675c69fab120d9664e1d03c94faa0c `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/wlr/types/wlr_data_device.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-16-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 90e1ae626af7f5edb5b299715f7b99f93b6dfd8e ` → ` 100644 blob c36b1a5cb6468ec3684b9e3753e80a4b2a9280d6 `。
- 来源文件项 ` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `：` 100644 blob 90e1ae626af7f5edb5b299715f7b99f93b6dfd8e ` → ` 100644 blob c36b1a5cb6468ec3684b9e3753e80a4b2a9280d6 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/wlr/types/wlr_drm_lease_v1.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-17-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_drm_lease_v1.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob b29a5f6dc23c463c9528bad5a3279f4f92b85805 ` → ` 100644 blob 752f6efa79b5afa48f5cac7f555de87437a61fad `。
- 来源文件项 ` 3rdparty/wlroots/include/wlr/types/wlr_drm_lease_v1.h `：` 100644 blob b29a5f6dc23c463c9528bad5a3279f4f92b85805 ` → ` 100644 blob 752f6efa79b5afa48f5cac7f555de87437a61fad `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/wlr/types/wlr_switch.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-18-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_switch.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 2b9e91266e55511e5ffb9b15be8c12965593e588 ` → ` 100644 blob 641df19910510753cd1d2f1f345e02060058b119 `。
- 来源文件项 ` 3rdparty/wlroots/include/wlr/types/wlr_switch.h `：` 100644 blob 2b9e91266e55511e5ffb9b15be8c12965593e588 ` → ` 100644 blob 641df19910510753cd1d2f1f345e02060058b119 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/xwayland/xwm.h ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-19-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/xwayland/xwm.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 6dafd652916bad3c7e89a3e19cea84291691c400 ` → ` 100644 blob 799cebc476e5609bf6e20dcebee05cc3a55040ba `。
- 来源文件项 ` 3rdparty/wlroots/include/xwayland/xwm.h `：` 100644 blob 6dafd652916bad3c7e89a3e19cea84291691c400 ` → ` 100644 blob 799cebc476e5609bf6e20dcebee05cc3a55040ba `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` meson.build ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-20-proof.json`。
- 来源路径：` 3rdparty/wlroots/meson.build `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 7aea9f0df29f63694c2048948e4326869386b90f ` → ` 100644 blob fc7c179a6cf298325dfcd21032325714198ae924 `。
- 来源文件项 ` 3rdparty/wlroots/meson.build `：` 100644 blob 7aea9f0df29f63694c2048948e4326869386b90f ` → ` 100644 blob fc7c179a6cf298325dfcd21032325714198ae924 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/allocator/shm.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-21-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/allocator/shm.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob b5be7d014254ba680cbae2adac50f0e9f8d86c3f ` → ` 100644 blob 2622f99aa74cab6cb7fb55a127efe57ce2a37ca6 `。
- 来源文件项 ` 3rdparty/wlroots/render/allocator/shm.c `：` 100644 blob b5be7d014254ba680cbae2adac50f0e9f8d86c3f ` → ` 100644 blob 2622f99aa74cab6cb7fb55a127efe57ce2a37ca6 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/allocator/udmabuf.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-22-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/allocator/udmabuf.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 8a7109aa5f7c230cf71825f90c0939846f541b18 ` → ` 100644 blob e0b01b70a20fb70db9f662a81806ac1cdfacb82c `。
- 来源文件项 ` 3rdparty/wlroots/render/allocator/udmabuf.c `：` 100644 blob 8a7109aa5f7c230cf71825f90c0939846f541b18 ` → ` 100644 blob e0b01b70a20fb70db9f662a81806ac1cdfacb82c `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/egl.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-23-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/egl.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 6f3e9c8ca8621595e1fe92462b4337746a7a23cc ` → ` 100644 blob 07d3a1425fcd1e9df5471db165ae676f61351a76 `。
- 来源文件项 ` 3rdparty/wlroots/render/egl.c `：` 100644 blob 6f3e9c8ca8621595e1fe92462b4337746a7a23cc ` → ` 100644 blob 07d3a1425fcd1e9df5471db165ae676f61351a76 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/pass.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-24-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/pass.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 23bdf96dde04f250086ac88b081636e3fb977b10 ` → ` 100644 blob 902228273c3159c3069c9c36abc18e6fcf96511b `。
- 来源文件项 ` 3rdparty/wlroots/render/pass.c `：` 100644 blob 23bdf96dde04f250086ac88b081636e3fb977b10 ` → ` 100644 blob 902228273c3159c3069c9c36abc18e6fcf96511b `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/vulkan/pass.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-25-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/vulkan/pass.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 6bb6392eb99c3d690c28aec1c4a9c74a4c5638da ` → ` 100644 blob 3f662b203daa0fcb83efe175305ce4945a806c83 `。
- 来源文件项 ` 3rdparty/wlroots/render/vulkan/pass.c `：` 100644 blob 6bb6392eb99c3d690c28aec1c4a9c74a4c5638da ` → ` 100644 blob 3f662b203daa0fcb83efe175305ce4945a806c83 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/vulkan/renderer.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-26-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 802642f3c844082020cd27d42503334d48414e9a ` → ` 100644 blob b2feca013bc6612febd79d1f9e7ed6cfece29317 `。
- 来源文件项 ` 3rdparty/wlroots/render/vulkan/renderer.c `：` 100644 blob 802642f3c844082020cd27d42503334d48414e9a ` → ` 100644 blob b2feca013bc6612febd79d1f9e7ed6cfece29317 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` tinywl/Makefile ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-27-proof.json`。
- 来源路径：` 3rdparty/wlroots/tinywl/Makefile `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 76c33bb31a19f6b8a91466a50bdbe55df02f9efd ` → ` 100644 blob 70dc671cab135e149a36389b1cd80fc710a0e877 `。
- 来源文件项 ` 3rdparty/wlroots/tinywl/Makefile `：` 100644 blob 76c33bb31a19f6b8a91466a50bdbe55df02f9efd ` → ` 100644 blob 70dc671cab135e149a36389b1cd80fc710a0e877 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/buffer/buffer.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-28-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/buffer/buffer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 37087f852d6394069e4e82d1f724d55442efa633 ` → ` 100644 blob d56255b0d8216ce59c13985d74832d138a2b9072 `。
- 来源文件项 ` 3rdparty/wlroots/types/buffer/buffer.c `：` 100644 blob 4e4dd9d30b1d1ac4a0f302483160398c07ea3ae2 ` → ` 100644 blob d56255b0d8216ce59c13985d74832d138a2b9072 `。

两侧零上下文增量的文本对照（保留 hunk 位置；尾空格/Tab 显示为 ␠/⇥；不是可直接应用的纯适配补丁）：

```diff
--- 来源的本次增量
+++ 本仓的本次增量
@@ -1,11 +1,14 @@
 @@ -4 +3,0 @@
 -#include <stdatomic.h>
-@@ -9,2 +7,0 @@
+@@ -9,5 +7,0 @@
 -static _Atomic size_t buffer_count;
 -
-@@ -28 +24,0 @@ void wlr_buffer_init(struct wlr_buffer *buffer,
+-/** 返回尚未结束生命周期的原生缓冲区数量。 */
+-size_t waylib_buffer_get_count(void);
+-
+@@ -31 +24,0 @@ void wlr_buffer_init(struct wlr_buffer *buffer,
 -	atomic_fetch_add_explicit(&buffer_count, 1, memory_order_relaxed);
-@@ -37,6 +32,0 @@ void wlr_buffer_finish(struct wlr_buffer *buffer) {
+@@ -40,6 +32,0 @@ void wlr_buffer_finish(struct wlr_buffer *buffer) {
 -	size_t previous = atomic_fetch_sub_explicit(&buffer_count, 1, memory_order_relaxed);
 -	assert(previous > 0);
 -}
```


### ` types/data_device/wlr_data_source.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-29-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/data_device/wlr_data_source.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 6e534f5c3bbb0e2a2c09f4f15a1375d51cec7d36 ` → ` 100644 blob 64b73c56e10338380f03d46bdb779505d175b64e `。
- 来源文件项 ` 3rdparty/wlroots/types/data_device/wlr_data_source.c `：` 100644 blob 6e534f5c3bbb0e2a2c09f4f15a1375d51cec7d36 ` → ` 100644 blob 64b73c56e10338380f03d46bdb779505d175b64e `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/ext_image_capture_source_v1/output.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-30-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 66ba2cdca4631b9ee1690723eed768e7f35a9e40 ` → ` 100644 blob e5ef78f93eecc806bc315babe9823641aba462c6 `。
- 来源文件项 ` 3rdparty/wlroots/types/ext_image_capture_source_v1/output.c `：` 100644 blob 66ba2cdca4631b9ee1690723eed768e7f35a9e40 ` → ` 100644 blob e5ef78f93eecc806bc315babe9823641aba462c6 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/output/cursor.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-31-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/output/cursor.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 70647afb7cb499fa4dfab149b1fcdf46e85a36fc ` → ` 100644 blob 154b9112092ff4363b65205ee3e4353c1cd19fe8 `。
- 来源文件项 ` 3rdparty/wlroots/types/output/cursor.c `：` 100644 blob 70647afb7cb499fa4dfab149b1fcdf46e85a36fc ` → ` 100644 blob 154b9112092ff4363b65205ee3e4353c1cd19fe8 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/output/output.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-32-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/output/output.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob aa23845755754f4da6c6bba8bd9b0fd80d928a94 ` → ` 100644 blob a352a5e59e3e23fb8ca718a78056eeca8d0f4b26 `。
- 来源文件项 ` 3rdparty/wlroots/types/output/output.c `：` 100644 blob aa23845755754f4da6c6bba8bd9b0fd80d928a94 ` → ` 100644 blob a352a5e59e3e23fb8ca718a78056eeca8d0f4b26 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/scene/surface.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-33-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/scene/surface.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob f0651bc38cf26d19b80231bdb6f0315e69f2c03f ` → ` 100644 blob e5b3b0f7da358dacddb5aa1f3d954b03b54cbd3e `。
- 来源文件项 ` 3rdparty/wlroots/types/scene/surface.c `：` 100644 blob f0651bc38cf26d19b80231bdb6f0315e69f2c03f ` → ` 100644 blob e5b3b0f7da358dacddb5aa1f3d954b03b54cbd3e `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/seat/wlr_seat_pointer.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-34-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob d578d0a57e9d10adcbc05187f0d536ce8b234935 ` → ` 100644 blob 41729dcd9823e165962cd8df2479be1e9cb781dd `。
- 来源文件项 ` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `：` 100644 blob d578d0a57e9d10adcbc05187f0d536ce8b234935 ` → ` 100644 blob 41729dcd9823e165962cd8df2479be1e9cb781dd `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/wlr_cursor.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-35-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/wlr_cursor.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 407d30620f6d93530240fd62cdcda334b7acf4ed ` → ` 100644 blob 44b74e92690beb88523484201f02cc4a80b3294c `。
- 来源文件项 ` 3rdparty/wlroots/types/wlr_cursor.c `：` 100644 blob 407d30620f6d93530240fd62cdcda334b7acf4ed ` → ` 100644 blob 44b74e92690beb88523484201f02cc4a80b3294c `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/wlr_drm_lease_v1.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-36-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/wlr_drm_lease_v1.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 14846f21d0d464e485c8c03ff07b339001918d92 ` → ` 100644 blob c64bb08963ae1f0f36e3ee7e2297a30286163163 `。
- 来源文件项 ` 3rdparty/wlroots/types/wlr_drm_lease_v1.c `：` 100644 blob 14846f21d0d464e485c8c03ff07b339001918d92 ` → ` 100644 blob c64bb08963ae1f0f36e3ee7e2297a30286163163 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/wlr_linux_drm_syncobj_v1.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-37-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 988d44e01b6abc133bd3bea8c5513091af6393d3 ` → ` 100644 blob 7873a09c4c920b47dbf689afc615e0b1dc9bcfdf `。
- 来源文件项 ` 3rdparty/wlroots/types/wlr_linux_drm_syncobj_v1.c `：` 100644 blob 988d44e01b6abc133bd3bea8c5513091af6393d3 ` → ` 100644 blob 7873a09c4c920b47dbf689afc615e0b1dc9bcfdf `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/wlr_transient_seat_v1.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-38-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/wlr_transient_seat_v1.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob d99ee6edb8343a8880d1f0fee05d454787420d7a ` → ` 100644 blob af8f87ccf5316270623a0623972486aa18c0c2b1 `。
- 来源文件项 ` 3rdparty/wlroots/types/wlr_transient_seat_v1.c `：` 100644 blob d99ee6edb8343a8880d1f0fee05d454787420d7a ` → ` 100644 blob af8f87ccf5316270623a0623972486aa18c0c2b1 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/wlr_virtual_pointer_v1.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-39-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/wlr_virtual_pointer_v1.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob fed5790a9acf00b8302ff8af5b4280db4d4b6c8a ` → ` 100644 blob b867c8fb143f1b3f2bd0ebcf009ba5f7e1d2df78 `。
- 来源文件项 ` 3rdparty/wlroots/types/wlr_virtual_pointer_v1.c `：` 100644 blob fed5790a9acf00b8302ff8af5b4280db4d4b6c8a ` → ` 100644 blob b867c8fb143f1b3f2bd0ebcf009ba5f7e1d2df78 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/xdg_shell/wlr_xdg_popup.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-40-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 90d400725d5e6ade231f4a36d99ac5e08b153a4f ` → ` 100644 blob 25c07c8c55f61e525857232b3ea4e807a8224ef1 `。
- 来源文件项 ` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `：` 100644 blob 90d400725d5e6ade231f4a36d99ac5e08b153a4f ` → ` 100644 blob 25c07c8c55f61e525857232b3ea4e807a8224ef1 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` util/box.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-41-proof.json`。
- 来源路径：` 3rdparty/wlroots/util/box.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob aae09888ff4bac43394ceacab3043592245feb89 ` → ` 100644 blob 6a6becf33d1663232468a0c18c801c9305d66a24 `。
- 来源文件项 ` 3rdparty/wlroots/util/box.c `：` 100644 blob aae09888ff4bac43394ceacab3043592245feb89 ` → ` 100644 blob 6a6becf33d1663232468a0c18c801c9305d66a24 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` wlroots.syms ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-42-proof.json`。
- 来源路径：` 3rdparty/wlroots/wlroots.syms `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 4b65b12a12ec6b856fb854fb629edae0a48985cc ` → ` 100644 blob 7127121eeb8958435d075f422e601552f4d5ed97 `。
- 来源文件项 ` 3rdparty/wlroots/wlroots.syms `：` 100644 blob 4b65b12a12ec6b856fb854fb629edae0a48985cc ` → ` 100644 blob 7127121eeb8958435d075f422e601552f4d5ed97 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` xcursor/xcursor.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-43-proof.json`。
- 来源路径：` 3rdparty/wlroots/xcursor/xcursor.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 6627fb6cd71c0fcb47f41d85ae5398dbe6848996 ` → ` 100644 blob b5edb9de86f3cb4e4f3da15edd970a70d915df75 `。
- 来源文件项 ` 3rdparty/wlroots/xcursor/xcursor.c `：` 100644 blob 6627fb6cd71c0fcb47f41d85ae5398dbe6848996 ` → ` 100644 blob b5edb9de86f3cb4e4f3da15edd970a70d915df75 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` xwayland/selection/outgoing.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-44-proof.json`。
- 来源路径：` 3rdparty/wlroots/xwayland/selection/outgoing.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 6216abbb479425060954db9c6bd0741698c41ce3 ` → ` 100644 blob 795a4768b3076cb644e0ba3e0e4385399fd9c606 `。
- 来源文件项 ` 3rdparty/wlroots/xwayland/selection/outgoing.c `：` 100644 blob 6216abbb479425060954db9c6bd0741698c41ce3 ` → ` 100644 blob 795a4768b3076cb644e0ba3e0e4385399fd9c606 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` xwayland/xwayland.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-45-proof.json`。
- 来源路径：` 3rdparty/wlroots/xwayland/xwayland.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob 63af99c5131c6c2ecbc53892730cf4e8410f0483 ` → ` 100644 blob d3b2a6c84e8945525c3d196f45d0bae6c1e7ac46 `。
- 来源文件项 ` 3rdparty/wlroots/xwayland/xwayland.c `：` 100644 blob 63af99c5131c6c2ecbc53892730cf4e8410f0483 ` → ` 100644 blob d3b2a6c84e8945525c3d196f45d0bae6c1e7ac46 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` xwayland/xwm.c ` / modified

- 原审核理由：` 来源明确移除旧缓冲区计数实现，同步移除 N5 为该实现添加的前置声明；其他 R 文件保持来源投影，不保留已无定义的声明。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/1921954d28e618fc3496d88d32b4063fbb56563e/wlroots-46-proof.json`。
- 来源路径：` 3rdparty/wlroots/xwayland/xwm.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` a050947305cd232a992d4e70b4668b20bcaaff25 ` → ` 1921954d28e618fc3496d88d32b4063fbb56563e `。
- 原目标增量端点：` c254362a1f79c88d21c773e22373ebe538194169 ` → ` b3a60c40d941bd21ef4d089c8b6ddc26d7874752 `。
- 本次目标：` 1957b488f87b8fff65be72b4898f2fe53bb107d0 ` → ` 3e6a6dc4bdb24c6ca3b52616e8ba517de0155698 `。
- 目标文件项（mode/type/blob）：` 100644 blob e6e06d23522bb82e56886c8bf9221bd522a11bda ` → ` 100644 blob 8cd1d41ab5e21bd83433ef281bbb2a5207d1cdd3 `。
- 来源文件项 ` 3rdparty/wlroots/xwayland/xwm.c `：` 100644 blob e6e06d23522bb82e56886c8bf9221bd522a11bda ` → ` 100644 blob 8cd1d41ab5e21bd83433ef281bbb2a5207d1cdd3 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。


### R 来源 ` 8b6d1783cf48bc865d762701f97e376ce2449e50 `

- R 目标：` 5b9cb413878a474c55c8bfd1e1b1b6a6e0b1edb1 `；action=applied。
- 原 R 目标：` 1e91ceefe2c5b9b1a958f2af6f4ed0b1b0057af1 `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/ext_image_capture_source_v1/output.c `、` types/output/output.c `、` types/wlr_cursor.c `、` types/wlr_export_dmabuf_v1.c `、` types/wlr_screencopy_v1.c `。
- 关联 C：` 1465965ff43efd8ec6ecddbf7dbf50a996b8ad3e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2d47e5ed21e1b2c9cfa5ba80f4ca8ba1200e9f5c `

- R 目标：` b2e8f666caa11686be2cad95859782b6ccc4995f `；action=applied。
- 原 R 目标：` bfaf94c59e541af1df77d09cb1afc836242f731a `。
- R 内容路径：` types/output/output.c `。
- 关联 C：` 4d19d6bae4130df6bbcbc2908da78d12a4c347a8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b6b92729856e1cfb59a5f4abccfa73fea008852d `

- R 目标：` 0c090efabb309a32ac687298ee9b22040621dc02 `；action=applied。
- 原 R 目标：` 09737a7bf0368f7ed8940760495ae1f19d184aa4 `。
- R 内容路径：` include/wlr/types/wlr_keyboard.h `、` meson.build `、` types/wlr_keyboard.c `。
- 关联 C：` 01c2fc4420bdd6576060def42c58250e7958d1c3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 92cf9d3d54f20cbf7bc509a2413678e89f8a0f25 `

- R 目标：` 5581197237fa72ffa329fe2ff32d4b23e46b5d3f `；action=applied。
- 原 R 目标：` 58b0d7a583f78e4f0213411eb651f7235a273041 `。
- R 内容路径：` include/wlr/types/wlr_text_input_v3.h `、` types/wlr_text_input_v3.c `。
- 关联 C：` c95af3799d6189906ba41999a16c8fd0920020e1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` eec5773b46a1e5286ba8f6f85a4da40eba85580f `

- R 目标：` 5d15ce88108ddd9cf86834ee3e71eb3d6aea49b8 `；action=applied。
- 原 R 目标：` 0f7aeb749e0544156a89d3f029c0d41295c49f71 `。
- R 内容路径：` types/wlr_text_input_v3.c `。
- 关联 C：` c6c8b99d2e4b350c9c05a4a3d40af339750b26cc `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f1cbaab98b5d4568ebe244229931d5ae4665ea9d `

- R 目标：` fb0d654c9a446e0e08b8a24b15bfd1b81143ab09 `；action=applied。
- 原 R 目标：` ffc418d32d59d33973c1697000b92d6f0b051b31 `。
- R 内容路径：` backend/libinput/tablet_pad.c `、` backend/libinput/tablet_tool.c `。
- 关联 C：` d6ba89bf3e9b4d7e18e96d563a5e6f71f4719df1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 3b7e3f20e120dc85e9f08d0989075f17818334ef `

- R 目标：` 2e777e018fa7bbbc6bca97a7b70cc71fd8aa34d2 `；action=applied。
- 原 R 目标：` e318cb9a8f7ee6598cb15ac7b81786c57198c122 `。
- R 内容路径：` include/wlr/xwayland/xwayland.h `、` xwayland/xwm.c `。
- 关联 C：` 110e9183432076f513cfec931934b6bb5cf8540b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6ad1e1212a78210e7c6f8bec0476d40193852fde `

- R 目标：` edc0925e101f120af103ecc921c742a2a955a7f2 `；action=applied。
- 原 R 目标：` 8c49865b02b57831d2daa45f41b735c0cf17c8f1 `。
- R 内容路径：` types/wlr_cursor_shape_v1.c `。
- 关联 C：` ca7c10c62e923bd66fa707950b104e3ba20f5c52 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 22b4fe8e7a5d0eb9688d407442ec941c715b1546 `

- R 目标：` e2fbdbdde7cc6a5e12d27f7b1a5e8ce385ce7186 `；action=applied。
- 原 R 目标：` ebc1bdba4bdd0de8dd128fee9bd1e6b13913d000 `。
- R 内容路径：` protocol/meson.build `、` types/wlr_cursor_shape_v1.c `。
- 关联 C：` 561d3f245a9e27c4af84aca5d68cf3ad7ed38736 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8d1df35e6373636631bd0a46a1c89bd59763374e `

- R 目标：` be873f0583b098385bd67f728c7d1c9c845d178b `；action=applied。
- 原 R 目标：` 3f300635ae5f6e831217cca8a5fa95f36a0c3159 `。
- R 内容路径：` render/pass.c `。
- 关联 C：` 00f46e97b30b893ff466517f2f2c8447da7b9b76 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1419b581afd87ad0ae5df76757add34cb9a98bde `

- R 目标：` aa6efab090b5ee52334bce9bee328136fe3edf99 `；action=applied。
- 原 R 目标：` 45cbf2895b6db319e42463ec33d51fbd3cb019d4 `。
- R 内容路径：` include/wlr/types/wlr_xdg_shell.h `、` types/xdg_shell/wlr_xdg_shell.c `、` types/xdg_shell/wlr_xdg_toplevel.c `。
- 关联 C：` 2c7225a42cc4b03ad948bfd19b147d6fe6a5e8a0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8c6229f9c4eacae14accc02f0a941b0a03ca622b `

- R 目标：` 693c77a9773fd27decda302a45f847803146d5d8 `；action=applied。
- 原 R 目标：` 372239c86761c2082506ea9efc0c2fc0dac6f488 `。
- R 内容路径：` include/xwayland/xwm.h `、` xwayland/xwm.c `。
- 关联 C：` ff665e2661e43887d500cd36a7b2d55a9de0156c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e6793bd93ffc041083e31d408c3e3aced255d8bf `

- R 目标：` c1923e12b92bdf99fb422f736df1f3fe00b8273c `；action=applied。
- 原 R 目标：` 7ff2a3be09b13cee746d132f4f56eb5043d084a9 `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` d2bf4483461d3c4d703d831dd3c7ad6046ef70cc `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 54187ff9b725b409e4f6533415a32dd3c11c442e `

- R 目标：` ff860931f4d29720b0778585328767e1b529c2c9 `；action=applied。
- 原 R 目标：` d891dee20dd5f7e2e3a31d09cf336ec2961a0fbf `。
- R 内容路径：` types/wlr_idle_notify_v1.c `。
- 关联 C：` a29179450adea072d9a8cc8c5fe66f953fa64588 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b3c71df01083877ecf3200323ea551c192d8a898 `

- R 目标：` 766c1e1bc1ec49d0baaabf4e8d7407155abb935b `；action=applied。
- 原 R 目标：` c3f40c345dd851d4d326be825fcdb63ef9ec80be `。
- R 内容路径：` xwayland/meson.build `、` xwayland/xwayland.c `、` xwayland/xwm.c `。
- 关联 C：` d5e4250c5a73576a3ae05a72096b9b479cc052be `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 3697e0f99a06e24895ac96cf0ee3c7a54bf1608b `

- R 目标：` 5a8f297a382df017608997ff71f4ac670628faa5 `；action=applied。
- 原 R 目标：` b52d9a7347015ecddead6fea9c9a7cb7c73a30fb `。
- R 内容路径：` render/allocator/gbm.c `、` render/allocator/meson.build `。
- 关联 C：` 004fe8fffdfe15e81b7ffb36ed3dbb3005678361 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 30f621f3623fcdf8d3256886584286f4aaf08f3a `

- R 目标：` a81186d3d62ab8d731b28cb2343e073a3a51e0e4 `；action=applied。
- 原 R 目标：` 29dbc2a899728062e627dbfc08495bc6ddd2b257 `。
- R 内容路径：` render/swapchain.c `。
- 关联 C：` 693ff3574911b388917423f7a467acd3c48f1424 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a7e0d3626ecafd17cbfc9c19f5807cced5b7dbf3 `

- R 目标：` 277fc5b20bd4e274a9229f60a99d5bd95cc07d6d `；action=applied。
- 原 R 目标：` a76929aedccf5a27bf6ed0db6767c5627ed3ce9a `。
- R 内容路径：` include/wlr/types/wlr_ext_image_capture_source_v1.h `、` types/ext_image_capture_source_v1/foreign_toplevel.c `、` types/meson.build `。
- 关联 C：` 09513062f8da9891fd7e88f76c54e7669645d2b4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5912dc0f34fcecfdd5476656e3c34a26e74db765 `

- R 目标：` 2b773026bccae4f125ff869c361ac7f2565478ba `；action=applied。
- 原 R 目标：` daf5c21dd98f1f5f8099537e4ce7fbacad16e4d6 `。
- R 内容路径：` include/types/wlr_scene.h `、` include/wlr/types/wlr_ext_image_capture_source_v1.h `、` types/ext_image_capture_source_v1/scene.c `、` types/meson.build `、` types/scene/wlr_scene.c `。
- 关联 C：` 1353228b9af02f52385c7f40f449107da90a239e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 622b27271a424a1dc392ad665f0ddfca06263231 `

- R 目标：` 4ac8264958330d16ef5708a0150de37d55c22b68 `；action=applied。
- 原 R 目标：` ef807654761353497151608e9df1ff5bf402546f `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` cf0b326a402c77045cea41af7d9ee6e06c5f762d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 96bccf46d3653a46327e838e90d52d5ec96554f5 `

- R 目标：` bfbb5de9123876fd050cdb06248672bcef94cb63 `；action=applied。
- 原 R 目标：` ab6609c43614ffd22df99ccef95c7e6de7b14ffa `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 3773ca6d34e1c1674e0b8b470cdd94dd053940bb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5515da6732aefbe2a23826617dd834bf9a2a7134 `

- R 目标：` 561634104c3917ca87ab08f0ed88c853933543a3 `；action=applied。
- 原 R 目标：` 42e1c61b871e141898c56fea958f7648d1b8a9db `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/surface.c `、` types/scene/wlr_scene.c `。
- 关联 C：` 084bce3a18f534d251123ca94e3646899fb1c3a7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ea887de23d872cf160647f8320633fc361d9f067 `

- R 目标：` 8f79c69ec530001dcb1e6362f789643f24053eed `；action=applied。
- 原 R 目标：` 5cbbbf938451998d24977af1c2da192cdbb5a862 `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/surface.c `。
- 关联 C：` 9dc4d94f40d5894c5753daa82ecfba08d196785e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c96938ef3a78fc7d454eea5109cbde66d795ed6c `

- R 目标：` f7f6c61de25788aaa9bb3b0a1cda3f3c872a735d `；action=applied。
- 原 R 目标：` 05e22dd7964718b085c07d03caa610bce5b483f3 `。
- R 内容路径：` types/scene/surface.c `、` types/scene/wlr_scene.c `。
- 关联 C：` 302fcac63a7fb33cee62a4956f25793d51e760d2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 573e7aa6533edcbf765751bb3e2355eed15ba689 `

- R 目标：` 9554fac10b71391aee7516ee86b05d9a2aa577e2 `；action=applied。
- 原 R 目标：` 14532edd8f59c95298888b3a2d119be79f27a366 `。
- R 内容路径：` include/render/color.h `、` render/color.c `、` render/color_lcms2.c `。
- 关联 C：` 039e19ef481c1261ce0829939fe7b33484c7840f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a3ad65170cb0d59adde8d743d3c0efcb90f101ae `

- R 目标：` c9f65dd714af531ffeb6bf3c9836b43f2098e641 `；action=applied。
- 原 R 目标：` f7e95d63f73e66fe5cf97dfa296cb03193ccfbe2 `。
- R 内容路径：` render/color.c `、` render/color_lcms2.c `。
- 关联 C：` ae0b851047440eca17d4fa8130242b4d293ea9eb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 28b8cd207acf042de0cde21a419944f3a5e98c0a `

- R 目标：` 0956038612ceea8a2eb0425759160978d43d7a3e `；action=applied。
- 原 R 目标：` c45b789a0f8ffbd353abce36aca386afe704c26c `。
- R 内容路径：` include/render/color.h `、` include/render/vulkan.h `、` render/color.c `、` render/color_fallback.c `、` render/color_lcms2.c `、` render/vulkan/pass.c `。
- 关联 C：` 4663a72aa26a20b086c03e6073116da43fb7c493 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fa6a35279263b8f45ed98922e408b371641ce6f4 `

- R 目标：` 4789b9c8fcbaed5b28a984b7681f38bfd30a38ab `；action=applied。
- 原 R 目标：` ac0c524b9537ffeb335e8ceea39b21e3530927f3 `。
- R 内容路径：` include/render/color.h `、` include/wlr/render/color.h `、` render/color.c `、` render/vulkan/pass.c `。
- 关联 C：` fd6f0c8792143a6b7724581c5a0d058fcd2c3d74 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 3fa894cc040d4028e425492841f86d5556d46937 `

- R 目标：` 7e42ba446e3adffb0fc3e15785913d3a14fd5148 `；action=applied。
- 原 R 目标：` cd8431d35d6365264074d406e20c7db2e1fd331f `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/output/output.c `、` types/output/state.c `。
- 关联 C：` f6ed45b83dcc2359938099c6a4a3c9d931ebe06e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d40797ab9cfd328185f3a3ba8290fc083c292758 `

- R 目标：` 563313e1a3301611af4724cf5b7aad7a4647273e `；action=applied。
- 原 R 目标：` b50f11674c78359eb7ce0b48fc202bec5ae84a81 `。
- R 内容路径：` backend/drm/atomic.c `、` backend/drm/drm.c `、` backend/drm/legacy.c `。
- 关联 C：` 3acf21fff4532368826a5c9f6a11473c9f02678d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7b15516aa256d738c76e32fdd62e8ca11069b42d `

- R 目标：` 64de7be9aabaf96c7612ae54a4fdcea1641dee40 `；action=applied。
- 原 R 目标：` 8ba42e4f29681bfe106a04675727b4380aba1dc4 `。
- R 内容路径：` types/wlr_gamma_control_v1.c `。
- 关联 C：` 4d4495f0c203f7f74c174b52e57f11183e3e3129 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 334c2b21f20cf142d6fada8c47b074c73b9976c2 `

- R 目标：` cb8932fb1d2ecf81d93d663b94e9b44451e21e43 `；action=applied。
- 原 R 目标：` 5645fe1251a11aa1a1b87076a0fc3fa7e87ca526 `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/output/output.c `、` types/output/state.c `。
- 关联 C：` 4e5cd5584f2967c0ee21d43ee85909b41386b56e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` bf5238919abe86a4fe0dd6909fc3f0bc76aa7369 `

- R 目标：` e1e562c95e0be04fcdcd7bfc5b7530e62acf4ee4 `；action=applied。
- 原 R 目标：` de58104c61d202ba1aded36cdc18e3567a33ee40 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/output.frag `。
- 关联 C：` 0b8d21bb32b9313d862498ec9753dfcb2f7bac4b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` edd2ff863d2799591b41bfc6a633d205f240e7d4 `

- R 目标：` 647565a1a5531ca2e58cc897871324ca764fc136 `；action=applied。
- 原 R 目标：` ae804436d8fd8561fd7dd600de6980d444972972 `。
- R 内容路径：` render/vulkan/pass.c `。
- 关联 C：` 2a86812fe2a4d7ce54fe10d388e8a6af245f807a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 85be1f0a54bb42dcf542ab6aeb12bf3360eb9b5a `

- R 目标：` 8f43e6935d9f2bbda15b7a8e10adcbd3d627af27 `；action=applied。
- 原 R 目标：` b0038b5eed1206c7a9a91364551a04f28e40a982 `。
- R 内容路径：` render/vulkan/pass.c `。
- 关联 C：` e53e15bede67f47503ac739f62f4bf9a644198d4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b02653d741e06f43e39329492ba348fea9081722 `

- R 目标：` f42a0b42d3828f739e1574a7585507ddc9e5ab69 `；action=applied。
- 原 R 目标：` e2ac32638291cc6ad549df74c94eed8dd308ceda `。
- R 内容路径：` render/vulkan/pass.c `。
- 关联 C：` 0d071b5f47e29acb9729a32dbd1d27f38e296989 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ef9eb4e7391ebcb5e0ed8de36ee2d16e7a35ccf5 `

- R 目标：` af45d6adef4eddffbbf0d9da4562b20722b11b11 `；action=applied。
- 原 R 目标：` cf857efda52deddcd88db3b69f7286fdc0ad5db3 `。
- R 内容路径：` include/render/vulkan.h `、` include/wlr/render/pass.h `、` render/vulkan/pass.c `。
- 关联 C：` 4f2bb0ba57c8edf4787c33b6cf494ecbe24bcdcb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 9604e4859299596f83425af79e7dfdea0d180b99 `

- R 目标：` 165a61c593febe3a2223f15cbc763cad5fd4d344 `；action=applied。
- 原 R 目标：` 2e74c1e33110742fd3596dd62d9a49bdb5a5666b `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/output/output.c `、` types/output/state.c `。
- 关联 C：` ed25b7d3ff21bbcf968d2a002e593a27cfe1e075 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8f52ccea285f0f3c8a52142d597f5382c9b64197 `

- R 目标：` 7fabf10a119936272d7b8ed1ce586d91d2d85eae `；action=applied。
- 原 R 目标：` c45dff5c727ecf3c7b3cdc16042a63e9f60302f1 `。
- R 内容路径：` backend/drm/atomic.c `、` backend/drm/drm.c `、` backend/drm/meson.build `、` backend/drm/properties.c `、` backend/drm/util.c `、` include/backend/drm/drm.h `、` include/backend/drm/properties.h `。
- 关联 C：` 1d6c9ae270a1fe1c081a00cea0190783215db831 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a730f12008999409a4b07957833e1c0a494d43af `

- R 目标：` de958f949490b76a7fc721f315e10506ed20ce58 `；action=applied。
- 原 R 目标：` d93a73c16c421cdba2f26ace046ff29ddd79f96e `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/renderer.c `、` render/vulkan/shaders/output.frag `。
- 关联 C：` 95de6e66e1bd29930c154cca7d0128399e9a229f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8808fbce11b8159413957d64adfb844dd068d5bc `

- R 目标：` 3caf09bf3db99a13c863763410f0cdddc98235a4 `；action=applied。
- 原 R 目标：` 93d1e201d7b31d7f6f3c87f1e1edb9323ee073a5 `。
- R 内容路径：` include/render/color.h `、` include/wlr/render/color.h `、` render/color.c `、` render/vulkan/pass.c `。
- 关联 C：` 77b098b6e45992f1d8790e4941d6ad4a23e0ed0d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f686dfea1e1d783715acf91889f317ca1a94a151 `

- R 目标：` 48edf64f061c560d17a29a0bd0feb5b52fa36927 `；action=applied。
- 原 R 目标：` ab954e5a32e6e78e4bf66fa0e877a07e2a1536ab `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/output/output.c `。
- 关联 C：` 5cd0e8b0090fdb21d13418711464d434ea824e6b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 34f1e53916440ad471d025e5c118cf7769ec0af3 `

- R 目标：` f4fb9ceec3975b037d79240268b25e9d43bfd2ae `；action=applied。
- 原 R 目标：` 6346f2c79cac58f77207b14537f1ab3b381ed933 `。
- R 内容路径：` backend/drm/atomic.c `、` backend/drm/properties.c `、` backend/drm/util.c `、` include/backend/drm/drm.h `、` include/backend/drm/properties.h `。
- 关联 C：` 01d042f59dc0b3ca0f6f882ed19be3aa6364b476 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4ec0a9e4bf7ef12a6a6830b3ef15cd260bbb2de0 `

- R 目标：` 93beba8a8d100e922d69bddef579e237c3087b9e `；action=applied。
- 原 R 目标：` 0bacc41148f46c5554077e4e6e51d0d50b2ee11a `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/output.frag `。
- 关联 C：` d47d456cb3e3afb482f57f03048755382c5cdee7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7a009f2f18007c6afc7c11fa72948af9fabf990c `

- R 目标：` c855352198005a9995c8b5daf3be244fed46c271 `；action=applied。
- 原 R 目标：` bebc9e9fdf84d0b7a3db667a786d3d92eb70c2cc `。
- R 内容路径：` render/vulkan/pass.c `。
- 关联 C：` 86061fd770a796108c9ad23fb8d5f5b292aa5b25 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e2e62b6ea6965c65f499de1b40a08330f371c9c8 `

- R 目标：` bd433f92d51f81d6c71c26a49c40d37b1a231cb7 `；action=applied。
- 原 R 目标：` 838b82f9dead618f3fe6b6bd7aca1b05492fc0eb `。
- R 内容路径：` backend/drm/atomic.c `、` include/render/vulkan.h `、` include/wlr/render/color.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `、` render/vulkan/shaders/output.frag `。
- 关联 C：` 2e88d8b62ccb66aabd4249625c84963ffee2db42 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1fcd0c9da6a25d58a23b9450acdcd0d5609e9bbe `

- R 目标：` f58459510ef19788b2c03cdd94ebb133878a065f `；action=applied。
- 原 R 目标：` e52c291e7b14965a7380d97412a803cfe090aeeb `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` b93009d326ac2412bb57111784b35bbd76439594 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 04f282f3f12debe935a41ec6e709d40575ee8c8e `

- R 目标：` 316479ba4fb43f5a9aca006e7c92db47b918b122 `；action=applied。
- 原 R 目标：` 526a7e7fad60de6be6f1d41b4f61b04ed7dc318a `。
- R 内容路径：` include/wlr/render/pass.h `、` include/wlr/render/wlr_renderer.h `。
- 关联 C：` 7b1c119ab285e69133b73a24c5e92fa40647a36a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 116c2281e863d65584756b8ff2eb3f8b34490bc5 `

- R 目标：` 1d53abe176c7c50a24cb7c5ca97b60dd882b5c90 `；action=applied。
- 原 R 目标：` fc2c2623bf3d1cfabd103822ff1faf93587c2561 `。
- R 内容路径：` include/render/vulkan.h `。
- 关联 C：` a40e7694b04d0d385faa4a50e6a193f2e672dc50 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ca49086f7f6582a8efa246fa1e1c93624b825a74 `

- R 目标：` ca3da9907e1f119f426cbd673bfcdd3aa500e9f1 `；action=applied。
- 原 R 目标：` fe032f8e48c5d98a90fd662b117e24ca4bde6707 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `、` render/vulkan/texture.c `。
- 关联 C：` 3b5b9ed8886e94ce06d386da8207011c91141764 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d04c4477b8dff7b358d8950acc974dfe353f9602 `

- R 目标：` 956b88ad3b40d509967155deec17637851e1ecf6 `；action=applied。
- 原 R 目标：` af5894d4d1958918f6b21148174a37d93b9e640c `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` 630b9c8d17917dc14c5200f8b787d63713a31a6f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 31c96911257d84b52b6e85590d2c7a0ae1fbbde3 `

- R 目标：` a1b1e20614b3e6c556b858c8990be006df2f55fa `；action=applied。
- 原 R 目标：` b4cecce5ef5119e7847350febad92a4fd3375a33 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` f5eaf92ee414ce80e7ea48c1ec6ed090f2451ae4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` dfdbade3b1fba232c2d723922e1c95f3a7e0fbf4 `

- R 目标：` 6946cb784310977d6e69d40529fae2e74c03822a `；action=applied。
- 原 R 目标：` 976043a4b8a50a6ae2ff25f9bd013685f42f2001 `。
- R 内容路径：` render/vulkan/shaders/texture.frag `。
- 关联 C：` 63fe5e1ad8e72fc8241b9677eecac26745e0d2a3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 385d8feaab802bcd0f29086eb7397fc0d45f5525 `

- R 目标：` 5e8ed01232676fb4c9ec15ae121054af6e942a31 `；action=applied。
- 原 R 目标：` b577433187c990a81073ecb4fedf0fb0ff8f7f71 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/texture.frag `。
- 关联 C：` d470ca91cc9856df897999c43e28165b615a0589 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` cc8a61bcb5cffc94a98020891c6839002714738c `

- R 目标：` 2d94abd5c531540a3d5b85f24c6aa1b092d897c8 `；action=applied。
- 原 R 目标：` 91ac9056c9ab7b35c958cf7aa8681f19150171bd `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/texture.frag `。
- 关联 C：` d653aac5ddc88c6aae8a6983e32def982b5aa4cb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 19383eccf888693daab4cc2fca8dc60a44906c37 `

- R 目标：` cdb5cd7c3609a0e3fd8f6cb279069a8afc0c2336 `；action=applied。
- 原 R 目标：` bc96535cea2aa2a11564e0464d434af956cbc12b `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/texture.frag `。
- 关联 C：` 57aafc5c76d52d4805d2d65ad3819cae05982fd4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d14e882d30f6edf50ed2cdc90526e46b671f9897 `

- R 目标：` c13e8756a34e2d4564c45c0c12fde26f35e09a58 `；action=applied。
- 原 R 目标：` 4603ca9bf62d03a7bd4f2ec7ba289fb8e3e75a97 `。
- R 内容路径：` include/wlr/render/pass.h `、` render/vulkan/pass.c `。
- 关联 C：` 8dd8caffcb28802bf6c2ebd2b499d6fcbf322590 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 09e79cdfc902341d74cbe20bf8c31c14dac8db71 `

- R 目标：` 87d29071cef150943ca8677823c2c8da26f36958 `；action=applied。
- 原 R 目标：` 7ceaa6e18b87ec23a8c5e3bea4a7f3db98cfdcc1 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/texture.frag `。
- 关联 C：` 8050aec358db12a1a6872151080dc8ec06af1d67 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ab42b16e5dcd895822b003517d7927906a1f41d1 `

- R 目标：` 910a90f81ad51bfc49bc733271508ebad4a30196 `；action=applied。
- 原 R 目标：` 3506d64db9aca28941e1f2db6a3a7bf0cf59e7ae `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` a77744fb4a74508296b8046e4cf39dc99cb5bc74 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f4af38c3cba717b2fcc9f6bd264a3c00abcf5f7c `

- R 目标：` 2ef85efc80c312771ba60dec0b4f7d9ecfd081fe `；action=applied。
- 原 R 目标：` 94c25c55817909f8e913d7a8c6940105cb34890a `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 4355e35766b98dac6119f91b2780f9f85badcce1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f570342baf591db7616dc5befeb70b6f235d1713 `

- R 目标：` 32d78d33f9e3d50cbf21795275e7aa5d91f924db `；action=applied。
- 原 R 目标：` 3ff12df8b52ecb656e4f9874c40a7c0bc950097f `。
- R 内容路径：` types/output/output.c `。
- 关联 C：` 8f722f1bd418bcea2542707d8b86481d7dc636d0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d67047baf7fc29be4808d31dcfc0174be85a2f40 `

- R 目标：` d55b3acb1e0d9ec2fb4670405a39f1a862c5c9bc `；action=applied。
- 原 R 目标：` 0a96e7f1b1c6620a817bfd99ebf3f0f944cc715e `。
- R 内容路径：` util/box.c `。
- 关联 C：` fbfc9159402f58e2b52628e8990bac8edf450774 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 06511afe2c784af2714aee5588bfbffa91c87f0a `

- R 目标：` c008a81728769fa94005ed4191bfc470b2009111 `；action=applied。
- 原 R 目标：` fe3452324e8dd2a499f4c1deff4db0cc6ee39ff7 `。
- R 内容路径：` include/wlr/xwayland/xwayland.h `、` include/xwayland/xwm.h `、` xwayland/xwm.c `。
- 关联 C：` 0858040e1d5bd1b04d89a2780435edfab09dd08f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 880b5241663166d65ba65243ffaeff01a6ce5073 `

- R 目标：` 3c54d320d2a3616d9479a07c8e428476fc796d0b `；action=applied。
- 原 R 目标：` 0ff9b8a5d3144487ea7fde6f46ca076afd9ce940 `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/output/output.c `。
- 关联 C：` df8609cacb092ef9a49fda7df413c1c23c16066b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5b55eddc4888fbe9a49197d49fe58b98c0bf03af `

- R 目标：` 1f0468ca958fb2818adecb65002d2610c7811c07 `；action=applied。
- 原 R 目标：` e6201250abc7866604483ce04e270b9f9a9725f7 `。
- R 内容路径：` include/types/wlr_output.h `、` types/output/output.c `。
- 关联 C：` 26699c9211d52c0ea5f5092fc8a8e8e6771376a1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ff043fe802074ca7ee9dd46d17ecb9d482016948 `

- R 目标：` 26c6aa9a39a2769f89e76e24f6075502d99a7b7d `；action=applied。
- 原 R 目标：` d4032a15e3e6967c7aae4b918a8b8dfb0d8008e9 `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` c80ad01a750072c5b40747fe9352cf846d5b6000 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 019c13f41d3538924467c7ef1a3a34695a7ff255 `

- R 目标：` 27c46bab84e47746cedfaea213889a7fd45fd6be `；action=applied。
- 原 R 目标：` c21ae8a512cccf5a096293e6a0a6df0a594a8050 `。
- R 内容路径：` include/wlr/types/wlr_output.h `。
- 关联 C：` e186207d74d6f5b7dfecb8b11179d816ef963f40 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 29ea403f65a802989dda25824ff9476dc7b77c12 `

- R 目标：` f7da61ec7afe8c698077b338616fa50f81003ba6 `；action=applied。
- 原 R 目标：` 6ccf9d106d5008b19639309179717ec7c29e21f8 `。
- R 内容路径：` backend/drm/atomic.c `。
- 关联 C：` b0c600caaa63a74cb35ec9aa18139b3cd5ca3238 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` bd81e21bc6c1cab671d0594f0b41d28f38d1d1a6 `

- R 目标：` 23c7bf4e3ea138261d37d37a8f02c92bfb51f440 `；action=applied。
- 原 R 目标：` d8dc59921c881aa9b4b11b63e848b22d9638d72c `。
- R 内容路径：` render/egl.c `。
- 关联 C：` 0df9783ce06cf26251a2cd0fdafed53e94cd027b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e17a03422776f63782cc9ddeb94bdb879651adf8 `

- R 目标：` ca689b625f2f48e9e0e9aa740af35611704dc612 `；action=applied。
- 原 R 目标：` 40a347eed22ba9f056c24412a8eab52b9ba1983f `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 7a9f068eb46fdae0e05b76987e463adc2f81432e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 08fb9384626292da9eefe05bbebdc57ba5f26517 `

- R 目标：` 50c2e443f8a4a06ae5c3b0db57a7832fba42f599 `；action=applied。
- 原 R 目标：` f4f1edfbceadaec1c8422db2b4de71da945f167b `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 6d04cea723d9b6c0a55114473f6c53c6d7a8eaa2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 700447dfa49073a8cea8fdba86c929171a97bb2b `

- R 目标：` b445b1be270981a8b73d7c96a40d23c1c5bbba7d `；action=applied。
- 原 R 目标：` 14d8858499688ae08ca838dcb800b1e8674bb404 `。
- R 内容路径：` include/wlr/types/wlr_text_input_v3.h `。
- 关联 C：` f2553656a8e7deaa66828da1f18c7c018dae29a3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fa6c1816fc2d18e430fca57a5da9760e48c70a06 `

- R 目标：` ea47067fed26c453255a5bede0376031f5fa37a1 `；action=applied。
- 原 R 目标：` bab84f59804cfaa8f052b0cdce28f0c60b40f451 `。
- R 内容路径：` include/wlr/types/wlr_xdg_toplevel_tag_v1.h `、` protocol/meson.build `、` types/meson.build `、` types/wlr_xdg_toplevel_tag_v1.c `。
- 关联 C：` 5f0a8190dd8f867773a3cc12c92da6c86078b8e5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b99faa4272d5b51540fa0ce6bcac13fb16dad171 `

- R 目标：` 62981893cad3b1915b580006b23c025f55fc13e0 `；action=applied。
- 原 R 目标：` 561dc1ed7d3465458bd0eab25e9d533475532dfe `。
- R 内容路径：` types/wlr_transient_seat_v1.c `。
- 关联 C：` 97d914d7e8986469581a518c5da965ae3107c173 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8e41c92ee120806a59baf7347e9f13487e23bdd6 `

- R 目标：` b4441fecfdb067b087606dc53125d2baf4a4d6db `；action=applied。
- 原 R 目标：` 4238b5f719247de6729fa041a41e46c668e93dee `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 81ca3fb1f7a4954d8afc1532c414c57b5517f446 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8b3fa373749ffd6da4b8500fca8883f43f171d1e `

- R 目标：` a0e0f6c01188b3d9d89df0c856c7df6c45863c62 `；action=applied。
- 原 R 目标：` 59d2807b451d2a80228bb458cf7a843daba2b218 `。
- R 内容路径：` include/util/mem.h `、` types/wlr_color_management_v1.c `、` util/mem.c `、` util/meson.build `。
- 关联 C：` 84a155261cdb93a3321229fa6e8bd26fdaee844c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 0202d8213967db6169f13fe42637fe9d35ab4d1f `

- R 目标：` 92f83353494fa4b599cce7e338fba66a19e00cd4 `；action=applied。
- 原 R 目标：` 72b25c460e0fbd2c7e6a5154956be9c82f9e9cf3 `。
- R 内容路径：` include/wlr/types/wlr_color_representation_v1.h `、` protocol/meson.build `、` types/meson.build `、` types/wlr_color_representation_v1.c `。
- 关联 C：` 9282b4493d988a85f3677ecc8724617916d652a9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b7e086318c74d3e39442fa3e30aa07ef1e0c7243 `

- R 目标：` 0205c17a1fb22e9a92e1c555f2be2444e3f26026 `；action=applied。
- 原 R 目标：` 423c48205a96f1c5990a43d610e7f95fd3c08817 `。
- R 内容路径：` include/wlr/render/color.h `、` include/wlr/types/wlr_color_representation_v1.h `、` types/wlr_color_representation_v1.c `。
- 关联 C：` ae8ea6321b69ae47b6496e6caee54c37aef378da `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 18b4d8410b7d8897e0d723a85a60a1782adeb8ca `

- R 目标：` 3ccebc6c0684966c0ae58b1e01f1538dcd5c2cdb `；action=applied。
- 原 R 目标：` 07a72c729ee126df04f7bc661b33323a53727781 `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` d25f38e861f611ac9510ac2f91bc9f7c9f72de4e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6dfa30759182985cad9215e1a56df24098706961 `

- R 目标：` 701d6445c5ccb71840e21720f8c0f8a2dcf507e9 `；action=applied。
- 原 R 目标：` cc227e255e1d50f8e72c87248130fdcbf25d6678 `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` b0da0d1bd33e9bcfe9a9a2af6450c813a122a5ea `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c0ffefdd17ff771496458051a89686879768a182 `

- R 目标：` 639f68675ac832f376ca8e88028a3bb682a7c888 `；action=applied。
- 原 R 目标：` c2ea9253fb50d805063d704900c48bded1d22272 `。
- R 内容路径：` types/ext_image_capture_source_v1/output.c `。
- 关联 C：` 7003e22532873bae6abc5503a44a3effbc07ad4c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 159aa593b87db474536c89b6cd75586fd0f88170 `

- R 目标：` 9ebeefa2fdc83e64a9d299f03738b4a628e718b9 `；action=applied。
- 原 R 目标：` 5bdbd971783eccb17e0156a4dc7cf481030c9eae `。
- R 内容路径：` types/wlr_cursor.c `。
- 关联 C：` aec1dba58540647bd6f9c464f972980e2dae7a1b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d4e343cd04c5cbda3fe649b593cad22b41adff3c `

- R 目标：` c3fb8c3222834b8a1055bb031d5640f5e54eb174 `；action=applied。
- 原 R 目标：` 1561e3901125a32185c766a528d24429f799f646 `。
- R 内容路径：` types/ext_image_capture_source_v1/foreign_toplevel.c `。
- 关联 C：` c8d38f43582fc9e4d80f3706e8fdc10f9b0cb412 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fcd0b60f3dbaef8e45ad1e2609811dfcd11c63b1 `

- R 目标：` 252d7d90fa3d43e528a8cf62e3e538a5e77b4e7b `；action=applied。
- 原 R 目标：` 7e4077fee3d222d1d8dad0c09324f8d3d3f58154 `。
- R 内容路径：` protocol/meson.build `。
- 关联 C：` fa511b48774bf85881c9e56ccc5794790a2fed80 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 094f8fa20e188f0da667df121b0eb9bb6f202ca2 `

- R 目标：` 0c369bcbde8c298457180222b39a72194796b750 `；action=applied。
- 原 R 目标：` 4ce3c9424bf48dd74ee340c846cadbcbfa0eea8e `。
- R 内容路径：` include/wlr/types/wlr_color_management_v1.h `、` types/wlr_color_management_v1.c `。
- 关联 C：` 08f55f99d7604c9b38d3765534bbd508606e8104 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` df2d519225b3fefb5c63cf6c9386b4f62c2defa2 `

- R 目标：` 37f94b5c90bdfd10889e57f7d52af71facc256c0 `；action=applied。
- 原 R 目标：` 500d89ba821aae98fd93edfa25d8f4bfe96f41bc `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 4e82e98bd185e695fbc76346d9423e4b722b61ba `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8ed92bbc78a136c4adb16182b38121ca5b44ed46 `

- R 目标：` 85bd8dc7ca358431bdbb0a770420e51d49dcb323 `；action=applied。
- 原 R 目标：` a359872975bb2dea4a407e7baee8ad0e6c9abd36 `。
- R 内容路径：` tinywl/tinywl.c `。
- 关联 C：` 6d801440ba08000a6c5ce20fdfa8cbf7947165d0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5d2ed41d2be0afe22cd28ee05db3cd47305ca11a `

- R 目标：` cd71f6932efd2248c8b0eafeb7633d4cd439f8c5 `；action=applied。
- 原 R 目标：` da59ecf790c3632127e5f58b898593aa09bfe285 `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` cbd5b931aa7bfa52ef032ef4b0b0886e459f0e7f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fa71f552d76b9565cc79f3a48768342f9186bd06 `

- R 目标：` 4a8fb590f835c526341964965e5dc9d39fd408de `；action=applied。
- 原 R 目标：` e4f9cc977df1aafff5827b1dc30a36e99c11d806 `。
- R 内容路径：` include/wlr/types/wlr_ext_data_control_v1.h `。
- 关联 C：` 355ff36497187bfec1f3a559ac580a209b515402 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 33471be4c733a280bc804957c0bd307c07943e19 `

- R 目标：` 4048d22c403904468689f36393de14f4be86eb54 `；action=applied。
- 原 R 目标：` f1ee56f70c1973d42a065927cc55eedfdcd54f59 `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` 75464a16b00ef2c969fecff690387666ad5f2c29 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 682273cf854842c378362d2e167785898b256806 `

- R 目标：` db3fbfaa3e52153af246a9a31cd59f9b2747b670 `；action=applied。
- 原 R 目标：` 5c729b02288a7adf2f561f1e50350ba07211f0c6 `。
- R 内容路径：` types/ext_image_capture_source_v1/base.c `。
- 关联 C：` d53987b3cc12cda460076d77e38f65566925faf7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 74da40725dca4808b943e17d5bce82b9ce87f6b3 `

- R 目标：` 11e4816bd4afc0056c8d1eca35119e8b3d43c9da `；action=applied。
- 原 R 目标：` c5c3a7667ba4e4d803184b2ce48d3ab766430373 `。
- R 内容路径：` types/output/cursor.c `。
- 关联 C：` 207de72a7ac63ed3d6679285f55efddf7265e27a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e9490f064a03e6c201149528e6c0c4c72f10ab86 `

- R 目标：` 7b1f2d068345616cd48c7f9cd6cda0ca30113cc7 `；action=applied。
- 原 R 目标：` a02989adcc45ecdeb79661d1bf5102313477805e `。
- R 内容路径：` backend/backend.c `、` include/types/wlr_output.h `、` types/output/output.c `。
- 关联 C：` 5a6abec15362153665bd67862f21afd0d67f9689 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5c5b0af13756a49fd922031a621465f01b73d7e6 `

- R 目标：` d09d1430eed8c64f53ad98b70b411f905a5df76c `；action=applied。
- 原 R 目标：` 901903022fb7d2d09a12a9399dfe9be2a76d1cf6 `。
- R 内容路径：` include/wlr/types/wlr_fixes.h `、` meson.build `、` types/meson.build `、` types/wlr_fixes.c `。
- 关联 C：` 43b5a31e199601a405466a71dbe6f0cc8c7275b0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d42414caafb7b6627440a0665d371210c0d47e7a `

- R 目标：` ff0aa94ea42b404587c20533c02f29387e115dff `；action=applied。
- 原 R 目标：` 32458e6b95225c3dc33e1a7226dad2b1c95403aa `。
- R 内容路径：` include/wlr/types/wlr_color_management_v1.h `、` include/wlr/types/wlr_color_representation_v1.h `、` include/wlr/types/wlr_content_type_v1.h `、` include/wlr/types/wlr_cursor_shape_v1.h `、` include/wlr/types/wlr_ext_image_copy_capture_v1.h `、` include/wlr/types/wlr_pointer_constraints_v1.h `、` include/wlr/types/wlr_tablet_v2.h `、` include/wlr/types/wlr_tearing_control_v1.h `、` include/wlr/types/wlr_xdg_shell.h `、` types/wlr_color_management_v1.c `、` types/wlr_content_type_v1.c `、` types/wlr_cursor_shape_v1.c `、` types/wlr_ext_image_copy_capture_v1.c `、` types/wlr_pointer_constraints_v1.c `。
- 关联 C：` 52077be289830311108a826c56ada2f6e940bbef `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 859718dc888c11841a8a460349ad5748c121e3e8 `

- R 目标：` 514afb1f243489b6f29644fecf084ae2ed2e7fd2 `；action=applied。
- 原 R 目标：` 4e3e70f01f3e94213627fdef120cc8d73f03b099 `。
- R 内容路径：` types/wlr_compositor.c `。
- 关联 C：` 6f1ce42117835db68569446a31295d8e70e20503 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 87d58d55d9bbd55f89c667abb8641b707fc593d5 `

- R 目标：` 4ed2a03a944105458ddde388c1080389bb4001b9 `；action=applied。
- 原 R 目标：` 9ec0cc4cecafdaa4034897656caaa94cceebe0dd `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` 270ac33c71f018031c51070a6ecc55feacc80fa7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ee0d9a7de7b275592767c8c3429b4fe472f79e20 `

- R 目标：` 493537e29b3e827b6dd331511b5b12b4b8487cbe `；action=applied。
- 原 R 目标：` 729983f5d099c7f55e7db2a0a083ad12a452f948 `。
- R 内容路径：` render/allocator/gbm.c `。
- 关联 C：` f0fda0d94cd9e3cb5a628d634040db2dc8d2afe8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 73caa1c03a8b26eec23a253152f3ae893ff6d85f `

- R 目标：` 7e43330bd3d5e9870fa6903f0a4e39117b2d566a `；action=applied。
- 原 R 目标：` 9d80294f8b879863c4e51f78ebab4ec183650ae5 `。
- R 内容路径：` types/wlr_xdg_toplevel_icon_v1.c `。
- 关联 C：` c28297bb0f778d1da5579c04ee89e5650931a7c8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 033a7c7b4278b88eec561d97307b111a7bbc0c06 `

- R 目标：` 27df2a7f2df56e3bd5360e7f9512b5b65f9b3c2c `；action=applied。
- 原 R 目标：` 901a1cbebf0ea5ef530b0fabe2312954213cb5e5 `。
- R 内容路径：` tinywl/Makefile `、` tinywl/meson.build `。
- 关联 C：` 213c86cfb38ed8cca146b53c99abf9aa376a49dc `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` aa980f02c6e0e119ab271141fa42adecfae48707 `

- R 目标：` 054698c0a08560689e6571cd77332bf1bdee5009 `；action=applied。
- 原 R 目标：` dcabfb9ff4c53912727a43a1c581fcb76ddac421 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 84f2c44e3950187ce7ae08497a4e47edff613c6e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d4dfa7caab388a3c682d86be0aad378851f7363d `

- R 目标：` 4d9ddfbcb385a5f48c4af4912d0e85ef666c09dd `；action=applied。
- 原 R 目标：` 5465d7521fe4178dbef89580b8853b949dc4e3c3 `。
- R 内容路径：` render/vulkan/renderer.c `、` render/vulkan/texture.c `。
- 关联 C：` f6ec46993c371cb47f3934c62da700500b4138a6 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fe8906bcfbf6eb65d0c68669ffd177efe282f178 `

- R 目标：` aa4a779455ba73b5fae1d2238d98d4f50c5d8ae6 `；action=applied。
- 原 R 目标：` 8a7c3638b53e718877e1244712ed82f6948ea4d1 `。
- R 内容路径：` include/wlr/types/wlr_data_control_v1.h `。
- 关联 C：` f7c51f3da40e01bd91fcbc17b99917d2d326f4b6 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5ffc9a8b7bf68b5da60ef9f6cdd52bca9e8e1a6c `

- R 目标：` 2734d7a5856e9db09def5f34272f8230ab854086 `；action=applied。
- 原 R 目标：` da3bc57763c039c0e05481ed61a0082b764612ed `。
- R 内容路径：` protocol/meson.build `。
- 关联 C：` 992e0e3037cb52c3a26fe2f70abb7024cba4d3bc `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 9cad8d729fd3550040a7ece3fe2d4cfafd67e5b6 `

- R 目标：` 5f7aa4cc8a237f8be9a0c100e2bca5447033bd85 `；action=applied。
- 原 R 目标：` ee4336a33ffcc07554bfc59825928bee5e830015 `。
- R 内容路径：` include/wlr/types/wlr_screencopy_v1.h `。
- 关联 C：` 131816ddbf3d916392724072867f23b09eaeb53c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c7439c3833d0cd35720a5d229617602e5ba5fcb1 `

- R 目标：` c68b2fc7900ed4bd6290561337baa3a91c99c0d0 `；action=applied。
- 原 R 目标：` 1f75f25cb7451e3dca8b92cf104c3e56dfe5b1f2 `。
- R 内容路径：` include/wlr/types/wlr_drm_lease_v1.h `、` types/wlr_drm_lease_v1.c `。
- 关联 C：` f4d2de93826105c418c3f63a1495159205f6288d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 45194c916e691c9228f30d87085da35052b75a72 `

- R 目标：` ef285b3250a7e02cb9ced72fc43b06b11ae655e9 `；action=applied。
- 原 R 目标：` 6387f1e533f41166a5a53f2ed59e1cee893bc48c `。
- R 内容路径：` include/wlr/types/wlr_input_method_v2.h `、` types/wlr_input_method_v2.c `。
- 关联 C：` 22bf9654c48451a2119a6cb90f1b92d54eb04cf4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 908ba59932df7cbe837af6280a6de083abcb69c6 `

- R 目标：` 9acc74c0e7417f2c61d8bd99263f37f6eb256026 `；action=applied。
- 原 R 目标：` 7fa0c54a3ca93dec3295a58551faeacd0d0f3e68 `。
- R 内容路径：` include/wlr/types/wlr_input_method_v2.h `、` types/wlr_input_method_v2.c `。
- 关联 C：` 93dc16bd5d14c31e139ea54a30f067890d24dce3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 564a3ca2e2e219480b75df745aa61aa706ec6e19 `

- R 目标：` 01caacfe668cb2c5fcc97194b1594cfeac198981 `；action=applied。
- 原 R 目标：` 056eb6beba9dfbaa21b937122210f8271720e49d `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` e5d2f2ceff3bbdb497c1ffa1f045887d9f09f859 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2b85c5d40accb13fc3acb33fdca64bc795e7c74b `

- R 目标：` b7742e520aac43add3722018fc3af9f6555ac411 `；action=applied。
- 原 R 目标：` 04316b174b3d1644daa28b6a19b9d9dfffc1c6f9 `。
- R 内容路径：` protocol/wlr-export-dmabuf-unstable-v1.xml `、` protocol/wlr-foreign-toplevel-management-unstable-v1.xml `、` protocol/wlr-gamma-control-unstable-v1.xml `、` protocol/wlr-output-management-unstable-v1.xml `、` protocol/wlr-output-power-management-unstable-v1.xml `、` protocol/wlr-screencopy-unstable-v1.xml `。
- 关联 C：` 79859f208cc35ae14f77154299648d241a4d434e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 276ea2949d7d0b42e6d9a28f186c378293cae922 `

- R 目标：` 64fea1e61ef73c7e77e9703088f0dd7561f55f31 `；action=applied。
- 原 R 目标：` b19e8379cbc7f28c60ca91c16899d5b916d3afdc `。
- R 内容路径：` types/wlr_drm_lease_v1.c `。
- 关联 C：` 5ea44aa3760578c8b8005c7d286ef8cafecf140a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c4c3d95a38040104339e8ed8984b847290df294d `

- R 目标：` 4ef46a0ec3520e8b2ac70028d353d804fc9b7e67 `；action=applied。
- 原 R 目标：` 2fb2b1cacf39f7e55d7fc380c395f30c994fb386 `。
- R 内容路径：` types/output/cursor.c `。
- 关联 C：` 38dc201b0aa73c51916a3f977fb0176febed9565 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f827a249077f26ad91928b581d3fc5a96af3ec01 `

- R 目标：` ffa0920d4682e51665d7ad2e29ff143d5c9896d2 `；action=applied。
- 原 R 目标：` a5da7eb77ba4559e7fa40879e11c8c8f317a1f20 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` bf286154e1ac36dc0fd87dbfe1f0433cdde97460 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f23cb2387656aab8d243c8814a53da6c0a70db48 `

- R 目标：` e54e91d2d2297bb107de9b342432eaf27e02d48c `；action=applied。
- 原 R 目标：` b5d280f1b9e4758f6a109d000a3038045c5ab231 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 8825cedba02e42433fcea115c16394ddd1f8e279 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5b8b45b08e13328031c464d9913eef55e39c91d0 `

- R 目标：` 1f71048942c388e2b00b857f6fe140c32dacdeb2 `；action=applied。
- 原 R 目标：` cbc996f4ebf40d8c40081ee3c72a7fd8b354fcc3 `。
- R 内容路径：` types/wlr_cursor.c `。
- 关联 C：` 0885a43c202cb47c66e2bb6d0507c8a9e0deb9bb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 529950cb158ad7a02c6ac3a446fac29d87028ab3 `

- R 目标：` 972faa2dc79cb2bd1594585876f59d99a95e581e `；action=applied。
- 原 R 目标：` c840a92e157660fcaf664f5ff1410f27adda658e `。
- R 内容路径：` xwayland/xwayland.c `。
- 关联 C：` 0d6a6dc13d229a903cd9fa7efbf6941d64e6e76a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 93864b26690744c7b9f9eba8d128acde6e98b379 `

- R 目标：` 37e084ff147376dd747bce0709f047c901587193 `；action=applied。
- 原 R 目标：` 49a0ad98d98230b101382875e6c5fb5ce1a85750 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 0416c53f21b0260f1190c9ac939522197b15f05a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6e63017817a6ce37cc822f527ba57ac222e9d2c7 `

- R 目标：` 35c4d33a4b3b52e7773551cf8cbe5f14fff31c22 `；action=applied。
- 原 R 目标：` a59226bf40c87c8961a5445833ad476aff5cd40b `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 18355498eb03ccf45b041a600345096bd7980724 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8b61f805d33f81a7afe2a18c336867fc32b8620a `

- R 目标：` 9e1db13c41142e11214801bc1ae2e73d382d34b5 `；action=applied。
- 原 R 目标：` 3d76d688332a302797e304cf992e1ec9d12d6d4e `。
- R 内容路径：` render/vulkan/pass.c `。
- 关联 C：` 297e4347f2132dafcbc29923a5028fd4d88ef638 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b7b7012f449273e29486ebdc9a4eddd5e76ec7af `

- R 目标：` 44a2a0a9e32ace84c91212ec1572dad323f1f8fc `；action=applied。
- 原 R 目标：` 20c5e1b478a1b91332dce52fd1a2038787c2cfb1 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` ed6fda898a58eba5e183eb0d8df87d2f73295b4a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 86dbbae0f5f21fe7220137c59ba76d385399dc58 `

- R 目标：` dd7d950ee98ce756ac26c772aedf302725a55da1 `；action=applied。
- 原 R 目标：` 0d19dab3df8326e9b2ffb6429c28be90d22f60d7 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 3a51987fb30ee8322729f534a9b9d409dd69f433 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6dc50b9db882b034646f79db6fc49914f5fb40d1 `

- R 目标：` 6e1290b06fe805221d28658e1ddc5189073706bb `；action=applied。
- 原 R 目标：` 939ae0e60e7c6dd05fcc62b8b9394438e4a7f985 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `。
- 关联 C：` e357f578069b444576d025ab338d9f0d5a7c6c17 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f02da149ffd4c801ab386b93f01061eec6eea06b `

- R 目标：` db5c63456de594114d3b8c8b2a57a21f414571cd `；action=applied。
- 原 R 目标：` ebe1fa0dee9d87f2f46bcea25ca545b1c0843bf9 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `。
- 关联 C：` 6a813b463cb523693c617f2e8dc159e4b36374fa `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 34dc93862257c1c9f69958379fd8d1e8b75e5461 `

- R 目标：` b440e7d5950e4a45a81d75149129a417701d354a `；action=applied。
- 原 R 目标：` 0a127e70b42b8319a1e129fca1e248dd8a99374c `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `。
- 关联 C：` 6245192f7b22a26d401356c96cf02f1cdcc979ee `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 950bbb8fe1b23fa77e0953d40d76cfaf46f0d92f `

- R 目标：` 4f3cd97b5dfbddc525f6b5aafe12bde4267f05bc `；action=applied。
- 原 R 目标：` 9802015bcfa7c9086d3b644c833ae5cc48e445ce `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 5bd77933cbc88578fecbf45dd7ec470261472209 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 75c10a1391360aa29920a801f59ff7461912d6aa `

- R 目标：` febbe0dff300cef8e9e37f7d609e427ea96f36b5 `；action=applied。
- 原 R 目标：` 4081e7524710bc961cd2b95277f10cfb3ee4fe0a `。
- R 内容路径：` types/data_device/wlr_drag.c `。
- 关联 C：` d559a98555de64f0a6d4c8f2c75864355b78f775 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 635bf146b865db63416f82bd6092442de594f507 `

- R 目标：` d3dbee739bfaee39b8f78a44ae7cba621e590025 `；action=applied。
- 原 R 目标：` 55efeaf5b01429392018c57f8874acabb4b4dc35 `。
- R 内容路径：` release.sh `。
- 关联 C：` 7156339346e4fcf4d4b94e54df4f8539d869d52f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8e64fba9494a4dc8c2c9845a2c2724c7632b81a4 `

- R 目标：` 5301b4f3f0ca7cd797bc260f3eb16c941cc95565 `；action=applied。
- 原 R 目标：` 381c7978cc443ab826aeba00f418c775bc56fae3 `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` dd74beaaf72de68d11e5f300866dfceae80c984b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a378e058a4bd3bc87edf943504258c76f668ed9b `

- R 目标：` 39285d968f5d116c83b55a0013609f8b551fa4a4 `；action=applied。
- 原 R 目标：` 7db4dcef622864168074541f87097cbb248c11e6 `。
- R 内容路径：` include/wlr/types/wlr_color_management_v1.h `、` types/wlr_color_management_v1.c `。
- 关联 C：` 96629037052b4153632ccd854c0971a6556eae7f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 263e98177d78628e1aeb6d90dd9e0598db87454b `

- R 目标：` b7d1ef2bc58ac6bb3c611e24910ca19d20c2b77c `；action=applied。
- 原 R 目标：` 5f4b6c5768d585d0ef777e8219b619d32b27bb7a `。
- R 内容路径：` include/wlr/types/wlr_color_management_v1.h `、` types/wlr_color_management_v1.c `。
- 关联 C：` 3a2014ff56481ec91bc47b76f152b1bd9612bb6f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 437174b43a3832b1d812eb88af1f716d748197b1 `

- R 目标：` ff23997f87d4ae47b144759972f625b7714e88c6 `；action=applied。
- 原 R 目标：` f9ce13ad39839c4fbec391d381a1092686ae131b `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/surface.c `、` types/scene/wlr_scene.c `。
- 关联 C：` 4e6ea4f8ce63556b27246df5bf22cc7c13a36769 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 505329bf071892244a4e8b80e8595429f68230c8 `

- R 目标：` 7902329fb81b8996e084b5eb7d35bfc8b2b97dd7 `；action=applied。
- 原 R 目标：` 320d5adebc3220a6e068bca5419cc2eab8791913 `。
- R 内容路径：` render/color.c `。
- 关联 C：` 166e06180f2967780b2819f302e1a7eb82afcea6 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 91921354b90f4eeadd031b2baaeeba95e9996644 `

- R 目标：` 381dee6115c40e1640cb697bd2edd50d2d331925 `；action=applied。
- 原 R 目标：` bd0a4ace517258e4e14180cde4a49c505cd75bcb `。
- R 内容路径：` backend/wayland/backend.c `。
- 关联 C：` e83df8a497421a736d787db7bc0bc5eed0f64843 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b66698bab2ac579ad52fb40e3438a45110f104c4 `

- R 目标：` e32bb165e2887325427377a1f9fb9301801eea7f `；action=applied。
- 原 R 目标：` 6caed8a345483a8288998d8e467e82dda60c6f1a `。
- R 内容路径：` backend/wayland/backend.c `。
- 关联 C：` ee0cd79c9ae51e6a75c60dc2e71c693ea82877b9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 52382ecfe26abb0987212c5d019770cfd29a38cf `

- R 目标：` ebc03d7bbc6409ef640ad00894beb056a0fafbe6 `；action=applied。
- 原 R 目标：` d8605c1464bbdfcc8942fadd18298584dfd93781 `。
- R 内容路径：` backend/drm/drm.c `。
- 关联 C：` a63c6b131122f91f85792cdbf9fe462d0d842ae5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4353caeb24222b3e9a9862997814d794ae00b94d `

- R 目标：` 339693dea618a403748e8c168ec5a2e80581f38e `；action=applied。
- 原 R 目标：` c6e03b639cf84e92a070b888a775679c2a13fc37 `。
- R 内容路径：` backend/session/session.c `。
- 关联 C：` 9a32885b7ad23c656e7ac06cde6301869f1d4c91 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7b7c401f960cb323ac70ba3b3523f3f0df15970a `

- R 目标：` 5b1db19746b5e9d849aa236a946f105b4387ab2c `；action=applied。
- 原 R 目标：` e19df4af1b227cd90fdd0b9bbcb2db7f95896211 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` c864484bcc89dfaa353a1d2cc41cb4baec75f8f2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ab94ac3465ed64e79b82c0c33bebc84c650d9d4c `

- R 目标：` 15547d1adac913a566a3ca619e0c0163b0fc2e70 `；action=applied。
- 原 R 目标：` 421dae231ad91a23895d6aa35fbc903e2ba18eea `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 3ff70cf762ec20ef48183210b85aaf1143d4829f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8cb8af048a6aab2dfe8e972ebbac757d18952ebf `

- R 目标：` ce1337e155370d20d87e57769735ec4d70b12422 `；action=applied。
- 原 R 目标：` 287b0f3758ccfe5742ac26181fd034c1530601a2 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` b75ab00a0c5166e22bc32d4714628da29b1a1c01 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` de8a45ad87af71675c2d1e8bdff0b84578e4afe2 `

- R 目标：` 018f75906cb1ef53e700c282e24c3b7225d67553 `；action=applied。
- 原 R 目标：` fee73bb79bd9a583ee75f7bd64eea4ede1634ca2 `。
- R 内容路径：` backend/drm/atomic.c `、` include/render/vulkan.h `、` include/wlr/render/color.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `、` render/vulkan/shaders/output.frag `、` render/vulkan/shaders/texture.frag `、` types/scene/surface.c `、` types/wlr_color_management_v1.c `。
- 关联 C：` 329020b96a1c580f64cdb16b615eb02b015baddf `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 14bc196ab3bd402cfbf024ad7161ea740d9438d5 `

- R 目标：` d282690f11c5b5d9e7555b69998d4c2749621e34 `；action=applied。
- 原 R 目标：` ba62031f6bf52ac3e47ecf46167308e107138851 `。
- R 内容路径：` include/wlr/render/pass.h `、` render/vulkan/pass.c `、` types/scene/surface.c `、` types/scene/wlr_scene.c `、` types/wlr_color_management_v1.c `。
- 关联 C：` 838003573cb2dd04b93bb2be6d3465d2465c7ab5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1b12bc8f66b4b00a3106978d5dbfdc32f79477f1 `

- R 目标：` fe4e3bbb0b5e978a4b267fc4d979f02b41f977fa `；action=applied。
- 原 R 目标：` bb0966ed2b4d3c15a5def048d89a3ecc28b8fe78 `。
- R 内容路径：` backend/drm/atomic.c `、` include/render/vulkan.h `、` include/wlr/render/color.h `、` render/color.c `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `、` render/vulkan/shaders/output.frag `、` render/vulkan/shaders/texture.frag `、` types/scene/surface.c `、` types/wlr_color_management_v1.c `。
- 关联 C：` eec1fa673c2bdc9e3f50993f5e2d63e5798d83e0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 281b27d95f3c8a0530023f2f33e514c894a2a4eb `

- R 目标：` 3ec756c2dc4449106c07c057d285fb814ccc2962 `；action=applied。
- 原 R 目标：` cdbb40689cf086dc18d54e58247e90a1054e8029 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 3170541414acca10529893792294605ff16ac713 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d9a79f78d0d3e7dca79fd1ec3c42bbb93b4d9119 `

- R 目标：` 481518c7c0237c10f675d60ad20de4e6dbc74ef1 `；action=applied。
- 原 R 目标：` 30cd39916ae691f08018fa32f97eef13800f00a7 `。
- R 内容路径：` .builds/archlinux.yml `。
- 关联 C：` 5f97e5c124af8e0da70cea949b430bd0ab5ad809 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 176a8cc2e8a5aee7d7f658a0e48aae7273bd0164 `

- R 目标：` c7465d7f575fc067e699e9527ca528c4f847db24 `；action=applied。
- 原 R 目标：` b5b94d13cc9e0f41c02402b4779f363bc749fad6 `。
- R 内容路径：` types/wlr_input_method_v2.c `。
- 关联 C：` a5c42867cd39118f54c3c4295cb9b87a97fc235f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d1aad42faaf0e715d3ef79f329827ab6bdad8709 `

- R 目标：` 323da48290ee6f5f0d755f9d9ff74ef7b39e4341 `；action=applied。
- 原 R 目标：` 0085ef5ad41ae9151c1d3689f3638d46ee17971f `。
- R 内容路径：` util/box.c `。
- 关联 C：` fef499d04dd353f718addc084a2e88aaa9a7df3a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 067a405aee6453f2be435febaeac6bb00fea3b5a `

- R 目标：` 2383bbd2f665f32ef9e41507e7396c5831e06aae `；action=applied。
- 原 R 目标：` f5e922c6e1a40aeb14ddddfd9397a4e2e8f568f1 `。
- R 内容路径：` types/wlr_linux_drm_syncobj_v1.c `。
- 关联 C：` 08102cad998f241d4e762b5604ffc1f1792d31f4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 376af70c54377ce8266a194c98b8f6b89a07abb8 `

- R 目标：` 10989ae5309dd226e2007f2c837767a0aa3adf8d `；action=applied。
- 原 R 目标：` b4bb496f8a5bdbdbf223918f020fb6b206b03ee7 `。
- R 内容路径：` backend/session/session.c `。
- 关联 C：` f4754aa1f93cab8a0e76ee75a5cf6100f5800ee5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f6962a9d32fe455341ece7d6c90b4dfb976f9755 `

- R 目标：` 595ec6543a57b8e91345dc1d9a349e9838d5042b `；action=applied。
- 原 R 目标：` 1cb627e5ea78d11e62f70965c43b515aa5d32ea6 `。
- R 内容路径：` include/render/color.h `、` include/wlr/render/color.h `、` render/color.c `、` render/vulkan/pass.c `。
- 关联 C：` 4720d5b0a45b449ba3d5dcec49ab267eb5624ac4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a193b80ad2a620584e4ef3ef276f0df67a9abb1a `

- R 目标：` b6c31fc9d68003d5005e6de561fc02d27407c159 `；action=applied。
- 原 R 目标：` b0345a1f86e84faa4267f68241ed63e4f7cf0816 `。
- R 内容路径：` include/render/color.h `、` include/wlr/render/color.h `、` render/color.c `。
- 关联 C：` 632f52c194ef4c4ed28390672620298ed48e4f66 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 157c8e5c6d66ac8f8bf878bf9314cc18f796d576 `

- R 目标：` 35857785c05b80402fe092f14645281c700b0dcb `；action=applied。
- 原 R 目标：` 5b7de26d386254814e90faee276e340457018875 `。
- R 内容路径：` include/wlr/types/wlr_output.h `、` types/output/output.c `。
- 关联 C：` 838f8a9f333d3bb234687326ffd197f58a6b77d3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8a1c9cb02c96da1e87b6648f729154c30d57dc61 `

- R 目标：` d8964335277c25f41bcb8dac3aa1b270718e3ec4 `；action=applied。
- 原 R 目标：` 898d4e5cd71a8a09a6c5ceb2f94b5982d7f90f5b `。
- R 内容路径：` include/wlr/types/wlr_gamma_control_v1.h `、` types/wlr_gamma_control_v1.c `。
- 关联 C：` 165a20d1143d9378c2df70fcfb749df0a01f56ec `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6af85fa8f6fbec935f4395475f7af72e798ee51c `

- R 目标：` b593be582369380fa605fc0aa462390b8bc65d28 `；action=applied。
- 原 R 目标：` 373ae6578ab5144cbf5965a719e4fe12b1bd0d90 `。
- R 内容路径：` include/wlr/types/wlr_gamma_control_v1.h `、` types/wlr_gamma_control_v1.c `。
- 关联 C：` 5feb7f4b77b4e4bf7674dd84d140d087798baae0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a8ad377c4b0933fda640a95ead1786e39a479152 `

- R 目标：` e19d0a0d1843fb5a2658dfd72594cb899dc933ec `；action=applied。
- 原 R 目标：` c7106119c38a6df8f8f8f0cc3530b22c1c30ab6c `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` d847a0c3d6d5d76a13d84c70ab12ad5aa659b2e1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ee51b8c2d6ab1f641b3923d85cf3f3d400806a6b `

- R 目标：` 816c23f7b02cd285abfbd5a0a7c7216a181d1fed `；action=applied。
- 原 R 目标：` a0bf3d4ecd4ce53504501cab0899e85a29edeb19 `。
- R 内容路径：` include/xwayland/xwm.h `、` xwayland/xwayland.c `、` xwayland/xwm.c `。
- 关联 C：` 0313dbbbce692507905d6888e9742a9546057a18 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 0ad625e31c0e3db7cc06ed5fcb78bdc264bd8963 `

- R 目标：` 2e80099b2c77693a0a4a3fece4a0ba5abec769b4 `；action=applied。
- 原 R 目标：` d6294f7c717c8e063d74d664084f29758f6dbaee `。
- R 内容路径：` render/vulkan/shaders/output.frag `、` render/vulkan/shaders/texture.frag `。
- 关联 C：` fa321f6a65fbddee5e1705939b520182e6096231 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` cd468f22a2d22b122ae7f90a106b2e17be4425ed `

- R 目标：` c50d408deb4fbea97633bb59599b627bf18963b6 `；action=applied。
- 原 R 目标：` 10ca5eab7ed5e9867f2083fc0d0b8e2c994c2bed `。
- R 内容路径：` types/wlr_input_device.c `。
- 关联 C：` a42a448c34430a2f160af30b6fc62dd539b40100 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ec2cc0d8f046917b349beec7427acebe1e9fb92a `

- R 目标：` a0d0dbfe765569ae63f2eeccc82680a42b5ccef1 `；action=applied。
- 原 R 目标：` 0dc396c2f8776d88447e23346af209e32cdcb38a `。
- R 内容路径：` backend/drm/util.c `、` include/wlr/types/wlr_output.h `。
- 关联 C：` 5362486aa8b01a51169e468acc82c2ceea33da00 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 74ddba3ad69645de9c9d0574ad1b51f31f6acc15 `

- R 目标：` 4779fde87a598dbcde6da9626bc371b90acc34bf `；action=applied。
- 原 R 目标：` 60ceda76eac07d74fe1ed8374110f1be13656c02 `。
- R 内容路径：` types/wlr_virtual_pointer_v1.c `。
- 关联 C：` 29d1a0910001fb661222bc6c2834214d6e000b41 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 98311478a1842967c73b02182288a3d8f6794605 `

- R 目标：` 6aa18128cec596e55b81c8c7a4b19b422849b779 `；action=applied。
- 原 R 目标：` 93a0cf5782bd6f2dbac6e0f4e5ff12c1665c1888 `。
- R 内容路径：` types/output/cursor.c `、` types/wlr_cursor.c `。
- 关联 C：` aa9327ad36cf4b15b97f9adf71335d449476dcb6 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7975208b038626a0df83fc285aaba339c52d8115 `

- R 目标：` 5ead67aa602aaaa38922d49b223807832b03f56b `；action=applied。
- 原 R 目标：` 47e25181f5f12b99b7f8b3b68f0a6aaed306730d `。
- R 内容路径：` include/wlr/render/color.h `。
- 关联 C：` af7dd4e41ba112c0d4a6e703f74054965c6bd292 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a6acfaa2493ccfb4848ad4455df0e048d0f250a0 `

- R 目标：` be8ec22ab73e8bd5ae5300e8559b623a31a8606d `；action=applied。
- 原 R 目标：` 09b61a3d0b882254caf93008ef6765d275221def `。
- R 内容路径：` include/wlr/render/pass.h `、` include/wlr/render/wlr_renderer.h `。
- 关联 C：` f42ba3e3c182094628987c5651a77e7b2ef6113f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 062478639d1a54ce37b217b56ab0da36cdd567cd `

- R 目标：` a7cdf8cd56f4fc88f74d7741bb061281f439f135 `；action=applied。
- 原 R 目标：` b2bcb7fbf977d8b1044fff3769b3dd64de31cbe5 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 1dfd40ec41b18653bc7aadc81c00af9fefab9f1f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6c857fd08e4b9f38cf859052a51e0f70b0bc0534 `

- R 目标：` 687f1b2edf247ab1d78b6bee30d3e52fb4d2f3fc `；action=applied。
- 原 R 目标：` be06b6343fada49366c347efc6faf3642b6a8e3e `。
- R 内容路径：` include/wlr/types/wlr_color_representation_v1.h `。
- 关联 C：` 8650d2e38e67f923f057b8aa2d77b7603cf1d0bf `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5706871fba99a052671e17f8f9ecab92fb5927a3 `

- R 目标：` 98916d234e9972cce3eea9e2e813f76c1b51114f `；action=applied。
- 原 R 目标：` 1d52f153bfba7984cd4d821d81f35e084649fa87 `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` ec14f93b9acad59f8b55c98d180c6c2e356cbe80 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d8a3e90459942b4af5d0869901d8f1be12fbc40a `

- R 目标：` f510b4e3c3c03c8a4f832b3de39f69a86c886222 `；action=applied。
- 原 R 目标：` 4186371f3f0e9b18446ff3061a27fc087a8fa8e5 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` bab4e673ff08164322f7742d459e95432fc01479 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7a6e9e84bb9a20d6d8d4c170b40689b05044176d `

- R 目标：` 98c0b8e5ceda7120297c25a4fa84bb3d9cf190ce `；action=applied。
- 原 R 目标：` 78c050257c42da5d8e26a213e8806707c9cb97e1 `。
- R 内容路径：` include/wlr/types/wlr_color_representation_v1.h `、` types/wlr_color_representation_v1.c `。
- 关联 C：` ee64e991d877ce01935a70ec0cb4b1b7e5a535e1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 185dbab6bd716e5de74581d12a903e3eba742f83 `

- R 目标：` 962ad27107731d34420b21bcf7ecedeba62fc973 `；action=applied。
- 原 R 目标：` 9b7a7f3ad3bd1427f90657ce7b9ac5f5a7f6ced9 `。
- R 内容路径：` types/output/state.c `。
- 关联 C：` 101008c3e83b875773627f701189ac9d7b755df2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b134d3316de3017b1b520e4dd0077e703b50438c `

- R 目标：` 32574744af93312ef630fc3fd57c72d95ddef981 `；action=applied。
- 原 R 目标：` fa6aea4fbd30d906564fd57be6a5609f1cbc11b1 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/renderer.c `。
- 关联 C：` 78eb463ea2c735d8798886f964f431e57f917bb9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 57c36469b466184c578da62d73bed578e4783258 `

- R 目标：` 0ec361a47167dcf5773ab15721f4a4364874a602 `；action=applied。
- 原 R 目标：` e89cd6275b0b6dd623894b4b98306e1ad1f0ebf6 `。
- R 内容路径：` protocol/input-method-unstable-v2.xml `。
- 关联 C：` 57535a4dbaac6a89579d2b75c0ce2b8f6d2014ce `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2bcefab7736eec802cee9293c3e1ef45b94c5391 `

- R 目标：` 78cf496b425779fc1fa623a439fcd85e3a24ac06 `；action=applied。
- 原 R 目标：` 1077861e0dbe86599aa1e8e0e25bc9eac1154940 `。
- R 内容路径：` protocol/input-method-unstable-v2.xml `。
- 关联 C：` 0731daa24b274a9a6ed21cdb1d33395d7895a82a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d6a6ecfb0ba65b1e0142740edc046ed95a45c733 `

- R 目标：` e2ce6baeeeea748fe9968074caecf06fe4a04227 `；action=applied。
- 原 R 目标：` 87185a0345538b7ad944dbeb9a10bc563e018bfc `。
- R 内容路径：` include/wlr/render/color.h `、` render/color.c `、` render/vulkan/pass.c `。
- 关联 C：` 8c4e4cad9ba890f68447a997ae3dcd30aedcee44 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b22ff363877fff122484669b129585f21fb1789a `

- R 目标：` c0f6bd810151fae94ced7055d50ff8abda577927 `；action=applied。
- 原 R 目标：` 1cf868f254be0f1bc85cca31bc169184396eca57 `。
- R 内容路径：` include/render/color.h `、` include/wlr/render/color.h `、` render/color.c `。
- 关联 C：` cdffda4bb04ee0273cdaa1de52f0c518fb06564e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5b312c3ecee51220bdd55cf7ac94482d45039f22 `

- R 目标：` 11c9f1a3dccccd665668c528b0a97f83e70b7dc3 `；action=applied。
- 原 R 目标：` fbe836e2f70cf4ff7aaf7583c7724ea5b7ccacef `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `。
- 关联 C：` f8dfba21317b9bc8d6ed07dfea72ef3f4f0d874a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2db1217d9547190f1a0636321ac9d92018a18511 `

- R 目标：` 77f7166a8282536f20721603ac51b40fdad001c5 `；action=applied。
- 原 R 目标：` 167a5be273ebf66e460ac3a43a33c93bbd3c091e `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 12018d0dd52536d9a2b0328324b210d67c089db5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2016ffa81ceff6c6bbc6e95f53cae5bb8a101d66 `

- R 目标：` a7a8c1556da5292d9ea6afd5673d499e206ea5ed `；action=applied。
- 原 R 目标：` d996f85289f90232519795eff16ebede045ebea0 `。
- R 内容路径：` include/render/vulkan.h `、` include/wlr/render/pass.h `、` render/vulkan/pass.c `、` types/output/cursor.c `、` types/scene/wlr_scene.c `。
- 关联 C：` 95a2af04f152ec052a8ac34bd1541adf0ed6c0d9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2b150ee90c8091c9f9a798521e566b7fe3dce935 `

- R 目标：` 8ff1891d7c9ec27d91d9a33f69700e08483a6917 `；action=applied。
- 原 R 目标：` ee221e1e27ed31b85a7da3ff9cd6cb30416fa5ad `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` 3b0b20bbbb32a2df362b4beff3dfa3fe3821e275 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5937df5c87b4785cba5b8a81886f4850d5dd61fb `

- R 目标：` 3d220de3c167be71ce3202881b02c8b2309df057 `；action=applied。
- 原 R 目标：` 12e5d3dd5aa19178dfb50c1130cb738fc2d63206 `。
- R 内容路径：` include/types/wlr_output.h `、` include/wlr/types/wlr_output.h `、` types/output/cursor.c `、` types/output/output.c `。
- 关联 C：` 383a489da26ef398b82d0b13ddae613b7be66ff5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d842378e12e4a35671be9d5c21d37cd08d13c459 `

- R 目标：` 472a6aa658bf4694ee5bde059d028e561f1891e2 `；action=applied。
- 原 R 目标：` 7c1f6a2b7642ac7804ac3f617f8bccd2304a27af `。
- R 内容路径：` types/wlr_foreign_toplevel_management_v1.c `。
- 关联 C：` 4858cabcc163c192e3690e9eb9383d02a9de1e89 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 90691cdea7530c371e3805e28b479c06b8c04aa0 `

- R 目标：` 049df3a0e56cdd1993e84009fb270e891d5ea998 `；action=applied。
- 原 R 目标：` 6be1b7be9c03686950afd014473faad54ce83906 `。
- R 内容路径：` xcursor/xcursor.c `。
- 关联 C：` 3dbc2d769b1bf9f0700736a6657c648fe7b2b1a1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` da21f4e5915a14fea778d9fa038fb434f893d4e7 `

- R 目标：` 90fd11be731e27ee9f644ff5a9b7608045f03ecf `；action=applied。
- 原 R 目标：` 3dbbc8746af642bdff040e70da80bd80065a7d62 `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` 46072e58789574589ea3f989176b6c069a81a5a8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f7face1e13784f9b4de186ccffc70891c0fe63d4 `

- R 目标：` 8bccbcadc72e043781cd508b9e75547ce428e08a `；action=applied。
- 原 R 目标：` e3f01fb528200937fe08deebbe03936d03077721 `。
- R 内容路径：` include/render/color.h `、` include/wlr/render/color.h `。
- 关联 C：` 5a3a57693d4f0955c54b8f4beb988757c91aa067 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 81aba2cb86984a3be3b18bdd56b7d7fd14e6f7dd `

- R 目标：` 31030e631716dc127621533f26367483573d545d `；action=applied。
- 原 R 目标：` 3d88608edfa07d84045b7ce21ae1fceeb04fa1fa `。
- R 内容路径：` render/vulkan/shaders/output.frag `、` render/vulkan/shaders/texture.frag `。
- 关联 C：` daaa763fb0b5f0518217057091c6c2887497cce3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e967582c197f412fc46eab0890e8181de7455e8b `

- R 目标：` d1e250df442f1e9ccdc9ea2d8fd3a45384a5062b `；action=applied。
- 原 R 目标：` 42c05746dcf2d0f7cba9392a7164238f5a1becff `。
- R 内容路径：` types/data_device/wlr_drag.c `。
- 关联 C：` 9071b37212e1c3a04bc727ccc45fc0b583597f2e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ba5abbbf116d925c10ce8f9f3113849df5d87aa8 `

- R 目标：` 4b81b60568825c871ba3db4c083a65c6188634d9 `；action=applied。
- 原 R 目标：` 9d1592fb9b26f48f681b94dbc40a7af660e3bbb2 `。
- R 内容路径：` include/wlr/types/wlr_seat.h `、` types/data_device/wlr_drag.c `、` types/seat/wlr_seat_touch.c `、` types/xdg_shell/wlr_xdg_popup.c `。
- 关联 C：` 9dcf5ac2e4271f8d0c7aeecb134e4d7e95fcdfe2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4ea7c83c74b513e9f2113805e58ffd761593373e `

- R 目标：` 9de0785507fee99f745c8248c4f7de07b58f545d `；action=applied。
- 原 R 目标：` ca088ef278cba72f73d4bf405b1e6bcb47ce39a5 `。
- R 内容路径：` include/wlr/version.h.in `、` util/meson.build `、` util/version.c `。
- 关联 C：` 051c9a8fc50ea6caa829abf9d5dfdc7b369a4aeb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 71c789fbe3542417423e61363791d565240c9da0 `

- R 目标：` a230d2fd202530ff90570c5c579d9a26dc868399 `；action=applied。
- 原 R 目标：` c6a94bf825bb2188dc7fb3e2304c30aea5216424 `。
- R 内容路径：` include/wlr/types/wlr_color_management_v1.h `、` types/wlr_color_management_v1.c `。
- 关联 C：` 90549545dca6316d39429ea7512cade051889f57 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4b83bf88e9e763439c03a01e733e0946e0b52cdc `

- R 目标：` 34b9612fd487c5fc101b30987ec27bf265f1ecaa `；action=applied。
- 原 R 目标：` fc6ed7de2704089632e0e8ccd517f23e29110919 `。
- R 内容路径：` tinywl/Makefile `。
- 关联 C：` 2ef506d3c868cfb2e5159f56001e695b17edf10d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4f0ce89fb2c884c5109838d66a6e5f24d2383e5d `

- R 目标：` b95f5afd40ea5d831e34b5d5e249b66ac9829332 `；action=applied。
- 原 R 目标：` d90caee6e368e5d6031787b221a2ce7ac99db202 `。
- R 内容路径：` render/pixman/meson.build `、` render/pixman/pixel_format.c `。
- 关联 C：` fc67c471a9564d919e586e2f8087803fe9d1ebd0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4c0f2e48eb8c07c157d541770862f10887d05201 `

- R 目标：` a0adc25a9fa92460cf1609c36c2dc8d5d52e38c1 `；action=applied。
- 原 R 目标：` 8058a4fa02f6d166eb6f91f7f5a0037488e7f630 `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` f15254642b1a40f5db7f9b7cc6a2a0a6ac99a30c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 067b0ade78281960f9e31aa4820de0bc86883cf8 `

- R 目标：` 0c9c8852eb4a22395e1f412f027c16c857bb29b4 `；action=applied。
- 原 R 目标：` 8be523f7597031070b104c13d0b6a72234f08800 `。
- R 内容路径：` include/render/color.h `、` render/color.c `、` types/scene/wlr_scene.c `。
- 关联 C：` 6ebaf88c4337fc4834de59b12417fbfe39be7503 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 75d29da9934335df1a7717be0d795765e46af7c7 `

- R 目标：` 29233a50ad77580f0d531f1ebcbfe1f615262ffb `；action=applied。
- 原 R 目标：` f3a9cd1972cecf66c7e7df53aa72546630ef4e75 `。
- R 内容路径：` render/color.c `。
- 关联 C：` c583c9575d4faaba65f141cad6567aae3b9403c7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ad86e8232cf0a4304b39f03826a85c8d99daa4da `

- R 目标：` 12a0ceeade3859681b70c93ecdc50a13a85750ed `；action=applied。
- 原 R 目标：` 673e148641b84f26635f5e69474b25c41e33d724 `。
- R 内容路径：` backend/session/session.c `。
- 关联 C：` 4aed4b677206e9f6ddf9bd6e81fa184a70a6550c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 76e9d812c4171953af224eb9c2261ad4d406fc07 `

- R 目标：` a2647814104d93ce53cbd1afdfe1814bd2a7f419 `；action=applied。
- 原 R 目标：` e3d213ae5d53230f5785ea93d5dcb5a3d9bf3e61 `。
- R 内容路径：` render/allocator/shm.c `、` render/allocator/udmabuf.c `。
- 关联 C：` 706cb329d4e88345d68c5fa7f59421c4adf4c405 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 0c10122d1ebb57b0643585fc2c7528d5d7cdf36a `

- R 目标：` 164f6dfd0fbb50453f404788707407958de775c2 `；action=applied。
- 原 R 目标：` b6f9064c2dc49c31729505b487204e4b985245e1 `。
- R 内容路径：` backend/session/session.c `。
- 关联 C：` 53bc3e4ebe780a236d58f967e3c1a0fa970ede81 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e9c267ff80ded1d3d9aad35557242b393ffba4e6 `

- R 目标：` 7dbd34584bed04f6445807fd83011652e0d3f094 `；action=applied。
- 原 R 目标：` 369007909de1076025f596790ed39fa544667d51 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 7a6c64ccdb040fd99b4220172ce5c73832f939b2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b00c4f4321a6811340eb21790513eaef257daad7 `

- R 目标：` fd2191bcdb72659990b97ba92f773bc52ad8783d `；action=applied。
- 原 R 目标：` d903403845cd7db5ed282c22cfe26b5b8a2ebe75 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` cb540ea79f69e2646c54018dabb480bca29b04c9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 26876224f2460506f1eb0a6ca43ed7910c3e9a4c `

- R 目标：` ee6fc2b687dd0a099ad31e1d9fb3c215ab333430 `；action=applied。
- 原 R 目标：` 722d31962f183be00db66e32dd104cbf61996b17 `。
- R 内容路径：` meson.build `、` render/pixel_format.c `。
- 关联 C：` 469db003f143d566b7f6d311419b696a910fbc37 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 39f129f848fd5a310087dfdca21f65912b755eed `

- R 目标：` 43996d220a15251151b3fe2ff6353754648345c3 `；action=applied。
- 原 R 目标：` 6affe1d02bf973619690a3a6a6fd2d5e24ad4dea `。
- R 内容路径：` render/gles2/pixel_format.c `。
- 关联 C：` 5b176e8632e13736af2b92042a8dbfdc9eade66e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 43c1fe1ed8f964937cd59101f3a0dae71c2aaac7 `

- R 目标：` 6c31dc4cfa1cc88d93507213010433db96ef72e4 `；action=applied。
- 原 R 目标：` 16ab1af6e28e8c50051bf89c933b1c514a90dd2c `。
- R 内容路径：` render/vulkan/pixel_format.c `。
- 关联 C：` 8b4d4a6d99a7ab140d1a62e2832d7078cc9f5a93 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a8ebb8932f8f28fa247f54e394db0133f1363051 `

- R 目标：` 93a72ca30cb9a7c0ee10e5a80ab6aa450463eb30 `；action=applied。
- 原 R 目标：` f072ba1233999615ef9a78a4d268ec97929ecdc5 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` a4bdd584addfbe57bee1b9f4b68215fe984fcc95 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 36d6251519cb258e33455dcbeee700b29c818a80 `

- R 目标：` 9e675c00fcfeef95ccf73328ccc218180307e5ae `；action=applied。
- 原 R 目标：` 98ba5371e889f739017628c4a71a527bcac5aebe `。
- R 内容路径：` render/dmabuf_linux.c `、` render/meson.build `。
- 关联 C：` 61a896900479706672b40e21cbfa0cbea9186dc5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b5bfbe09427cf35324917c2cbc2606490bbb0a57 `

- R 目标：` 62da332b65661e7ae6440b1e3510ec1384a25ef7 `；action=applied。
- 原 R 目标：` badb2fbaae51b739af0dadef5fe39b2b0896b94f `。
- R 内容路径：` types/ext_image_capture_source_v1/scene.c `。
- 关联 C：` dc05cc4095fc54511a90abe6c18c06254a5ecd77 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` bc8eee2feea24b094f952da1c8c5dd31ffd2c703 `

- R 目标：` b0d37b83767b38b553336f2bce4d65dec553d71a `；action=applied。
- 原 R 目标：` 3b1acb0f0b89670b6b700dddbc0383158f1b8572 `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/surface.c `。
- 关联 C：` 62168e68ed06cfce2daf103ec5e102a08ceebaf8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5d82753f7c09aaec904c85b54225b64301afe61c `

- R 目标：` 9c2e8bdf048777fb7b049fbd718a1f548613c8e5 `；action=applied。
- 原 R 目标：` fc1d812d039164a4b1823828ea11f3da37b39fcb `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` 419fac393c1b8206424f6efc8051e9f795437b0a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b174ad188ccd15d8a3121b97a9cc36c6a2f67fbf `

- R 目标：` 3b4b61556da8e0e61f51fae0d3be5f45e2268738 `；action=applied。
- 原 R 目标：` 44e57d35e27395d5e955234f94af549d7f4334e2 `。
- R 内容路径：` render/gles2/shaders/check.sh `、` render/gles2/shaders/meson.build `。
- 关联 C：` 383d7b930a5586bb389e643c2dc4a8b790ad11eb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 58f9eed9aba894fe667600c3e00a7310da425099 `

- R 目标：` ceafa41d32fda303d16f1f6c0c52561db632024d `；action=applied。
- 原 R 目标：` 32c3297db477f675e21a9dd57b5c7000f84d003b `。
- R 内容路径：` xcursor/wlr_xcursor.c `。
- 关联 C：` 4406185ea4271eb17564efd03fb8f6859bd0bf83 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 47b86e3a72846d16bc15de91d9e25307e74a6f9d `

- R 目标：` ac54f13580598ccfc995eaf44ae9f879cc3d4aec `；action=applied。
- 原 R 目标：` 674e419bde0d0f5b4bb3576f00df8f356e1793f8 `。
- R 内容路径：` include/wlr/xcursor.h `、` xcursor/wlr_xcursor.c `。
- 关联 C：` d901075c54491652ff4485985bca3cf67b4c1a08 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6cc4e12f5165d20d987ba17874e9082c96b31092 `

- R 目标：` c4af94b6b2dfd1cfd7df28b811bc1c6d2c83084c `；action=applied。
- 原 R 目标：` 3b2d1e6ab21e13ef55e290ef29955a2d54ad98d5 `。
- R 内容路径：` types/wlr_cursor.c `。
- 关联 C：` 162bda79cf5293f9d60ddeac5f4203d0116068ea `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f1a83816508406225f8e5658e32d7e5a52066daf `

- R 目标：` a92fd671608611bebe0696629a27c8f0fae1fcac `；action=applied。
- 原 R 目标：` e0248e291663ea7ae151c3823dbaf58c6ec31cbe `。
- R 内容路径：` include/wlr/xwayland/xwayland.h `、` include/xwayland/xwm.h `、` xwayland/xwayland.c `、` xwayland/xwm.c `。
- 关联 C：` dc87d9ad6f018d9d0aaa5aa0413c7fb62d38fcef `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e2f55b8c3b12ee79a38c3140c31c3d7d22656a3c `

- R 目标：` 345785ed8c2ffe25373ff345d431b96ef1bd8f1f `；action=applied。
- 原 R 目标：` dc8b2d1cc6165359eb0e149b7a15c90a28afee22 `。
- R 内容路径：` xwayland/xwayland.c `。
- 关联 C：` d9e8aba0bbe8bebc2bb9ccbe569486375300d6d0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 389983c28b815abf4a3c963de2dce0ddaffc0986 `

- R 目标：` 3bd8ecc58ce9b04f0c501edd546f114598283f36 `；action=applied。
- 原 R 目标：` 8658c1e01e01258d9f4514a2701f299b0e3b54eb `。
- R 内容路径：` include/wlr/interfaces/wlr_ext_image_capture_source_v1.h `、` types/ext_image_capture_source_v1/output.c `、` types/ext_image_capture_source_v1/scene.c `、` types/wlr_ext_image_copy_capture_v1.c `。
- 关联 C：` bc9be88277fc3b41b73819758e3e191d3bbf8df1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4b62fd3265ddbc26db3c6c7d062bf102fb6c7d9a `

- R 目标：` bb566905557eaedeaf00978339f1bc3fa51ca6fb `；action=applied。
- 原 R 目标：` 6561236254325f1d90887ca41ac21f6e54c8c472 `。
- R 内容路径：` types/ext_image_capture_source_v1/scene.c `。
- 关联 C：` b6a7c78b53a7d7f6bc9057ae8b1b4de40832b60d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8b3d05ae4538d8d4cd72d5d63ee3109d6e76e32b `

- R 目标：` f921447743765c61fe70af72f895b0018bbd13dc `；action=applied。
- 原 R 目标：` 3b86fc6f73c30dd3a56df4f842bd009068b70630 `。
- R 内容路径：` include/wlr/types/wlr_ext_image_copy_capture_v1.h `、` types/wlr_ext_image_copy_capture_v1.c `。
- 关联 C：` 1124cdc75eb7a1a4ae95f902553edd3c0d203011 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f5243d5d08f98aa662592fb94c9032ba21bcb343 `

- R 目标：` d4e53867921874f07782b25a1eb775958e4e7d02 `；action=applied。
- 原 R 目标：` 042dcfebb9ecebd3099ed1393be6b0a276f816ef `。
- R 内容路径：` include/wlr/types/wlr_ext_image_capture_source_v1.h `、` types/ext_image_capture_source_v1/output.c `。
- 关联 C：` 1fa1144408b5ee89ba2905bcef8af5f9118ba45d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 48264e43b25daf9f396478ed753be4a47533cbc6 `

- R 目标：` 66d818509f19802e33ec71cb7f83788b59af6e89 `；action=applied。
- 原 R 目标：` da350dc93b7de9d730380c6a8de4de6d5aec0ed0 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 5c28de1cfeba8164115360e0daa4b3a6b784981d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 82fc3c6fd467be4b146db30daeae46e7c17857f3 `

- R 目标：` dc9b3e57af16416057917ae82099b36e1ec27eed `；action=applied。
- 原 R 目标：` c1de2ce26500e33def4f4cd80c1f0380847df088 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 20e77dbb9dcf6c792bd5cdd03aa7b1656c040b83 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6ba97a939ab4869d29102b4539ad9a4f1a9e8cae `

- R 目标：` 5c5061a4ff6bfde80f8b1dea0b3f5c4b11a1e778 `；action=applied。
- 原 R 目标：` 44819e8d426edc419a1e3dc9335dceee2df8be2e `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` d48c5646ce7f46f1ae4dfa506284a1e70ebcfeca `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 83fe6dd04a62bdb7f28406b90f61a0cc921e36dc `

- R 目标：` 560a67056dc4c83c47e13b3aa94c7111fe17f924 `；action=applied。
- 原 R 目标：` 3d628d7f4f584d309851c953d8aa9e23a81710cd `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` dc71f3e5c545e4f403134e9ad96221b862f6fb7e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 59871dc496250d6b03de9749a4422098e8f18906 `

- R 目标：` ab7e945a5b003b5922117742d42f9bbb539ad307 `；action=applied。
- 原 R 目标：` 49b38ff2d43413253928a3bca4aab52b1657e5be `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 53dcb940f2dc5e4d0d8fbf0485ba89efb8fab4dc `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7774ea8fda1917293324caae6922529bc1a7a846 `

- R 目标：` 3e6ebb223326c052d4ed4582de75f19e41a77e28 `；action=applied。
- 原 R 目标：` 4aa0f01a875c5ae1d0f6962cbeec86f82e424a30 `。
- R 内容路径：` types/wlr_ext_image_copy_capture_v1.c `。
- 关联 C：` 1d42aff732b644f4c747b554a7c893a86bf7f099 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 021cc6c2cf8255c98c74b4a18b7945de424ac65c `

- R 目标：` b7c215f9134487e0e720c3d207cca67a520438c0 `；action=applied。
- 原 R 目标：` e26dcc2bf277dcdb305bca958d614dbf23ac6360 `。
- R 内容路径：` include/wlr/xwayland/xwayland.h `、` xwayland/xwm.c `。
- 关联 C：` 081151a6a798c0cc5a592e560b51a686e99f8972 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c852ee8d9ce7dc8072f1be44b1349f17eda236de `

- R 目标：` 9dcc4eb7cf198597d3caa53e73506a077ecf31c5 `；action=applied。
- 原 R 目标：` 0ad8dbbc7ec4ec5786528242beb0024c58beb270 `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` a980e42993c6d513bd4268fd21f54227356cd58b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ddc9c388e4567b395043144773ebf06251178895 `

- R 目标：` ab082bec13dbbc29ef711201022d43d427489263 `；action=applied。
- 原 R 目标：` ec1e760ee8fdd9b04f4d153ef3fcd1fe4ccbdab5 `。
- R 内容路径：` backend/libinput/tablet_tool.c `、` include/wlr/backend/libinput.h `。
- 关联 C：` 30e1045264442a3db9610cd17a0a7833e3a4c696 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c93555dc03169fdbf42ab4aaf8e7bb1a74904084 `

- R 目标：` 28d07cd91fe4c7dac354813962d71caebc517216 `；action=applied。
- 原 R 目标：` fd4bc8b9cdabcf4d09a3a78d99a7eed80537d728 `。
- R 内容路径：` xwayland/selection/dnd.c `。
- 关联 C：` 2c8dda23b705ff54330aa21cf70e47de01c9991e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fadf5214d54853c1852e5be59e9b569e4068adf6 `

- R 目标：` 4105a1e373281a01428cc38e310ee17dfbba7612 `；action=applied。
- 原 R 目标：` aacc0203f82636d90fd32cde1982a9a263db92ae `。
- R 内容路径：` types/wlr_output_swapchain_manager.c `。
- 关联 C：` 5e51728ec3ea4fc9d4e05a2b5afd9b5764b78f10 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ab75ae1c5270a293dc63a07819982896abbc58f5 `

- R 目标：` 62e495381b2f104faccf12d230319bce4929ed10 `；action=applied。
- 原 R 目标：` ab1a64a9fcf719ad00a4c53193ceeb6a9305e71d `。
- R 内容路径：` protocol/meson.build `。
- 关联 C：` 2e15d8a516f52b88ac94ca60f3761059e8b3f038 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fd27ca253c30c4f08e7f31af1631c69824741b13 `

- R 目标：` 1137fd79f3f2f12cac4b6e6f9ccfdd39be52cd21 `；action=applied。
- 原 R 目标：` 558f6985a45b73f92beffb336edecadf605f77ba `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` bbaae63db3740656df7b1db5fb4e39d1ffc60cf0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a3bbf452fc9968d58d8c6e8c5eea7152d9ab867c `

- R 目标：` e811bd39577ddef143a0c8ad80871cd8324ba08c `；action=applied。
- 原 R 目标：` 74fa10d976e97b432b68fff87ea8ca51cf4e1385 `。
- R 内容路径：` include/wlr/types/wlr_color_management_v1.h `、` types/wlr_color_management_v1.c `。
- 关联 C：` 3a552f9275454ca97cf55a5a5d7556bad843bf9a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 26af21548c5d80dc1142f5c44557833632c4ff5d `

- R 目标：` 7db765dfd5d91d743db09af8e1877d9582ec1f22 `；action=applied。
- 原 R 目标：` ebdd96fa38f0b4ffa9b45e885706b3a7e2038599 `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` 89e5524a293695f40f5f22000a7377c9518f3694 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` bd6b287ac9d76591a55f554c0bdde1b3832a2309 `

- R 目标：` 1fa8c12af507892c2515c8237bae2f8d03efa98e `；action=applied。
- 原 R 目标：` 5d55fefc8f79cfcbdb8ea5c36cc9296ebae49b29 `。
- R 内容路径：` include/render/vulkan.h `、` include/wlr/render/pass.h `、` render/vulkan/pass.c `、` render/vulkan/shaders/output.frag `、` types/output/cursor.c `、` types/scene/wlr_scene.c `。
- 关联 C：` d0a37bb4c4ed572e94b95eaee74b2f91b43d03ad `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5d3fb87c4b682ee30b0633166127e2dac28f114c `

- R 目标：` 4e84420dedbb8908677001d797945afcd675042f `；action=applied。
- 原 R 目标：` b0089fbbdb6ec1396cf80aad7801e1bf395d305d `。
- R 内容路径：` types/ext_image_capture_source_v1/scene.c `。
- 关联 C：` 391a8bece190796c0d89421bfa33f7a7e4f56d59 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c2390909a26d9a9fc3c246c551ad80a69a7b66ef `

- R 目标：` 20c4cf898cdc8eea1388b1aac2bf32b30d2881f0 `；action=applied。
- 原 R 目标：` e1825639a7f231bc68a00aa3e09a0ce7fd152341 `。
- R 内容路径：` include/wlr/types/wlr_ext_workspace_v1.h `、` protocol/meson.build `、` types/meson.build `、` types/wlr_ext_workspace_v1.c `。
- 关联 C：` 2d8605c9ced89f0ecfb322de152672bf38527391 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 71270845bf373f80251e45756a8c286318294cc3 `

- R 目标：` d6f9fc338f553e5baba55abcf0541f9f0f015673 `；action=applied。
- 原 R 目标：` 6c112d815867d521eceac60e016daaf2af0c73cb `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` 4d7b91652d6e6a790207558e066eafade8e92d73 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` eb77b4b14501c40f1b1de2b99fb8bac620ee4071 `

- R 目标：` 076df8105ba3d6757ab0bc47de764eed9d05fadc `；action=applied。
- 原 R 目标：` 3b1cca08797a2cab085b53879dd21ebd016ff3cd `。
- R 内容路径：` meson.build `。
- 关联 C：` 1b5d2c6fa52fb31057fe50e88cc86133822ea966 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7a8f3e20c4cd9a4d66cb804af2a00f2d385a7c5f `

- R 目标：` ac131366cd5774f26889f5c921e41d5649b3971e `；action=applied。
- 原 R 目标：` 5c6356ca37ad0facbadb564d0ae2055e7825cc16 `。
- R 内容路径：` render/drm_syncobj.c `。
- 关联 C：` 005967b7e1b376a7c2fd98f03f8fdf0791fabec6 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6dd43c98dde630107bae193867bc4f6d69cdf092 `

- R 目标：` 6e4468c76f0e942ba687a12750fb19c2a01a9f00 `；action=applied。
- 原 R 目标：` a7b942d672493ed864251662b7d53a10e86b8a5e `。
- R 内容路径：` render/drm_syncobj.c `。
- 关联 C：` c5690bacde41a1415a5e1e1cb9ce6faf4f54477c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 3e2c4ba46b2a4048b8e7beb961080920c7ef0ea7 `

- R 目标：` 7fb26661d78c94e4176e367227bcbd750a4fa9a6 `；action=applied。
- 原 R 目标：` fa9f129b29bdcaacdea69b0ac17ff2a305376f74 `。
- R 内容路径：` types/wlr_keyboard_group.c `。
- 关联 C：` 4f0bf5096a3d2bf7d431acd3c5176a037ad8be50 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 99fccac3fbc2267c2750508111f70639ffb0ea75 `

- R 目标：` 51f0774aa44870ffdc8f44aad814ac483fd88ce3 `；action=applied。
- 原 R 目标：` e191998bdcfe95444f0efd8dacee1722a24e232b `。
- R 内容路径：` include/wlr/types/wlr_cursor.h `。
- 关联 C：` 060197bf8e43323661a6c8b3321256a4637e33f9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a69221cdcccb767a6167b5854239ddc519f27788 `

- R 目标：` 20b66cdd3d24467533b12f9985ebaef3efa9efa6 `；action=applied。
- 原 R 目标：` dddde4687b6f883c94bbd00729b87ed275fc7a74 `。
- R 内容路径：` types/wlr_cursor.c `。
- 关联 C：` 38fc70179beb4ed3e9d494d84b9681e021741686 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1f07ad74867449605c595af816f92dd3e73bcce5 `

- R 目标：` 5f36e5bf4826ae19834627a3b7426803b85c00f0 `；action=applied。
- 原 R 目标：` 10a088411da0a1e3fb031baae6798751b4ab34ee `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` 385044f92cc53110807d76835adf24b2bf2a39d2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ed9c8498336eeff3fd9502740ec48191b2c6d984 `

- R 目标：` 209f428f16242ddb3753cc41b68e9f3de98c55cc `；action=applied。
- 原 R 目标：` 6868bfaaa60e24a36d496574be675030be0a5ad4 `。
- R 内容路径：` xwayland/selection/incoming.c `。
- 关联 C：` 2db43f4f2700ca6d410de9192c556e68fdf3f450 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 092a194ac64c581e62bd64ca05c904d01b143296 `

- R 目标：` ee9eb844b942d92685a911a70578ebd5e236103b `；action=applied。
- 原 R 目标：` 2dc58384da428eb7f18526f11a00f9ebcc562d9e `。
- R 内容路径：` types/ext_image_capture_source_v1/scene.c `。
- 关联 C：` 2a70b280b857edac6a10e207213c4f4d67f3549b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 50f1a3b7acc17d93ac453b95b31db4b0f14eb00d `

- R 目标：` 4e8c6edca6d59a922b2732a7592edc470b0d55c3 `；action=applied。
- 原 R 目标：` 72485afd6af6bea2c2361c0e8523721d39658c32 `。
- R 内容路径：` types/output/cursor.c `。
- 关联 C：` 623b7bd23822f5b76b31517143256512cae2b8b4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` a05e29aa1f38147a6795a90b3572e9ae00b1d523 `

- R 目标：` 5676b230796d424bf86747772ff4d0156ffb87b1 `；action=applied。
- 原 R 目标：` d5db29410758b29d16ad4ef91b51ae1e1f2cec82 `。
- R 内容路径：` include/render/pixel_format.h `、` render/pixel_format.c `。
- 关联 C：` 88e5cf5bfec7323c8af28f9ffbc69fc31d2b6f51 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6ca4dfa6fc6fdfe86af2adbb5d9c8c907b6d6c15 `

- R 目标：` f3b73e87aea99a667be090f0e7b5024fd9412a53 `；action=applied。
- 原 R 目标：` 7ed907f86257672db95a6e2e5493bb289e212d6d `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/pixel_format.c `、` render/vulkan/renderer.c `、` render/vulkan/texture.c `。
- 关联 C：` a8b2172221d85449fb8ecbcad7a28129d184990c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f2b078c4f9d952d9115904183c11a187ffdebf1a `

- R 目标：` 122450f3de031ec7e813af1409426fa0a52eba29 `；action=applied。
- 原 R 目标：` 72ca5270b40011b4c5caac5976c11de61fd14b45 `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` a5076d94d0d0b0f321c5dc100cec9463d7097d9e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d8728e7e6240203c615eff349735f3daed8429c5 `

- R 目标：` bcf04107aaeaf22951bdc0e00db9407eee12bfd0 `；action=applied。
- 原 R 目标：` 59e9cf979892ab393913a3be1f8853e5e5e200e5 `。
- R 内容路径：` render/vulkan/renderer.c `、` types/scene/wlr_scene.c `、` types/wlr_color_representation_v1.c `。
- 关联 C：` dbcb5c7a756854cb075d8a7c5119a3b12ef5ae51 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c2e66806de72b0a4a12220a752e4c69386a946fc `

- R 目标：` 512aecef5cd8ac2d45bcd3f119660957254c769c `；action=applied。
- 原 R 目标：` 87b128dc14bb7e0ff3bc251d63195c67c146b21e `。
- R 内容路径：` backend/x11/output.c `、` include/types/wlr_buffer.h `、` types/buffer/buffer.c `、` types/wlr_color_representation_v1.c `。
- 关联 C：` 68c84e6ff15dc524e3e6a854028d9d29e1f0a71c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 59d835a1f7b3211dfc09070ea0aa7a509c125e45 `

- R 目标：` b8842e50112e235d0dcbed917afadbbc3dc2d23e `；action=applied。
- 原 R 目标：` 56888f3d5e0c4a23ff5354d3c2b520b405041789 `。
- R 内容路径：` types/wlr_color_representation_v1.c `。
- 关联 C：` 1883c3a9273c8924d12c35ccf1add17700ec5b68 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2870ec3689bda747464e5127b0d87ccb13d5e292 `

- R 目标：` b873a6a678aa57bdc97c07f142afe7792181d9ec `；action=applied。
- 原 R 目标：` d1d7eb9260a003975dba4879643e761274ba76f7 `。
- R 内容路径：` backend/libinput/meson.build `、` backend/libinput/switch.c `。
- 关联 C：` 9677965cf2a54fc3c2f54e649da60a5655e13ca4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 28d97085e61eaa1c7fdfca9158d741508d74acaa `

- R 目标：` 22170cdcabeedb9a8d9d4e264ceaedccd68d0e2f `；action=applied。
- 原 R 目标：` 15f6d9ff6e0119747b561c8b0d99e0fbd2a72931 `。
- R 内容路径：` backend/libinput/switch.c `、` include/wlr/types/wlr_switch.h `。
- 关联 C：` abbf117e0632468d838cb92e5edd1c4c48236035 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6f77ec93958ceaf024988b7e3d074fae0690b69b `

- R 目标：` dbd588d4217e87d4e1f9a6892d54c34df947faaf `；action=applied。
- 原 R 目标：` 46dd26c7753661bd1831e4685b9fee5ade18f1ce `。
- R 内容路径：` meson.build `。
- 关联 C：` 0121a86a62762703b65b6307f9d35135e44fb66e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4864dabb6453b3eb7041c8e3b6703a183ecd565d `

- R 目标：` a8c0ab303ab88b870ac548b051db751def339f25 `；action=applied。
- 原 R 目标：` 2b02ea5135bdba197efb14ca510ba3c001c223eb `。
- R 内容路径：` backend/x11/output.c `。
- 关联 C：` 643dcb55fd497b5572a27c966b6954730c9b61e9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4d23ec22fda34f1ca2670bde9ab4ede3184863bb `

- R 目标：` 4ec32b94a67d6a09afc24ed4be986ef0be94d3b3 `；action=applied。
- 原 R 目标：` f43be16dfc12d4b8e3fa10e419a1e650224b8d2a `。
- R 内容路径：` backend/libinput/events.c `、` backend/libinput/keyboard.c `、` backend/libinput/pointer.c `、` backend/libinput/switch.c `、` backend/libinput/tablet_pad.c `、` backend/libinput/tablet_tool.c `、` include/backend/libinput.h `。
- 关联 C：` 64fc8a22a082ef6cdd3c8d7da77d6dd4b2a125de `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c36184c982fa24b4a4d234d361b01982ed7bb984 `

- R 目标：` 14f9bd4b377898e570ab13beca242c96ccf6ddf4 `；action=applied。
- 原 R 目标：` d54a8f7f2ca914a5b59148935a96cdee1882d928 `。
- R 内容路径：` backend/drm/drm.c `。
- 关联 C：` 524997c10e272535954425b0b847a53efa49e738 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 9d02d0388ca2cd519deb342fbbdd290b67a9f6cd `

- R 目标：` 0fa6cfb37eebd3003ffcd8ea9e41f53a4859eb2e `；action=applied。
- 原 R 目标：` a4f0d2001629474f39df0c30ec2ab0e1f7b70e51 `。
- R 内容路径：` CONTRIBUTING.md `。
- 关联 C：` 4b9d59bf3f87caf3db9cfee055f052c9c988ac20 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7b5eddb314e66f4fe69418fc3ae1ffede42d7969 `

- R 目标：` d852c95ff806b50bd58ecc66f7f4d18439904223 `；action=applied。
- 原 R 目标：` 2623f7ef0ac5d00821965bb219f486f10c79187c `。
- R 内容路径：` meson.build `。
- 关联 C：` 7cedd4a07a90ab245e401db0828187550436f4b1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 6dc4affecbb95c861c13b134c04c55030270fc69 `

- R 目标：` 46675caea94e1475084382378935d8a98c6e4604 `；action=applied。
- 原 R 目标：` 8ca34b8fc2369fb8c31fccc0c5a88dd09ba56d16 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 9e63f64733930596fb0f1045dd01c4519d22809a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e567d0eb4f588c0bff923695dda75da1ef184a6d `

- R 目标：` c2270ab21b476a421dae55d733c3494ff2fa5c14 `；action=applied。
- 原 R 目标：` 57847df9de2bd58a1a0ac428df92814bbf02e309 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 8576c5392fba0fa7a4e4e732620db3461a5f1381 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fcb7f7e59ffaf681611e8cc382e3bdda2158e2ed `

- R 目标：` 4c39891c0296fba93110b78cbd79b9b26f2480fb `；action=applied。
- 原 R 目标：` 4b0283c017a9ce379cd56550f56825a04adfd065 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 95aeffdc7a1813465336dfb4c76db46db1a485e7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b13cce374175a427ad3f8d0e050c89f9b99c0e87 `

- R 目标：` f71108d574ff04d002840f67dfbb78e30e18810f `；action=applied。
- 原 R 目标：` ab4549e28a89145106bcb3bb7c22f6c9ef4d5f37 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` 265af3e9d95d4d4774d9e5089fa69fd63c35b15d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 58eb62c4764ed0a1d1e40db3ee56f1d4c9767b4c `

- R 目标：` dc510595ece691827fcbc7bc1c330a1181f240e3 `；action=applied。
- 原 R 目标：` 3287a05fb314922466b4bb9348e248fb3bb9eea6 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 7f5bde4a8c62fa986d487ba35f85d7daf5b7c8cf `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` be50944f57d106eff1ca25b152998092a100eaad `

- R 目标：` f5b8b6e31bef0e1ff7500e6bda27c282336274de `；action=applied。
- 原 R 目标：` 9bf758fb84c491aa4d459d4a88450376c34d9948 `。
- R 内容路径：` include/render/vulkan.h `、` render/vulkan/pass.c `、` render/vulkan/renderer.c `。
- 关联 C：` 871c4fb99a1ea849e53aa59bbc35e081043ec4d8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 71a5ae7444c554dda9a5c661aea316df073ae019 `

- R 目标：` f6cb440d160317e526c9a28ca580a06af325196e `；action=applied。
- 原 R 目标：` 3a29f8e302f85834df8fcfa168aa96d019ed1e00 `。
- R 内容路径：` types/scene/layer_shell_v1.c `。
- 关联 C：` 5e75ffecb8ad30ad876fb450e821237078423da9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e8c9c2245a2eaf584b2f2de3d009ca906b437da9 `

- R 目标：` 534d4ce993694622586c68d0e29bc61d7ff55949 `；action=applied。
- 原 R 目标：` 664a95bebb3f77be35dfdfa4c48c2ff33448462f `。
- R 内容路径：` backend/drm/drm.c `、` backend/wayland/seat.c `、` include/render/color.h `、` include/render/vulkan.h `、` include/wlr/xcursor.h `、` render/egl.c `、` render/pixman/pass.c `、` render/vulkan/shaders/common.vert `、` render/vulkan/texture.c `、` render/vulkan/vulkan.c `、` tinywl/tinywl.c `、` types/scene/wlr_scene.c `、` util/array.c `。
- 关联 C：` 8db8ef9e197d0dbca7e8066409d9b86538dcca5a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e034d859f2f76e51771de6558652ca570c0778f0 `

- R 目标：` cbb05989e0745fbdc463522b4a2373cf90f8796f `；action=applied。
- 原 R 目标：` e599620192441ff937c7855fd80ff485adfd7345 `。
- R 内容路径：` xwayland/selection/outgoing.c `。
- 关联 C：` 0bc5807427508aa883748b18bb50d8f8f0e09977 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e06bfb9853fc7bb854d7e9cad4d8728574384d52 `

- R 目标：` ebe3a5435784547437b411698c86c4bb9a1b0334 `；action=applied。
- 原 R 目标：` 11e75ed7da2d8bd712a4454ee9904cc3a44b190a `。
- R 内容路径：` render/gles2/pass.c `。
- 关联 C：` f560e21d0017973b83a18d901323e0e3d7ba0dab `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4fa410097e83f574ba669117f79d6d20e42f5f43 `

- R 目标：` 88869626b2f163fbb8520733e6aa2c1999e87b6a `；action=applied。
- 原 R 目标：` 3a264aaa905ba255678f7fdc7672f701605356cf `。
- R 内容路径：` types/wlr_screencopy_v1.c `。
- 关联 C：` 920cc024980d0416ba1378022bf3cc98b4b920ef `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f73f0f111c1ccd89fb7adc63f0fd1b0e70a5e98a `

- R 目标：` 640b96621aecfe4be187cf3d85617183ba9d5238 `；action=applied。
- 原 R 目标：` 5ba9be7cfa1e36991f76f43540d3aa2dec3d79ee `。
- R 内容路径：` meson.build `。
- 关联 C：` 83a84e8d88b01f6943e14850e01691868697cf0f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c1458dcbc931cf644ca59b30012cb877905b4bb4 `

- R 目标：` 5360f00435c07ed445d02ba2443503b9507b5bf3 `；action=applied。
- 原 R 目标：` 0ed88856a41177313cb40ce657348ad8b11fb56e `。
- R 内容路径：` types/ext_image_capture_source_v1/output.c `。
- 关联 C：` b67f37056da7b6a19acff7700a5801d9e4fd504c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` fbb806fdafe8c84afae72234394ae5856859456f `

- R 目标：` 69d1cddf60cd956a6073ea48b5c25705ac86f969 `；action=applied。
- 原 R 目标：` 7ad2fb8a121449f1cdb073b010ae4269789f027f `。
- R 内容路径：` .gitlab-ci.yml `。
- 关联 C：` 8cdcff973d7c8e49b6f8d104ce674306601f4d1b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 085c0c51de465e449d6ac15aae047f42b44c2b25 `

- R 目标：` d398b532a41b23d3413969df29c57796a37a1c46 `；action=applied。
- 原 R 目标：` 35371560081d514a05f54273c47348bf6ff16dbf `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` d1b8a1997bd4d5f877cd87c52beb590574000100 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 944566dec88e50356d2bea6ced447771a84af8ff `

- R 目标：` d8793526807f95e6ed15ad8be5af33ae7724ba8e `；action=applied。
- 原 R 目标：` 1c1c03f01ed4da6776d45dbbf4154e973d10912d `。
- R 内容路径：` util/box.c `。
- 关联 C：` a20ab762a766ef08afc1bd7eb23265f46cc96baa `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2455271ec8bfd1f0b41d0f3b8fbb2a516572e15d `

- R 目标：` dc263bd7cbcaf8cfcde74dc8ee75d05b882e51ad `；action=applied。
- 原 R 目标：` be9d08490ab469a30e17aa23cdb8b52c58ffb281 `。
- R 内容路径：` backend/x11/backend.c `。
- 关联 C：` 0edf9f948fe7ba91d9e6f0a604b9416bbd954982 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7d8d255dd2f75ed9588c2b77d31ce3e5ae23a799 `

- R 目标：` d07309b5094ba108336b52987c555ac688e91a30 `；action=applied。
- 原 R 目标：` 5de2d69c4260950a96b9ab083dbc641c5960c0d6 `。
- R 内容路径：` protocol/wlr-export-dmabuf-unstable-v1.xml `。
- 关联 C：` 04c0f206359fa1ae4b917cfad84728cf142e80c4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 03dea01bc170d9a4a5208cb6f0312994a882d957 `

- R 目标：` 9256b5354a942019b55a03b7ec51c4f05117ef4d `；action=applied。
- 原 R 目标：` 16f20471fd7fbb16257d1dd21d00dabb9783f9e5 `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/surface.c `。
- 关联 C：` ae39e2780a8f13cf911243603bc5ce57a8a0ea49 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` bd247488a513aa70965ffd13d3c3b313b33e8523 `

- R 目标：` 620327d2dbc7de56762cbd8073ed0fe155024f95 `；action=applied。
- 原 R 目标：` 8603a0f33116533a0183ad7e300c92fedc5fa7e9 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 57f43265cd80a4a93c1acfb5a5a06433a6c9340d `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` abb07e9a8cab1e2c855e881ec4a216b7a4d8943f `

- R 目标：` 939ad2410f1f8b863c5161a4d324cb930af5744f `；action=applied。
- 原 R 目标：` 186d2357f4c9b28f27fdc7211d04a63553f35eba `。
- R 内容路径：` types/wlr_ext_image_copy_capture_v1.c `。
- 关联 C：` 71a104b03b0b4cbef52df077e2213499b658aca9 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` f42de4aad659d7cbc7d3cafe1ea574c3fed1898b `

- R 目标：` ed365208c9e22eaa2748439604bf9b5505fb64cb `；action=applied。
- 原 R 目标：` 467d05348def201d281550281791054798c381b8 `。
- R 内容路径：` include/wlr/types/wlr_virtual_keyboard_v1.h `、` types/wlr_virtual_keyboard_v1.c `。
- 关联 C：` 74ff1c28be06ca3d8d4ae3c680d0a9d03d2d20dc `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e8a3639bab3b83ff21a238ff49e7d92f1ff0acbb `

- R 目标：` 42267ea853a1d97070518316a1ca717f97050f46 `；action=applied。
- 原 R 目标：` 9b8d0cbe966ada72e41a02dabdb13edf46a22b20 `。
- R 内容路径：` include/wlr/types/wlr_virtual_keyboard_v1.h `、` types/wlr_virtual_keyboard_v1.c `。
- 关联 C：` 2edb7a0c08413a03a3cd58cdc9e1ba7c20602bde `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 0b88a499773b71f6be1d3eae9b3a56fe59b1070d `

- R 目标：` 40f76834b10471a7d13886ee884b3e6a34f19223 `；action=applied。
- 原 R 目标：` e658360c1733e6a11b93404be7038e63d2e70615 `。
- R 内容路径：` include/wlr/render/drm_syncobj.h `、` render/drm_syncobj.c `、` types/wlr_linux_drm_syncobj_v1.c `。
- 关联 C：` c67cefc9d06c5fabfde6c68ca23f6c830b412cd8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 327493f4f869e1dc4a9dbb90df8d698d8e4d45cd `

- R 目标：` 6603523739f51a426bae4b2ef4893f4c696b6dae `；action=applied。
- 原 R 目标：` f5132e25653893f82dd1a20602b996efd140f824 `。
- R 内容路径：` include/wlr/types/wlr_scene.h `、` types/scene/wlr_scene.c `。
- 关联 C：` 751200abe04f882d16899eaebadba3c2e2f18276 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4a57045bea78cb348fcf06add4ca8c33bc962014 `

- R 目标：` 991330bdba4a4980bd50f5fb1fc108588a3d7759 `；action=applied。
- 原 R 目标：` 60db7eff3d4c5f4953048f656a305a2b74963391 `。
- R 内容路径：` include/render/drm_syncobj_merger.h `、` render/drm_syncobj_merger.c `、` render/meson.build `。
- 关联 C：` 221afc1ec9145f235b5e952d604479c8a41adea3 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 07b20196d39dfeea14c19ad20980bcefbeccf298 `

- R 目标：` d6f50b2def5e2290d36426c7ef24f95ccdcf3f18 `；action=applied。
- 原 R 目标：` a73c38f5a60791b19d130216fa5f4570bee6a5f7 `。
- R 内容路径：` include/wlr/types/wlr_linux_drm_syncobj_v1.h `、` types/wlr_linux_drm_syncobj_v1.c `。
- 关联 C：` def7870af55525af2332c6202404140212f591b7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ea645b18740f3435025b713223590b9ffb58d7ec `

- R 目标：` b0780782b10ffbb5aeb7bd9886894b2a63002ebe `；action=applied。
- 原 R 目标：` 5f01c83c92407d2143142bc1e664f28c8da12881 `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` ac9d0debfcfe2105c4e9141f22c8283be71a59ac `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 29005752b1cb2fd500f319609110aa881adcaa64 `

- R 目标：` 19f9d98f71228cf3e6d68bce6ac345e622b6fdc4 `；action=applied。
- 原 R 目标：` 66f17fff2849288cf64012797bdf3c570df59660 `。
- R 内容路径：` backend/drm/atomic.c `、` backend/drm/drm.c `、` include/backend/drm/drm.h `。
- 关联 C：` 18f0ee6aaf8ed52f8222ae1a79e064af7b36287c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5b85ed5b09fbda6407a68416c2b214be489907ed `

- R 目标：` de5cf50b669263663ab739509bdcc6f34617ed47 `；action=applied。
- 原 R 目标：` de59a4b9b6c61e8de94519129c91ecf2361d1cc6 `。
- R 内容路径：` backend/drm/atomic.c `、` backend/drm/drm.c `、` backend/drm/libliftoff.c `、` include/backend/drm/drm.h `。
- 关联 C：` adb440b017e6478e60fdad0d71000a832da0f038 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 04e824869922bcedc67865f904f8ff4b6c4cb076 `

- R 目标：` 3670253bc8817ab2d3b3d5822baff9a6321471f6 `；action=applied。
- 原 R 目标：` e493b3c46a1a6c9b493d37ca3f85539f721b8322 `。
- R 内容路径：` meson.build `。
- 关联 C：` ddb94bc3d2a730bae34e15eecde1f6cc200de95a `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 2fad5dcfdcaf8394e118088173fc8be8ace13045 `

- R 目标：` 2f641cf1ce4d34f3cd8b13e6a8aad0b2932d952d `；action=applied。
- 原 R 目标：` 8817f4881b82362a2542ec4582a78e102b55552e `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` 801b4a53c8ab63c650d3570f02547b966a19ab5c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e03e943d4766a6c670ee77b1b315b3c30c33c9fd `

- R 目标：` deb73c107423354688b02adcfe33a4e163f4aca8 `；action=applied。
- 原 R 目标：` e43bb8c62da04dee1699614114d164a7b008e662 `。
- R 内容路径：` types/wlr_color_management_v1.c `。
- 关联 C：` 73041cf13aa75e46881034b659ea107c0f07ed23 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 208e2d7f0c50b85095631b20db3ba8b451ae41a6 `

- R 目标：` 208ab4dad188c40ca5a55f445e74a6dded198740 `；action=applied。
- 原 R 目标：` f4aaf7d6c95d48495ff5e647200e0ac232b7cce8 `。
- R 内容路径：` include/wlr/types/wlr_linux_drm_syncobj_v1.h `、` types/wlr_linux_drm_syncobj_v1.c `。
- 关联 C：` 285827451be680a2aec040f35ff7bb7f69d56a85 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 11e27740fefae88af7cbb6349a388775882c7ec2 `

- R 目标：` d00cf3dccc5d9e68af52cf50deb649a49eb99e43 `；action=applied。
- 原 R 目标：` 43d73a23ade8a556eb6cfedea324e9f926d302d7 `。
- R 内容路径：` render/vulkan/util.c `、` render/vulkan/vulkan.c `。
- 关联 C：` f2bc617902605dc61f4d0f974ef0cab55a9df869 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4963e7bc7daa0e2d29b546f10267bcf07569ef5c `

- R 目标：` 3a691ce140757c7318b91e18d0ae6cb3873c253b `；action=applied。
- 原 R 目标：` de7ca4d51e1985603c23b55d10752bbcc94cf4d1 `。
- R 内容路径：` meson.build `。
- 关联 C：` 49d45b5e663f9c01aafa9744ce5baa902e9b41f7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5d445e265ea404db6e00eb30b1d9d8eb84572a16 `

- R 目标：` a835235bc6a4a3c4b63ded04f159b2730e2f6fe4 `；action=applied。
- 原 R 目标：` 310707293869548cecce52f63718e290ae72f17f `。
- R 内容路径：` types/ext_image_capture_source_v1/scene.c `。
- 关联 C：` 6f701cf92a9fc588e21ca9a6399ca7854cac5ab8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 252e508d682bfb3eaedd6aecab26a2ca8544d8f7 `

- R 目标：` a491653da5392e532917840b55afcebe936b5355 `；action=applied。
- 原 R 目标：` 61d8cbf57651947ea7e9ddbc2d857eb193b93571 `。
- R 内容路径：` types/ext_image_capture_source_v1/foreign_toplevel.c `。
- 关联 C：` 2d5d34f8df973c16d3f38f62de1a067cb7495693 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` b5d62efc17b9809001ac767199218fd70f8f4224 `

- R 目标：` 13f0f6a75de1acd9196584768c66b6550864d1bb `；action=applied。
- 原 R 目标：` aa37a795cffa700d949d07576069b54134df34d5 `。
- R 内容路径：` types/wlr_foreign_toplevel_management_v1.c `。
- 关联 C：` a636f27f7862039675c223bf9ebfb50c3cc2d0c7 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` acb1a07ca29a1c96353095fc9400a636a8a586e8 `

- R 目标：` b195f5ebf3662e5f0b31d41f512639bb7878849d `；action=applied。
- 原 R 目标：` c941160eb6a5f64fdba0820bf41022a80e7ebbab `。
- R 内容路径：` types/wlr_ext_foreign_toplevel_list_v1.c `。
- 关联 C：` c257768894ec34f39d8cefad646b002e37ac56c0 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1c5061d5dc556ab87e855e27891c85a53c132703 `

- R 目标：` 7d495c0e09b212e063913dca167e5fde29b76fb6 `；action=applied。
- 原 R 目标：` 2e404663e9031d49d8608a42d28e1270c891a96a `。
- R 内容路径：` types/wlr_ext_workspace_v1.c `。
- 关联 C：` feb1cef26c4453fa97f0a275b0000c6fdb2afb55 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 777ed58419d07e51038195608bcbec544748985d `

- R 目标：` adc9d96dd62c876e5d802a2b11e99247b1976b88 `；action=applied。
- 原 R 目标：` dfcca46ff1d479700127e77e2138ae5a2a5473c0 `。
- R 内容路径：` types/wlr_virtual_keyboard_v1.c `。
- 关联 C：` 22659b04f9f660e958a88ddab25e3b61dc5e9335 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d2570147440a6707d9667d1ff7377f55dd91f8ab `

- R 目标：` c323f127a9c6987024805a77e75cac61dce3b34b `；action=applied。
- 原 R 目标：` 057c637dc39afe9c8fb2e67a70b96e87f0225faf `。
- R 内容路径：` render/pixman/pass.c `。
- 关联 C：` 89ca6f8ed09564cf22b4b69a16636ec31f53fccf `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 80eb79813fa825180bd2681247a272350b7b8d25 `

- R 目标：` 2fba13503e873ef7819053b87971127c31583f3d `；action=applied。
- 原 R 目标：` e3bdb880c2740f03fb39686fc4e6bcc6c97d7b07 `。
- R 内容路径：` types/wlr_keyboard.c `。
- 关联 C：` 60598870cc5a4aedd0933a116f4422d4e80ab79b `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 41aec9d71f90c68323d4de15c2ddf6f16bdc1a37 `

- R 目标：` 3b5c2463c209c7ca5379b80fc68bc70cb9700d79 `；action=applied。
- 原 R 目标：` 9830932fb0a853995772c03fdaa6b62fc88381af `。
- R 内容路径：` types/scene/surface.c `。
- 关联 C：` 0ffb5f08fe99a00e97803d12d022459d7f265ac1 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1afe33b15978c2682fd3a7d88e1191d4c8a01f60 `

- R 目标：` 7e1c88d87b018ca70e4c576f5fcae8ffa0a1e74d `；action=applied。
- 原 R 目标：` 73c1e8c89c825f761a8cbbf2647ec84704486464 `。
- R 内容路径：` types/wlr_compositor.c `。
- 关联 C：` 42e32ba3bd19b45bf2fcce549a386b423c5a2d34 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 7be5f6c58c2481e5289c114ca2cbfb61086eb7e8 `

- R 目标：` 100d0c81c45c3e63c6bcaa6146c20830026d3fb1 `；action=applied。
- 原 R 目标：` 913bbe0ffb9e1c6b729aecb509a68b5f8733b281 `。
- R 内容路径：` types/wlr_linux_drm_syncobj_v1.c `。
- 关联 C：` 709120f658cd1714526102b92d56fbba1658f6ec `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` ef86cc7863d65c84955e6e27d20cf65ac2ce3675 `

- R 目标：` 42b9294538f0fa55198a800ca4f8feef39110206 `；action=applied。
- 原 R 目标：` 39f05cd1b9e9269ba7676bc0f75e04c1d61a1adb `。
- R 内容路径：` include/wlr/types/wlr_compositor.h `、` types/scene/surface.c `。
- 关联 C：` eeb918bc10d1fac474cf135e796a02d1e4477378 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 99dfd9b78f387745f72c3c2ef964b258561d2fd9 `

- R 目标：` 8825c1861052ae84f92a2a74fc237bf59f63d554 `；action=applied。
- 原 R 目标：` a6c93228bc6c91d422865d72fd590f90dd328674 `。
- R 内容路径：` meson.build `。
- 关联 C：` e940bae765bd33bb6a21ca7b6bf8f0e72fe11b77 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` efcf521d9e167344a0eaa88411323e0a682b4352 `

- R 目标：` 55c4a15857499f8c7c7e28a0523e057c08b99f30 `；action=applied。
- 原 R 目标：` e54f15fb0febdc4d1c6c0949e122e4bd30cd3f9d `。
- R 内容路径：` xwayland/selection/dnd.c `、` xwayland/selection/outgoing.c `。
- 关联 C：` e23fbc92e357e141b51ae7b6c772ad5672c97da4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` c72ebde4606fda987130454c43e3619dab48c9e0 `

- R 目标：` 2f153eb18e6c70467389ae6828e8491f5b2ac7b6 `；action=applied。
- 原 R 目标：` 640618ac7dec6a00b8e28d906c9c546babbf3adf `。
- R 内容路径：` xwayland/selection/incoming.c `、` xwayland/xwm.c `。
- 关联 C：` a3787782e27d50f6b54c87f74ffeb59ad43bdb6f `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d1834b51b4e9dcfb18351dece8769fe81bb2d1bb `

- R 目标：` 9716029ce79c394f567403794bf1e26c7c6fe2b3 `；action=applied。
- 原 R 目标：` e8f383e0dc1f5838eee4ff06eb675ce7f8536025 `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` 598061603960e0fc9cb0f29d2b7644c90d65eeeb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 8a3d1b8a4424bacf3f5beabde5ec66983ce8dca0 `

- R 目标：` 64f4207c31110de8fdfbe9780c4a633bf492c23f `；action=applied。
- 原 R 目标：` ef7e1d173df2985f8a88739738df13bdf0b646a9 `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` ea61afcf19fae29d5368ea378e967adae15a4f60 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 4dad66cf6f99303e211dabc0e72c9f00e0c4c93d `

- R 目标：` 6c6f0ed26fe18f7f23be4ab454f997d313aeba86 `；action=applied。
- 原 R 目标：` 0e91e6a5205ee456a95802e35ef38b1dae7ee230 `。
- R 内容路径：` xwayland/selection/incoming.c `、` xwayland/xwm.c `。
- 关联 C：` 5e3135a80a99e2c0bc90059db62fbbd3789b51c2 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` aec82dd30308ad1f6aea17b4bccc363cd6b9c73c `

- R 目标：` 6acd34d2176b63290601e8411c324466db14f249 `；action=applied。
- 原 R 目标：` 4c1708cd30ddb8c4f9ab54a78b9313e66b4d978d `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` 34335213c24f776e5aeaf43984c3f85546b36f05 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 63790e1d8cd454f69947f141dbfc403844cc420e `

- R 目标：` ad0432003a0b74fea4eb2cd451ddd9b40d69cae8 `；action=applied。
- 原 R 目标：` 0c4d6608fa9cfb40e772558ccd4d74569d92273b `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` aa99c2ca8163855cb96c26eb38d88bc30e692a1e `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 1715ce5d5e91628b9323c096429781245c08b582 `

- R 目标：` 719e8172b674dca5dff1d4218bdc51451265f770 `；action=applied。
- 原 R 目标：` a1ae81671669d980cfc52576f92fd042f83ab1d4 `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` e2111058e5f8e167bc1a6fdf4606cf21ee33649c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 9f4afb87e591bb33912e3d7278cf49d6edf6b287 `

- R 目标：` 032311d745b71d7d9b8438871e2cf4aba099dad8 `；action=applied。
- 原 R 目标：` 401d3932e41e90ad3da1b3770f942c7e5d0fdfbd `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` 9aab36caa3b74f44cc82405dffc65fd33278f4cb `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 39e7a61b472519868038242f95335616ba8f5b8e `

- R 目标：` 1e8e264792ca6f3499b6112702e41cb5ccbb24cf `；action=applied。
- 原 R 目标：` e861462b9a942f49426f9234306c17c4671ae7fd `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` 8f595393af06f839801a7465076ac542b3f285c5 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d003741eaa4e1832e2554710175415628784c94b `

- R 目标：` 34cccc06b6a23e0afe1915b675f45fe89e081cb7 `；action=applied。
- 原 R 目标：` 18bb9a21f376892bb140cbbef6dbedd9690aa371 `。
- R 内容路径：` xwayland/xwm.c `。
- 关联 C：` 21064eaf19346bedd9b08b59a8c8b246bff79225 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 15bc8d04b8df33c82d0208c582e234e60aba60a0 `

- R 目标：` 06c56fbb6f19179eb3fb5579e99523b09864ee36 `；action=applied。
- 原 R 目标：` 8543e7be3b57869a34eff82d6f8aee32e1f5f161 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 744b97d6ed80b2a8ccdb909d33274424d254dce8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d37140d74ab9d0f8cb32f222ffbfd83937c0e891 `

- R 目标：` db3d0e3938ad144b10286e23a0029c54b0be26ab `；action=applied。
- 原 R 目标：` 9788e00f54ed24c0ca6faf1ffc32d6813902cdb7 `。
- R 内容路径：` types/data_device/wlr_drag.c `。
- 关联 C：` 4e29cb94d91e391b442cc25324ebfab80ec88f37 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d8829e42caefa988029a62148a9ababfe467640f `

- R 目标：` fd406bf55a366ad1a8762d97f743f35a156da60f `；action=applied。
- 原 R 目标：` 1dae8c24289bb2862a8d7f6ace0803a77c4e03c7 `。
- R 内容路径：` xwayland/selection/incoming.c `。
- 关联 C：` cd806fbbf93285e3c6d1a4ea97dccb68d7bc4457 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 5c661fd02bed08c4b2e6a633688d6d5c944842c5 `

- R 目标：` 643e04c02b599225a3eaf42ba64508a2ed2b447e `；action=applied。
- 原 R 目标：` 4b4751c1e573c560028f20683730f5b64db89756 `。
- R 内容路径：` types/scene/wlr_scene.c `。
- 关联 C：` 38147b44eafff95d519dd7d5023d277d7921ab0c `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` d85ecab59bfe36b18a00a728810df435e6f1543e `

- R 目标：` 873a387a97c942d7b6990731effb9874fead1c04 `；action=applied。
- 原 R 目标：` b89753f4c0fe298a16341595a63569d936117a86 `。
- R 内容路径：` include/util/fd.h `、` types/wlr_security_context_v1.c `、` util/fd.c `、` util/meson.build `、` xwayland/server.c `、` xwayland/sockets.c `、` xwayland/sockets.h `。
- 关联 C：` 964e55ef572bac0b2187e711c93e3191b08b0d21 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` 324909af3e2b1fda50896fe9863747fb6011ec9a `

- R 目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 `；action=applied。
- 原 R 目标：` 3288879d3c1c82156d580114e8393bddfe8ee131 `。
- R 内容路径：` meson.build `。
- 关联 C：` 8f4ec1b09ba5f19cd70948f625fcedcfda774889 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

### R 来源 ` e4079612adb3e567c7f661dcb404663484817f39 `

- R 目标：` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `；action=adapted。
- 原 R 目标：` f230870062b4ac32900ee070492e16e706b3d1fb `。
- R 内容路径：` include/wlr/render/vulkan.h `、` include/wlr/types/wlr_data_device.h `、` render/vulkan/renderer.c `、` types/buffer/buffer.c `、` types/data_device/wlr_data_source.c `、` types/seat/wlr_seat_pointer.c `、` types/xdg_shell/wlr_xdg_popup.c `、` wlroots.syms `。
- 关联 C：` 10beea71f6d2c09d6cec15d8b49425d3f6f8dfc4 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。
- 原 R 说明：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
### ` include/wlr/render/vulkan.h ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-0-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/wlr/render/vulkan.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob 50f8c558d3675c69fab120d9664e1d03c94faa0c ` → ` 100644 blob 5ee84e05fb0b4e2b83e29bf52f4360139f34e442 `。
- 来源文件项 ` 3rdparty/wlroots/include/wlr/render/vulkan.h `：` 100644 blob 50f8c558d3675c69fab120d9664e1d03c94faa0c ` → ` 100644 blob 5ee84e05fb0b4e2b83e29bf52f4360139f34e442 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` include/wlr/types/wlr_data_device.h ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-1-proof.json`。
- 来源路径：` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob c36b1a5cb6468ec3684b9e3753e80a4b2a9280d6 ` → ` 100644 blob 90e1ae626af7f5edb5b299715f7b99f93b6dfd8e `。
- 来源文件项 ` 3rdparty/wlroots/include/wlr/types/wlr_data_device.h `：` 100644 blob c36b1a5cb6468ec3684b9e3753e80a4b2a9280d6 ` → ` 100644 blob 90e1ae626af7f5edb5b299715f7b99f93b6dfd8e `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` render/vulkan/renderer.c ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-2-proof.json`。
- 来源路径：` 3rdparty/wlroots/render/vulkan/renderer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob da17a4703425ec652fa8bddfa639acd7dabe6986 ` → ` 100644 blob 733792ec0ae96d572a797a24a87b46e6182d81f6 `。
- 来源文件项 ` 3rdparty/wlroots/render/vulkan/renderer.c `：` 100644 blob da17a4703425ec652fa8bddfa639acd7dabe6986 ` → ` 100644 blob 733792ec0ae96d572a797a24a87b46e6182d81f6 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/buffer/buffer.c ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-3-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/buffer/buffer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob 48a10d9f00d7f9195eecd650bb83324ebbbb71d6 ` → ` 100644 blob 19800206b2501bc6ab08149a129fbe1eb1e329de `。
- 来源文件项 ` 3rdparty/wlroots/types/buffer/buffer.c `：` 100644 blob 48a10d9f00d7f9195eecd650bb83324ebbbb71d6 ` → ` 100644 blob c10405eb1385566f5c4b4e68d424eefc8d0f62e7 `。

两侧零上下文增量的文本对照（保留 hunk 位置；尾空格/Tab 显示为 ␠/⇥；不是可直接应用的纯适配补丁）：

```diff
--- 来源的本次增量
+++ 本仓的本次增量
@@ -1,11 +1,14 @@
 @@ -3,0 +4 @@
 +#include <stdatomic.h>
-@@ -7,0 +9,2 @@
+@@ -7,0 +9,5 @@
 +static _Atomic size_t buffer_count;
 +
-@@ -24,0 +28 @@ void wlr_buffer_init(struct wlr_buffer *buffer,
++/** 返回尚未结束生命周期的原生缓冲区数量。 */
++size_t waylib_buffer_get_count(void);
++
+@@ -24,0 +31 @@ void wlr_buffer_init(struct wlr_buffer *buffer,
 +	atomic_fetch_add_explicit(&buffer_count, 1, memory_order_relaxed);
-@@ -32,0 +37,6 @@ void wlr_buffer_finish(struct wlr_buffer *buffer) {
+@@ -32,0 +40,6 @@ void wlr_buffer_finish(struct wlr_buffer *buffer) {
 +	size_t previous = atomic_fetch_sub_explicit(&buffer_count, 1, memory_order_relaxed);
 +	assert(previous > 0);
 +}
```


### ` types/data_device/wlr_data_source.c ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-4-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/data_device/wlr_data_source.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob 64b73c56e10338380f03d46bdb779505d175b64e ` → ` 100644 blob 6e534f5c3bbb0e2a2c09f4f15a1375d51cec7d36 `。
- 来源文件项 ` 3rdparty/wlroots/types/data_device/wlr_data_source.c `：` 100644 blob 64b73c56e10338380f03d46bdb779505d175b64e ` → ` 100644 blob 6e534f5c3bbb0e2a2c09f4f15a1375d51cec7d36 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/seat/wlr_seat_pointer.c ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-5-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob 41729dcd9823e165962cd8df2479be1e9cb781dd ` → ` 100644 blob d578d0a57e9d10adcbc05187f0d536ce8b234935 `。
- 来源文件项 ` 3rdparty/wlroots/types/seat/wlr_seat_pointer.c `：` 100644 blob 41729dcd9823e165962cd8df2479be1e9cb781dd ` → ` 100644 blob d578d0a57e9d10adcbc05187f0d536ce8b234935 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` types/xdg_shell/wlr_xdg_popup.c ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-6-proof.json`。
- 来源路径：` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob 0c3b9fe4469d5c48eb179c9d5faf3804f443031a ` → ` 100644 blob 87bb78c7434c996a4ea9ea19134b89607dd97ff5 `。
- 来源文件项 ` 3rdparty/wlroots/types/xdg_shell/wlr_xdg_popup.c `：` 100644 blob 0c3b9fe4469d5c48eb179c9d5faf3804f443031a ` → ` 100644 blob 87bb78c7434c996a4ea9ea19134b89607dd97ff5 `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。

### ` wlroots.syms ` / modified

- 原审核理由：` 来源重新引入缓冲区计数实现时，同步恢复 N5 已验证的函数前置声明，满足原生 Meson 的 missing-prototypes 检查，不改变实现行为。 `。
- 路径证明：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/adaptations/e4079612adb3e567c7f661dcb404663484817f39/wlroots-7-proof.json`。
- 来源路径：` 3rdparty/wlroots/wlroots.syms `；无来源路径表示本地集成，不冒充上游修改。
- 来源增量端点：` 324909af3e2b1fda50896fe9863747fb6011ec9a ` → ` e4079612adb3e567c7f661dcb404663484817f39 `。
- 原目标增量端点：` 3288879d3c1c82156d580114e8393bddfe8ee131 ` → ` f230870062b4ac32900ee070492e16e706b3d1fb `。
- 本次目标：` 9e0deee99dc5b9cb1623dbbc7774d6d10dd68944 ` → ` b632c74c2d3d1a4146d6ca3f62d77bb209d2dd83 `。
- 目标文件项（mode/type/blob）：` 100644 blob 7127121eeb8958435d075f422e601552f4d5ed97 ` → ` 100644 blob 4b65b12a12ec6b856fb854fb629edae0a48985cc `。
- 来源文件项 ` 3rdparty/wlroots/wlroots.syms `：` 100644 blob 7127121eeb8958435d075f422e601552f4d5ed97 ` → ` 100644 blob 4b65b12a12ec6b856fb854fb629edae0a48985cc `。
- 两侧本次增量相同；既有本地差异的保留不被计作本次新增 delta。文件身份与审核理由仍如上。


### R 来源 ` ca160e1eb74ecb4f43102ac3f6463ab0e1a25137 `

- R 目标：` 005b8c571c002d266ffdd560b7eb4e3bd46c4e3a `；action=applied。
- 原 R 目标：` eace3155cdc96d6bea3b708255e27f3b28499078 `。
- R 内容路径：` render/vulkan/renderer.c `。
- 关联 C：` db0ff5dca7fde5c57b7029842c6f42cba91235e8 `；节点 N6。
- 依据：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-evidence.json`。

## 节点验证与历史边界

### N1 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` 2df4c21c0499b46229f1ef0080cc265994b4fd60 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` 055be261d35138ec678b3a7aaf1521bfc2d9a05e `。
- 原候选 C / waylib-shared：` 5832583291b2ad14c4e723e26f5c5b851e6dbe03 `。
- 原候选 R / wlroots：` None `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/waylib-verify.json`。
- wlroots_verify：pass / not-applicable；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/gitlink-verify.json`。
- nested_gitlink_verify：pass / not-applicable；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-candidate-configure-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/deckshell-build-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 21, 'passed': 21, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N1-attempt-4/logs/deckshell-top-level-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N2 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` 1ffe0010193a8c696ef6436a4c436f57bbb1e8ec `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` 4071efb9caf5adc60d236f41c9ca1bbfb49f8c10 `。
- 原候选 C / waylib-shared：` 05e24276e3d5878b653adf692cd33391038dd398 `。
- 原候选 R / wlroots：` 88a869855742281c98c22cab9641b317b8d065ef `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/initialization-report.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 21, 'passed': 21, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N2-attempt-4/initialization/logs/deckshell-top-level-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N3 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` 4db6917f873990966f58578abe7dca8b8b371d36 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` dc4f7d20294b8b6fa9decc39a783bf504246f34e `。
- 原候选 C / waylib-shared：` 1db059be68d697b7c47c7003f7433e0d1836139a `。
- 原候选 R / wlroots：` 4bc1705abf5b1250ea5888b6387b66d54718e331 `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 21, 'passed': 21, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-3/logs/deckshell-top-level-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N3-attempt-2 / 历史失败/先前尝试

- 原报告状态：**blocked**。
- 来源验收终点：` 4db6917f873990966f58578abe7dca8b8b371d36 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` cc92b79ee541e5ec7b0371385f21259206a3c6a9 `。
- 原候选 C / waylib-shared：` b240153223af7d11a816801bbb3e695368cde110 `。
- 原候选 R / wlroots：` 50291db598e076b9e44bc50e5c36e8c151a53c9a `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | FAIL | 8 | ` {'total': 21, 'passed': 18, 'failed': 3, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N3-attempt-2/logs/deckshell-compositor-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N4 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` 24c1a0b547fc8a1c6617bdff147efcbad03c2f98 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` d1be07121ea0f20bf87a128208a703a0dbbf3b68 `。
- 原候选 C / waylib-shared：` 0d8c99c886084818a1caee37995390bb69603184 `。
- 原候选 R / wlroots：` 4507a6f414191bcfc150a966ba251c89f864663f `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 21, 'passed': 21, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-3/logs/deckshell-top-level-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N4-attempt-2 / 历史失败/先前尝试

- 原报告状态：**blocked**。
- 来源验收终点：` 24c1a0b547fc8a1c6617bdff147efcbad03c2f98 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` 6ba6fd6346fb89d4bb502d0caf612abd06b74c68 `。
- 原候选 C / waylib-shared：` 3b47a60c3380293fcc418b55260256bf71c074d1 `。
- 原候选 R / wlroots：` 5c8b9bdfd6f4a610cef869bcb8988ad6f77026b7 `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | FAIL | 8 | ` {'total': 21, 'passed': 20, 'failed': 1, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N4-attempt-2/logs/deckshell-compositor-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N5 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` 7134887c66e5215182e1a1f648bdc8971f17e864 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` d24d389a597f9be2e619586bcc76b3c0518ceef3 `。
- 原候选 C / waylib-shared：` 11e096a97e13d4b8740cea0d735f758e66b6534c `。
- 原候选 R / wlroots：` c254362a1f79c88d21c773e22373ebe538194169 `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 21, 'passed': 21, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/deckshell-top-level-ctest-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-package-consumer-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/waylib-base-ctest-attempt-1.log` |
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N5-attempt-7/logs/wlroots-candidate-install-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N6 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` ce57dab0259c33eb183589928249ef9e2be149af `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` 77d487cedd0b1f1eabf1ec38ee744af3fe4a0930 `。
- 原候选 C / waylib-shared：` 83365fc20abbfdb29b710446d5e3cc5fabc86efe `。
- 原候选 R / wlroots：` eace3155cdc96d6bea3b708255e27f3b28499078 `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/nested-gitlink-verify.json`。
- protocol_tracking：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 22, 'passed': 22, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-4/logs/deckshell-top-level-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N6-attempt-3 / 历史失败/先前尝试

- 原报告状态：**blocked**。
- 来源验收终点：` ce57dab0259c33eb183589928249ef9e2be149af `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` cab31e5953bd0fe725648b99db2eef8bf48e27a5 `。
- 原候选 C / waylib-shared：` 62c4680bde8380fa6f5bd046f950147e6528d845 `。
- 原候选 R / wlroots：` 501746bae90f0690451ea20c8bf8bae98682e11d `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/nested-gitlink-verify.json`。
- protocol_tracking：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | FAIL | 8 | ` {'total': 22, 'passed': 20, 'failed': 2, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N6-attempt-3/logs/deckshell-compositor-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N7 / 原节点验收

- 原报告状态：**pass**。
- 来源验收终点：` fd573cf44fb06ee1eebcdd8c39716d1c797b64d4 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` bf1092f11da49ffe4cdaacf148dab7f60d02198d `。
- 原候选 C / waylib-shared：` eadc4da0c975dbb65489bd990b48524b23489cc5 `。
- 原候选 R / wlroots：` eace3155cdc96d6bea3b708255e27f3b28499078 `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/deckshell-build-attempt-1.log` |
| ` deckshell-compositor-ctest ` / attempt 1 | PASS | 0 | ` {'total': 55, 'passed': 55, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/deckshell-compositor-ctest-attempt-1.log` |
| ` deckshell-top-level-ctest ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-3/logs/deckshell-top-level-ctest-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。

### N7-attempt-2 / 历史失败/先前尝试

- 原报告状态：**blocked**。
- 来源验收终点：` fd573cf44fb06ee1eebcdd8c39716d1c797b64d4 `；普通中间提交不作构建承诺。
- 原候选 P / DeckShell：` c9d3dd09c46651a8b3114bb61108564af5f9beed `。
- 原候选 C / waylib-shared：` 9eb721dffdbc592a50b4006cd780f5a190cb55a1 `。
- 原候选 R / wlroots：` eace3155cdc96d6bea3b708255e27f3b28499078 `。
- 原报告：外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/sync-report.json`。
- deckshell_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/deckshell-verify.json`。
- waylib_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/waylib-verify.json`。
- wlroots_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/wlroots-verify.json`。
- gitlink_verify：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/gitlink-verify.json`。
- nested_gitlink_verify：pass / verified；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/nested-gitlink-verify.json`。
- protocol_tracking：pass / not-triggered；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/protocol-candidates.json`。
- contract_audit：pass / 未另设状态；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/waylib-contract-audit.json`。
- child_materialization：pass / created；外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/child-materialization.json`。

| 原验证项 | 结果 | 退出码 | 原测试计数 | 原始日志 |
|---|---|---|---|---|
| ` wlroots-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-base-configure-attempt-1.log` |
| ` wlroots-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-base-build-attempt-1.log` |
| ` wlroots-base-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-base-test-attempt-1.log` |
| ` wlroots-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-base-install-attempt-1.log` |
| ` wlroots-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-candidate-configure-attempt-1.log` |
| ` wlroots-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-candidate-build-attempt-1.log` |
| ` wlroots-candidate-test ` / attempt 1 | NO_TESTS | 0 | ` {'total': 0, 'passed': 0, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-candidate-test-attempt-1.log` |
| ` wlroots-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/wlroots-candidate-install-attempt-1.log` |
| ` waylib-candidate-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-candidate-configure-attempt-1.log` |
| ` waylib-candidate-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-candidate-build-attempt-1.log` |
| ` waylib-candidate-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-candidate-install-attempt-1.log` |
| ` waylib-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-ctest-attempt-1.log` |
| ` waylib-base-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-base-configure-attempt-1.log` |
| ` waylib-base-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-base-build-attempt-1.log` |
| ` waylib-base-install ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-base-install-attempt-1.log` |
| ` waylib-base-ctest ` / attempt 1 | PASS | 0 | ` {'total': 8, 'passed': 8, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-base-ctest-attempt-1.log` |
| ` waylib-package-consumer-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-package-consumer-configure-attempt-1.log` |
| ` waylib-package-consumer-build ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-package-consumer-build-attempt-1.log` |
| ` waylib-package-consumer ` / attempt 1 | PASS | 0 | ` {'total': 3, 'passed': 3, 'failed': 0, 'skipped': 0} ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/waylib-package-consumer-attempt-1.log` |
| ` deckshell-configure ` / attempt 1 | PASS | 0 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/deckshell-configure-attempt-1.log` |
| ` deckshell-build ` / attempt 1 | FAIL | 1 | ` None ` | 外层历史资料：`.helloagents/plans/20260909_treeland_0_8_14_to_0_9_1_local_sync/evidence/N7-attempt-2/logs/deckshell-build-attempt-1.log` |

以上状态属于原候选；未替换成整理后 SHA，也未因本次生成而重新通过。
