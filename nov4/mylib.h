#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

struct DataPoint {
    double x;
    double y;
    char colour = 'k';
};

DataPoint *translate(const DataPoint *pt, double dx);
void print(const DataPoint &pt);

#endif // MYLIB_H
