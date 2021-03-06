## るあ立ち設定 #############################################################
chara_folder	l_rua,"chara"
chara_name	l_rua,"るあ"
@rua_small
@rua_shifuku

## 消す #######################################################################
macro	rua_
	chara_off	l_rua
endmacro

## 距離 #######################################################################
# 遠い
macro	rua_small
	chara_size	l_rua,"小",0,117
endm

# 中間
macro	rua_middle
	chara_size	l_rua,"中",0,35
endm

# 近い
macro	rua_large
	chara_size	l_rua,"大",0,7
endm

## 服装 ######################################################################
macro	rua_shifuku
	chara_clothes	l_rua,"私服"
endm


## 表情 ######################################################################

#- 普通 ----------------------------------------------------------------------
macro	rua
	chara_auto	l_rua,"普.png"
endm
#- 笑い ----------------------------------------------------------------------
macro	rua_warai
	chara_auto	l_rua,"笑.png"
endm
#- 怒り ----------------------------------------------------------------------
macro	rua_ikari
	chara_auto	l_rua,"怒.png"
endm
#- にこ ----------------------------------------------------------------------
macro	rua_niko
	chara_auto	l_rua,"にこ.png"
endm
#- 驚き ----------------------------------------------------------------------
macro	rua_odoroki
	chara_auto	l_rua,"驚.png"
endm
#- 哀しみ --------------------------------------------------------------------
macro	rua_kanashimi
	chara_auto	l_rua,"哀.png"
endm
#- 泣き --------------------------------------------------------------------
macro	rua_naki
	chara_auto	l_rua,"泣.png"
endm
#- 拗ね --------------------------------------------------------------------
macro	rua_akire
	chara_auto	l_rua,"拗ね.png"
endm

