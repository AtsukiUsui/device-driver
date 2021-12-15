# device-draiver

ロボットシステム学 課題１

# DEMO

URL(youtube)  : 

# Features

入力された英数字や記号を(欧文)モールス信号に変換する機能を有したデバイスドライバーである。

# Requirement

"hoge"を動かすのに必要なライブラリなどを列挙する

* huga 3.5.2
* hogehuga 1.0.2

# Installation

Requirementで列挙したライブラリなどのインストール方法を説明する

```bash
pip install huga_package
```

# Usage

DEMOの実行方法など、"hoge"の基本的な使い方を説明する

```bash
git clone https://github.com/hoge/~
cd examples
python demo.py
```

# モールス信号

注意点などがあれば書ku
```
if(c == '0'){
  for(int i=0 ; i<5 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
    }
 }
```


# Author

作成情報を列挙する

* 作成者:AtsukiUsui
* E-mail:programmakeadrb@cocoro.uk

# License
ライセンスを明示する
SPDX-License-Identifier: GPL-3.0

Copyright (C) 2021 Atsuki Usui and Ryuichi Ueda.  All rights reserved.

