## ��𗧂��ݒ� #############################################################
chara_folder	l_houkou,"chara"
chara_name	l_houkou,"���"
@houkou_small
@houkou_shifuku

## ���� #######################################################################
macro	houkou_
	chara_off	l_houkou
endmacro

## ���� #######################################################################
# ����
macro	houkou_small
	chara_size	l_houkou,"��",0,-20
endm

# ����
macro	houkou_middle
	chara_size	l_houkou,"��",0,-120
endm

# �߂�
macro	houkou_large
	chara_size	l_houkou,"��",0,0
endm

## ���� ######################################################################
macro	houkou_shifuku
	chara_clothes	l_houkou,"����"
endm
macro	houkou_knife
	chara_clothes	l_houkou,"�i�C�t"
endm
macro	houkou_knife2
	chara_clothes	l_houkou,"�i�C�t2"
endm
macro	houkou_knife3
	chara_clothes	l_houkou,"�i�C�t3"
endm


## �\�� ######################################################################

#- ���� ----------------------------------------------------------------------
macro	houkou
	chara_auto	l_houkou,"��.png"
endm
#- �΂� ----------------------------------------------------------------------
macro	houkou_warai
	chara_auto	l_houkou,"��.png"
endm
#- ��� ----------------------------------------------------------------------
macro	houkou_yorokobi
	chara_auto	l_houkou,"��.png"
endm
#- �{�� ----------------------------------------------------------------------
macro	houkou_ikari
	chara_auto	l_houkou,"�{.png"
endm
#- ���� ----------------------------------------------------------------------
macro	houkou_odoroki
	chara_auto	l_houkou,"��.png"
endm
#- ������ --------------------------------------------------------------------
macro	houkou_kanashimi
	chara_auto	l_houkou,"��.png"
endm
#- �e ------------------------------------------------------------------------
macro	houkou_kage
	chara_auto	l_houkou,"�e.png"
endm
#- �� ------------------------------------------------------------------------
macro	houkou_kurushimi
	chara_auto	l_houkou,"��.png"
endm

