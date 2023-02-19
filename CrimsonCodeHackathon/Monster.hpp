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

	Monster(string name, struct AbilityScores scores, struct Stats stats, struct Actions actions, string description);

	string getName(void);
	SavingThrows getSavingThrows(void);
	AbilityScores getAbilityScores(void);
	Senses getSense(void);
	Stats getStats(void);

		void setName(string name);
		void setSavingThrows(SavingThrows vals);
		void setAbilityScores(AbilityScores scores);
		void setSenses(Senses sence);
		void setStats(Stats vals);

private:
SavingThrows monsterSave;
AbilityScores monsterAblities;
Senses monsterSenses;

Stats monsterStats;
Actions monsterActions;
string name;
string description;	
};