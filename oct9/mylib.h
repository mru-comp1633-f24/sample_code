#ifndef MYLIB_H
#define MYLIB_H

// Can't return array from function
// int [] fibonacci(int n);

const int MAX_FIB = 64;
const int ROWS = 6;
const int COLS = 7;

void print(const int arr[], int size);
void partial_fill_example();
void fibonacci(int fib[MAX_FIB], int n);

void initialize(char connect4[ROWS][COLS]);
void print_board(const char connect4[ROWS][COLS]);
void take_turn(char connect4[ROWS][COLS], char colour);
bool check_row(const char row[COLS]);

void demo_string();

#endif // MYLIB_H
