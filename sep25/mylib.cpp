#include "mylib.h"
#include <iostream>
using namespace std;

bool timed_out(int total_time, int num_records) {
    if (num_records == 0) // guard clause
        return false;

    return (total_time / num_records) > 1;
}

void no_brackets(bool show) {
    if (show) {
        cout << "This is under show\n";
        cout << "This is also under show\n";
    } else
        cout << "No show!\n";
}
