#include <iostream>
#include <fstream>
#include "stdio.h"
#include "Monster.hpp"
#include "MonsterNode.hpp"
#define MONSTERS "monsters.csv"
#define PLAYERS "players.csv"
using namespace std;

int main(void) {
	ifstream monsterInput("monsters.csv");
	MonsterNode* monsterHead = NULL;



}

void readCSV(FILE* infile)
{
    string line;
    ifstream monsters;
    monsters.open("monsters.csv");

    if (!monsters.is_open()) {
        perror("Error open");
        exit(EXIT_FAILURE);
    }
    while (getline(monsters, line)) {
        cout << line << endl;
    }
}