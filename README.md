# device-draiver

ロボットシステム学 課題１

# DEMO

URL(youtube)  : 

# Features

英数字(A～Z,0～9)や記号(.)から成る入力された文章をモールス信号に変換する機能を有したデバイスドライバーである。

# Usage

DEMOの実行方法など、"hoge"の基本的な使い方を説明する

```
$make
$sudo insmod myled.ko
$sudo chmod 666 /dev/myled0
$echo 変換元の文章 > /dev/myled0
$sudo rmmod myled.ko
```


# Author

作成情報を列挙する

* 作成者:AtsukiUsui
* E-mail:programmakeadrb@cocoro.uk

# License

SPDX-License-Identifier: GPL-3.0

Copyright (C) 2021 Atsuki Usui and Ryuichi Ueda.  All rights reserved.

