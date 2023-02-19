#include "stats.hpp"
#include "savingThrows.hpp"
#include <string>
using namespace std;

Stats::Stats()
{
	combatRating = 0;
	armorClass = 0;
	health = 0;
	Stats savingThrows();
	skillBonus = 0;
	std::string ;

}

Stats::Stats(double combatRating, int armorClass, int health, SavingThrows &savingThrows, int skillBonus, string &conditionImmunity, Senses &senses, string &language)
{

}

double Stats::getCombatRating(void)
{
	return combatRating;
}

int Stats::getArmorClass(void)
{
	return armorClass;
}
int Stats::getHealth(void)
{
	return health;
}

int Stats::getSkillBonus(void)
{
	return skillBonus;
}

string Stats::getConditionImmunity(void)
{
	return conditionImmunity;
}

string Stats::getLanguage(void)
{
	return language;
}

int Stats::calcProficiencyBonus(double combatRating)
{
	if (combatRating >= 0 && combatRating < 5)
	{
		return 2;
	}
	else if (combatRating >= 5 && combatRating < 9)
	{
		return 3;
	}
	else if (combatRating >= 9 && combatRating < 13)
	{
		return 4;
	}
	else if (combatRating >= 13 && combatRating < 17)
	{
		return 5;
	}
	else if (combatRating >= 17 && combatRating < 21)
	{
		return 6;
	}
	else if (combatRating >= 21 && combatRating < 25)
	{
		return 7;
	}
	else if (combatRating >= 25 && combatRating < 29)
	{
		return 8;
	}
	else if (combatRating == 29 || combatRating || 30)
	{
		return 9;
	}
}