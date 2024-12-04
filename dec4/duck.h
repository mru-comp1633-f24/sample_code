#ifndef DUCK_H
#define DUCK_H

#include "animal.h"

class Duck : public Animal {
public:
    Duck(double age, const char *name, bool is_rubber);
    ~Duck();
    void swim();
    void fly();
    void speak() const;
private:
    char beak_colour[BUF];
    bool is_rubber;
};

#endif // DUCK_H
