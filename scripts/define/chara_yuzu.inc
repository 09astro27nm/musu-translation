## �䂸�����ݒ� #############################################################
chara_folder	l_yuzu,"chara"
chara_name	l_yuzu,"�䂸"
@yuzu_small
#@yuzu_shifuku
@yuzu_jyosou

## ���� #######################################################################
macro	yuzu_
	chara_off	l_yuzu
endmacro

## ���� #######################################################################
# ����
macro	yuzu_small
	chara_size	l_yuzu,"��",0,103
endm

# ����
macro	yuzu_middle
	chara_size	l_yuzu,"��",0,6
endm

# �߂�
macro	yuzu_large
	chara_size	l_yuzu,"��",0,-78
endm

## ���� ######################################################################
macro	yuzu_shifuku
	chara_clothes	l_yuzu,"����"
endm
macro	yuzu_jyosou
	chara_clothes	l_yuzu,"����"
endm
macro	yuzu_seifuku
	chara_clothes	l_yuzu,"�~��"
	if _MONTH>6 and _MONTH<10 then chara_clothes	l_mikan,"�ĕ�"
endm
macro	yuzu_mizugi
	chara_clothes	l_yuzu,"����"
endm
macro	yuzu_pajama
	chara_clothes	l_yuzu,"�p�W���}"
endm

## �\�� ######################################################################

#- ���� ----------------------------------------------------------------------
macro	yuzu
	chara_auto	l_yuzu,"��.png"
endm
#- �΂� ----------------------------------------------------------------------
macro	yuzu_warai
	chara_auto	l_yuzu,"��.png"
endm
#- �Ƃ� ----------------------------------------------------------------------
macro	yuzu_tere
	chara_auto	l_yuzu,"��.png"
endm
#- �{�� ----------------------------------------------------------------------
macro	yuzu_ikari
	chara_auto	l_yuzu,"�{.png"
endm
#- ���� ----------------------------------------------------------------------
macro	yuzu_akire
	chara_auto	l_yuzu,"�}.png"
endm
#- ���� ----------------------------------------------------------------------
macro	yuzu_odoroki
	chara_auto	l_yuzu,"��.png"
endm
#- ������ --------------------------------------------------------------------
macro	yuzu_kanashimi
	chara_auto	l_yuzu,"��.png"
endm
#- ��� --------------------------------------------------------------------
macro	yuzu_yorokobi
	chara_auto	l_yuzu,"��.png"
endm
