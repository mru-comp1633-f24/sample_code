#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many disks are on the tower? ";
    cin >> n;
    hanoi(n, 1, 3, 2);

    // int c = get_valid_input();
    // cout << "You entered: " << c << endl;
    
    return 0;
}
