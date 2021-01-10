# 100kinSAT
100kinSAT - CanSat（カンサット）競技の入門キット

***詳細は[Wiki](https://github.com/ymt117/100kinSAT/wiki)を参照してください***

 - #### [Wiki](https://github.com/ymt117/100kinSAT/wiki)
 - #### [回路図](https://github.com/ymt117/100kinSAT/tree/master/data/Circuit)
 - #### [ガーバデータ](https://github.com/ymt117/100kinSAT/tree/master/data/Gerber)
 - #### [部品表](https://github.com/ymt117/100kinSAT/tree/master/data/BOM)
 - #### [ソースコード](https://github.com/ymt117/100kinSAT/tree/master/src)

### 概要
---

CanSatは「Can（缶）」と「Satellite（サテライト，衛星）」を組み合わせた造語で,
CanSatと呼ばれる小型模擬人工衛星による惑星探査を模した競技です．

CanSatの製作を通して，衛星モデルの開発を学ぶことができます．

<div align="center">
<img src="https://github.com/ymt117/100kinSAT/blob/master/image/100kinSAT_ver3.2_1.JPG" alt="img" width="50%">
←100kinSAT ver3.2
</div>



### 競技ルール（カムバックコンペ）
---

CanSatは主にローバ方式（走行してゴールへ向かう方式）とフライバック方式（飛行してゴールへ向かう方式）の2つの方式があります．
ここではローバ方式について説明します．

CanSatはロケットや気球，ドローンに搭載されて上空に打ち上げて投下されます．
例として種子島ロケットコンテストでは，主に気球で50mほどの高さから投下します．
投下されたCanSatはパラシュート等の減速機構を用いて軟着陸します．
その後，パラシュートを切り離して，センサ（GPSや加速度センサ，カメラ）の値をもとに自律走行であらかじめ決められた目標地点に走行します．

目標地点との到達距離や到達時間を競います．
競技中，CanSatは自律制御で動作します．
そのため，ダウンリンク（CanSatから地上局（パソコン等）へ情報を送ること）はできますが，アップリンク（地上局からCanSatへ情報を送ること）はできません．

<div align="center">
<img src="https://raw.githubusercontent.com/ymt117/100kinSAT/master/image/sequential.png" alt="img" width="50%">
</div>

### 主なCanSatコンペティション
---

- 種子島ロケットコンテスト
- 能代宇宙イベント
- 缶サット甲子園

### 100kinSATの利用について
---

- 100kinSATを利用する際は，クレジット表記（100kinSAT）をしていただけるとありがたいです．
- ぜひ個人利用や授業等に活用してください（利用するときにメール等で連絡していただけると嬉しいです）．
- 100kinSATに関して，改変や営利目的での二次利用は自由に行っていただいて構いません．
- 100kinSATの制御に使用している外部ライブラリ等に関しては配布元のライセンスに従ってください．
