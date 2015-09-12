## �݂���X�e�[�^�X�`�F�b�N ##################################################
macro	mikan_check
	#���񂱂�
	if mikan_kenkou<0 then mikan_kenkou=0
	if mikan_kenkou>mikan_kenkou_max then mikan_kenkou=mikan_kenkou_max
	#����傭
	if mikan_kiryoku<0 then mikan_kiryoku=0
	if mikan_kiryoku>mikan_kiryoku_max then mikan_kiryoku=mikan_kiryoku_max

	#���炾
	if mikan_karada<0 then mikan_karada=0
	if mikan_karada>mikan_karada_max then gosub mikan_check_levelup_karada
	#������
	if mikan_kokoro<0 then mikan_kokoro=0
	if mikan_kokoro>mikan_kokoro_max then gosub mikan_check_levelup_kokoro
	#������
	if mikan_atama<0 then mikan_atama=0
	if mikan_atama>mikan_atama_max then gosub mikan_check_levelup_atama

	#�݂�傭
	@calc_mikan_miryoku

	goto	mikan_check_skip

label	mikan_check_levelup_karada
	#���炾���x���A�b�v
	if mikan_karada_level=99 then return
	lifebar_setauto		life_karada,mikan_karada
	wait	1000
	mikan_karada=mikan_karada-mikan_karada_max
	mikan_karada_max=mikan_karada_max+100
	mikan_karada_level=mikan_karada_level+1
	mikan_kenkou=mikan_kenkou+mikan_kenkou_max
	mikan_kenkou_max=mikan_kenkou_max+100
	lifebar_setlevel	life_karada,mikan_karada_level
	lifebar_setmax		life_karada,mikan_karada_max
	lifebar_set		life_karada,mikan_karada
	lifebar_setmax		life_kenkou,mikan_kenkou_max
	lifebar_set		life_kenkou,mikan_kenkou
	voice	"A02530"
	@status_levelup
	voice	"A02532"
	mikan_karada_levelup_flag=mikan_karada_levelup_flag+1
	return

label	mikan_check_levelup_kokoro
	#�����냌�x���A�b�v
	if mikan_kokoro_level=99 then return
	lifebar_setauto		life_kokoro,mikan_kokoro
	wait	1000
	mikan_kokoro=mikan_kokoro-mikan_kokoro_max
	mikan_kokoro_max=mikan_kokoro_max+100
	mikan_kokoro_level=mikan_kokoro_level+1
	mikan_kiryoku=mikan_kiryoku+mikan_kiryoku_max
	mikan_kiryoku_max=mikan_kiryoku_max+100
	lifebar_setlevel	life_kokoro,mikan_kokoro_level
	lifebar_setmax		life_kokoro,mikan_kokoro_max
	lifebar_set		life_kokoro,mikan_kokoro
	lifebar_setmax		life_kiryoku,mikan_kiryoku_max
	lifebar_set		life_kiryoku,mikan_kiryoku
	voice	"A02530"
	@status_levelup
	voice	"A02534"
	mikan_kokoro_levelup_flag=mikan_kokoro_levelup_flag+1
	return

label	mikan_check_levelup_atama
	#�����܃��x���A�b�v
	if mikan_atama_level=99 then return
	lifebar_setauto		life_atama,mikan_atama
	wait	1000
	mikan_atama=mikan_atama-mikan_atama_max
	mikan_atama_max=mikan_atama_max+100
	mikan_atama_level=mikan_atama_level+1
	lifebar_setlevel	life_atama,mikan_atama_level
	lifebar_setmax		life_atama,mikan_atama_max
	lifebar_set		life_atama,mikan_atama
	voice	"A02530"
	@status_levelup
	@mikan_command_up
	voice	"A02536"
	mikan_atama_levelup_flag=mikan_atama_levelup_flag+1
	return

label	mikan_check_skip
endm

# �݂���R�}���h�A�b�v########################################################
macro	mikan_command_up
	if mikan_atama_level>11 then goto mikan_command_up_skip
	@status_atamalevelup
	if mikan_atama_level=2 then mikan_study_level=2
	if mikan_atama_level=3 then mikan_work_level=2
	if mikan_atama_level=4 then mikan_special_level=2
	if mikan_atama_level=5 then mikan_rest_level=2
	if mikan_atama_level=6 then mikan_study_level=3
	if mikan_atama_level=7 then mikan_work_level=3
	if mikan_atama_level=8 then mikan_special_level=3
	if mikan_atama_level=9 then mikan_study_level=4
	if mikan_atama_level=10 then mikan_work_level=4
	if mikan_atama_level=11 then mikan_special_level=4
label	mikan_command_up_skip
endm

# �݂��񖣗͌v�Z #############################################################
macro	calc_mikan_miryoku
	mikan_miryoku=mikan_atama+mikan_atama_max+mikan_karada+mikan_karada_max+mikan_kokoro+mikan_kokoro_max
	mikan_miryoku=mikan_miryoku/6+mikan_miryoku_sub
	if mikan_miryoku<0 then mikan_miryoku=0
	if mikan_miryoku>mikan_miryoku_max then mikan_miryoku=mikan_miryoku_max


#	if debug=1 then mikan_miryoku=1000
endm

# �݂��񖣗͒ǉ� #############################################################
macro	mikan_add_miryoku
	lifebar_setdirect	life_miryoku,mikan_miryoku
	mikan_miryoku_sub=mikan_miryoku_sub+add_miryoku
	@calc_mikan_miryoku
	lifebar_open	life_miryoku
	wait	500
	@mikan_check
	lifebar_setauto	life_miryoku,mikan_miryoku
	wait	1000
	lifebar_close	life_miryoku
	wait	500
endm














# �݂���̃X�P�W���[����S���x�݂ɂ��� #######################################
macro	mikan_schedule_alldown
	for n=0 to 4
		_mikan_command(n) = 90
	next
endm



#�݂���@�����܃A�b�v--------------------------------------------------------
macro	mikan_atama_up
	@mikan_set
	lifebar_open	life_atama
	wait	500
	mikan_atama=mikan_atama+mikan_atama_max/10
	@mikan_check
	lifebar_setauto	life_atama,mikan_atama
	wait	1000
	lifebar_close	life_atama
	wait	500
endm
#�݂���@�����܃_�E��--------------------------------------------------------
macro	mikan_atama_down
	@mikan_set
	lifebar_open	life_atama
	wait	500
	mikan_atama=mikan_atama-mikan_atama_max/10
	@mikan_check
	lifebar_setauto	life_atama,mikan_atama
	wait	1000
	lifebar_close	life_atama
	wait	500
endm

#�݂���@���炾�A�b�v--------------------------------------------------------
macro	mikan_karada_up
	@mikan_set
	lifebar_open	life_karada
	wait	500
	mikan_karada=mikan_karada+mikan_karada_max/10
	@mikan_check
	lifebar_setauto	life_karada,mikan_karada
	wait	1000
	lifebar_close	life_karada
	wait	500
endm
#�݂���@���炾�_�E��--------------------------------------------------------
macro	mikan_karada_down
	@mikan_set
	lifebar_open	life_karada
	wait	500
	mikan_karada=mikan_karada-mikan_karada_max/10
	@mikan_check
	lifebar_setauto	life_karada,mikan_karada
	wait	1000
	lifebar_close	life_karada
	wait	500
endm

#�݂���@������A�b�v--------------------------------------------------------
macro	mikan_kokoro_up
	@mikan_set
	lifebar_open	life_kokoro
	wait	500
	mikan_kokoro=mikan_kokoro+mikan_kokoro_max/10
	@mikan_check
	lifebar_setauto	life_kokoro,mikan_kokoro
	wait	1000
	lifebar_close	life_kokoro
	wait	500
endm
#�݂���@������_�E��--------------------------------------------------------
macro	mikan_kokoro_down
	@mikan_set
	lifebar_open	life_kokoro
	wait	500
	mikan_kokoro=mikan_kokoro-mikan_kokoro_max/10
	@mikan_check
	lifebar_setauto	life_kokoro,mikan_kokoro
	wait	1000
	lifebar_close	life_kokoro
	wait	500
endm

#�݂��񃉃C�t�o�[ �ύX--------------------------------------------------------
macro	mikan_lifebar_draw
window_close
#�I�[�v��
if mikan_atama_old=mikan_atama then goto mikan_lifebar_draw_1
lifebar_open	life_atama
label	mikan_lifebar_draw_1
if mikan_karada_old=mikan_karada then goto mikan_lifebar_draw_2
lifebar_open	life_karada
label	mikan_lifebar_draw_2
if mikan_kokoro_old=mikan_kokoro then goto mikan_lifebar_draw_3
lifebar_open	life_kokoro
label	mikan_lifebar_draw_3

	wait	500

	#���Z/���Z
	lifebar_setauto	life_atama,mikan_atama
	lifebar_setauto	life_karada,mikan_karada
	lifebar_setauto	life_kokoro,mikan_kokoro

	wait	3000

	lifebar_close	life_atama
	lifebar_close	life_karada
	lifebar_close	life_kokoro
endm

#�݂���p�����[�^�Z�b�g-------------------------------------------------------
macro	mikan_set
	@mikan_check
	lifebar_setmax		life_kenkou,mikan_kenkou_max
	lifebar_setdirect	life_kenkou,mikan_kenkou
	lifebar_setmax		life_kiryoku,mikan_kiryoku_max
	lifebar_setdirect	life_kiryoku,mikan_kiryoku
	lifebar_setmax		life_miryoku,mikan_miryoku_max
	lifebar_setdirect	life_miryoku,mikan_miryoku
	lifebar_setmax		life_karada,mikan_karada_max
	lifebar_setdirect	life_karada,mikan_karada
	lifebar_setmax		life_kokoro,mikan_kokoro_max
	lifebar_setdirect	life_kokoro,mikan_kokoro
	lifebar_setmax		life_atama,mikan_atama_max
	lifebar_setdirect	life_atama,mikan_atama
	lifebar_setlevel	life_karada,mikan_karada_level
	lifebar_setlevel	life_atama,mikan_atama_level
	lifebar_setlevel	life_kokoro,mikan_kokoro_level
endm

#�݂���p�����[�^�Z�b�g-------------------------------------------------------
macro	mikan_setauto
	@mikan_check
	lifebar_setmax		life_kenkou,mikan_kenkou_max
	lifebar_setauto		life_kenkou,mikan_kenkou
	lifebar_setmax		life_kiryoku,mikan_kiryoku_max
	lifebar_setauto		life_kiryoku,mikan_kiryoku
	lifebar_setmax		life_miryoku,mikan_miryoku_max
	lifebar_setauto		life_miryoku,mikan_miryoku
	lifebar_setmax		life_karada,mikan_karada_max
	lifebar_setauto		life_karada,mikan_karada
	lifebar_setmax		life_kokoro,mikan_kokoro_max
	lifebar_setauto		life_kokoro,mikan_kokoro
	lifebar_setmax		life_atama,mikan_atama_max
	lifebar_setauto		life_atama,mikan_atama
	lifebar_setlevel	life_karada,mikan_karada_level
	lifebar_setlevel	life_atama,mikan_atama_level
	lifebar_setlevel	life_kokoro,mikan_kokoro_level
endm



















#�݂���X�e�[�^�X�\�� #######################################################
macro	status_mikan
minimoney_close
@bg_mikan
@status_chara_mikan

money_open
@mikan_set
@mikan_plate_open
@lifebar_fullopen

endm

# �݂���X�e�[�^�X�\�� #######################################################
macro	status_open_mikan
minimoney_close
money_open
@mikan_plate_open
@mikan_set
@lifebar_fullopen
@bg_mikan_n
@mikan_middle
@status_chara_mikan
endm

# �݂���X�e�[�^�X��\�� #####################################################
macro	status_close_mikan
money_close
@mikan_plate_close
@lifebar_fullclose
@mikan_
endm

# �݂���X�e�[�^�X�L�����\�� #################################################
macro	status_chara_mikan
@mikan_shifuku
@mikan_middle
now=mikan_kenkou
max=mikan_kenkou_max/8
if mikan_kenkou<mikan_kiryoku then goto status_chara_mikan_0
now=mikan_kiryoku
max=mikan_kiryoku_max/8
label	status_chara_mikan_0

if now>max*6 	then goto status_chara_mikan_1
if now>max*4 	then goto status_chara_mikan_2
if now>max*2	then goto status_chara_mikan_3
if now>max 	then goto status_chara_mikan_4
if now=0 	then goto status_chara_mikan_5
goto status_chara_mikan_4

label	status_chara_mikan_1
@mikan_warai2
goto	status_chara_mikan_skip

label	status_chara_mikan_2
@mikan
goto	status_chara_mikan_skip

label	status_chara_mikan_3
voice "A02538"
@mikan_kanashimi
goto	status_chara_mikan_skip

label	status_chara_mikan_4
voice "A02538"
@mikan_naki
goto	status_chara_mikan_skip

label	status_chara_mikan_5
@mikan_houshin
goto	status_chara_mikan_skip

label	status_chara_mikan_skip
endm

#�݂���v���[�g�I�[�v�� ######################################################
macro	mikan_plate_open
	if plate=1 then goto mikan_plate_open_skip
	layer_load 		5,"schedule\status_name_mikan_.png"
	layer_position_set 	5,510,4
	layer_move		5,500,300,-300,0,0,PASSTYPE_BEZIER_A
	plate=1
label	mikan_plate_open_skip
endm

#�݂���v���[�g�N���[�Y ######################################################
macro	mikan_plate_close
	if plate=0 then goto mikan_plate_close_skip
	layer_move		5,500,0,0,300,-300,PASSTYPE_BEZIER_B
	plate=0
label	mikan_plate_close_skip
endm