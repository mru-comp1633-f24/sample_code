#include "mylib.h"
#include <iostream>
using namespace std;

void forloop() {
    for (int i = 0; i < 10; i++) {
        cout << "i: " << i << ' ';
    }
    cout << endl;
}

void whileloop() {
    int i = 0;
    while (i < 10) {
        cout << "i: " << i << ' ';
        ++i;
    }
    cout << endl;
}

void loop_until_q() {
    char choice; // LCV
    cout << "Enter a character (q to quit): ";
    cin >> choice; // Initialization
    // same as !(choice == 'q' || choice == 'Q')
    while (choice != 'q' && choice != 'Q') {
        cout << "Wow, nice " << choice << endl;
        cin >> choice; // update
    }
}

int count_chars(char c) {
    int count = 0;
    char lcv;
//    cin >> lcv; // skip whitespace then read
    cin >> ws; // read in all whitespace, stop at non-whitespace
    cin.get(lcv); // initialization
    while (lcv != '\n') { // condition
        if (lcv == c)
            count++;
        cin.get(lcv); // update
    }
    return count;
}

void print_times(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i * j << ' ';
        }
        cout << endl;
    }
}
