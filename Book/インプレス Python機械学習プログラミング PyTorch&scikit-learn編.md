---
mindmap-plugin: basic
tags:
  - MachineLearning
  - Book
  - Python
---

# Pytorch&sklearn

## Chap1

- 教師あり、教師なし、強化学習

## 分類問題

- Chap2 単純なアルゴリズム
  - パーセプトロン
  - ADALINE
- Chap3 sklearn
  - Logistic回帰
    - バイアス(正解との誤差)、バリアンス(ばらつき、過学習)
  - SVM(サポートベクターマシン)：最大マージン分類
    - カーネルトリックによる線形分離不可能な場合への拡張
  - 決定木
    - 情報利得（不純度の差） $IG(D_p,f)=I(D_p)-\sum_{j=1}^m\frac{N_j}{N_p}I(D_j)$
      - 不純度：ジニ不純度、エントロピー、分類誤差
      - ランダムフォレスト
  - k最近傍方：分類したいデータ点のk個の近傍から多数決を行う

## データをきれいに

- Chap4 前処理
  - 欠損データへの対処
    - 欠損値を除くor平均値での補完
  - カテゴリデータのラベル付け
  - 特徴量の正規化、標準化
  - L1/L2正則化
  - 逐次交代探索(SBS)：影響の少ない特徴量を除く
- Chap5 次元削減
  - 主成分分析(PCA)
  - 線形判別分析(LDA)
    - 教師あり
  - t分布型確率的近傍埋め込み(t-SNE)
    - 非線形次元削減
    - 距離分布を仮定

## モデル間の扱い

- Chap6 モデル評価
  - sklearnは、make_pipelineで変換器と推定器を結合
  - 汎化性能の評価
    - ボールドアウト法
    - k分割交差検証：cross_val_score
      - 学習曲線、検証曲線でモデルを検証
  - ハイパラメータのチューニング
    - グリッドサーチ
    - ランダムサーチ
  - アルゴリズムの選択は、入れ子の交差検証で行う
- Chap7 Ensemble
  - アンサンブル学習：複数の分類器による多数決
  - バギング：訓練データセットをランダムに復元抽出
  - ブースティング：複数の弱学習器を順に連帯させ、前のモデルの間違いを次のモデルが重点的に学習
    - AdaBoost
    - 勾配ブースティング

## 分析タスク

- Chap8 感情分析
- Chap9 回帰分析
- Chap10 クラスタ分析

## 深層学習の実装

- Chap11 NNの実装
  - feed-forward NeuralNetwork
  - 自動微分、逆誤差伝搬法
- Chap12 PyTorch化
  - Tensor,Dataloader
  - Transform
- Chap13 PyTorchメカニズム

## 深層モデル群

- Chap14 CNN
- Chap15RNN
- Chap16 Transformer
- Chap17 GAN
- Chap18 GraphNN
- Chap19 RL
