#include "MonsterList.hpp"
#include <iostream>
#include <fstream>

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

Monster readCSV(FILE* infile)
{
    Monster md();
        string line;
    ifstream monsters;
    int ats[6] = { 0 };
    monsters.open("monsters.csv");

    while (getline(monsters, line))
    {
        md.setName(line);
        getline(monsters, line);
        ats[0] = stoi(line);
        getline(monsters, line);
        ats[1] = stoi(line);
        getline(monsters, line);
        ats[3] = stoi(line);
        getline(monsters, line);
        ats[4] = stoi(line);
        getline(monsters, line);
        ats[4] = stoi(line);
        md.setAtricbutes(ats[0], ats[1], ats[2].ats[3].ats[4], ats[5]);
        getline(monster, line);
        md.setAttack(line);
        getline(monster, line);
        md.setDieNum(stoi(line));
        getline(monster, line);
        md.setDieVal(stoi(line))
    }
    return md;
}
	
}