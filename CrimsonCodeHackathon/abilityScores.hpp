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

private:
	int str;
	int dex;
	int con;
	int intel;
	int wis;
	int cha;
};

