#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    cout << "timed_out(10, 2): " << timed_out(10, 2) << endl;
    cout << "timed_out(1, 2): " << timed_out(1, 2) << endl;  
    cout << "timed_out(10, 0): " << timed_out(10, 0) << endl;

    cout << "no_brackets(true): \n";
    no_brackets(true);
    cout << "no_brackets(false): \n";
    no_brackets(false);
    return 0;
}

