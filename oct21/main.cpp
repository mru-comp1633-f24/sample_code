#include "mylib.h"
#include <iostream>

using namespace std;

int main() {
//    string_io_demo();
    
    char filename[MAX_NAME];
    cout << "What file would you like to open? ";
    cin.getline(filename, MAX_NAME);

    file_to_screen(filename);
    
    return 0;
}

