#include "mylib.h"
#include <iostream>
using namespace std;

void random_stuff() {
    
    int nums[10];
    cout << nums << endl;
    cout << nums[0] << endl;
    cout << nums[1] << endl;

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 10 elements
    double other_nums[] = {1.5, 2.5, 3.5}; // 3 elements

    int x = 5;
    int test[] = {x, x*2, x*4};
    int* test2[] = {&x, &x, &x};
    
    x = 7; // does not affect test[] values
}

int main() {
//    print_nums();
    const int N = 16;
    int nums[N] = {3,1,4};
    cout << nums << endl;
    print(nums, N);
    return 0;
}

