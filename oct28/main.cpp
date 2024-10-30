#include "mylib.h"
#include <iostream>

using namespace std;

void foo(char *c) {
    cout << "boo!\n" << endl;
}

void bar(int &x) {
}

int main(int argc, char *argv[]) {
//    bar(5); can't get address of literal
    
    char str[64];
    foo(str);

    int arr[16];
    cout << arr << endl;

    int x;
    int *p = nullptr;

//    cout << "*p: " << *p << endl; // undefined behaviour (maybe segfault?)
    if (p) {
        cout << "Not a nullptr\n";
    }
    
    p = &x;

    cout << "x: " << x << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    *p = 42;
    cout << "x: " << x << endl;

    
    // cout << "&42: " << &42 << endl; // can't get address of a literal!
    
    return 0;
}

