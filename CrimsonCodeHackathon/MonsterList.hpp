#pragma once
#include "MonsterNode.hpp"
class MonsterList
{
public:
	MonsterList();
	void challengeSort(void);

	void load(ifstream& monsterFile, MonsterList mList);
	Monster search(string  monsterName);
private:
	void insertInOrder(Monster newMonster);
	MonsterNode* pHead;
};