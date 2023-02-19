#include "functions.hpp"

void readCSV(FILE *listname)
string line;
ifstream myfile;
myfile.open("myfile.txt");

if (!myfile.is_open()) {
    perror("Error open");
    exit(EXIT_FAILURE);
}
while (getline(myfile, line)) {
    cout << line << endl;
}

// make into function