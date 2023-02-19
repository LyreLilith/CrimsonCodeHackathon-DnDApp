#include "functions.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "Monster.hpp"
using namespace std;



Monster readCSV(FILE* infile)
{
    Monster md()
        string line;
    ifstream monsters;
    int ats[6] = { 0 }
    monsters.open("monsters.csv");

    while (getline(monsters, line))
    {
        md.setName(line);
        getline(monsters, line);
        ats[0] = stoi(line);
        getline(monsters, line);
        ats[1] = stoi(line);
        getline(monsters, line);
        ats[3] = stoi(line);
        getline(monsters, line);
        ats[4] = stoi(line);
        getline(monsters, line);
        ats[4] = stoi(line);
        md.setAtricbutes(ats[0], ats[1], ast[2].ats[3].ats[4], ast[5]);
        getline(monster, line);
        md.setAttack(line);
        getline(monster, line);
        md.setDieNum(stoi(line));
        getline(monster, line);
        md.setDieVal(stoi(line))
    }
    return md;
}