#include <iostream>
#include <fstream>
#include "MonsterList.hpp"
#define MONSTERS "monsters.csv"
#define PLAYERS "players.csv"
using namespace std;

int main(void) {
	bool contVal = true;
	ifstream monsterInput("monsters.csv");
	MonsterList mList;
	mList.load(monsterInput, mList);
	cout << "Welcome Dungon Master" << endl;
		userInterface.run(mList);



}

