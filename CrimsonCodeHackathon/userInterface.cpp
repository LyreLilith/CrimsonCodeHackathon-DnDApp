#include "UserInterface.hpp"

UserInterface::UserInterface(MonsterList mList) {
	mlData = mList;
}

Monster UserInterface::monsterSelectior(void)
{
	string monsterName;
	std::cout << "Please enter a the name of a monster to search" << std::endl;
	std::cin >> monsterName;
	return mlData.search(monsterName);
}

void UserInterface::displayMonster(Monster mon) {
	Stats mStat = mon.getStats();
	Senses mSenses = mon.getSenses();
	std::cout << "NAME: " << mon.getName() << std::endl;
	std::cout <<mStat << std::endl;
	std::cout << mSenses << std::endl;
	std::cout << "Description: "<< mon.getDescription() << std::endl;
	
}

	