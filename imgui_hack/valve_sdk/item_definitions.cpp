#include "item_definitions.hpp"

const std::map<size_t, weapon_info> k_weapon_info =
{
	{ WEAPON_KNIFE,{ "models/weapons/v_knife_default_ct.mdl", "knife_default_ct" } },
{ WEAPON_KNIFE_T,{ "models/weapons/v_knife_default_t.mdl", "knife_t" } },
{ WEAPON_BAYONET,{ "models/weapons/v_knife_bayonet.mdl", "bayonet" } },
{ WEAPON_KNIFE_FLIP,{ "models/weapons/v_knife_flip.mdl", "knife_flip" } },
{ WEAPON_KNIFE_GUT,{ "models/weapons/v_knife_gut.mdl", "knife_gut" } },
{ WEAPON_KNIFE_KARAMBIT,{ "models/weapons/v_knife_karam.mdl", "knife_karambit" } },
{ WEAPON_KNIFE_M9_BAYONET,{ "models/weapons/v_knife_m9_bay.mdl", "knife_m9_bayonet" } },
{ WEAPON_KNIFE_TACTICAL,{ "models/weapons/v_knife_tactical.mdl", "knife_tactical" } },
{ WEAPON_KNIFE_FALCHION,{ "models/weapons/v_knife_falchion_advanced.mdl", "knife_falchion" } },
{ WEAPON_KNIFE_SURVIVAL_BOWIE,{ "models/weapons/v_knife_survival_bowie.mdl", "knife_survival_bowie" } },
{ WEAPON_KNIFE_BUTTERFLY,{ "models/weapons/v_knife_butterfly.mdl", "knife_butterfly" } },
{ WEAPON_KNIFE_PUSH,{ "models/weapons/v_knife_push.mdl", "knife_push" } },
{ STUDDED_BLOODHOUND_GLOVES,{ "models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound.mdl" } },
{ T_GLOVES,{ "models/weapons/v_models/arms/glove_fingerless/v_glove_fingerless.mdl" } },
{ CT_GLOVES,{ "models/weapons/v_models/arms/glove_hardknuckle/v_glove_hardknuckle.mdl" } },
{ SPORTY_GLOVES,{ "models/weapons/v_models/arms/glove_sporty/v_glove_sporty.mdl" } },
{ SLICK_GLOVES,{ "models/weapons/v_models/arms/glove_slick/v_glove_slick.mdl" } },
{ LEATHER_HANDWRAPS,{ "models/weapons/v_models/arms/glove_handwrap_leathery/v_glove_handwrap_leathery.mdl" } },
{ MOTORCYCLE_GLOVES,{ "models/weapons/v_models/arms/glove_motorcycle/v_glove_motorcycle.mdl" } },
{ SPECIALIST_GLOVES,{ "models/weapons/v_models/arms/glove_specialist/v_glove_specialist.mdl" } },
{ STUDDED_HYDRA_GLOVES,{ "models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound_hydra.mdl" } }
};
const std::vector<weapon_name> k_knife_names =
{
	{ 0, "Default" },
{ WEAPON_BAYONET, "Bayonet" },
{ WEAPON_KNIFE_FLIP, "Flip Knife" },
{ WEAPON_KNIFE_GUT, "Gut Knife" },
{ WEAPON_KNIFE_KARAMBIT, "Karambit" },
{ WEAPON_KNIFE_M9_BAYONET, "M9 Bayonet" },
{ WEAPON_KNIFE_TACTICAL, "Huntsman Knife" },
{ WEAPON_KNIFE_FALCHION, "Falchion Knife" },
{ WEAPON_KNIFE_SURVIVAL_BOWIE, "Bowie Knife" },
{ WEAPON_KNIFE_BUTTERFLY, "Butterfly Knife" },
{ WEAPON_KNIFE_PUSH, "Shadow Daggers" }
};
const std::vector<weapon_name> k_glove_names =
{
	{ 0, "Default" },
{ STUDDED_BLOODHOUND_GLOVES, "Bloodhound" },
{ T_GLOVES, "Default (Terrorists)" },
{ CT_GLOVES, "Default (Counter-Terrorists)" },
{ SPORTY_GLOVES, "Sporty" },
{ SLICK_GLOVES, "Slick" },
{ LEATHER_HANDWRAPS, "Handwrap" },
{ MOTORCYCLE_GLOVES, "Motorcycle" },
{ SPECIALIST_GLOVES, "Specialist" },
{ STUDDED_HYDRA_GLOVES, "Hydra" }
};
const std::vector<weapon_name> k_weapon_names_s =
{
	{ WEAPON_KNIFE, "Knife" },
{ T_GLOVES, "Glove" },
{ 7, "AK-47" },
{ 8, "AUG" },
{ 9, "AWP" },
{ 63, "CZ75 Auto" },
{ 1, "Desert Eagle" },
{ 2, "Dual Berettas" },
{ 10, "FAMAS" },
{ 3, "Five-SeveN" },
{ 11, "G3SG1" },
{ 13, "Galil AR" },
{ 4, "Glock-18" },
{ 14, "M249" },
{ 60, "M4A1-S" },
{ 16, "M4A4" },
{ 17, "MAC-10" },
{ 27, "MAG-7" },
{ 33, "MP7" },
{ 34, "MP9" },
{ 28, "Negev" },
{ 35, "Nova" },
{ 32, "P2000" },
{ 36, "P250" },
{ 19, "P90" },
{ 26, "PP-Bizon" },
{ 64, "R8 Revolver" },
{ 29, "Sawed-Off" },
{ 38, "SCAR-20" },
{ 40, "SSG 08" },
{ 39, "SG 553" },
{ 30, "Tec-9" },
{ 24, "UMP-45" },
{ 61, "USP-S" },
{ 25, "XM1014" },
};