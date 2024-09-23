#include "mylib.h"

// function implementations
int some_func() {
    return 2;
}

void increase_salary(double &salary, double p_increase) {
    salary = salary * (1 + p_increase);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

char encrypt(char c, int shift) {
    // function stub, doesn't really do anything
    return c;
}
