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
	stats = val;
}

void Monster::setActions(Actions val)
{
	actions = val;
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
	return stats;
}

Actions Monster::getActions(void)
{
	return actions;
}

string Monster::getDescription(void)
{
	return description;
}