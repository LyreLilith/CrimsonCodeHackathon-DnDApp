#pragma once
#include "MonsterList.hpp"

class UserInterface
{

public:
	UserInterface(MonsterList mList);

	int modeSelection();

		void displayMonster(Monster);

		Monster monsterSelectior(void);
private:
	MonsterList mlData;
};

