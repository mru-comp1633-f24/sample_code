#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

// Copies the contents of the file given by filename to a new file
void copy(const char filename[]);

struct DataPoint {
    double x;
    double y;
    char colour = 'k';
};

DataPoint random_point();
void print(const DataPoint &pt);

#endif // MYLIB_H
