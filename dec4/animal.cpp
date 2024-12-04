#include "animal.h"
#include <cstring>
#include <iostream>

Animal::Animal(double age, const char *name) : age_years(age) {
    strcpy(this->name, name);
    std::cout << "Animal " << name << " constructed" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal " << name << " destructed" << std::endl;
}

void Animal::speak() const {
    std::cout << "Hi, my name is " << name << std::endl;
}
