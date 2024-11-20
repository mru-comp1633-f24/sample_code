#include "mylib.h"
using namespace std;

Time::Time() : hours(0), minutes(0), seconds(0) {
//    something = new whatever;
    cout << "I'm constructing a default Time\n";
}

Time::Time(int h, int m, int s) {
    set(h, m, s);
    cout << "I'm constructing a time with values\n";
}

Time::~Time() {
    cout << "I'm being destroyed\n";
    // delete something;
}

void Time::write(std::ostream &out) const {
//    hours = 24;
//    out << "Your time is up!" << endl;
//    set(24, minutes, seconds);
    out << this->hours << ':' << this->minutes << ':' << this->seconds;
    out << "\nThis Time instance is located at " << this;
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

bool Time::operator==(const Time &other) const {
    return hours == other.hours
        && minutes == other.minutes
        && seconds == other.seconds;
}
