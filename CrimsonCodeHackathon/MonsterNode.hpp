#include <iostream>
#include "Monster.hpp"



class MonsterNode
{
public:
	MonsterNode(Monster mData);
	Monster getMonster(void);
	MonsterNode* getNextNode(void);
	MonsterNode* getPrevNode(void);

	void addData(Monster mData);
private:
		MonsterNode* nLink;
		MonsterNode* pLink;
		Monster mData;
};