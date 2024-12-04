#include "cat.h"
#include <iostream>
#include <random>

// helper function to randomly lose a life (1/6 chance)
bool lose_life() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 5);
    return dis(gen) == 0;
}

Cat::Cat(double age, const char *name) : Animal(age, name), lives_remaining(9) {
    std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructed" << std::endl;
}

void Cat::pounce() {
    std::cout << "Pouncing!" << std::endl;
    if (lose_life()) {
        lives_remaining--;
        std::cout << "Oh no, lost a life! " << std::endl;
    }
}

void Cat::stalk() {
    std::cout << "Stalking!" << std::endl;
}

void Cat::speak() const {
    Animal::speak();
    std::cout << "Meow! I have " << lives_remaining << " lives left." << std::endl;
}
