#pragma once
class AbilityScores {

public:
	AbilityScores();

	AbilityScores(int str, int dex, int con, int intel, int wis, int cha);

	int getStr(void);
	int getDex(void);
	int getCon(void);
	int getIntel(void);
	int getWis(void);
	int getCha(void);
	int calcMod(int score);


private:
	int str;
	int dex;
	int con;
	int intel;
	int wis;
	int cha;
	int score;
	int strMod;
	int dexMod;
	int conMod;
	int intelMod;
	int wisMod;
	int chaMod;
};

// proficiency bonus and ability modifiers will go as input for savingThrows.cpp functions!