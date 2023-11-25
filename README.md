# 競技プログラミング ライブラリ

競技プログラミングをしていく中で，役に立ちそうなファイルやコンテストに通したプログラム．
常設コンテストの提出はディレクトリごとに作成．

## ディレクトリ / ファイルの説明

### ディレクトリ

- algo-math: 問題解決のための「アルゴリズム×数学」が基礎からしっかり身につく本（米田優峻）演習問題
- kyoupuro-tessoku: 競技プログラミングの鉄則（米田優峻）演習問題
- test_env: C++ / Pythonのテスト環境(Docker)
- python: ABCをPythonでACしたプログラム
- C++: ABCをC++でACしたプログラム

### ファイル

- hello.cpp: C++のテンプレート
- knapsack.cpp: ナップサック問題の解放
- calc_divisor.cpp: 約数の列挙

### commit message

- add: {level}-{ac, wa, tle, etc.}
- docs: change details

### まっさらにする破壊コマンド

```sh
$ find ~/ -type f -name '*.out' -delete
```
