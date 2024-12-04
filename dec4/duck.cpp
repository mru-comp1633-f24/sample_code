#include "duck.h"
#include <iostream>

Duck::Duck(double age, const char *name, bool is_rubber) : Animal(age, name), is_rubber(is_rubber) {
    std::cout << "Duck constructed" << std::endl;
}

Duck::~Duck() {
    std::cout << "Duck destructed" << std::endl;
}

void Duck::swim() {
    std::cout << "Swimming!" << std::endl;
}

void Duck::fly() {
    std::cout << "Flying!" << std::endl;
}

void Duck::speak() const {
    std::cout << "Quack quack!" << std::endl;
    if (is_rubber) {
        std::cout << "I'm a rubber duck." << std::endl;
    }
}