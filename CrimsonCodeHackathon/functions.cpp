#include "functions.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "Monster.hpp"
using namespace std;



void readCSV(FILE* infile)
{
    string line;
    ifstream monsters;
    monsters.open("monsters.csv");

    while (getline(monsters, line) && !monsters.eof()) {
        

