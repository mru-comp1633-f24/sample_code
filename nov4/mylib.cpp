#include "mylib.h"
#include <iostream>

using namespace std;

DataPoint *translate(const DataPoint *pt, double dx) {
    DataPoint *translated = new DataPoint; // on the heap
    *translated = *pt;
    translated->x += dx;
    return translated;
}

void print(const DataPoint &pt) {
    cout << "(" << pt.x << ", " << pt.y << ")";
}

