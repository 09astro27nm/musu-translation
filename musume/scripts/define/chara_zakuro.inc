## ざくろ設定 #############################################################
chara_folder	l_zakuro,"chara"
chara_name	l_zakuro,"ざくろ"
@zakuro_small
@zakuro_shifuku

## 消す #######################################################################
macro	zakuro_
	chara_off	l_zakuro
endmacro

## 距離 #######################################################################
# 遠い
macro	zakuro_small
	chara_size	l_zakuro,"小",0,80
endm

# 中間
macro	zakuro_middle
	chara_size	l_zakuro,"中",0,-35
endm

# 近い
macro	zakuro_large
	chara_size	l_zakuro,"大",64,0
endm

## 服装 ######################################################################
macro	zakuro_shifuku
	chara_clothes	l_zakuro,"私服"
endm
macro	zakuro_mizugi
	chara_clothes	l_zakuro,"水着"
endm
macro	zakuro_pajama
	chara_clothes	l_zakuro,"部屋着"
endm
macro	zakuro_shitagi
	chara_clothes	l_zakuro,"下着"
endm
macro	zakuro_hadaka
	chara_clothes	l_zakuro,"裸"
endm

## 表情 ######################################################################

#- 普通 ----------------------------------------------------------------------
macro	zakuro
	chara_auto	l_zakuro,"普.png"
endm
#- 呆 ------------------------------------------------------------------------
macro	zakuro_akire
	chara_auto	l_zakuro,"呆.png"
endm
#- 目閉じ --------------------------------------------------------------------
macro	zakuro_metoji
	chara_auto	l_zakuro,"閉.png"
endm
#- 怒り ----------------------------------------------------------------------
macro	zakuro_ikari
	chara_auto	l_zakuro,"怒.png"
endm
#- 笑い ----------------------------------------------------------------------
macro	zakuro_warai
	chara_auto	l_zakuro,"にこ.png"
endm
#- 笑い2 ----------------------------------------------------------------------
macro	zakuro_warai2
	chara_auto	l_zakuro,"笑.png"
endm
#- 嫌 ------------------------------------------------------------------------
macro	zakuro_iya
	chara_auto	l_zakuro,"嫌.png"
endm
#- にこ ----------------------------------------------------------------------
macro	zakuro_niko
	chara_auto	l_zakuro,"にこ.png"
endm
#- 哀しみ ----------------------------------------------------------------------
macro	zakuro_kanashimi
	chara_auto	l_zakuro,"哀.png"
endm
#- 照れ ----------------------------------------------------------------------
macro	zakuro_tere
	chara_auto	l_zakuro,"照.png"
endm
