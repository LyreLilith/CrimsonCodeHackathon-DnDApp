#include "MonsterList.hpp"


MonsterList::MonsterList()
{
	pHead = new MonsterNode();
}

void MonsterList::insertAtFront(Monster mData) 
{
	MonsterNode *pMem = new MonsterNode(mData);
	if (pHead == NULL)
	{
		pHead == pMem;
	}
	else
	{

	}
}