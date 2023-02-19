#pragma once
class SavingThrows {

public:
	SavingThrows();

	SavingThrows(int strMod, int dexMod, int conMod, int intelMod, int wisMod, int chaMod, int proficiencyBonus);

	int getStrMod(void);
	int getDexMod(void);
	int getConMod(void);
	int getIntelMod(void);
	int getWisMod(void);
	int getChaMod(void);
	int getProficiencyBonus(void);

private:
	int strMod;
	int dexMod;
	int conMod;
	int intelMod;
	int wisMod;
	int chaMod;
	int proficiencyBonus;
};

// We need a way to mark advantage and disadvantage for these!