#include <string>
#include "Movement.hpp"
using namespace std;

class Monster{

	
public:
	Monster(void);

	Monster(string name, struct AbilityScores &scores, struct actions &actions, struct Stats &stats);


	typedef struct actions // feels like it may be a good idea to just use strings to write them out rather than use variables
	{
		string name;
		int hitMod;
		string damageDie; // referring to amount and type of dice to roll for damage
		string description; // ability description. may or may not remove since tends to be long. might shorten instead?
	}Actions;

	

private:
SavingThrows monsterSave;
AbilityScores monsterAblitys;
Senses monsterSenses;
Damage monsterDamage;
Stats monsterStats;
Actions monsterActions;
string name;
string description;	
};