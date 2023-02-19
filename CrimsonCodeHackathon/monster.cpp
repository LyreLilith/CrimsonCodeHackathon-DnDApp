#include "Monster.hpp"
#include "abilityScores.hpp"
#include "stats.hpp"
#include "actions.hpp"
#include <string>
using namespace std;

Monster::Monster(void)
{
	std::string name;
	AbilityScores scores();
	Stats stats();
	Actions actions();
}

//Monster::Monster(string nameIN, AbilityScores &scoresIN, Stats &statsIN, Actions &actionsIN)
//{
//	name = nameIN;
//	scores = scoresIN;
//	stats = statsIN;
//	actions = actionsIN;
//}

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

AbilityScores Monster::getScores(void)
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