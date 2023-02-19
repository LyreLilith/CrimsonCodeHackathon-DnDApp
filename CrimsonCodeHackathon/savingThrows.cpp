#include "savingThrows.hpp"

SavingThrows::SavingThrows()
{
	strMod = 0;
	dexMod = 0;
	conMod = 0;
	intelMod = 0;
	wisMod = 0;
	chaMod = 0;
	proficiencyBonus = 0;
}

SavingThrows::SavingThrows(int strModIN, int dexModIN, int conModIN, int intelModIN, int wisModIN, int chaModIN, int proficiencyBonusIN)
{
	strMod = strModIN;
	dexMod = dexModIN;
	conMod = conModIN;
	intelMod = intelModIN;
	wisMod = wisModIN;
	chaMod = chaModIN;
	proficiencyBonus = proficiencyBonusIN;
}

int SavingThrows::getStrMod(void)
{
	return strMod;
}

int SavingThrows::getDexMod(void)
{
	return dexMod;
}

int SavingThrows::getConMod(void)
{
	return conMod;
}

int SavingThrows::getIntelMod(void)
{
	return intelMod;
}

int SavingThrows::getWisMod(void)
{
	return wisMod;
}

int SavingThrows::getChaMod(void)
{
	return chaMod;
}

int SavingThrows::getProficiencyBonus(void)
{
	return proficiencyBonus;
}
