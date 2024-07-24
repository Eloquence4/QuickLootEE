#pragma once

#include "RE/F/FormTypes.h"

class Settings
{
public:
	static void LoadSettings();

	static bool CloseInCombat();
	static bool CloseWhenEmpty();
	static bool DispelInvisibility();
	static bool OpenWhenContainerUnlocked();
	static bool DisableForAnimals();
	static bool DisableForMonsters();

	static bool ShowBookRead();
	static bool ShowEnchanted();
	static bool ShowDBMDisplayed();
	static bool ShowDBMFound();
	static bool ShowDBMNew();

	static float WindowX();
	static float WindowY();
	static float WindowW();
	static float WindowH();

private:
	static void LoadGlobal(const RE::TESGlobal*& global, const char* editor_id);

	Settings() = default;
	Settings(Settings&) = delete;
	Settings operator=(Settings&) = delete;
	~Settings() = default;

	static Settings& GetSingleton(){
		static Settings ret;
		return ret;
	};

	const RE::TESGlobal* m_close_in_combat = nullptr;
	const RE::TESGlobal* m_close_when_empty = nullptr;
	const RE::TESGlobal* m_dispel_invis = nullptr;
	const RE::TESGlobal* m_open_when_container_unlocked = nullptr;
	const RE::TESGlobal* m_disable_for_animals = nullptr;
	const RE::TESGlobal* m_disable_for_monsters = nullptr;

	const RE::TESGlobal* m_show_book_read = nullptr;
	const RE::TESGlobal* m_show_enchanted = nullptr;
	const RE::TESGlobal* m_show_dbm_displayed = nullptr;
	const RE::TESGlobal* m_show_dbm_found = nullptr;
	const RE::TESGlobal* m_show_dbm_new = nullptr;

	const RE::TESGlobal* m_window_X = nullptr;
	const RE::TESGlobal* m_window_Y = nullptr;
	const RE::TESGlobal* m_window_W = nullptr;
	const RE::TESGlobal* m_window_H = nullptr;
};

