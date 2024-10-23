#include "mylib.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

void copy(const char filename[]) {
    const int BUF = 512;
    char dest[BUF];
    strcpy(dest, filename); // = filename + "-copy"
    strcat(dest, "-copy");
    ifstream in(filename);
    ofstream out(dest);

    char c;
    while (in.get(c)) // loop until in is empty/failed
        out << static_cast<char>(toupper(c));

    in.close();
    out.close();

    cout << "Copied " << filename << " to " << dest << endl;
}

DataPoint random_point() {
    DataPoint pt;
    return pt;
}

void print(const DataPoint &pt) {
    cout << "pt = {" << pt.x << ", "
         << pt.y << ", " << pt.colour << "}" << endl;
}
