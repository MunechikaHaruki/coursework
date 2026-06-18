---
mindmap-plugin: basic
tags:
  - MachineLearning
  - Book
  - 1
---

# ゼロから作る DeepLearning4

## Chap1,2

- Bandit Problem
- MDP(Markov determinant process)

## Chap3 Bellman 方程式

- Bellman 方程式
- Q 関数
- Bellman 最適方程式

## Chap4 動的計画法

- 方策反復法
- 価値反復法

## Chap5 Monte Carlo 法

- インクリメンタルに計算
- 固定値$\alpha$方式で指数分布にする
- 重点サンプリング：分散が大きく

## Chap6 TD 法

- TD target に向かう
- SARSA : ベルマン方程式
- Q 学習 : ベルマン最適方程式

## Chap7 Neural Net と Q 学習

- Q 関数を TD target を教師データとして学習する

## Chap8 DQN

- 経験再生：エージェントの経験をバッファに保存
- ターゲットネットワーク：TD target の計算専用の Target network を作る。これは時々しか Q net と同期しない

## Chap9 方策勾配法

- 方策を直接モデル化
- REINFORCE
- ベースライン付き REINFORCE
- Actor-Critic : 価値ネットワークと方策ネットワーク
