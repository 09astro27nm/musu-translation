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
# 回想フィルター -------------------------------------------------------------
macro	kaisou
	screen_color_set 	32,0,-16
	kaisou_flag=1
endm
# 回想フィルターオフ ---------------------------------------------------------
macro	kaisou_off
	screen_color_set 	0,0,0
	kaisou_flag=0
endm
# 黒 -------------------------------------------------------------------------
macro	bg_black
	@bg_init
	@chara_clear
	bg	"cg\bg\black.png"
endm
# 白 -------------------------------------------------------------------------
macro	bg_white
	@bg_init
	@chara_clear
	bg	"cg\bg\white.png"
endm
# 赤 -------------------------------------------------------------------------
macro	bg_red
	@bg_init
	bg	"cg\bg\red.png"
endm
# 赤 -------------------------------------------------------------------------
macro	bg_pink
	@bg_init
layer_movie_load 	1,"system\movie\回復2.mpg",play_loop
layer_position_set	1,240,180
layer_scale_set		1,250,250
layer_drawmode_set	1,DRAW_ADD
	bg	"cg\bg\pink.png"
endm
# 空 -------------------------------------------------------------------------
macro	bg_sky
	@bg_init
	bg	"cg\bg\sky.png"
endm
# 曇空 ----------------------------------------------------------------------
macro	bg_sky_k
	@bg_init
	bg	"cg\bg\bg02_くもり.png"
endm
# 夕方の空 -------------------------------------------------------------------
macro	bg_sky_y
	@bg_init
	bg	"cg\bg\夕方.png"
endm
# 夜空 -----------------------------------------------------------------------
macro	bg_sky_n
	@bg_init
	bg	"cg\bg\夜空.png"
endm
# 夜空2 -----------------------------------------------------------------------
macro	bg_sky2_n
	@bg_init
	bg	"cg\bg\夜空2.png"
endm
# 雨空 -----------------------------------------------------------------------
macro	bg_sky_ame
	@bg_init
	se_bg	"sound\se\BG_雨.ogg"
	bg	"cg\bg\雨空.png"
endm
# 天の川 --------------------------------------------------------------------
macro	bg_sky_amaanogawa
	@bg_init
	bg	"cg\bg\天の川.png"
endm
# 空(縦長) ------------------------------------------------------------------
macro	bg_sky2
	@bg_init
	layer_load	0,"cg\bg\sky2.png"
	layer_load	1,"cg\bg\bg01孤児院前_透明.png"
	screen_blackin	2000
	layer_move	0,40000,0,-300,0,0,passtype_tcb
	layer_move	1,40000,0,0,0,600,passtype_tcb
endm
# 空(縦長)/孤児院無し---------------------------------------------------------
macro	bg_sky3
	@bg_init
	layer_load	0,"cg\bg\sky3.png"
	screen_blackin	1000
	layer_move	0,10000,0,-400,0,0,passtype_tcb
endm
# 血痕 -----------------------------------------------------------------------
macro	bg_kekkon
	@bg_init
	bg	"cg\bg\bg_kekkon.png"
endm
# 血痕2 -----------------------------------------------------------------------
macro	bg_kekkon2
	@bg_init
	layer_load	0,"cg\bg\bg_kekkon.png"
endm
# ゲームオーバー -------------------------------------------------------------
macro	bg_gameover
	@bg_init
	bg	"cg\bg\gameover.png"
endm
# ゲームオーバー2 -------------------------------------------------------------
macro	bg_gameover2
	@bg_init
	bg	"cg\bg\gameover2.png"
endm
# スケジュール用背景 ---------------------------------------------------------
macro	bg_schedule
	@bg_init
	layer_load_overlap	0,"cg\bg\空続き.png"
	layer_load	1,"cg\bg\bg01孤児院前_透明.png"
	screen_blackin	500
	layer_move	0,4000,0,-500,0,0,passtype_linear
#	layer_move	1,40000,0,600,0,0,passtype_tcb
	layer_position	1,0,150
endm


###############################################################################


# 町 --------------------------------------------------------------------------
macro	bg_machi
	@bg_init
	se_bg	"sound\se\BG_街2.ogg"
	bg	"cg\bg\bg_machi.png"
endm
# 駅前 ------------------------------------------------------------------------
macro	bg_ekimae
	@bg_init
	se_bg	"sound\se\BG_駅前.ogg"
	bg	"cg\bg\bg_ekimae.png"
endm
# 商店街 ----------------------------------------------------------------------
macro	bg_syoutengai
	@bg_init
	se_bg	"sound\se\BG_商店街.ogg"
	bg	"cg\bg\商店街.png"
endm
# 商店街(曇) -----------------------------------------------------------------
macro	bg_syoutengai_k
	@bg_init
	se_bg	"sound\se\BG_商店街.ogg"
	bg	"cg\bg\商店街_曇.png"
endm
# 商店街(雨) -----------------------------------------------------------------
macro	bg_syoutengai_a
	@bg_init
#	screen_effect_rain	200,1
	se_bg	"sound\se\BG_雨.ogg"
	bg	"cg\bg\商店街_曇.png"
endm
# 商店街(夕方) ---------------------------------------------------------------
macro	bg_syoutengai_y
	@bg_init
	se_bg	"sound\se\BG_商店街.ogg"
	bg	"cg\bg\商店街_夕方.png"
endm
# 試着室 ----------------------------------------------------------------------
macro	bg_fittingroom
	@bg_init
#	se_bg	"sound\se\BG_商店街.ogg"
	bg	"cg\bg\試着室.png"
endm
# 繁華街 ----------------------------------------------------------------------
macro	bg_hankagai
	@bg_init
	se_bg	"sound\se\BG_繁華街.ogg"
	bg	"cg\bg\bg_hankagai.png"
endm
# 繁華街 ----------------------------------------------------------------------
macro	bg_hankagai_n
	@bg_init
	se_bg	"sound\se\BG_繁華街.ogg"
	bg	"cg\bg\bg_hankagai_n.png"
endm
# 住宅街 ----------------------------------------------------------------------
macro	bg_jyuutakugai
	@bg_init
	se_bg	"sound\se\BG_静かな住宅街など.ogg"
	bg	"cg\bg\住宅街.png"
endm
# 住宅街(曇) ------------------------------------------------------------------
macro	bg_jyuutakugai_k
	@bg_init
	se_bg	"sound\se\BG_静かな住宅街など.ogg"
	bg	"cg\bg\住宅街_曇.png"
endm
# 住宅街(雨) ------------------------------------------------------------------
macro	bg_jyuutakugai_a
	@bg_init
	screen_effect_rain	200,1
	se_bg	"sound\se\BG_雨.ogg"
	bg	"cg\bg\住宅街_曇.png"
endm
# 住宅街 (夕方) --------------------------------------------------------------
macro	bg_jyuutakugai_y
	@bg_init
	se_bg	"sound\se\BG_静かな住宅街など.ogg"
	bg	"cg\bg\住宅街_夕方.png"
endm
# 住宅街 (夜)-----------------------------------------------------------------
macro	bg_jyuutakugai_n
	@bg_init
	bg	"cg\bg\住宅街_夜.png"
endm
# 堤防 ----------------------------------------------------------------------
macro	bg_teibou
	@bg_init
	se_bg	"sound\se\BG_堤防.ogg"
	bg	"cg\bg\堤防.png"
endm
# 祭り ----------------------------------------------------------------------
macro	bg_matsuri
	@bg_init
	se_bg	"sound\se\BG_お祭り〜出店前.ogg"
	bg	"cg\bg\bg_maturi.png"
endm
# 路地裏 ----------------------------------------------------------------------
macro	bg_rojiura
	@bg_init
	bg	"cg\bg\路地裏.png"
endm
# 宗施設外観 -----------------------------------------------------------------
macro	bg_soushisetsu
	@bg_init
	bg	"cg\bg\宗施設外観.png"
endm
# 宗施設外観(夕方) -----------------------------------------------------------
macro	bg_soushisetsu_y
	@bg_init
	bg	"cg\bg\宗施設外観_夕方.png"
endm
# 宗施設外観(夜) -------------------------------------------------------------
macro	bg_soushisetsu_n
	@bg_init
	bg	"cg\bg\宗施設外観_夜.png"
endm
# 宗施設個室 -----------------------------------------------------------------
macro	bg_soushisetsu_koshitsu
	@bg_init
	bg	"cg\bg\宗施設個室.png"
endm
# 宗施設個室(夕方) -----------------------------------------------------------
macro	bg_soushisetsu_koshitsu_y
	@bg_init
	bg	"cg\bg\宗施設個室_夕方.png"
endm
# 宗施設個室(夜) -------------------------------------------------------------
macro	bg_soushisetsu_koshitsu_n
	@bg_init
	bg	"cg\bg\宗施設個室_夜.png"
endm
# 病院外観 -----------------------------------------------------------------
macro	bg_byouin
	@bg_init
	bg	"cg\bg\病院外観.PNG"
endm
# 病院廊下 -----------------------------------------------------------------
macro	bg_byouin_rouka
	@bg_init
	bg	"cg\bg\病院廊下.PNG"
endm
# 病室 -----------------------------------------------------------------
macro	bg_byoushitsu
	@bg_init
	bg	"cg\bg\病室.PNG"
endm
# 林 -----------------------------------------------------------------------
macro	bg_hayashi
	@bg_init
	bg	"cg\bg\BG林道.png"
endm
# 林(曇り) -------------------------------------------------------------------
macro	bg_hayashi_k
	@bg_init
	bg	"cg\bg\BG林道_曇.png"
endm
# 林(夜) -------------------------------------------------------------------
macro	bg_hayashi_n
	@bg_init
	bg	"cg\bg\BG林道_夜.png"
endm
# 公園 -------------------------------------------------------------------
macro	bg_kouen
	@bg_init
#	se_bg	"sound\se\BG_公園.ogg"
	bg	"cg\bg\公園.png"
endm
# 公園 (曇り)----------------------------------------------------------------
macro	bg_kouen_k
	@bg_init
	bg	"cg\bg\公園_曇り.png"
endm
# 公園 (雨)----------------------------------------------------------------
macro	bg_kouen_a
	@bg_init
	screen_effect_rain	200,1
	se_bg	"sound\se\BG_雨.ogg"
	bg	"cg\bg\公園_曇り.png"
endm
# 公園 (夕方)-----------------------------------------------------------------
macro	bg_kouen_y
	@bg_init
	bg	"cg\bg\公園_夕方.png"
endm
# 公園 (夜)-----------------------------------------------------------------
macro	bg_kouen_n
	@bg_init
	bg	"cg\bg\公園_夜.png"
endm
# 豪華部屋 -----------------------------------------------------------------
macro	bg_goukabeya
	@bg_init
	bg	"cg\bg\豪華部屋.png"
endm
# ウォーターパーク -----------------------------------------------------------
macro	bg_waterpark
	@bg_init
	se_bg	"sound\se\BG_ウォーターパーク.ogg"
layer_movie_load 	1,"system\movie\ひかり03.mpg",play_loop
layer_position_set	1,240,180
layer_scale_set		1,250,250
layer_drawmode_set	1,DRAW_ADD
	bg	"cg\bg\bg17.png"
endm
# 飛び込み台 ----------------------------------------------------------------
macro	bg_waterpark_tobikomi
	@bg_init
	bg	"cg\bg\bg18.png"
endm
# 飛び込み台 ----------------------------------------------------------------
macro	bg_waterpark_tobikomi_t
	@bg_init
	bg	"cg\bg\bg18_t.png"
endm



# エロキュート ----------------------------------------------------------------
macro	bg_erocute
	@bg_init
	@bg_black
	@subuta_counter
	@subuta_right
	@subuta
	se		0,"sound\se\BG_アイテムショップ階段降りる.WAV",play_once
	layer_load	0,"cg\bg\bg_erocute1.png"
	layer_load	60,"cg\bg\bg_erocute2.png"
	screen_blackin	2000
	wait		2000
	se		0,"sound\se\アイテムショップ_ドア開.wav",play_once
	layer_scale	60,2000,0,0,-100,50,passtype_tcb
	layer_move	60,2000,0,0,1000,0,passtype_tcb
	wait		1000
	layer_alpha	60,1000,0,-255,passtype_tcb
	wait		1000
	layer_release	60
endm
# エロキュート ----------------------------------------------------------------
macro	bg_erocute2
	@bg_init
	bg	"cg\bg\bg_erocute1.png"
endm
# ショップ -------------------------------------------------------------------
macro	bg_shop
	@bg_init
	bg	"cg\bg\bg_erocute1.png"
endm
# 夜行の部屋 -----------------------------------------------------------------
macro	bg_yakou
	@bg_init
	bg	"cg\bg\夜行の部屋.png"
endm
# 夜行のビル -----------------------------------------------------------------
macro	bg_yakoubill
	@bg_init
	bg	"cg\bg\夜行のビル.png"
endm
# 夜行のビル(夕) -------------------------------------------------------------
macro	bg_yakoubill_y
	@bg_init
	bg	"cg\bg\夜行のビル_夕.png"
endm
# 夜行のビル(夜) -------------------------------------------------------------
macro	bg_yakoubill_n
	@bg_init
	bg	"cg\bg\夜行のビル_夜.png"
endm
# 夜行のビル　廊下 ----------------------------------------------------------
macro	bg_yakoubill_rouka
	@bg_init
	bg	"cg\bg\夜行_廊下.png"
endm
# 夜行のビル　廊下(地下) -----------------------------------------------------
macro	bg_yakoubill_rouka_chika
	@bg_init
	bg	"cg\bg\夜行_地下廊下.png"
endm

##############################################################################

# 草原 ----------------------------------------------------------------------
macro	bg_trpg_sougen
	@bg_init
	bg	"cg\bg\草原.png"
#	layer_movie_load 	1,"system\movie\ひかり02.mpg",play_loop
#	layer_position_set	1,240,180
#	layer_scale_set		1,250,250
#	layer_drawmode_set	1,DRAW_ADD
endm

# 草原 ----------------------------------------------------------------------
macro	bg_trpg_sougen_n
	@bg_init
	bg	"cg\bg\草原_n.png"
#	layer_movie_load 	1,"system\movie\ひかり02.mpg",play_loop
#	layer_position_set	1,240,180
#	layer_scale_set		1,250,250
#	layer_drawmode_set	1,DRAW_ADD
endm

# まち ----------------------------------------------------------------------
macro	bg_trpg_machi
	@bg_init
	bg	"cg\bg\TRPG街.png"
endm
# まち ----------------------------------------------------------------------
macro	bg_trpg_machi_n
	@bg_init
	bg	"cg\bg\TRPG街_n.png"
endm

# 酒場 ----------------------------------------------------------------------
macro	bg_trpg_sakaba
	@bg_init
	bg	"cg\bg\酒場.png"
endm





##############################################################################

# 施設外観 ----------------------------------------------------------------
macro	bg_kojiin_n
	@bg_init
	bg	"cg\bg\bg01孤児院前_夜.png"
endm

# 孤児院前 ----------------------------------------------------------------
macro	bg_gate
	@bg_init
	bg	"cg\bg\bg02_昼.png"
endm
# 孤児院前(曇) -----------------------------------------------------------
macro	bg_gate_k
	@bg_init
	bg	"cg\bg\bg02_くもり.png"
endm
# 孤児院前(雨) -----------------------------------------------------------
macro	bg_gate_a
	@bg_init
	screen_effect_rain	200,1
	se_bg	"sound\se\BG_雨.ogg"
	bg	"cg\bg\bg02_くもり.png"
endm
# 孤児院前(雪) -----------------------------------------------------------
macro	bg_gate_s
	@bg_init
	screen_effect_snow	200,1
	bg	"cg\bg\bg02_くもり.png"
endm
# 孤児院前(夜) -----------------------------------------------------------
macro	bg_gate_n
	@bg_init
	bg	"cg\bg\bg02_夜.png"
endm
# 孤児院前(夕方) ---------------------------------------------------------
macro	bg_gate_y
	@bg_init
	bg	"cg\bg\bg02_夕.png"
endm
# リビング -------------------------------------------------------------------
macro	bg_living
	@bg_init
	bg	"cg\bg\bg04.png"
endm
# リビング(夜) ---------------------------------------------------------------
macro	bg_living_n
	@bg_init
	bg	"cg\bg\bg04_n.png"
endm
# リビング(雨) ---------------------------------------------------------------
macro	bg_living_a
	@bg_init
	se_bg	"sound\se\BG_雨.ogg"
	bg	"cg\bg\bg04_n.png"
endm
# 玄関 ----------------------------------------------------------------------
macro	bg_genkan
	@bg_init
	bg	"cg\bg\bg11.png"
endm
# 広間 ----------------------------------------------------------------------
macro	bg_hiroma
	@bg_init
	bg	"cg\bg\bg09.png"
endm
# 中庭 ---------------------------------------------------------------------
macro	bg_nakaniwa
	@bg_init
	bg	"cg\bg\bg06.png"
endm
# 中庭(夕方) ----------------------------------------------------------------
macro	bg_nakaniwa_y
	@bg_init
	bg	"cg\bg\bg06y.png"
endm
# 中庭(夜) ----------------------------------------------------------------
macro	bg_nakaniwa_n
	@bg_init
	screen_color_set 	-32,-16,0
	bg	"cg\bg\bg06n.png"
endm
# ドア前 --------------------------------------------------------------------
macro	bg_door
	@bg_init
	bg	"cg\bg\bg14.png"
endm
# ドア前(夜) ----------------------------------------------------------------
macro	bg_door_n
	@bg_init
	bg	"cg\bg\bg14n.png"
endm
# 食堂 -----------------------------------------------------------------------
macro	bg_dining
	@bg_init
	bg	"cg\bg\bg12.png"
endm
# 食堂(夜) -------------------------------------------------------------------
macro	bg_dining_n
	@bg_init
	bg	"cg\bg\bg12n.png"
endm
# 浴室 -----------------------------------------------------------------------
macro	bg_bathroom
	@bg_init
	bg	"cg\bg\bg05.png"
endm
# 浴室(夜) -------------------------------------------------------------------
macro	bg_bathroom_n
	@bg_init
	bg	"cg\bg\bg05n.png"
endm
# 図書室 ---------------------------------------------------------------------
macro	bg_library
	@bg_init
	bg	"cg\bg\bg07.png"
endm
# 図書室(夜)------------------------------------------------------------------
macro	bg_library_n
	@bg_init
	bg	"cg\bg\bg07n.png"
endm
# 娯楽室 ---------------------------------------------------------------------
macro	bg_goraku
	@bg_init
	bg	"cg\bg\bg15.png"
endm
# 娯楽室 (夜) ----------------------------------------------------------------
macro	bg_goraku_n
	@bg_init
	bg	"cg\bg\bg15n.png"
endm
# 廊下 -----------------------------------------------------------------------
macro	bg_rouka
	@bg_init
	bg	"cg\bg\rouka.png"
endm
# 廊下(夜) -------------------------------------------------------------------
macro	bg_rouka_n
	@bg_init
	bg	"cg\bg\rouka_n.png"
endm
# 廊下(消灯) -----------------------------------------------------------------
macro	bg_rouka_nn
	@bg_init
	screen_color_set 	-32,-16,0
	bg	"cg\bg\rouka_nn.png"
endm
# キッチン -------------------------------------------------------------------
macro	bg_kitchen
	@bg_init
	bg	"cg\bg\bg03.png"
endm
# キッチン(夜) ---------------------------------------------------------------
macro	bg_kitchen_n
	@bg_init
	bg	"cg\bg\bg03n.png"
endm
# 調教部屋 -------------------------------------------------------------------
macro	bg_choukyou
	@bg_init
	bg	"cg\bg\bg08.png"
endm
# 調教部屋(夜) ---------------------------------------------------------------
macro	bg_choukyou_n
	@bg_init
	bg	"cg\bg\bg08_夜.png"
endm
# ハード調教部屋 -------------------------------------------------------------
macro	bg_choukyou_hard
	@bg_init
	bg	"cg\bg\bg16.png"
endm
# 屋根 -----------------------------------------------------------------------
macro	bg_yane_a
	@bg_init
	se_bg	"sound\se\BG_雷2.ogg"
	screen_effect_rain	400,2
	screen_effect_storm	20,200
	screen_color_set 	-32,-16,0
	bg	"cg\bg\曇空.png"
endm


##############################################################################


# みかんの部屋 ---------------------------------------------------------------
macro	bg_mikan
	@bg_init
	bg	"cg\bg\みかん部屋.png"
endm
# みかんの部屋(夜) -----------------------------------------------------------
macro	bg_mikan_n
	@bg_init
	bg	"cg\bg\みかん部屋_夜.png"
endm
# いちごの部屋 ---------------------------------------------------------------
macro	bg_ichigo
	@bg_init
	bg	"cg\bg\いちご部屋.png"
endm
# いちごの部屋(夜) -----------------------------------------------------------
macro	bg_ichigo_n
	@bg_init
	bg	"cg\bg\いちご部屋_夜.png"
endm
# いちごの部屋(消灯) --------------------------------------------------------
macro	bg_ichigo_nn
	@bg_init
	bg	"cg\bg\いちご部屋_消灯.png"
endm
# かりんの部屋 ---------------------------------------------------------------
macro	bg_karin
	@bg_init
	bg	"cg\bg\かりん部屋.png"
endm
# かりんの部屋(夜) -----------------------------------------------------------
macro	bg_karin_n
	@bg_init
	bg	"cg\bg\かりん部屋_夜.png"
endm
# ざくろの部屋 ---------------------------------------------------------------
macro	bg_zakuro
	@bg_init
	bg	"cg\bg\ざくろ部屋.png"
endm
# ざくろの部屋(夜) -----------------------------------------------------------
macro	bg_zakuro_n
	@bg_init
	bg	"cg\bg\ざくろ部屋_夜.png"
endm
# すいかの部屋 ---------------------------------------------------------------
macro	bg_suika
	@bg_init
	bg	"cg\bg\すいか部屋.png"
endm
# すいかの部屋(夜) -----------------------------------------------------------
macro	bg_suika_n
	@bg_init
	bg	"cg\bg\すいか部屋_夜.png"
endm
# ひかりの部屋 ---------------------------------------------------------------
macro	bg_hikari
	@bg_init
	bg	"cg\bg\ひかり部屋.png"
endm
# ひかりの部屋(夜) -----------------------------------------------------------
macro	bg_hikari_n
	@bg_init
	bg	"cg\bg\ひかり部屋_夜.png"
endm
# ゆずの部屋 ---------------------------------------------------------------
macro	bg_yuzu
	@bg_init
	bg	"cg\bg\ゆず部屋.png"
endm
# ゆずの部屋(夜) -----------------------------------------------------------
macro	bg_yuzu_n
	@bg_init
	bg	"cg\bg\ゆず部屋_夜.png"
endm


##############################################################################


# 美雨の部屋 -----------------------------------------------------------------
macro	bg_miu
	@bg_init
	bg	"cg\bg\美雨の部屋.png"
endm
# 美雨の部屋(夜) -------------------------------------------------------------
macro	bg_miu_n
	@bg_init
	bg	"cg\bg\美雨の部屋_夜.png"
endm
# 美雨の部屋(消灯) -----------------------------------------------------------
macro	bg_miu_nn
	@bg_init
	bg	"cg\bg\美雨の部屋_消灯.png"
endm
# 雫の部屋 ---------------------------------------------------------------
macro	bg_shizuku
	@bg_init
	bg	"cg\bg\雫の部屋.png"
endm
# 雫の部屋(夜) -----------------------------------------------------------
macro	bg_shizuku_n
	@bg_init
	bg	"cg\bg\雫の部屋_夜.png"
endm
# 自室 -----------------------------------------------------------------------
macro	bg_itsuki
	@bg_init
	bg	"cg\bg\樹の部屋.png"
endm
# 自室(夜) -------------------------------------------------------------------
macro	bg_itsuki_n
	@bg_init
	bg	"cg\bg\樹の部屋_夜.png"
endm
# 自室(消灯) -----------------------------------------------------------------
macro	bg_itsuki_nn
	@bg_init
	bg	"cg\bg\樹の部屋_消灯.png"
endm


# 空き部屋 -------------------------------------------------------------------
macro	bg_akibeya
	@bg_init
	bg	"cg\bg\空き部屋.png"
endm
# 空き部屋(夜) ---------------------------------------------------------------
macro	bg_akibeya_n
	@bg_init
	bg	"cg\bg\空き部屋_夜.png"
endm
