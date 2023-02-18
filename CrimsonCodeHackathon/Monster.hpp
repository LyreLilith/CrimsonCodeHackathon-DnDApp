#include <string>
#include "Movement.hpp"
using namespace std;

class Monster{

	
public:
	Monster(void);

	Monster(string name, struct AbilityScores &scores, struct actions &actions  );


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