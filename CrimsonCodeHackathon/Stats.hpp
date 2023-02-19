#pragma once
#include <string>
#include "savingThrows.hpp"
#include "senses.hpp"
using namespace std;
class Stats {

public:
	Stats();

	Stats(double combatRating, int armorClass, int health, SavingThrows &savingThrows, int skillBonus, string &conditionImmunity, Senses &senses, string &language);

	double getCombatRating(void);
	int getArmorClass(void);
	int getHealth(void);

	int getSkillBonus(void);
	string getConditionImmunity(void);
	string getLanguage(void);

	int calcProficiencyBonus(double combatRating);

private:
	int armorClass;
	int health;
	double combatRating;
	int skillBonus;
	string conditionImmunity;
	string language;

};

