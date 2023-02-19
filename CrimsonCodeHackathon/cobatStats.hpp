#pragma once
#include <string>
using namespace std;
class Stats {

public:
	CombatStats();

	CombatStats(int armorClass, int health, int combatRating, int skillBonus, string conditionImmunity, string language);

	int getArmorClass(void);
	int getHealth(void);
	int getCombatRating(void);
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

