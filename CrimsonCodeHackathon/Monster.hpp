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

	Monster(string name, struct AbilityScores scores, struct Stats stats, struct Actions actions, Senses senses, string description);


	string getName(void);
	SavingThrows getSavingThrows(void);
	AbilityScores getAbilityScores(void);
	Senses getSenses(void);
	Stats getStats(void);
	Actions getActions(void);
	string getDescription(void);

	void setAbilitys();

		
private:
SavingThrows saves;
AbilityScores scores;
Senses senses;
Stats monsterStats;
Actions monsterActions;
string name;
string description;	
};


// future planned attributes: creature size, alignment, and xp value