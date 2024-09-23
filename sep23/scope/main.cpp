#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
//    {
    int x = 5;
    int y = some_func();   //}

    cout << "x is " << x << " and some_func returns " << y << endl;

    // test driver for increase_salary function
    double salary = 10000;
    increase_salary(salary, 0.05);
    cout << "increase_salary(salary, 0.05): " << salary << endl;
    salary = -10000;
    increase_salary(salary, 0.1);
    cout << "increase_salary(salary, 0.1): " << salary << endl;

    // sample top-down main design calling stub
    char c;
    cout << "Enter a letter to encrypt: ";
    cin >> c;
    // prompt for a shift etc
    int shift = 3;
    char e = encrypt(c, shift);

    cout << "The encrypted value is " << e << endl;
    
    return 0;
}
