#pragma once
#include <string>
#include "Movement.hpp"
#include "abilityScores.hpp"
#include "senses.hpp"
#include "savingThrows.hpp"
#include "actions.hpp"
#include "stats.hpp"

using namespace std;

class Monster {

	
public:
	Monster();

	//Monster(string &name, AbilityScores &scores, Stats &stats, Actions &actions, string &description);

	void setName(string val);
	void setScores(AbilityScores val);
	void setStats(Stats val);
	void setActions(Actions val);
	void setDescription(string val);

	string getName(void);
	AbilityScores getScores(void);
	Stats getStats(void);
	Actions getActions(void);
	string getDescription(void);
	void setString(string name);
	void setAbilities();

private:
SavingThrows saves;
AbilityScores scores;
Senses senses;

Stats stats;
Actions actions;
string name;
string description;	
};


// future planned attributes: creature size, alignment, and xp value