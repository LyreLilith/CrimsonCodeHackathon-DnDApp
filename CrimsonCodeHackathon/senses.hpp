#pragma once
class Senses {

public:
	Senses();

	Senses(int dark, int blind, int truesight, int tremor, int passivePerception);

	int getDark(void);
	int getBlind(void);
	int getTruesight(void);
	int getTremor(void);
	int getPassivePerception(void);

private:
	int dark;
	int blind;
	int truesight;
	int tremor;
	int passivePerception;
};
std::ostream& operator<<(std::ostream& statObj, Senses& rtn);


