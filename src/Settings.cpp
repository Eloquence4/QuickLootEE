#include "Settings.h"

void Settings::LoadSettings()
{
	auto& settings = GetSingleton();
	LoadGlobal(settings.m_close_in_combat             , "QLEECloseInCombat");
	LoadGlobal(settings.m_close_when_empty            , "QLEECloseWhenEmpty");
	LoadGlobal(settings.m_dispel_invis                , "QLEEDispelInvisibility");
	LoadGlobal(settings.m_open_when_container_unlocked, "QLEEOpenWhenContainerUnlocked");
	LoadGlobal(settings.m_show_book_read              , "QLEEIconShowBookRead");
	LoadGlobal(settings.m_show_enchanted              , "QLEEIconShowEnchanted");
	LoadGlobal(settings.m_show_dbm_displayed          , "QLEEIconShowDBMDisplayed");
	LoadGlobal(settings.m_show_dbm_found              , "QLEEIconShowDBMFound");
	LoadGlobal(settings.m_show_dbm_new                , "QLEEIconShowDBMNew");
	LoadGlobal(settings.m_disable_for_animals         , "QLEEDisableForAnimals");
	LoadGlobal(settings.m_disable_for_monsters		  , "QLEEDisableForMonsters");
	LoadGlobal(settings.m_window_X                    , "QLEEWindowX");
	LoadGlobal(settings.m_window_Y                    , "QLEEWindowY");
	LoadGlobal(settings.m_window_W                    , "QLEEWindowW");
	LoadGlobal(settings.m_window_H                    , "QLEEWindowH");
}

bool Settings::CloseInCombat()
{
	auto& settings = GetSingleton();
	return settings.m_close_in_combat && settings.m_close_in_combat->value > 0;
}

bool Settings::CloseWhenEmpty()
{
	auto& settings = GetSingleton();
	return settings.m_close_when_empty && settings.m_close_when_empty->value > 0;
}

bool Settings::DispelInvisibility()
{
	auto& settings = GetSingleton();
	return settings.m_dispel_invis && settings.m_dispel_invis->value > 0;
}

bool Settings::OpenWhenContainerUnlocked()
{
	auto& settings = GetSingleton();
	return settings.m_open_when_container_unlocked && settings.m_open_when_container_unlocked->value > 0;
}

bool Settings::DisableForAnimals()
{
	auto& settings = GetSingleton();
	return settings.m_disable_for_animals && settings.m_disable_for_animals->value > 0;
}

bool Settings::DisableForMonsters()
{
	auto& settings = GetSingleton();
	return settings.m_disable_for_monsters && settings.m_disable_for_monsters->value > 0;
}

bool Settings::ShowBookRead()
{
	auto& settings = GetSingleton();
	return settings.m_show_book_read && settings.m_show_book_read->value > 0;
}

bool Settings::ShowEnchanted()
{
	auto& settings = GetSingleton();
	return settings.m_show_enchanted && settings.m_show_enchanted->value > 0;
}

bool Settings::ShowDBMDisplayed()
{
	auto& settings = GetSingleton();
	return settings.m_show_dbm_displayed && settings.m_show_dbm_displayed->value > 0;
}

bool Settings::ShowDBMFound()
{
	auto& settings = GetSingleton();
	return settings.m_show_dbm_found && settings.m_show_dbm_found->value > 0;
}

bool Settings::ShowDBMNew()
{
	auto& settings = GetSingleton();
	return settings.m_show_dbm_new && settings.m_show_dbm_new->value > 0;
}

float Settings::WindowX()
{
	auto& settings = GetSingleton();
	return settings.m_window_X ? settings.m_window_X->value : 0.f;
}

float Settings::WindowY()
{
	auto& settings = GetSingleton();
	return settings.m_window_Y ? settings.m_window_Y->value : 0.f;
}

float Settings::WindowW()
{
	auto& settings = GetSingleton();
	return settings.m_window_W ? settings.m_window_W->value : 0.f;
}

float Settings::WindowH()
{
	auto& settings = GetSingleton();
	return settings.m_window_H ? settings.m_window_H->value : 0.f;
}

void Settings::LoadGlobal(const RE::TESGlobal*& global, const char* editor_id)
{
	global = RE::TESForm::LookupByEditorID<RE::TESGlobal>(editor_id);
}
