---
mindmap-plugin: basic
tags:
  - Book
  - ComputerScience
  - 1
---

# コンピュータシステムの理論と実装

## Hardware

- 任意のブール関数は、Nandのみから構成できる
- ノイマン型コンピュータ
  - CPU
    - ALU
    - プログラムカウンタ
    - レジスタ
  - memory
    - flipflop $\to$ レジスタ $\xrightarrow{Mux,Dmux}$ RAM
  - I/O(メモリマップドIO)
- アセンブラ
  - ニーモニック
  - シンボルテーブル

## Software

- 2段階コンパイル
  - 仮想マシン
    - Stackマシン
    - 関数呼び出しのスタック(argseg,frame,lclseg,working stack)
  - コンパイラ
    - トークン化、再帰下降構文解析、LL
    - シンボルテーブル
    - ヒープ
- OS
