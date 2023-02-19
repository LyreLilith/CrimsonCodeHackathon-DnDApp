#pragma once
#include "MonsterNode.hpp"
class MonsterList
{
public:
	MonsterList();
	void challangeSort(void);
	void insertInOrder(Monster newMonster);
	void nameSort(Monster newMonster);
private:
	void insertAtFront(Monster newMonster);
	MonsterNode* pHead;
};