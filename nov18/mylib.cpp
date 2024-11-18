#include "mylib.h"
using namespace std;

void Time::write(std::ostream &out) {
    cout << hours << ':' << minutes << ':' << seconds;
    cout << "\nThis Time instance is located at " << this;
}

void Time::set(int h, int m, int s) {
    // TODO: make sure values are in range
    hours = h;
    minutes = m;
    seconds = s;
}

void Time::increment() {
    seconds++;
    if (seconds > 60) {
        // TODO: double check logic
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
}
