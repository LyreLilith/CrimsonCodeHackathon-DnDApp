#include <string>
#include "Movement.hpp"
#include "abilityScores.hpp"
#include "senses.hpp"
#include "savingThrows.hpp"
#include "actions.hpp"
#include "stats.hpp"

using namespace std;

class Monster{

	
public:
	Monster(void);

	Monster(string &name, struct AbilityScores &scores, struct Stats &stats, struct Actions &actions, string &description);

	string getName(void);
	AbilityScores getScores(void);
	Stats getStats(void);
	Actions getActions(void);
	string getDescription(void);


private:
SavingThrows monsterSave;
AbilityScores monsterAblities;
Senses monsterSenses;

Stats monsterStats;
Actions monsterActions;
string name;
string description;	
};