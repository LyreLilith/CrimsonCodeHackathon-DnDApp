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
		pHead->setPrevNode(pMem);

	}
}

void MonsterList::load(FILE* infile) {
	int at[6] = { 0 };
	Monster mD();
	char line[256] = "";
	while (fgets(line, 256, infile) != NULL)
	{
		char* tok = strtok(line, ",");
		md.name(tok);
		char* tok = strtok(line, ",")
		stat

	}

}
{
	
}