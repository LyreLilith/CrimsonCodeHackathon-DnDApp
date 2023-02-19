#include <iostream>
#include "Monster.hpp"



class MonsterNode
{
public:

	MonsterNode();
	MonsterNode(Monster &mData);
	Monster getMonster(void);
	MonsterNode* getNextNode(void);
	MonsterNode* getPrevNode(void);
	void setPrevNode(MonsterNode* pLink);
	void setNextNode(MonsterNode* nLink);


private:
		MonsterNode* nLink;
		MonsterNode* pLink;
		Monster mData;
};