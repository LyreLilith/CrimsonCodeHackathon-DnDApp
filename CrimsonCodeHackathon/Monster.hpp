#include <string>

using namespace std;

class Monster{

	
public:
	Monster();

	Monster(string name, struct AbilityScores &scores, struct actions &actions  );


	typedef struct savingThrow
	{
		int str;
		int dex;
		int con;
		int intel;
		int wis;
		int cha;
	}SavingThrows;

	typedef struct abilityScore
	{
		int str;
		int dex;
		int con;
		int intel;
		int wis;
		int cha;
		SavingThrows saves;
	}AbilityScores;


	typedef struct sense
	{
		int passive;
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
		string damageDie; // referring to amount and type of dice to roll for damage
		string description; // ability description. may or may not remove since tends to be long. might shorten instead?
	}Actions;

	

private:
	Stats monsterStats;
	Actions monsterActions;
	string name;
	
};