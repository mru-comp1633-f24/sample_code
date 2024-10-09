#include "mylib.h"
#include <iostream>

using namespace std;

// int [] fibonacci(int n) {
//     int fib[32] = {1, 1};
//     for (int i = 2; i < n; i++) {
//         fib[i] = fib[i-1] + fib[i-2];
//     }
//     return fib;
// }

void partial_fill_example() {
//    int fib[] = fibonacci(5); // can't return [] from func
    int fib[MAX_FIB];
    int n;
    cout << "How many numbers do you want to generate? ";
    cin >> n;
    print(fib, n);
    fibonacci(fib, n);
    print(fib, n);
}

void print(const int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

void fibonacci(int fib[MAX_FIB], int n) {
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

void initialize(char connect4[ROWS][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            connect4[r][c] = ' ';
        }
    }
}


void take_turn(char connect4[ROWS][COLS], char colour) {
    cout << "Where would you like to play? ";
    int r, c;
    cin >> r >> c;
    connect4[r][c] = colour;
}

void print_board(const char connect4[ROWS][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << connect4[r][c];
        }
        cout << endl;
    }
}

void demo_string() {
    char str[128];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = '\0';
    cout << str << " is in my c-string" <<  endl;
}
