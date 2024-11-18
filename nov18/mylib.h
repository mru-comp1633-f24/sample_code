#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

class Time {
public:
    void write(std::ostream &out);
    void set(int h, int m, int s);
    // avoid trivial setters/getters
//    void set_hours(int h);
//    int get_hours();
    int compare(Time other);
    void increment();
private:
    int hours;
    int minutes;
    int seconds;
};

#endif // MYLIB_H
