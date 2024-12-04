#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal {
public:
    Cat(double age, const char *name);
    ~Cat();
    void stalk();
    void pounce();
    void speak() const;
private:
    int lives_remaining;
};

#endif // CAT_H
