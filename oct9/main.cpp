#include "mylib.h"
#include <iostream>
using namespace std;


int main() {
    // partial_fill_example();

    // char connect4[ROWS][COLS] = {};
    // char inverse[COLS][ROWS] = {}; // not the same data type
    // print_board(connect4);

    // bool game_over = false;
    // while (!game_over) {
    //     take_turn(connect4, 'r');
    //     print_board(connect4);
    // }
    
//    print_board(inverse); // no can do

    char vowels[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    // same as char vowels[] = "aeiou";
    cout << vowels << endl;

    
    demo_string();
    
    return 0;
}

