#pragma once
#include <string>
using namespace std;
class Actions {

public:
	Actions();

	Actions(string name, int hitMod, string damageDie, string description);

	string getName(void);
	int getHitMod(void);
	string getDamageDie(void);
	string getDescription(void);

private:
	string name;
	int hitMod;
	string damageDie;
	string description;
};
