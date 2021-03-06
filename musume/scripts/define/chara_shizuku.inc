## 雫設定 #############################################################
chara_folder	l_shizuku,"chara"
chara_name	l_shizuku,"雫"
@shizuku_small
@shizuku_shifuku

## 消す #######################################################################
macro	shizuku_
	chara_off	l_shizuku
endmacro

## 距離 #######################################################################
# 遠い
macro	shizuku_small
	chara_size	l_shizuku,"小",0,11
endm

# 遠い
macro	shizuku_small_left
	chara_size	l_shizuku,"小",-200,11
endm



# 中間
macro	shizuku_middle
	chara_size	l_shizuku,"中",0,-104
endm

# 近い
macro	shizuku_large
	chara_size	l_shizuku,"大",0,-74
endm

## 服装 ######################################################################
macro	shizuku_shifuku
	chara_clothes	l_shizuku,"私服"
endm
macro	shizuku_mizugi
	chara_clothes	l_shizuku,"水着"
endm
macro	shizuku_hadaka
	chara_clothes	l_shizuku,"裸"
endm

## 表情 ######################################################################

#- 普通 ----------------------------------------------------------------------
macro	shizuku
	chara_auto	l_shizuku,"普通.png"
endm
#- 呆 ------------------------------------------------------------------------
macro	shizuku_akire
	chara_auto	l_shizuku,"呆.png"
endm
#- 怒笑い --------------------------------------------------------------------
macro	shizuku_ikariwarai
	chara_auto	l_shizuku,"怒笑.png"
endm
#- 怒笑い --------------------------------------------------------------------
macro	shizuku_chousyou
	chara_auto	l_shizuku,"怒笑.png"
endm
#- 怒り ----------------------------------------------------------------------
macro	shizuku_ikari
	chara_auto	l_shizuku,"怒.png"
endm
#- 笑い ----------------------------------------------------------------------
macro	shizuku_warai
#	chara_auto	l_shizuku,"笑.png"
	chara_auto	l_shizuku,"怒笑.png"
endm
macro	shizuku_warai2
	chara_auto	l_shizuku,"笑.png"
endm
#- 照れ怒り ------------------------------------------------------------------
macro	shizuku_tereikari
	chara_auto	l_shizuku,"照怒.png"
endm
#- 照れすね ------------------------------------------------------------------
macro	shizuku_teresune
	chara_auto	l_shizuku,"照すね.png"
endm
#- 照れすね ------------------------------------------------------------------
macro	shizuku_tere
	chara_auto	l_shizuku,"照.png"
endm
#- 泣き ----------------------------------------------------------------------
macro	shizuku_naki
	chara_auto	l_shizuku,"泣.png"
endm
#- 喜び ----------------------------------------------------------------------
macro	shizuku_yorokobi
	chara_auto	l_shizuku,"喜.png"
endm
#- 哀 ----------------------------------------------------------------------
macro	shizuku_kanashimi
	chara_auto	l_shizuku,"呆.png"
endm

