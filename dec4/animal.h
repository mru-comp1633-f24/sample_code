#ifndef ANIMAL_H
#define ANIMAL_H

const int BUF = 64;

class Animal {
public:
    Animal(double age, const char *name);
    virtual ~Animal();
    // virtual = late/dynamic binding
    virtual void speak() const = 0;
private:
    double age_years;
    char name[BUF];
};

#endif // ANIMAL_H
