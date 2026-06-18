---
mindmap-plugin: basic
tags:
  - Algorithm
  - ComputerScience
  - Book
  - 1
---

# Javaで学ぶシミュレーションの基礎

## 1,2章 シミュレーション、Java

- 支配方程式
- 離散化、逐次近似、漸化式
- 丸め誤差、伝搬誤差、計算の安定性

## 3章　非線形方程式

- １元
  - 線形反復法、Aitken$\Delta^2$法
  - Newton法
- n元
  - Newton-Raphson法

## 4章　連立一次方程式

- 直接法、反復法
- Gauss消去法：前進消去から後退代入、ピボット入れ替え(列入れ替え)
- LU分解：上三角形と下三角形行列に分解
- Choresky分解:係数行列が対象ならより早く
- 反復法：Jacob法、SOR法、共役購買法

## 5章　固有値問題

- べき乗法：最大固有値
- Jacob法：直行行列による相似変換を繰り返す
  - Householder法
  - QR法

## ６章　補完と近似

- Lagrange補完：離散点からもとの関数を推定
- 3次スプライン補完：低次の多項式で補完
- 最小二乗法

## 7章　Fourier解析

- Fourier展開、Fourier変換、直交系、Gibbs現象
- DFT
- FFT

## ８章　数値微分と数値積分

- 数値微分：そのまま
- 数値積分：Newton-Cotes系(等間隔)、Gauss積分法(非等間隔)

## ９章　常微分方程式

- 一段法：Euler,Runge-Kutta法
- 多段法：陽的解法、陰的解法
- 力学系への適用：Verlet法
- 境界値問題
  - 第一種(Dirchlet)：両端点で値が決まっている
  - 第二種(Neumann)：導関数の値が指定
  - 有限要素法

## １０章　偏微分方程式

- 後で
