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

	string setName(string val);
	AbilityScores setScores(AbilityScores val);
	Stats setStats(Stats val);
	Actions setActions(Actions val);
	string setDescription(string val);

	Monster(string name, struct AbilityScores scores, struct Stats stats, struct Actions actions, Senses senses, string description);

	void 

	string getName(void);
	SavingThrows getSavingThrows(void);
	AbilityScores getAbilityScores(void);
	Senses getSense(void);
	Stats getStats(void);
	Actions getActions(void);
	string getDescription(void);
	void setString(string name);
	void setAbilitys()

		Monster Monster::load(FILE* infile);
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