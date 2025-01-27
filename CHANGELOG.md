# Changelog

## [0.4.0](https://github.com/ravsii/tree-sitter-d2/compare/v0.3.0...v0.4.0) (2025-01-27)


### Features

* add folds ([3f9bb70](https://github.com/ravsii/tree-sitter-d2/commit/3f9bb705690fb35dedee0ea5ebe3a51d4fc1e9cb))
* add visibility marks ([630069f](https://github.com/ravsii/tree-sitter-d2/commit/630069f2f542d6b4add3b635808036f177c49e43))
* add visibility marks ([#72](https://github.com/ravsii/tree-sitter-d2/issues/72)) ([5442481](https://github.com/ravsii/tree-sitter-d2/commit/54424819d9ed57c2f614b78416866bc7707e8d0a))
* better eol ([106897a](https://github.com/ravsii/tree-sitter-d2/commit/106897ac058c791ab39019af0e57ccf5b45b4261))
* better spaced_str rule ([368f43c](https://github.com/ravsii/tree-sitter-d2/commit/368f43c56200dab0384fb62ceaf61db6bc914709))
* empty codeblock as markdown, underscore fixes ([772b81d](https://github.com/ravsii/tree-sitter-d2/commit/772b81db7a01b538ff1c80c4e05b140cd4ed9b9f))
* **hl:** underscore and filters ([db11ec6](https://github.com/ravsii/tree-sitter-d2/commit/db11ec622b0e4da7fa8915a892d4b4df7ff9dffa))
* **label:** better label parsing & emoji support ([fc64574](https://github.com/ravsii/tree-sitter-d2/commit/fc6457452ad2774f08a0fe362b800b8ab2f6f907))
* unified escape, better connection references ([74f34fe](https://github.com/ravsii/tree-sitter-d2/commit/74f34fee4e9af5300633a8e0e92846219fa2d61c))


### Bug Fixes

* reduce amounts of PRECs ([6d483a6](https://github.com/ravsii/tree-sitter-d2/commit/6d483a67db4e747d63a7265fdeb234e427c372a8))
* **strings:** escape token duplicate ([7fb6870](https://github.com/ravsii/tree-sitter-d2/commit/7fb687067367ec8b03be83871614a4abae64ea99))

## [0.3.0](https://github.com/ravsii/tree-sitter-d2/compare/v0.2.0...v0.3.0) (2025-01-20)


### Features

* **comments:** add [@spell](https://github.com/spell) ([71f799b](https://github.com/ravsii/tree-sitter-d2/commit/71f799bba7de6071f13e097d4d4c625512e447a0))
* **globs:** initial support for base cases ([ea4cbfe](https://github.com/ravsii/tree-sitter-d2/commit/ea4cbfeac2115a8ee6f1aaf15bfa5e90c485660a))
* **grammar:** add block comments ([fb0be61](https://github.com/ravsii/tree-sitter-d2/commit/fb0be6173e22dc8b15c6b507150f71638d9a0a32))
* **hightlight:** add delimiters ([0c6ff41](https://github.com/ravsii/tree-sitter-d2/commit/0c6ff41a72c35de2d507d62dc2ef0a06b4046a31))
* **hl:** add "()" brackets to punctuation, add connection reference hl ([baf9b5e](https://github.com/ravsii/tree-sitter-d2/commit/baf9b5e763d7cc89e81e9e481484cd11f78a0652))
* **hl:** add glob support ([234fd09](https://github.com/ravsii/tree-sitter-d2/commit/234fd0996e8a5d5489ec49de98ac1daf8163f2ff))
* **hl:** add more brackets ([78c07e1](https://github.com/ravsii/tree-sitter-d2/commit/78c07e144fc31874f2e5dcf7272a10a7d99bcfc5))
* **hl:** more keywords ([af39dbe](https://github.com/ravsii/tree-sitter-d2/commit/af39dbe9174f3ae81ea6ab009337c483db307f1d))
* **hl:** move identifiers to functions, make test file compact ([fd3ef46](https://github.com/ravsii/tree-sitter-d2/commit/fd3ef467c6eb8d53ea74f30eb44ba02ac0c5e6cc))
* **hl:** variable highlighting ([668c3c8](https://github.com/ravsii/tree-sitter-d2/commit/668c3c8d60be5ed2179d7e497a070db424c50964))
* quoted strings ([3bc0775](https://github.com/ravsii/tree-sitter-d2/commit/3bc0775dcc1dab111d633cb5d5015e755d07e978))
* split identifier into single and chained ([8967ee1](https://github.com/ravsii/tree-sitter-d2/commit/8967ee1c4195d53ecb6d5e76f08243e6e11cefdc))
* split int/float, proper boolean hl ([9fced8d](https://github.com/ravsii/tree-sitter-d2/commit/9fced8d01ffa15f6ba68489a8d94aa4233310cb7))
* **variables:** add variable parsing ([bea6440](https://github.com/ravsii/tree-sitter-d2/commit/bea64405fb009dc5c8fa0fe96686e8cd4efb3b6e))


### Bug Fixes

* **globs:** add glob escape ([bc9dfc6](https://github.com/ravsii/tree-sitter-d2/commit/bc9dfc60d1e4e52663ce65d4be94f58937511d7a))
* **identifiers:** dot escape ([f120a7f](https://github.com/ravsii/tree-sitter-d2/commit/f120a7feaebf189fb442b695553d1e78cdc45374))
* quoted strings and block comment ([796f01a](https://github.com/ravsii/tree-sitter-d2/commit/796f01aa15ab981e38356619e3736d6eb6f7754d))
* remove unused rules & testing identifier ([4873a54](https://github.com/ravsii/tree-sitter-d2/commit/4873a5473c52055e052ba88fe11481af56da28e0))
* split declarations ([23d6494](https://github.com/ravsii/tree-sitter-d2/commit/23d6494d125f6ffa60b927cc7689e19682176ff0)), closes [#28](https://github.com/ravsii/tree-sitter-d2/issues/28)
* tests for new grammar ([7cf678e](https://github.com/ravsii/tree-sitter-d2/commit/7cf678e7e02de35a0c2f7c2c9d3e4e90857c698e))

## [0.2.0](https://github.com/ravsii/tree-sitter-d2/compare/v0.1.0...v0.2.0) (2025-01-09)


### Features

* **highlight:** add injections ([4c0e80e](https://github.com/ravsii/tree-sitter-d2/commit/4c0e80ec30d24bb32d6bbe9495f83d80514f406d))
* **hightlight:** add support for special md injections and some keywords ([82fb5c1](https://github.com/ravsii/tree-sitter-d2/commit/82fb5c1c858fe38cc0f671e5f52b182e0e8f8449))
* **imports:** add imports parsing ([14b85d2](https://github.com/ravsii/tree-sitter-d2/commit/14b85d2e20e073bc9bbdc11757eae83f955dfbac))
* **labels:** better predefined value parsing (ints, bools) ([a67c6c8](https://github.com/ravsii/tree-sitter-d2/commit/a67c6c88a4883049eb85b5c560607e6318b3b3bb))
* uml classes ([a7e3c3b](https://github.com/ravsii/tree-sitter-d2/commit/a7e3c3be0854bc75749644be7b2db4bbc51fe309))


### Bug Fixes

* **field:** remove duplicative field labels ([dd1771a](https://github.com/ravsii/tree-sitter-d2/commit/dd1771a31cd1ccfe8b403453e669fbd715762551))
* no args / no returns bugs ([75e330a](https://github.com/ravsii/tree-sitter-d2/commit/75e330ae9b73523ae1d7239bc3504ca3e339bc4e))
* **parsing:** remove unused fields ([892fa7f](https://github.com/ravsii/tree-sitter-d2/commit/892fa7f2116afc318d1e7ecb47ce3853e5c99dd3))
* **typo:** refference -&gt; reference ([373530d](https://github.com/ravsii/tree-sitter-d2/commit/373530dcaba3df5879000d209f1a4a1b6ea94c21))

## 0.1.0 (2025-01-01)


### Features

* add connection identifiers ([bf331ef](https://github.com/ravsii/tree-sitter-d2/commit/bf331ef17d5cde9a3b0bf199a5f5c722031e224d))
* add connections chaining ([881594e](https://github.com/ravsii/tree-sitter-d2/commit/881594ec740cb59c41ef7b4f15b71a18d40e2e43))
* add connections support ([5f9e165](https://github.com/ravsii/tree-sitter-d2/commit/5f9e165d491bbb133bd8f55e71ae5c121a9f6bac))
* add expr, fix conn reference ([7da87e5](https://github.com/ravsii/tree-sitter-d2/commit/7da87e55ee38a670dd012cb4d2f9f0a1e358dd68))
* add multiline connections ([6b8e901](https://github.com/ravsii/tree-sitter-d2/commit/6b8e9010cc82369f9dcd491db61259d3dcad5172))
* add release-please action ([c102468](https://github.com/ravsii/tree-sitter-d2/commit/c1024682e5abaf6d388c21095247bfe401ca18ee))
* add support for sub identifiers (x.y) ([5eb4557](https://github.com/ravsii/tree-sitter-d2/commit/5eb4557c761341212950e4e2409abf71c693b6e0))
* better labels & code blocks ([fdf4c4d](https://github.com/ravsii/tree-sitter-d2/commit/fdf4c4df5b07fca35eba397de4b15c1bb592a454))
* connection ([0a45480](https://github.com/ravsii/tree-sitter-d2/commit/0a45480147da0b096c7d099f5c14f5f1e071439e))
* connection references ([89b9d0a](https://github.com/ravsii/tree-sitter-d2/commit/89b9d0a82071380c960ba43dc6d2fb9d76a0c273))
* container blocks ([96c40ee](https://github.com/ravsii/tree-sitter-d2/commit/96c40ee4b1f5fa08838cceff4967c33c9b65c446))
* container referencing parents ([6899f76](https://github.com/ravsii/tree-sitter-d2/commit/6899f768a50f8c102329c1c62d6caccafa99f9b8))
* containers, fix: remove exec ([01e5436](https://github.com/ravsii/tree-sitter-d2/commit/01e5436e280ae210d37be3a77af4b322cf76592c))
* escape sequence identifiers ([db3cfff](https://github.com/ravsii/tree-sitter-d2/commit/db3cfff85d2ad97b23f71925c78c842512766a60))
* finished text&code code blocks ([f55ef42](https://github.com/ravsii/tree-sitter-d2/commit/f55ef426d27f620650cff2487f0d40f710238544))
* highlights ([aa70b93](https://github.com/ravsii/tree-sitter-d2/commit/aa70b93ecfeb1c2a044c1fd15faf6b6bf2bc5fd7))
* icons & images ([86009f0](https://github.com/ravsii/tree-sitter-d2/commit/86009f066bddec2f87f84980938f54d01c62b6b9))
* sql grammar ([423cd05](https://github.com/ravsii/tree-sitter-d2/commit/423cd051a0757409f25ca35debc365609d4e5c75))
* **uml:** args parsing ([d60dc44](https://github.com/ravsii/tree-sitter-d2/commit/d60dc443af67495c5441a90294eaa4916ddedc2e))


### Bug Fixes

* cargo toml ([d1d35d0](https://github.com/ravsii/tree-sitter-d2/commit/d1d35d0a1c7ecae82450f085cdceb77b1ef30ee7))
* label escape ([96bb466](https://github.com/ravsii/tree-sitter-d2/commit/96bb4661db65dedb451aa6d3e2470461dafbcfb2))
* make terminator optional ([d306db3](https://github.com/ravsii/tree-sitter-d2/commit/d306db3f86e964efb37de2cf48838011ea4d61df))


### Miscellaneous Chores

* release 0.1.0 ([f26c4a7](https://github.com/ravsii/tree-sitter-d2/commit/f26c4a7432b3db89fd2866108b45098b343e6acc))
