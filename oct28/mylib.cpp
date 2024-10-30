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
