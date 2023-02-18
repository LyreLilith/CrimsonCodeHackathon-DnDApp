#include <string>

using namespace std;

class Monster{

	
public:
	Monster();

	Monster(string name, struct AbilityScores &scores, struct actions &actions, struct Stats &stats);


	typedef struct savingThrow
	{
		int str;
		int dex;
		int con;
		int intel;
		int wis;
		int cha;
	}SavingThrows;

	typedef struct scores
	{
		int str;
		int dex;
		int con;
		int intel;
		int wis;
		int cha;
		SavingThrows saves;
	}AbilityScores;


<<<<<<< makeMovement
=======

>>>>>>> master
	typedef struct sense
	{
		int dark;
		int blind;
		int truesight;
		int tremor;
	}Senses;

	typedef struct damage 
	// This refers to how different types of damage effect the monster, not how much damage the creature itself can do
	// may want to display as strings, but characters work too if they correspond to effects (v=vulnerable, r=resistant, etc)
	{
		char bludgeon;
		char pierce;
		char slash;
		char acid;
		char poison;
		char fire;
		char cold;
		char force;
		char lightning;
		char thunder;
		char necro;
		char psychic;
		char radiant;
	}Damage;

	typedef struct stats
	{
		int armorClass;
		int health;
		int combatRating;
		struct Senses;
	}Stats;

	typedef struct actions // feels like it may be a good idea to just use strings to write them out rather than use variables
	{
		string name;
		int hitMod;
		string damageDie; // refers to how many and what type of die are rolles for damage
		string description; // probably too long to paste for every action. will likely shorten or remove
	}Actions;

	

private:
	Stats monsterStats;
	Actions monsterActions;
	string name;
	
};