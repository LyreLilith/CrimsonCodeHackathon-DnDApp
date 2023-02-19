#pragma once
#include <string>
#include "savingThrows.hpp"
#include "senses.hpp"
using namespace std;
class Stats {

public:
	CombatStats();

	CombatStats(int combatRating, int armorClass, int health, SavingThrows &savingThrows, int skillBonus, string conditionImmunity, Senses &senses, string language);

	int getCombatRating(void);
	int getArmorClass(void);
	int getHealth(void);

	int getSkillBonus(void);
	string getConditionImmunity(void);
	string getLanguage(void);

private:
	int armorClass;
	int health;
	int combatRating;
	int skillBonus;
	string conditionImmunity;
	string language;

};

