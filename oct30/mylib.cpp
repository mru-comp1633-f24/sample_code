#include "mylib.h"
#include <iostream>

using namespace std;

DataPoint random_point() {
    DataPoint pt;
    return pt;
}

void print(const DataPoint &pt) {
    cout << "pt = {" << pt.x << ", "
         << pt.y << ", " << pt.colour << "}" << endl;
}

void const_demo() {
        int x;
    int y = 37;

    int *ptr = &y;
    const int *pci = &y;
    int * const cpi = &y;
    const int * const cptr = &y;
    const int c = 5;
//    c = 10; // error, can't reassign constant

    pci = &x; // reassignment of pointer to const
//    *pci = 5; // error, can't reassign constant
    *cpi = 5; // change value of const pointer
//    cpi = &x; // error, can't reassign pointer

    cout << *cptr << endl; // can't change anything about cptr
}

void array_demo() {
    int arr[10] = {}; // initialize to all zeros
    int *a = arr;
    cout << "arr: " << arr << endl;
    cout << "a: " << a << endl;
    cout << "*a: " << *a << endl;
    (*a)++;
    cout << "a: " << a << endl;
    cout << "*a: " << *a << endl;
    

    char A[10] = "Hello";
    cout << A << endl;
    char *cptr = A;
    *cptr = 'J';
    cout << A << endl;

    int x = 5;
    int *blah = &x;
    cout << blah[1] << endl; // undefined behaviour
    cout << *(blah + 1) << endl; //same
    
}

void struct_demo() {
    DataPoint origin;
    origin.x = 0;
    origin.y = 0;

    DataPoint *dptr = &origin;
    print(origin);
    print(*dptr);

    (*dptr).x = 10;
    print(origin);

    dptr->y = 10; // more convenient operator
    print(origin);
}

void foo(int *&iptr) {
    int x = 42;
    iptr = &x;
}

void call_foo() {   
    int *iptr = nullptr;

    cout << iptr << endl;

    foo(iptr);
    // not a valid memory location, only in scope of foo
    cout << iptr << endl; 
    cout << *iptr << endl; // what happens here?
}
