#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

class Time {
public:
    Time();
    Time(int h, int m, int s);
    ~Time();
    
    void write(std::ostream &out) const;
    void set(int h, int m, int s);
    // avoid trivial setters/getters
//    void set_hours(int h);
//    int get_hours();
    bool operator == (const Time &other) const;
    void increment();
private:
    int hours;
    int minutes;
    int seconds;
};

std::ostream &operator<<(std::ostream &out, const Time &t);

#endif // MYLIB_H
