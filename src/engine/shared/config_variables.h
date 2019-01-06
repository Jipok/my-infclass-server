/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.				*/
#ifndef ENGINE_SHARED_CONFIG_VARIABLES_H
#define ENGINE_SHARED_CONFIG_VARIABLES_H
#undef ENGINE_SHARED_CONFIG_VARIABLES_H // this file will be included several times

// TODO: remove this
#include "././game/variables.h"

MACRO_CONFIG_STR(Password, password, 32, "", CFGFLAG_SERVER, "Password to the server")
MACRO_CONFIG_STR(Logfile, logfile, 128, "", CFGFLAG_SERVER, "Filename to log all output to")
MACRO_CONFIG_INT(ConsoleOutputLevel, console_output_level, 0, 0, 2, CFGFLAG_SERVER, "Adjusts the amount of information in the console")

MACRO_CONFIG_STR(SvName, sv_name, 128, "unnamed server", CFGFLAG_SERVER, "Server name")
MACRO_CONFIG_STR(Bindaddr, bindaddr, 128, "", CFGFLAG_SERVER|CFGFLAG_MASTER, "Address to bind the client/server to")
MACRO_CONFIG_INT(SvPort, sv_port, 8303, 0, 0, CFGFLAG_SERVER, "Port to use for the server")
MACRO_CONFIG_INT(SvExternalPort, sv_external_port, 0, 0, 0, CFGFLAG_SERVER, "External port to report to the master servers")
MACRO_CONFIG_STR(SvMap, sv_map, 128, "", CFGFLAG_SERVER, "Map to use on the server")
MACRO_CONFIG_INT(SvMaxClients, sv_max_clients, 64, 1, MAX_CLIENTS, CFGFLAG_SERVER, "Maximum number of clients that are allowed on a server")
MACRO_CONFIG_INT(SvMaxClientsPerIP, sv_max_clients_per_ip, 4, 1, MAX_CLIENTS, CFGFLAG_SERVER, "Maximum number of clients with the same IP that can connect to the server")
MACRO_CONFIG_INT(SvHighBandwidth, sv_high_bandwidth, 0, 0, 1, CFGFLAG_SERVER, "Use high bandwidth mode. Doubles the bandwidth required for the server. LAN use only")
MACRO_CONFIG_INT(SvRegister, sv_register, 1, 0, 1, CFGFLAG_SERVER, "Register server with master server for public listing")
MACRO_CONFIG_STR(SvRconPassword, sv_rcon_password, 32, "", CFGFLAG_SERVER, "Remote console password (full access)")
MACRO_CONFIG_STR(SvRconModPassword, sv_rcon_mod_password, 32, "", CFGFLAG_SERVER, "Remote console password for moderators (limited access)")
MACRO_CONFIG_INT(SvRconMaxTries, sv_rcon_max_tries, 3, 0, 100, CFGFLAG_SERVER, "Maximum number of tries for remote console authentication")
MACRO_CONFIG_INT(SvRconBantime, sv_rcon_bantime, 5, 0, 1440, CFGFLAG_SERVER, "The time a client gets banned if remote console authentication fails. 0 makes it just use kick")
MACRO_CONFIG_INT(SvRconTokenCheck, sv_rcon_token_check, 1, 0, 1, CFGFLAG_SERVER, "Require the use of a client with tokenized protection against IP address spoofing to permit access to the console")
MACRO_CONFIG_INT(SvAutoDemoRecord, sv_auto_demo_record, 0, 0, 1, CFGFLAG_SERVER, "Automatically record demos")
MACRO_CONFIG_INT(SvAutoDemoMax, sv_auto_demo_max, 10, 0, 1000, CFGFLAG_SERVER, "Maximum number of automatically recorded demos (0 = no limit)")
MACRO_CONFIG_INT(SvServerInfoPerSecond, sv_server_info_per_second, 10, 1, 1000, CFGFLAG_SERVER, "Maximum number of complete server info responses that are sent out per second")

MACRO_CONFIG_STR(EcBindaddr, ec_bindaddr, 128, "localhost", CFGFLAG_ECON, "Address to bind the external console to. Anything but 'localhost' is dangerous")
MACRO_CONFIG_INT(EcPort, ec_port, 0, 0, 0, CFGFLAG_ECON, "Port to use for the external console")
MACRO_CONFIG_STR(EcPassword, ec_password, 32, "", CFGFLAG_ECON, "External console password")
MACRO_CONFIG_INT(EcBantime, ec_bantime, 0, 0, 1440, CFGFLAG_ECON, "The time a client gets banned if econ authentication fails. 0 just closes the connection")
MACRO_CONFIG_INT(EcAuthTimeout, ec_auth_timeout, 30, 1, 120, CFGFLAG_ECON, "Time in seconds before the the econ authentification times out")
MACRO_CONFIG_INT(EcOutputLevel, ec_output_level, 1, 0, 2, CFGFLAG_ECON, "Adjusts the amount of information in the external console")

MACRO_CONFIG_INT(Debug, debug, 0, 0, 1, CFGFLAG_SERVER, "Debug mode")
MACRO_CONFIG_INT(DbgStress, dbg_stress, 0, 0, 0, CFGFLAG_SERVER, "Stress systems")
MACRO_CONFIG_INT(DbgStressNetwork, dbg_stress_network, 0, 0, 0, CFGFLAG_SERVER, "Stress network")
MACRO_CONFIG_INT(DbgPref, dbg_pref, 0, 0, 1, CFGFLAG_SERVER, "Performance outputs")
MACRO_CONFIG_INT(DbgHitch, dbg_hitch, 0, 0, 0, CFGFLAG_SERVER, "Hitch warnings")

MACRO_CONFIG_STR(SvBroadcast, sv_broadcast, 64, "DDRace.info Trunk 0.5", CFGFLAG_SERVER, "The broadcasting message")

MACRO_CONFIG_INT(SvConnlimit, sv_connlimit, 4, 0, 100, CFGFLAG_SERVER, "Connlimit: Number of connections an IP is allowed to do in a timespan")
MACRO_CONFIG_INT(SvConnlimitTime, sv_connlimit_time, 20, 0, 1000, CFGFLAG_SERVER, "Connlimit: Time in which IP's connections are counted")
MACRO_CONFIG_INT(SvDistConnlimit, sv_distconnlimit, 16, 0, 100, CFGFLAG_SERVER, "DistConnlimit: Number of connections (from all IPs) that is allowed to do in a timespan")
MACRO_CONFIG_INT(SvDistConnlimitTime, sv_distconnlimit_time, 60, 0, 1000, CFGFLAG_SERVER, "DistConnlimit: Time in which (all IP's) connections are counted")

MACRO_CONFIG_INT(InfMinPlayers, inf_min_players, 2, 0, 64, CFGFLAG_SERVER, "Minimum number of players to start the round")
MACRO_CONFIG_INT(InfChallenge, inf_challenge, 0, 0, 1, CFGFLAG_SERVER, "Enable challenges")
MACRO_CONFIG_INT(InfAccusationThreshold, inf_accusation_threshold, 4, 0, 8, CFGFLAG_SERVER, "Number of accusations needed to start a banvote")
MACRO_CONFIG_INT(InfLeaverBanTime, inf_leaver_ban_time, 5, 0, 180, CFGFLAG_SERVER, "How long an infected gets banned (in minutes), when leaving and leaving causes a human to get infected")
MACRO_CONFIG_INT(InfFastDownload, inf_fast_download, 1, 0, 1, CFGFLAG_SERVER, "Enables fast download of maps")
MACRO_CONFIG_INT(InfMapWindow, inf_map_window, 15, 0, 100, CFGFLAG_SERVER, "Map downloading send-ahead window")
MACRO_CONFIG_INT(InfConWaitingTime, inf_con_waiting_time, 1, 0, 60, CFGFLAG_SERVER, "Number of seconds to wait before enter the game")
MACRO_CONFIG_INT(InfCaptcha, inf_captcha, 0, 0, 1, CFGFLAG_SERVER, "Enable captcha")
MACRO_CONFIG_INT(InfDefenderLimit, inf_defender_limit, 40, 0, 64, CFGFLAG_SERVER, "Maximum number of defenders in game")
MACRO_CONFIG_INT(InfMedicLimit, inf_medic_limit, 20, 0, 64, CFGFLAG_SERVER, "Maximum number of medics in game")
MACRO_CONFIG_INT(InfHeroLimit, inf_hero_limit, 10, 0, 64, CFGFLAG_SERVER, "Maximum number of heros in game")
MACRO_CONFIG_INT(InfSupportLimit, inf_support_limit, 40, 0, 64, CFGFLAG_SERVER, "Maximum number of supports in game")
MACRO_CONFIG_INT(InfSoldierBombs, inf_soldier_bombs, 3, 1, 16, CFGFLAG_SERVER, "Number of bombs for the soldier")
MACRO_CONFIG_INT(InfMercBombs, inf_merc_bombs, 15, 1, 100, CFGFLAG_SERVER, "Number of poison grenades for the mercenary")
MACRO_CONFIG_INT(InfMercLove, inf_merc_love, 1, 0, 1, CFGFLAG_SERVER, "Enables love bombs for the mercenary (hammer)")
MACRO_CONFIG_INT(InfBarrierLifeSpan, inf_barrier_lifespan, 30, 0, 100, CFGFLAG_SERVER, "Barrier lifespan")
MACRO_CONFIG_INT(InfVoodooAliveTime, inf_voodoo_alive_time, 200, 0, 10000, CFGFLAG_SERVER, "How long a voodoo keeps staying alive after being killed (in ms)")
MACRO_CONFIG_INT(InfBarrierTimeReduce, inf_barrier_timereduce, 150, 0, 10000, CFGFLAG_SERVER, "Time to remove from a barrier lifespan when an infected dies (centisec)")
MACRO_CONFIG_INT(InfLooperBarrierTimeReduce, inf_looper_barrier_timereduce, 350, 0, 10000, CFGFLAG_SERVER, "Time to remove from a barrier lifespan when an infected dies (centisec)")
MACRO_CONFIG_INT(InfMineRadius, inf_mine_radius, 46, 0, 1024, CFGFLAG_SERVER, "Radius of mines")
MACRO_CONFIG_INT(InfMineLimit, inf_mine_limit, 2, 0, 1024, CFGFLAG_SERVER, "Maximum number of mines per player")
MACRO_CONFIG_INT(InfNinjaJump, inf_ninja_jump, 2, 0, 1024, CFGFLAG_SERVER, "Maximum number of katana attacks")
MACRO_CONFIG_INT(InfNinjaMinInfected, inf_ninja_min_infected, 2, 1, 15, CFGFLAG_SERVER, "Minimum number of infected to activate the target system")
MACRO_CONFIG_INT(InfNinjaTargetAfkTime, inf_ninja_target_afk_time, 1, 1, 10000, CFGFLAG_SERVER, "How long in minutes before an afk zombie in the infection zone does not count as target anymore")
MACRO_CONFIG_INT(InfPoisonDamage, inf_poison_damage, 8, 0, 1024, CFGFLAG_SERVER, "Damage deals by the poison grenades")
MACRO_CONFIG_INT(InfGhoulDigestion, inf_ghoul_digestion, 5, 0, 10000, CFGFLAG_SERVER, "Time for a ghoul to digest an infected (sec)")
MACRO_CONFIG_INT(InfGhoulStomachSize, inf_ghoul_stomach_size, 120, 0, 10000, CFGFLAG_SERVER, "Number of dead that the ghoul can eat")
MACRO_CONFIG_INT(InfGhoulThreshold, inf_ghoul_threshold, 3, 0, 10000, CFGFLAG_SERVER, "Ghouls will only be created when the number of infected has reached this threshold")
MACRO_CONFIG_INT(InfSlimeDuration, inf_slime_duration, 10, 0, 10000, CFGFLAG_SERVER, "How long Slug-Slime will stay in game (in seconds)")
MACRO_CONFIG_INT(InfSlimePoisonDuration, inf_slime_poison_duration, 5, 0, 10000, CFGFLAG_SERVER, "How long Slug-Slime will deal damage to humans (in seconds), BUG: when set to 1 second slime will deal damage very fast")
MACRO_CONFIG_INT(InfSlimeHealRate, inf_slime_heal_rate, 2, 0, 10000, CFGFLAG_SERVER, "Slug-Slime heals infected for X hearts every second")
MACRO_CONFIG_INT(InfInfzoneHealRate, inf_infzone_heal_rate, 3, 0, 10000, CFGFLAG_SERVER, "Infection zone heals infected for X hearts every second")
MACRO_CONFIG_INT(InfScientistTpSelfharm, inf_scientist_tp_selfharm, 0, 0, 10000, CFGFLAG_SERVER, "Self damage on each teleportation")
MACRO_CONFIG_INT(InfBatAirjumpLimit, inf_bat_airjump_limit, 10000, 0, 10000, CFGFLAG_SERVER, "Max number of extra airjumps")
MACRO_CONFIG_INT(InfBatDamage, inf_bat_damage, 3, 0, 10000, CFGFLAG_SERVER, "Damage taken by bat")
MACRO_CONFIG_INT(InfBatHookTime, inf_bat_hook_time, 5, 1, 10000, CFGFLAG_SERVER, "For how long bat will be able to hook humans (in seconds)")
MACRO_CONFIG_INT(InfSmokerHookDamage, inf_smoker_hook_damage, 4, 1, 10000, CFGFLAG_SERVER, "Damage taken by smoker (hook)")
MACRO_CONFIG_INT(InfSpiderCatchHumans, inf_spider_catch_humans, 0, 0, 1, CFGFLAG_SERVER, "Always catch humans with hook")

MACRO_CONFIG_INT(InfProbaSmoker, inf_proba_smoker, 20, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a smoker")
MACRO_CONFIG_INT(InfProbaHunter, inf_proba_hunter, 20, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a hunter")
MACRO_CONFIG_INT(InfProbaBat, inf_proba_bat, 4, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a bat")
MACRO_CONFIG_INT(InfProbaBoomer, inf_proba_boomer, 20, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a boomer")
MACRO_CONFIG_INT(InfProbaGhost, inf_proba_ghost, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a ghost")
MACRO_CONFIG_INT(InfProbaSpider, inf_proba_spider, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a spider")
MACRO_CONFIG_INT(InfProbaGhoul, inf_proba_ghoul, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a ghoul")
MACRO_CONFIG_INT(InfProbaSlug, inf_proba_slug, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a slug")
MACRO_CONFIG_INT(InfProbaVoodoo, inf_proba_voodoo, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a voodoo")
MACRO_CONFIG_INT(InfProbaWitch, inf_proba_witch, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a witch")
MACRO_CONFIG_INT(InfProbaUndead, inf_proba_undead, 4, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be an undead")

MACRO_CONFIG_INT(InfEnableEngineer, inf_enable_engineer, 1, 0, 1, CFGFLAG_SERVER, "Makes the engineer class available")
MACRO_CONFIG_INT(InfEnableSoldier, inf_enable_soldier, 1, 0, 1, CFGFLAG_SERVER, "Makes the soldier class available")
MACRO_CONFIG_INT(InfEnableScientist, inf_enable_scientist, 1, 0, 1, CFGFLAG_SERVER, "Makes the scientist class available")
MACRO_CONFIG_INT(InfEnableBiologist, inf_enable_biologist, 1, 0, 1, CFGFLAG_SERVER, "Makes the biologist class available")
MACRO_CONFIG_INT(InfEnableLooper, inf_enable_looper, 1, 0, 1, CFGFLAG_SERVER, "Makes the looper class available")
MACRO_CONFIG_INT(InfEnableMercenary, inf_enable_mercenary, 1, 0, 1, CFGFLAG_SERVER, "Makes the mercenary class available")
MACRO_CONFIG_INT(InfEnableSniper, inf_enable_sniper, 1, 0, 1, CFGFLAG_SERVER, "Makes the sniper class available")
MACRO_CONFIG_INT(InfEnableNinja, inf_enable_ninja, 1, 0, 1, CFGFLAG_SERVER, "Makes the ninja class available")
MACRO_CONFIG_INT(InfEnableMedic, inf_enable_medic, 1, 0, 1, CFGFLAG_SERVER, "Makes the medic class available")
MACRO_CONFIG_INT(InfEnableHero, inf_enable_hero, 1, 0, 1, CFGFLAG_SERVER, "Makes the hero class available")

MACRO_CONFIG_STR(FunRoundTitle, funround_title, 64, "Fun round", CFGFLAG_SERVER, "Fun round title")
MACRO_CONFIG_INT(FunRoundLimit, funround_limit, 1, 0, 100, CFGFLAG_SERVER, "Number of possible fun rounds per map")
MACRO_CONFIG_INT(FunRoundDuration, funround_duration, 3, 0, 100, CFGFLAG_SERVER, "Fun round duration (min)")
MACRO_CONFIG_INT(FunRoundGhoulStomachSize, funround_ghoul_stomach_size, 40, 0, 10000, CFGFLAG_SERVER, "Number of dead that the ghoul can eat")

//Looper class config
MACRO_CONFIG_INT(InfSlowMotionDuration, inf_slow_motion_duration, 5, 0, 1024, CFGFLAG_SERVER, "How long slow motion will slow down zombies (in seconds)")
MACRO_CONFIG_INT(InfLooperBarrierLifeSpan, inf_looper_barrier_life_span, 70, 0, 1024, CFGFLAG_SERVER, "How long looper barrier will last (in seconds)")
MACRO_CONFIG_INT(InfSlowMotionPercent, inf_slow_motion_percent, 55, 0, 90, CFGFLAG_SERVER, "Factor that manipulates the slowmotion intensity")



//Not working
//MACRO_CONFIG_INT(InfLooperLaserDmg, inf_looper_laser_dmg, 4, 0, 1024, CFGFLAG_SERVER, "Damage of Looper laser")
//MACRO_CONFIG_INT(InfLooperLaserDelay, inf_looper_laser_delay, 400, 0, 1024, CFGFLAG_SERVER, "Fire delay of Looper laser")
//MACRO_CONFIG_INT(InfLooperLaserRegen, inf_looper_laser_regen, 1000, 0, 1024, CFGFLAG_SERVER, "Regen time of Looper laser")
//MACRO_CONFIG_INT(InfLooperLaserAmmo, inf_looper_laser_ammo, 12, 0, 16, CFGFLAG_SERVER, "Maximum ammo of Looper laser")
//MACRO_CONFIG_INT(InfLooperLaserRange, inf_looper_laser_range, 0.4f, 0, 1, CFGFLAG_SERVER, "Percentage factor of laser rifle Range for Looper laser")




#endif
