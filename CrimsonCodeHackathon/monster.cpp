#include "Monster.hpp"
#include <string>
using namespace std;

Monster::Monster(void)
{
	std::string name;
	AbilityScores scores();
	Stats stats();
	Actions actions();
}

string Monster::giveResitance(void) {
	string res = 0;
	
}

void Monster::setName(string val)
{
	name = val;
}

void Monster::setScores(AbilityScores val)
{
	scores = val;
}

void Monster::setStats(Stats val)
{
	monsterStats = val;
}

void Monster::setActions(Actions val)
{
	monsterActions = val;
}

void Monster::setDescription(string val)
{
	description = val;
}

string Monster::getName(void)
{
	return name;
}

AbilityScores Monster::getAbilityScores(void)
{
	return scores;
}

Stats Monster::getStats(void)
{
	return monsterStats;
}

Actions Monster::getActions(void)
{
	return monsterActions;
}

string Monster::getDescription(void)
{
	return description;
}