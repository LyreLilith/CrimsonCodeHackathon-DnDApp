#pragma once
#include "MonsterList.hpp"

class UserInterface
{

public:
	UserInterface(MonsterList mList);

	int modeSelection();

		void displayMonster();

		void search();

private:
	MonsterList mlData;
};

