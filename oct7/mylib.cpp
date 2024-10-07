#include "mylib.h"
#include <iostream>
using namespace std;

// private function
void hi() {
    cout << "hi" << endl;
}

void print_nums() {
    int numbers[DEMO_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int numbers2[DEMO_SIZE] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Equality: " << (numbers == numbers2) << endl; // comparing memory addresses, always false
//    int numbers2[DEMO_SIZE] = numbers;
    cout << numbers[0] << endl;
    cout << numbers[DEMO_SIZE - 1] << endl;
    cout << numbers[DEMO_SIZE] << endl;
    cout << numbers[-1] << endl;

    bool equal = true;
    for (int i = 0; i < DEMO_SIZE; ++i) {
        if (numbers[i] != numbers2[i])
            equal = false;
    }
    cout << "Loop equality: " << equal << endl;
    
    
}

void print(const int arr[], const int size) {
//    arr[4] = 80; // error, const arr
    for (int i = 0; i < size; ++i)
        cout << arr[i] << ' ';
    cout << endl;

    hi();
}
    
