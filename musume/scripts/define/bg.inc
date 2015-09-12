macro	bg_init
	layer_release	1
	layer_release	2
	se_stop		1
	se_bg_stop
	screen_effect_snow_off
	screen_effect_rain_off
	screen_effect_storm_off
	if kaisou_flag=0 then screen_color_set 	0,0,0
endm
# ��z�t�B���^�[ -------------------------------------------------------------
macro	kaisou
	screen_color_set 	32,0,-16
	kaisou_flag=1
endm
# ��z�t�B���^�[�I�t ---------------------------------------------------------
macro	kaisou_off
	screen_color_set 	0,0,0
	kaisou_flag=0
endm
# �� -------------------------------------------------------------------------
macro	bg_black
	@bg_init
	@chara_clear
	bg	"cg\bg\black.png"
endm
# �� -------------------------------------------------------------------------
macro	bg_white
	@bg_init
	@chara_clear
	bg	"cg\bg\white.png"
endm
# �� -------------------------------------------------------------------------
macro	bg_red
	@bg_init
	bg	"cg\bg\red.png"
endm
# �� -------------------------------------------------------------------------
macro	bg_pink
	@bg_init
layer_movie_load 	1,"system\movie\��2.mpg",play_loop
layer_position_set	1,240,180
layer_scale_set		1,250,250
layer_drawmode_set	1,DRAW_ADD
	bg	"cg\bg\pink.png"
endm
# �� -------------------------------------------------------------------------
macro	bg_sky
	@bg_init
	bg	"cg\bg\sky.png"
endm
# �܋� ----------------------------------------------------------------------
macro	bg_sky_k
	@bg_init
	bg	"cg\bg\bg02_������.png"
endm
# �[���̋� -------------------------------------------------------------------
macro	bg_sky_y
	@bg_init
	bg	"cg\bg\�[��.png"
endm
# ��� -----------------------------------------------------------------------
macro	bg_sky_n
	@bg_init
	bg	"cg\bg\���.png"
endm
# ���2 -----------------------------------------------------------------------
macro	bg_sky2_n
	@bg_init
	bg	"cg\bg\���2.png"
endm
# �J�� -----------------------------------------------------------------------
macro	bg_sky_ame
	@bg_init
	se_bg	"sound\se\BG_�J.ogg"
	bg	"cg\bg\�J��.png"
endm
# �V�̐� --------------------------------------------------------------------
macro	bg_sky_amaanogawa
	@bg_init
	bg	"cg\bg\�V�̐�.png"
endm
# ��(�c��) ------------------------------------------------------------------
macro	bg_sky2
	@bg_init
	layer_load	0,"cg\bg\sky2.png"
	layer_load	1,"cg\bg\bg01�ǎ��@�O_����.png"
	screen_blackin	2000
	layer_move	0,40000,0,-300,0,0,passtype_tcb
	layer_move	1,40000,0,0,0,600,passtype_tcb
endm
# ��(�c��)/�ǎ��@����---------------------------------------------------------
macro	bg_sky3
	@bg_init
	layer_load	0,"cg\bg\sky3.png"
	screen_blackin	1000
	layer_move	0,10000,0,-400,0,0,passtype_tcb
endm
# ���� -----------------------------------------------------------------------
macro	bg_kekkon
	@bg_init
	bg	"cg\bg\bg_kekkon.png"
endm
# ����2 -----------------------------------------------------------------------
macro	bg_kekkon2
	@bg_init
	layer_load	0,"cg\bg\bg_kekkon.png"
endm
# �Q�[���I�[�o�[ -------------------------------------------------------------
macro	bg_gameover
	@bg_init
	bg	"cg\bg\gameover.png"
endm
# �Q�[���I�[�o�[2 -------------------------------------------------------------
macro	bg_gameover2
	@bg_init
	bg	"cg\bg\gameover2.png"
endm
# �X�P�W���[���p�w�i ---------------------------------------------------------
macro	bg_schedule
	@bg_init
	layer_load_overlap	0,"cg\bg\�󑱂�.png"
	layer_load	1,"cg\bg\bg01�ǎ��@�O_����.png"
	screen_blackin	500
	layer_move	0,4000,0,-500,0,0,passtype_linear
#	layer_move	1,40000,0,600,0,0,passtype_tcb
	layer_position	1,0,150
endm


###############################################################################


# �� --------------------------------------------------------------------------
macro	bg_machi
	@bg_init
	se_bg	"sound\se\BG_�X2.ogg"
	bg	"cg\bg\bg_machi.png"
endm
# �w�O ------------------------------------------------------------------------
macro	bg_ekimae
	@bg_init
	se_bg	"sound\se\BG_�w�O.ogg"
	bg	"cg\bg\bg_ekimae.png"
endm
# ���X�X ----------------------------------------------------------------------
macro	bg_syoutengai
	@bg_init
	se_bg	"sound\se\BG_���X�X.ogg"
	bg	"cg\bg\���X�X.png"
endm
# ���X�X(��) -----------------------------------------------------------------
macro	bg_syoutengai_k
	@bg_init
	se_bg	"sound\se\BG_���X�X.ogg"
	bg	"cg\bg\���X�X_��.png"
endm
# ���X�X(�J) -----------------------------------------------------------------
macro	bg_syoutengai_a
	@bg_init
#	screen_effect_rain	200,1
	se_bg	"sound\se\BG_�J.ogg"
	bg	"cg\bg\���X�X_��.png"
endm
# ���X�X(�[��) ---------------------------------------------------------------
macro	bg_syoutengai_y
	@bg_init
	se_bg	"sound\se\BG_���X�X.ogg"
	bg	"cg\bg\���X�X_�[��.png"
endm
# ������ ----------------------------------------------------------------------
macro	bg_fittingroom
	@bg_init
#	se_bg	"sound\se\BG_���X�X.ogg"
	bg	"cg\bg\������.png"
endm
# �ɉ؊X ----------------------------------------------------------------------
macro	bg_hankagai
	@bg_init
	se_bg	"sound\se\BG_�ɉ؊X.ogg"
	bg	"cg\bg\bg_hankagai.png"
endm
# �ɉ؊X ----------------------------------------------------------------------
macro	bg_hankagai_n
	@bg_init
	se_bg	"sound\se\BG_�ɉ؊X.ogg"
	bg	"cg\bg\bg_hankagai_n.png"
endm
# �Z��X ----------------------------------------------------------------------
macro	bg_jyuutakugai
	@bg_init
	se_bg	"sound\se\BG_�Â��ȏZ��X�Ȃ�.ogg"
	bg	"cg\bg\�Z��X.png"
endm
# �Z��X(��) ------------------------------------------------------------------
macro	bg_jyuutakugai_k
	@bg_init
	se_bg	"sound\se\BG_�Â��ȏZ��X�Ȃ�.ogg"
	bg	"cg\bg\�Z��X_��.png"
endm
# �Z��X(�J) ------------------------------------------------------------------
macro	bg_jyuutakugai_a
	@bg_init
	screen_effect_rain	200,1
	se_bg	"sound\se\BG_�J.ogg"
	bg	"cg\bg\�Z��X_��.png"
endm
# �Z��X (�[��) --------------------------------------------------------------
macro	bg_jyuutakugai_y
	@bg_init
	se_bg	"sound\se\BG_�Â��ȏZ��X�Ȃ�.ogg"
	bg	"cg\bg\�Z��X_�[��.png"
endm
# �Z��X (��)-----------------------------------------------------------------
macro	bg_jyuutakugai_n
	@bg_init
	bg	"cg\bg\�Z��X_��.png"
endm
# ��h ----------------------------------------------------------------------
macro	bg_teibou
	@bg_init
	se_bg	"sound\se\BG_��h.ogg"
	bg	"cg\bg\��h.png"
endm
# �Ղ� ----------------------------------------------------------------------
macro	bg_matsuri
	@bg_init
	se_bg	"sound\se\BG_���Ղ�`�o�X�O.ogg"
	bg	"cg\bg\bg_maturi.png"
endm
# �H�n�� ----------------------------------------------------------------------
macro	bg_rojiura
	@bg_init
	bg	"cg\bg\�H�n��.png"
endm
# �@�{�݊O�� -----------------------------------------------------------------
macro	bg_soushisetsu
	@bg_init
	bg	"cg\bg\�@�{�݊O��.png"
endm
# �@�{�݊O��(�[��) -----------------------------------------------------------
macro	bg_soushisetsu_y
	@bg_init
	bg	"cg\bg\�@�{�݊O��_�[��.png"
endm
# �@�{�݊O��(��) -------------------------------------------------------------
macro	bg_soushisetsu_n
	@bg_init
	bg	"cg\bg\�@�{�݊O��_��.png"
endm
# �@�{�݌� -----------------------------------------------------------------
macro	bg_soushisetsu_koshitsu
	@bg_init
	bg	"cg\bg\�@�{�݌�.png"
endm
# �@�{�݌�(�[��) -----------------------------------------------------------
macro	bg_soushisetsu_koshitsu_y
	@bg_init
	bg	"cg\bg\�@�{�݌�_�[��.png"
endm
# �@�{�݌�(��) -------------------------------------------------------------
macro	bg_soushisetsu_koshitsu_n
	@bg_init
	bg	"cg\bg\�@�{�݌�_��.png"
endm
# �a�@�O�� -----------------------------------------------------------------
macro	bg_byouin
	@bg_init
	bg	"cg\bg\�a�@�O��.PNG"
endm
# �a�@�L�� -----------------------------------------------------------------
macro	bg_byouin_rouka
	@bg_init
	bg	"cg\bg\�a�@�L��.PNG"
endm
# �a�� -----------------------------------------------------------------
macro	bg_byoushitsu
	@bg_init
	bg	"cg\bg\�a��.PNG"
endm
# �� -----------------------------------------------------------------------
macro	bg_hayashi
	@bg_init
	bg	"cg\bg\BG�ѓ�.png"
endm
# ��(�܂�) -------------------------------------------------------------------
macro	bg_hayashi_k
	@bg_init
	bg	"cg\bg\BG�ѓ�_��.png"
endm
# ��(��) -------------------------------------------------------------------
macro	bg_hayashi_n
	@bg_init
	bg	"cg\bg\BG�ѓ�_��.png"
endm
# ���� -------------------------------------------------------------------
macro	bg_kouen
	@bg_init
#	se_bg	"sound\se\BG_����.ogg"
	bg	"cg\bg\����.png"
endm
# ���� (�܂�)----------------------------------------------------------------
macro	bg_kouen_k
	@bg_init
	bg	"cg\bg\����_�܂�.png"
endm
# ���� (�J)----------------------------------------------------------------
macro	bg_kouen_a
	@bg_init
	screen_effect_rain	200,1
	se_bg	"sound\se\BG_�J.ogg"
	bg	"cg\bg\����_�܂�.png"
endm
# ���� (�[��)-----------------------------------------------------------------
macro	bg_kouen_y
	@bg_init
	bg	"cg\bg\����_�[��.png"
endm
# ���� (��)-----------------------------------------------------------------
macro	bg_kouen_n
	@bg_init
	bg	"cg\bg\����_��.png"
endm
# ���ؕ��� -----------------------------------------------------------------
macro	bg_goukabeya
	@bg_init
	bg	"cg\bg\���ؕ���.png"
endm
# �E�H�[�^�[�p�[�N -----------------------------------------------------------
macro	bg_waterpark
	@bg_init
	se_bg	"sound\se\BG_�E�H�[�^�[�p�[�N.ogg"
layer_movie_load 	1,"system\movie\�Ђ���03.mpg",play_loop
layer_position_set	1,240,180
layer_scale_set		1,250,250
layer_drawmode_set	1,DRAW_ADD
	bg	"cg\bg\bg17.png"
endm
# ��э��ݑ� ----------------------------------------------------------------
macro	bg_waterpark_tobikomi
	@bg_init
	bg	"cg\bg\bg18.png"
endm
# ��э��ݑ� ----------------------------------------------------------------
macro	bg_waterpark_tobikomi_t
	@bg_init
	bg	"cg\bg\bg18_t.png"
endm



# �G���L���[�g ----------------------------------------------------------------
macro	bg_erocute
	@bg_init
	@bg_black
	@subuta_counter
	@subuta_right
	@subuta
	se		0,"sound\se\BG_�A�C�e���V���b�v�K�i�~���.WAV",play_once
	layer_load	0,"cg\bg\bg_erocute1.png"
	layer_load	60,"cg\bg\bg_erocute2.png"
	screen_blackin	2000
	wait		2000
	se		0,"sound\se\�A�C�e���V���b�v_�h�A�J.wav",play_once
	layer_scale	60,2000,0,0,-100,50,passtype_tcb
	layer_move	60,2000,0,0,1000,0,passtype_tcb
	wait		1000
	layer_alpha	60,1000,0,-255,passtype_tcb
	wait		1000
	layer_release	60
endm
# �G���L���[�g ----------------------------------------------------------------
macro	bg_erocute2
	@bg_init
	bg	"cg\bg\bg_erocute1.png"
endm
# �V���b�v -------------------------------------------------------------------
macro	bg_shop
	@bg_init
	bg	"cg\bg\bg_erocute1.png"
endm
# ��s�̕��� -----------------------------------------------------------------
macro	bg_yakou
	@bg_init
	bg	"cg\bg\��s�̕���.png"
endm
# ��s�̃r�� -----------------------------------------------------------------
macro	bg_yakoubill
	@bg_init
	bg	"cg\bg\��s�̃r��.png"
endm
# ��s�̃r��(�[) -------------------------------------------------------------
macro	bg_yakoubill_y
	@bg_init
	bg	"cg\bg\��s�̃r��_�[.png"
endm
# ��s�̃r��(��) -------------------------------------------------------------
macro	bg_yakoubill_n
	@bg_init
	bg	"cg\bg\��s�̃r��_��.png"
endm
# ��s�̃r���@�L�� ----------------------------------------------------------
macro	bg_yakoubill_rouka
	@bg_init
	bg	"cg\bg\��s_�L��.png"
endm
# ��s�̃r���@�L��(�n��) -----------------------------------------------------
macro	bg_yakoubill_rouka_chika
	@bg_init
	bg	"cg\bg\��s_�n���L��.png"
endm

##############################################################################

# ���� ----------------------------------------------------------------------
macro	bg_trpg_sougen
	@bg_init
	bg	"cg\bg\����.png"
#	layer_movie_load 	1,"system\movie\�Ђ���02.mpg",play_loop
#	layer_position_set	1,240,180
#	layer_scale_set		1,250,250
#	layer_drawmode_set	1,DRAW_ADD
endm

# ���� ----------------------------------------------------------------------
macro	bg_trpg_sougen_n
	@bg_init
	bg	"cg\bg\����_n.png"
#	layer_movie_load 	1,"system\movie\�Ђ���02.mpg",play_loop
#	layer_position_set	1,240,180
#	layer_scale_set		1,250,250
#	layer_drawmode_set	1,DRAW_ADD
endm

# �܂� ----------------------------------------------------------------------
macro	bg_trpg_machi
	@bg_init
	bg	"cg\bg\TRPG�X.png"
endm
# �܂� ----------------------------------------------------------------------
macro	bg_trpg_machi_n
	@bg_init
	bg	"cg\bg\TRPG�X_n.png"
endm

# ���� ----------------------------------------------------------------------
macro	bg_trpg_sakaba
	@bg_init
	bg	"cg\bg\����.png"
endm





##############################################################################

# �{�݊O�� ----------------------------------------------------------------
macro	bg_kojiin_n
	@bg_init
	bg	"cg\bg\bg01�ǎ��@�O_��.png"
endm

# �ǎ��@�O ----------------------------------------------------------------
macro	bg_gate
	@bg_init
	bg	"cg\bg\bg02_��.png"
endm
# �ǎ��@�O(��) -----------------------------------------------------------
macro	bg_gate_k
	@bg_init
	bg	"cg\bg\bg02_������.png"
endm
# �ǎ��@�O(�J) -----------------------------------------------------------
macro	bg_gate_a
	@bg_init
	screen_effect_rain	200,1
	se_bg	"sound\se\BG_�J.ogg"
	bg	"cg\bg\bg02_������.png"
endm
# �ǎ��@�O(��) -----------------------------------------------------------
macro	bg_gate_s
	@bg_init
	screen_effect_snow	200,1
	bg	"cg\bg\bg02_������.png"
endm
# �ǎ��@�O(��) -----------------------------------------------------------
macro	bg_gate_n
	@bg_init
	bg	"cg\bg\bg02_��.png"
endm
# �ǎ��@�O(�[��) ---------------------------------------------------------
macro	bg_gate_y
	@bg_init
	bg	"cg\bg\bg02_�[.png"
endm
# ���r���O -------------------------------------------------------------------
macro	bg_living
	@bg_init
	bg	"cg\bg\bg04.png"
endm
# ���r���O(��) ---------------------------------------------------------------
macro	bg_living_n
	@bg_init
	bg	"cg\bg\bg04_n.png"
endm
# ���r���O(�J) ---------------------------------------------------------------
macro	bg_living_a
	@bg_init
	se_bg	"sound\se\BG_�J.ogg"
	bg	"cg\bg\bg04_n.png"
endm
# ���� ----------------------------------------------------------------------
macro	bg_genkan
	@bg_init
	bg	"cg\bg\bg11.png"
endm
# �L�� ----------------------------------------------------------------------
macro	bg_hiroma
	@bg_init
	bg	"cg\bg\bg09.png"
endm
# ���� ---------------------------------------------------------------------
macro	bg_nakaniwa
	@bg_init
	bg	"cg\bg\bg06.png"
endm
# ����(�[��) ----------------------------------------------------------------
macro	bg_nakaniwa_y
	@bg_init
	bg	"cg\bg\bg06y.png"
endm
# ����(��) ----------------------------------------------------------------
macro	bg_nakaniwa_n
	@bg_init
	screen_color_set 	-32,-16,0
	bg	"cg\bg\bg06n.png"
endm
# �h�A�O --------------------------------------------------------------------
macro	bg_door
	@bg_init
	bg	"cg\bg\bg14.png"
endm
# �h�A�O(��) ----------------------------------------------------------------
macro	bg_door_n
	@bg_init
	bg	"cg\bg\bg14n.png"
endm
# �H�� -----------------------------------------------------------------------
macro	bg_dining
	@bg_init
	bg	"cg\bg\bg12.png"
endm
# �H��(��) -------------------------------------------------------------------
macro	bg_dining_n
	@bg_init
	bg	"cg\bg\bg12n.png"
endm
# ���� -----------------------------------------------------------------------
macro	bg_bathroom
	@bg_init
	bg	"cg\bg\bg05.png"
endm
# ����(��) -------------------------------------------------------------------
macro	bg_bathroom_n
	@bg_init
	bg	"cg\bg\bg05n.png"
endm
# �}���� ---------------------------------------------------------------------
macro	bg_library
	@bg_init
	bg	"cg\bg\bg07.png"
endm
# �}����(��)------------------------------------------------------------------
macro	bg_library_n
	@bg_init
	bg	"cg\bg\bg07n.png"
endm
# ��y�� ---------------------------------------------------------------------
macro	bg_goraku
	@bg_init
	bg	"cg\bg\bg15.png"
endm
# ��y�� (��) ----------------------------------------------------------------
macro	bg_goraku_n
	@bg_init
	bg	"cg\bg\bg15n.png"
endm
# �L�� -----------------------------------------------------------------------
macro	bg_rouka
	@bg_init
	bg	"cg\bg\rouka.png"
endm
# �L��(��) -------------------------------------------------------------------
macro	bg_rouka_n
	@bg_init
	bg	"cg\bg\rouka_n.png"
endm
# �L��(����) -----------------------------------------------------------------
macro	bg_rouka_nn
	@bg_init
	screen_color_set 	-32,-16,0
	bg	"cg\bg\rouka_nn.png"
endm
# �L�b�`�� -------------------------------------------------------------------
macro	bg_kitchen
	@bg_init
	bg	"cg\bg\bg03.png"
endm
# �L�b�`��(��) ---------------------------------------------------------------
macro	bg_kitchen_n
	@bg_init
	bg	"cg\bg\bg03n.png"
endm
# �������� -------------------------------------------------------------------
macro	bg_choukyou
	@bg_init
	bg	"cg\bg\bg08.png"
endm
# ��������(��) ---------------------------------------------------------------
macro	bg_choukyou_n
	@bg_init
	bg	"cg\bg\bg08_��.png"
endm
# �n�[�h�������� -------------------------------------------------------------
macro	bg_choukyou_hard
	@bg_init
	bg	"cg\bg\bg16.png"
endm
# ���� -----------------------------------------------------------------------
macro	bg_yane_a
	@bg_init
	se_bg	"sound\se\BG_��2.ogg"
	screen_effect_rain	400,2
	screen_effect_storm	20,200
	screen_color_set 	-32,-16,0
	bg	"cg\bg\�܋�.png"
endm


##############################################################################


# �݂���̕��� ---------------------------------------------------------------
macro	bg_mikan
	@bg_init
	bg	"cg\bg\�݂��񕔉�.png"
endm
# �݂���̕���(��) -----------------------------------------------------------
macro	bg_mikan_n
	@bg_init
	bg	"cg\bg\�݂��񕔉�_��.png"
endm
# �������̕��� ---------------------------------------------------------------
macro	bg_ichigo
	@bg_init
	bg	"cg\bg\����������.png"
endm
# �������̕���(��) -----------------------------------------------------------
macro	bg_ichigo_n
	@bg_init
	bg	"cg\bg\����������_��.png"
endm
# �������̕���(����) --------------------------------------------------------
macro	bg_ichigo_nn
	@bg_init
	bg	"cg\bg\����������_����.png"
endm
# �����̕��� ---------------------------------------------------------------
macro	bg_karin
	@bg_init
	bg	"cg\bg\����񕔉�.png"
endm
# �����̕���(��) -----------------------------------------------------------
macro	bg_karin_n
	@bg_init
	bg	"cg\bg\����񕔉�_��.png"
endm
# ������̕��� ---------------------------------------------------------------
macro	bg_zakuro
	@bg_init
	bg	"cg\bg\�����땔��.png"
endm
# ������̕���(��) -----------------------------------------------------------
macro	bg_zakuro_n
	@bg_init
	bg	"cg\bg\�����땔��_��.png"
endm
# �������̕��� ---------------------------------------------------------------
macro	bg_suika
	@bg_init
	bg	"cg\bg\����������.png"
endm
# �������̕���(��) -----------------------------------------------------------
macro	bg_suika_n
	@bg_init
	bg	"cg\bg\����������_��.png"
endm
# �Ђ���̕��� ---------------------------------------------------------------
macro	bg_hikari
	@bg_init
	bg	"cg\bg\�Ђ��蕔��.png"
endm
# �Ђ���̕���(��) -----------------------------------------------------------
macro	bg_hikari_n
	@bg_init
	bg	"cg\bg\�Ђ��蕔��_��.png"
endm
# �䂸�̕��� ---------------------------------------------------------------
macro	bg_yuzu
	@bg_init
	bg	"cg\bg\�䂸����.png"
endm
# �䂸�̕���(��) -----------------------------------------------------------
macro	bg_yuzu_n
	@bg_init
	bg	"cg\bg\�䂸����_��.png"
endm


##############################################################################


# ���J�̕��� -----------------------------------------------------------------
macro	bg_miu
	@bg_init
	bg	"cg\bg\���J�̕���.png"
endm
# ���J�̕���(��) -------------------------------------------------------------
macro	bg_miu_n
	@bg_init
	bg	"cg\bg\���J�̕���_��.png"
endm
# ���J�̕���(����) -----------------------------------------------------------
macro	bg_miu_nn
	@bg_init
	bg	"cg\bg\���J�̕���_����.png"
endm
# ���̕��� ---------------------------------------------------------------
macro	bg_shizuku
	@bg_init
	bg	"cg\bg\���̕���.png"
endm
# ���̕���(��) -----------------------------------------------------------
macro	bg_shizuku_n
	@bg_init
	bg	"cg\bg\���̕���_��.png"
endm
# ���� -----------------------------------------------------------------------
macro	bg_itsuki
	@bg_init
	bg	"cg\bg\���̕���.png"
endm
# ����(��) -------------------------------------------------------------------
macro	bg_itsuki_n
	@bg_init
	bg	"cg\bg\���̕���_��.png"
endm
# ����(����) -----------------------------------------------------------------
macro	bg_itsuki_nn
	@bg_init
	bg	"cg\bg\���̕���_����.png"
endm


# �󂫕��� -------------------------------------------------------------------
macro	bg_akibeya
	@bg_init
	bg	"cg\bg\�󂫕���.png"
endm
# �󂫕���(��) ---------------------------------------------------------------
macro	bg_akibeya_n
	@bg_init
	bg	"cg\bg\�󂫕���_��.png"
endm