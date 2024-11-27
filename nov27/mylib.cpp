#include "mylib.h"
#include <iostream>

using namespace std;

void hanoi(int n, int src, int dest, int spare) {
    // base case: 1 disk to move
    if (n == 1) {
        cout << "Move disk from peg " << src
             << " to peg " << dest << endl;
    } else {
        // recursive case
        hanoi(n-1, src, spare, dest);
        hanoi(1, src, dest, spare);
        hanoi(n-1, spare, dest, src);
    }
}

int get_valid_input() {
    int choice;
    cout << "Enter a number between 1 and 10: ";
    cin >> choice;
    if (choice < 1 || choice > 10) {
        cout << choice << " is not valid, try again." << endl;
        choice = get_valid_input();
    }
    return choice;
}

int length(Node *head) {
    // base case
    if (head == nullptr) {
        return 0;
    } else {
        // recursive case
        return 1 + length(head->next);
    }
}
