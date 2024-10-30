#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

struct DataPoint {
    double x;
    double y;
    char colour = 'k';
};

void print(const DataPoint &pt);

void const_demo();
void array_demo();
void struct_demo();
void call_foo();

#endif // MYLIB_H
