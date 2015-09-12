
#�X�e�[�^�X�����ׂăI�[�v��
macro	status_fullopen
	money_open
	@lifebar_fullopen2
endm

#�X�^�[���������ׂăN���[�Y
macro	status_fullclose
	money_close
	@lifebar_fullclose2
endm

#���C�t�o�[�����ׂăI�[�v������(���ԍ�����)
macro	lifebar_fullopen
	lifebar_open	life_kenkou
	#wait	100
	lifebar_open	life_kiryoku
	#wait	100
	lifebar_open	life_miryoku
	#wait	100
	lifebar_open	life_karada
	#wait	100
	lifebar_open	life_kokoro
	#wait	100
	lifebar_open	life_atama
	#wait	100
endm

#���C�t�o�[�����ׂăI�[�v������(���ԍ��Ȃ�)
macro	lifebar_fullopen2
	lifebar_open	life_kenkou
	lifebar_open	life_kiryoku
	lifebar_open	life_miryoku
	lifebar_open	life_karada
	lifebar_open	life_kokoro
	lifebar_open	life_atama
endm

#���C�t�o�[�����ׂăN���[�Y����(���ԍ�����)
macro	lifebar_fullclose
	lifebar_close	life_atama
	#wait	100
	lifebar_close	life_kokoro
	#wait	100
	lifebar_close	life_karada
	#wait	100
	lifebar_close	life_miryoku
	#wait	100
	lifebar_close	life_kiryoku
	#wait	100
	lifebar_close	life_kenkou
	#wait	100
endm

#���C�t�o�[�����ׂăN���[�Y����(���ԍ��Ȃ�)
macro	lifebar_fullclose2
	lifebar_close	life_atama
	lifebar_close	life_kokoro
	lifebar_close	life_karada
	lifebar_close	life_miryoku
	lifebar_close	life_kiryoku
	lifebar_close	life_kenkou
endm



#�J�����_�[�̕\��
macro	calendar-------------------------------------------------------------
	date_close
	money_close
	bgm_stop
	@bg_black
	wait	1000
	se	1,"sound\se\��.wav",play_once
	calendar_open
	wait	4000
	calendar_close
	date_open
endm







#�X�P�W���[���N���[�Y ######################################################
macro	close_schedule
	money_close
	@lifebar_fullclose
	@bg_black
	@chara_init
endm

#�X�P�W���[���I�[�v�� ######################################################
macro	open_schedule
	@bgm04
	money_open
	@lifebar_fullopen
	@bg_schedule
endm

#���x���A�b�v ###############################################################
macro	status_levelup
	layer_load	61,"schedule\levelup.png"
	layer_position	61,100,100
	layer_move	61,1000,0,600,0,0,PASSTYPE_NEVILLE_A
	se		3,"sound\se\���x���A�b�v.wav",play_once
	wait		1000
	layer_movie_load 62,"system\movie\����2.mpg",play_once
	layer_position_set	62,140,180
	layer_scale_set		62,300,300
	layer_drawmode_set	62,DRAW_ADD
	wait		2000
	layer_alpha	61,1000,0,-255,PASSTYPE_TCB
	wait		1000
	layer_release	61
	layer_release	62
endm

#�����x���A�b�v ###############################################################
macro	status_atamalevelup
	layer_load	61,"schedule\levelup_atama.png"
	layer_position	61,100,100
	layer_move	61,1000,0,600,0,0,PASSTYPE_NEVILLE_A
	se		3,"sound\se\���x���A�b�v.wav",play_once
	wait		1000
	layer_movie_load 62,"system\movie\����2.mpg",play_once
	layer_position_set	62,140,180
	layer_scale_set		62,300,300
	layer_drawmode_set	62,DRAW_ADD
	wait		2000
	layer_alpha	61,1000,0,-255,PASSTYPE_TCB
	wait		1000
	layer_release	61
	layer_release	62
endm
#�����x���A�b�v ###############################################################
macro	status_atamalevelup2
	layer_load	61,"schedule\levelup_atama.png"
	layer_position	61,200,100
	layer_move	61,1000,0,600,0,0,PASSTYPE_NEVILLE_A
	se		3,"sound\se\���x���A�b�v.wav",play_once
	wait		1000
	layer_movie_load 62,"system\movie\����2.mpg",play_once
	layer_position_set	62,240,180
	layer_scale_set		62,300,300
	layer_drawmode_set	62,DRAW_ADD
	wait		2000
	layer_alpha	61,1000,0,-255,PASSTYPE_TCB
	wait		1000
	layer_release	61
	layer_release	62
endm
#�����A�b�v ###############################################################
macro	status_salaryup
	layer_load	61,"schedule\salaryup.png"
	layer_position	61,100,100
	layer_move	61,1000,0,600,0,0,PASSTYPE_NEVILLE_A
	se		3,"sound\se\�����A�b�v.wav",play_once
	wait		1000
	layer_movie_load 62,"system\movie\����2.mpg",play_once
	layer_position_set	62,140,180
	layer_scale_set		62,300,300
	layer_drawmode_set	62,DRAW_ADD
	wait		2000
	layer_alpha	61,1000,0,-255,PASSTYPE_TCB
	wait		1000
	layer_release	61
	layer_release	62
endm


# �L�����N�^�[�I����� #######################################################
macro	character_select
	window_close
	clearbutton
#	# setbutton �{�^���ԍ�,X,Y,�G�t�F�N�g
if mikan_on=1 then setbutton 1,290,96,0,"system\Schedule\select_mikan.png","system\Schedule\select_mikan.png"
if ichigo_on=1 then setbutton 2,32,96,0,"system\Schedule\select_ichigo.png","system\Schedule\select_ichigo.png"
if karin_on=1 then setbutton 3,540,96,0,"system\Schedule\select_karin.png","system\Schedule\select_karin.png"
	setbutton 0,240,480,0,"system\Schedule\select_quit.png","system\Schedule\select_quit.png"

	getbutton sel

	se	0,"sound\se\�N�C���b.wav",play_once
	clearbutton
endm


#�Q�[���I�[�o�[
macro	gameover
date_close
money_close
@bg_black
wait		2000
@bg_gameover
keywait
@bg_black

#�Q�[���I�[�o�[���
#�^�C�g����
reset
endm

#�Q�[���I�[�o�[
macro	gameover2
date_close
money_close
@bg_black
wait		2000
@bg_gameover2
keywait
@bg_black

#�Q�[���I�[�o�[���
#�^�C�g����
reset
endm



#������D���x�A�b�v
macro	zakuro_love_up
	zakuro_love=zakuro_love+1
	@se215
endm
#�������D���x�A�b�v
macro	suika_love_up
	suika_love=suika_love+1
	@se215
endm
#�䂸�D���x�A�b�v
macro	yuzu_love_up
	yuzu_love=yuzu_love+1
	@se215
endm
#�������D���x�A�b�v
macro	ichigo_love_up
	ichigo_love=ichigo_love+1
	@se215
endm

macro	mikan_evup
	mikan_event=mikan_event+1
endm
macro	karin_evup
	karin_event=karin_event+1
endm
macro	ichigo_evup
	ichigo_event=ichigo_event+1
endm

macro	suika_evup
	suika_event=suika_event+1
endm
macro	yuzu_evup
	yuzu_event=yuzu_event+1
endm
macro	zakuro_evup
	zakuro_event=zakuro_event+1
endm

macro	mikan_miryoku_up
add_miryoku=20
@mikan_add_miryoku
endm

macro	karin_miryoku_up
add_miryoku=20
@karin_add_miryoku
endm

macro	ichigo_miryoku_up
add_miryoku=20
@ichigo_add_miryoku
endm

macro	mikan_miryoku_down
add_miryoku=-20
@mikan_add_miryoku
endm

macro	karin_miryoku_down
add_miryoku=-20
@karin_add_miryoku
endm

macro	ichigo_miryoku_down
add_miryoku=-20
@ichigo_add_miryoku
endm

#��Ԗ��͂������L�����𒲂ׂ�
macro	miryoku_charasel
	@calc_mikan_miryoku
	@calc_karin_miryoku
	@calc_ichigo_miryoku
	if mikan_miryoku>=karin_miryoku and mikan_miryoku>=ichigo_miryoku then miryoku_chara=0
	if ichigo_miryoku>=mikan_miryoku and ichigo_miryoku>=karin_miryoku then miryoku_chara=1
	if karin_miryoku>=mikan_miryoku and karin_miryoku>=ichigo_miryoku then miryoku_chara=2

	if miryoku_chara=0 then miryoku_chara_max=mikan_miryoku
	if miryoku_chara=1 then miryoku_chara_max=ichigo_miryoku
	if miryoku_chara=2 then miryoku_chara_max=karin_miryoku
endm

