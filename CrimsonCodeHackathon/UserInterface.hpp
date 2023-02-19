#pragma once
#include "monster.hpp"

class UserInterface {

public:
	UserInterface();

	UserInterface(int mainMenu, Monster displayedMonster);

	int mainMenu(int mainMenu);
	Monster displayMonster(void);

private:
	int mainMenu;
	Monster displayedMonster;
};