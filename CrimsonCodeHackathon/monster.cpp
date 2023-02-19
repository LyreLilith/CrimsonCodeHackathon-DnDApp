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

}

AbilityScores setScores(AbilityScores val)
{

}

Stats setStats(Stats val)
{

}

Actions setActions(Actions val)
{

}

string setDescription(string val)
{

}

string Monster::getName(void)
{
	return name;
}

AbilityScores Monster::getScores(void)
{
	return scores;
}

Stats getStats(void);
Actions getActions(void);
string getDescription(void);