## ����񗧂��ݒ� #############################################################
chara_folder	l_karin,"chara"
chara_name	l_karin,"�����"
@karin_small
@karin_shifuku

## ���� #######################################################################
macro	karin_
	chara_off	l_karin
endmacro

## ���� #######################################################################
# ����
macro	karin_small
	chara_size	l_karin,"��",0,128
endm

# ����
macro	karin_middle
	chara_size	l_karin,"��",0,21
endm

# �߂�
macro	karin_large
	chara_size	l_karin,"��",0,11
endm

## ���� ######################################################################
macro	karin_shifuku
	chara_clothes	l_karin,"����"
endm
macro	karin_shifuku_dere
	chara_clothes	l_karin,"�����f��"
endm
macro	karin_heyagi
	chara_clothes	l_karin,"������"
endm
macro	karin_shitagi
	chara_clothes	l_karin,"����"
endm
macro	karin_seifuku
	chara_clothes	l_karin,"�~��"
	if _MONTH>6 and _MONTH<10 then chara_clothes	l_karin,"�ĕ�"
endm
macro	karin_pajama
	chara_clothes	l_karin,"������"
endm
macro	karin_pajama_dere
	chara_clothes	l_karin,"�������f��"
endm
macro	karin_yukata
	chara_clothes	l_karin,"����"
endm
macro	karin_mizugi
	chara_clothes	l_karin,"����"
endm
macro	karin_hadaka
	chara_clothes	l_karin,"��"
endm
macro	karin_bondage
	chara_clothes	l_karin,"�{���f�[�W"
endm
macro	karin_bondage_dere
	chara_clothes	l_karin,"�{���f�[�W�f��"
endm

## �\�� ######################################################################

#- ���� ----------------------------------------------------------------------
macro	karin
	chara_auto	l_karin,"����.png"
endm
#- ���S ----------------------------------------------------------------------
macro	karin_houshin
	chara_auto	l_karin,"���S.png"
endm
#- �΂� ----------------------------------------------------------------------
macro	karin_warai
	chara_auto	l_karin,"��.png"
endm
#- �Ă� ----------------------------------------------------------------------
macro	karin_tere
	chara_auto	l_karin,"��.png"
endm
#- �{�� ----------------------------------------------------------------------
macro	karin_ikari
	chara_auto	l_karin,"�{.png"
endm
#- ���� ----------------------------------------------------------------------
macro	karin_akire
	chara_auto	l_karin,"����.png"
endm
#- ���� ----------------------------------------------------------------------
macro	karin_bubetsu
	chara_auto	l_karin,"����.png"
endm
#- ���� ----------------------------------------------------------------------
macro	karin_keno
	chara_auto	l_karin,"����.png"
endm
#- ���� ----------------------------------------------------------------------
macro	karin_odoroki
	chara_auto	l_karin,"��.png"
endm
#- ���� ----------------------------------------------------------------------
macro	karin_koufun
	chara_auto	l_karin,"����.png"
endm
#- ������ ----------------------------------------------------------------------
macro	karin_koufun_n
	chara_auto	l_karin,"����n.png"
endm
#- ���� ----------------------------------------------------------------------
macro	karin_naki
	chara_auto	l_karin,"��.png"
endm
#- ������ --------------------------------------------------------------------
macro	karin_kanashimi
	chara_auto	l_karin,"��.png"
endm
#- �ɂ� ----------------------------------------------------------------------
macro	karin_niko
	chara_auto	l_karin,"�ɂ�.png"
endm
#- �R�~�J���{�� --------------------------------------------------------------
macro	karin_komikaru_ikari
	chara_auto	l_karin,"�R�~�J���{.png"
endm
macro	karin_ikari_c
	chara_auto	l_karin,"�R�~�J���{.png"
endm
#- �R�~�J���{�肎 --------------------------------------------------------------
macro	karin_komikaru_ikari_n
	chara_auto	l_karin,"�R�~�J���{n.png"
endm
#- �R�~�J���{��2 --------------------------------------------------------------
macro	karin_komikaru_ikari2
	chara_auto	l_karin,"�R�~�J���{2.png"
endm
#- �R�~�J���~ --------------------------------------------------------------
macro	karin_komikaru_yoku
	chara_auto	l_karin,"�R�~�J���~.png"
endm
macro	karin_yoku
	chara_auto	l_karin,"�R�~�J���~.png"
endm
#- �R�~�J���~�� --------------------------------------------------------------
macro	karin_komikaru_yoku_n
	chara_auto	l_karin,"�R�~�J���~n.png"
endm
#- �R�~�J���� --------------------------------------------------------------
macro	karin_komikaru_namida
	chara_auto	l_karin,"�R�~�J����.png"
endm
