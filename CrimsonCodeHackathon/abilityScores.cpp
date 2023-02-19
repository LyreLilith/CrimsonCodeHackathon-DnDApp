#include "abilityScores.hpp"


AbilityScores::AbilityScores()
{
	dex = 0;
	con = 0;
	str = 0;
	intel = 0;
	wis = 0;
	cha = 0;
}

AbilityScores::AbilityScores(int dex, int con, int str, int intel, int wis, int cha)
{
	this->cha = cha;
	this->con = con;
	this->str = str;
	this->intel = intel;
	this->wis = wis;
	this->dex = dex;
}

int AbilityScores::getDex(void)
{
	return dex;
}

int AbilityScores::getCon(void)
{
	return con;
}

int AbilityScores::getStr(void)
{
	return str;
}

int AbilityScores::getDex(void)
{
	return cha;
}
int AbilityScores::getWis(void)
{
	return wis;
}
int AbilityScores::getIntel(void)
{
	return intel;
}

int AbilityScores::calcMod(int score)
{
	int modifier = (score - 10) / 2;
	return modifier;
}
