#include "MonsterNode.hpp"


MonsterNode::MonsterNode(Monster mData)
{
	pLink = NULL;
	nLink = NULL;
	this->mData = mData;
}

Monster MonsterNode::getMonster(void)
{
	return mData;
}

MonsterNode* MonsterNode::getNextNode()
{
	return nLink;
}

MonsterNode* MonsterNode::getPrevNode()
{
	return pLink;
}




