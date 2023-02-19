#pragma once
#include <string>
using namespace std;
class Actions {

public:
	Actions();

	Actions(string name, int hitMod, int damageDie, string description);

	string getName(void);
	int getHitMod(void);
	int getDamageDie(void);
	string getDescription(void);

private:
	string name;
	int hitMod;
	int damageDie;
	string description;
};
