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

Monster::Monster(string nameIN, AbilityScores &scoresIN, Stats &statsIN, Actions &actionsIN)
{
	name = nameIN;
	scores = scoresIN;
	stats = statsIN;
	actions = actionsIN;
}

string setName(string val)
{
	name = val;
}

AbilityScores setScores(AbilityScores val)
{
	scores = val;
}

Stats setStats(Stats val)
{
	stats = val;
}

Actions setActions(Actions val)
{
	actions = val;
}

string setDescription(string val)
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

Stats getStats(void)
{
	return stats;
}

Actions getActions(void);
{
	return action;
}

string getDescription(void);
{
	return description;
}