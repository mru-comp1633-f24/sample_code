#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

struct DataPoint {
    double x;
    double y;
    char colour = 'k';
};

void print(const DataPoint &pt);

#endif // MYLIB_H
