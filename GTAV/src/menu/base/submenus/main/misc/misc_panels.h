#pragma once
#include "menu/base/submenu.h"

class panels_menu : public menu::submenu::submenu {
public:
	static panels_menu* get();

	void load() override;
	void update_once() override;
	void update() override;
	void feature_update() override;

	panels_menu()
		: menu::submenu::submenu() {}
};