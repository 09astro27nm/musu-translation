## ���C�����ݒ� #############################################################
chara_folder	l_suzumi,"chara"
chara_name	l_suzumi,"���C"
@suzumi_small
@suzumi_shifuku

## ���� #######################################################################
macro	suzumi_
	chara_off	l_suzumi
endmacro

## ���� #######################################################################
# ����
macro	suzumi_small
	chara_size	l_suzumi,"��",0,145
endm

# ����
macro	suzumi_middle
	chara_size	l_suzumi,"��",0,0
endm

# �߂�
macro	suzumi_large
	chara_size	l_suzumi,"��",0,0
endm

## ���� ######################################################################
macro	suzumi_shifuku
	chara_clothes	l_suzumi,"����"
endm


## �\�� ######################################################################

#- ���� ----------------------------------------------------------------------
macro	suzumi
	chara_auto	l_suzumi,"��.png"
endm
#- �΂� ----------------------------------------------------------------------
macro	suzumi_warai
	chara_auto	l_suzumi,"��.png"
endm
#- �{�� ----------------------------------------------------------------------
macro	suzumi_ikari
	chara_auto	l_suzumi,"�{.png"
endm
#- ���� ----------------------------------------------------------------------
macro	suzumi_niko
	chara_auto	l_suzumi,"�ɂ�.png"
endm
#- ���� ----------------------------------------------------------------------
macro	suzumi_odoroki
	chara_auto	l_suzumi,"��.png"
endm
#- ������ --------------------------------------------------------------------
macro	suzumi_kanashimi
	chara_auto	l_suzumi,"��.png"
endm
#- ����1 --------------------------------------------------------------------
macro	suzumi_naki
	chara_auto	l_suzumi,"��1.png"
endm
#- ����2 --------------------------------------------------------------------
macro	suzumi_naki2
	chara_auto	l_suzumi,"��2.png"
endm
#- �R�~�J���{ --------------------------------------------------------------
macro	suzumi_komical_ikari
	chara_auto	l_suzumi,"�R�~�J���{.png"
endm
macro	suzumi_comical_ikari
	@suzumi_komical_ikari
endm
macro	suzumi_ikari_c
	@suzumi_komical_ikari
endm
