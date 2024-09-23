#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a character: ";
    char c;
    cin.get(c);
    cout << "You typed: " << c << endl;
    cin.get(c);
    cout << "Now we've got: " << c << endl;
    
    return 0;
}
