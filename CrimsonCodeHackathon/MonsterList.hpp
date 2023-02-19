#pragma once
#include "MonsterNode.hpp"
class MonsterList
{
public:
	MonsterList();
	void challengeSort(void);
	void insertInOrder(Monster newMonster);
	void nameSort(Monster newMonster);
	void load(FILE* infile);
private:
	void insertAtFront(Monster newMonster);
	MonsterNode* pHead;
};