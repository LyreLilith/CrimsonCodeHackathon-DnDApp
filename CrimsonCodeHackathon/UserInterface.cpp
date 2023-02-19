#include "UserInterface.hpp"

UserInterface::UserInterface(MonsterList mList) {
	mlData = mList;
}

Monster UserInterface::monsterSelectior(void)
{
	string monsterName;
	std::cout << "Please enter a the name of a monster to search" << std::endl;
	std::cin >> monsterName;
	return mlData.search(monsterName)
}


	