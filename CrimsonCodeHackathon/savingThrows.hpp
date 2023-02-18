#pragma once
class SavingThrows {

public:
	SavingThrows();

	SavingThrows(int str, int dex, int con, int intel, int wis, int cha);

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

