#include "functions.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

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

// make into function