#include <string>
#include "Movement.hpp"
using namespace std;

class Monster{

	
public:
	Monster(void);

	Monster(string name, struct AbilityScores &scores, struct actions &actions  );


private:
	Movement monsterMove;
	AbilityScores monsterScores;
	SavingThrows monsterSavingThrows;
	Actions monsterActions;
	string name;
	string descripton
	
};