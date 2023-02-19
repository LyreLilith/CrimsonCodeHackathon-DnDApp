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

Monster::Monster(string nameIN, struct AbilityScores scoresIN, struct Stats statsIN, struct Actions actionsIN, Senses sensesIN, string description)
{
    name = nameIN;
    scores = scoresIN;
    stats = statsIN;
    actions = actionsIN;
    senses = sensesIN;
    this->description = description;
}

void MonsterList::load(ifstream& monsters, MonsterList mList )
{
    Monster md;
        string line,  attTemp;
    /*ifstream monsters;*/
    int ats[6] = { 0 }, dieTemp=0, dnum=0;
    monsters.open("monsters.csv");
    while (getline(monsters, line))
    {
        Monster md;
        getline(monsters, line);
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
        md.setScores(AbilityScores(ats[0], ats[1], ats[2], ats[3], ats[4], ats[5]));
        getline(monsters, line);
        attTemp = line;
        getline(monsters, line);
        dieTemp = stoi(line);
        getline(monsters, line);
        dnum = stoi(line);
        getline(monsters, line);
        md.setActions(Actions(attTemp, dieTemp, dnum, line));
        getline(monsters, line);
        md.setDescription(line);
        mList.insertInOrder(md);
}
	
}