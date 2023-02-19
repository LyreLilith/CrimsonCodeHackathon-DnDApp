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

Monster::Monster(string name, struct AbilityScores scores, struct Stats stats, struct Actions actions, string description)
{
	monsterName = name;
	monsterAblities = scores;
	monsterStats = stats;
	monsterActions = actions;
	monsterSenses = senses
}

string Monster::setName(string val)
{	
	name = val;
}

void Monster::setAbilityScores(AbilityScores scores)
{
	monsterAblities = kapppa;
}

Stats MonsetStats(Stats val)
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