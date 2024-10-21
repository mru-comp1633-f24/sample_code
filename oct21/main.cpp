#include "mylib.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int MAX_NAME = 64;
//     char name[MAX_NAME];

//     cout << "Enter your name: ";
// //    cin >> name; // only reads to first whitespace
//     cin.getline(name, MAX_NAME);

//     for (int i = 0; i < MAX_NAME; ++i)
//         cout << name[i] << ' ';
//     cout << endl;

//     cout << "Hi " << name << "!\n";
//     cout << "How many cookies would you like? ";
//     int cookies;
//     cin >> cookies;
//     cout << "Wow, " << cookies << ", so many!\n";

    char filename[MAX_NAME];
    cout << "What file would you like to open? ";
    cin.getline(filename, MAX_NAME);
    
    ifstream in_file(filename);

    if (in_file.fail()) {
        cout << "Something went wrong!" << endl;
        return 1;
    }
    
    char line[256];
    while (in_file.getline(line, 256)) {
        cout << line << endl;
    }

    in_file.close();
    
    
    return 0;
}

