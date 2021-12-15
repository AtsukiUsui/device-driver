# device-draiver

ロボットシステム学 課題１


# Features

英数字(A～Z,0～9)や記号(.)から成る文章をモールス信号に変換する機能を有したデバイスドライバーである。

モールス信号は以下のルールに基づき作成する。

*各記号の間は・

＊文字同士の間は・・・

＊単語同士の間は・・・・・・・

＊一線は・・・

＊・は1/3秒


# DEMO

URL(youtube)  : 


# Usage

DEMOの実行は下記の回路、コマンドを用いて行う。

![IMG_2458](https://user-images.githubusercontent.com/92910077/146208050-606e1aa6-c0b4-42f0-808c-39b41afba6e5.jpg)

```
$make
$sudo insmod myled.ko
$sudo chmod 666 /dev/myled0
$echo 変換元の文章 > /dev/myled0
$sudo rmmod myled.ko
```


# Author

* 作成者:AtsukiUsui
* E-mail:programmakeadrb@cocoro.uk


# License

SPDX-License-Identifier: GPL-3.0

Copyright (C) 2021 Atsuki Usui and Ryuichi Ueda.  All rights reserved.

