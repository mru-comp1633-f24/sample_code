#include "mylib.h"
#include <iostream>
using namespace std;

// silly typedef examples
typedef int Cat;
typedef Cat* CatPtr;

void foo(const CatPtr ptr) {
//    (*ptr)++;
    cout << "ptr location: " << ptr << endl;
}

int main() {
    // Cat x = 5;
    // // CatPtr p = &x;
    // // cout << "x: " << x << endl;
    // // foo(p);
    // // cout << "x: " << x << endl;

    DataPoint pt = {0, 0, 'r'};
    print(pt);
    cout << endl;
    DataPoint *p2 = translate(&pt, 5);
    print(pt);
    cout << endl;
    print(*p2);
    cout << endl;

    delete p2;
//    print(*p2); // bad, no longer allocated
    p2 = nullptr;

    cout << "How many chars do you want? ";
    int n;
    cin >> n; 
    char *arr = new char[n];

    cout << "The random memory is: " << arr << endl;

    delete [] arr; // free the array - needs [] to distinguish
    arr = nullptr;

//    if (arr) ... check for null before using
    
        
    
    return 0;
}
