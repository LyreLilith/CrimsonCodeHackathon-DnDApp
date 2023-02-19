#include "MonsterList.hpp"
#include <iostream>
#include <fstream>
using namespace std;
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

Monster::Monster(void)
{
    std::string name;
    AbilityScores scores();
    Stats stats();
    Actions actions();
}

Monster::Monster(string name, struct AbilityScores scores, struct Stats stats, struct Actions actions, Senses senses, string description)
{
    monsterName = name;
    monsterAblities = scores;
    monsterStats = stats;
    monsterActions = actions;
    monsterSenses = senses;
    this->description = description;
}

Monster Monster::load(FILE* infile)
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
        ats[5] = stoi(line);
        md.  (ats[0], ats[1], ats[2].ats[3].ats[4], ats[5]);
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