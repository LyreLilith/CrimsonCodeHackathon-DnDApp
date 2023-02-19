#include "MonsterNode.hpp"


MonsterNode::MonsterNode()
{
	pLink = NULL;
	pLink = NULL;
}

MonsterNode::MonsterNode(Monster &mData)
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

void MonsterNode::setNextNode(MonsterNode* nLink)
{
	this->nLink = nLink;
}

void MonsterNode::setPrevNode(MonsterNode* pLink)
{
	this->nLink = nLink;
}


