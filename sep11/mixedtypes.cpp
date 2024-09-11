#include <iostream>
using namespace std;

int main() {
    char c = 'a';
    cout << "c: " << c * 2 << endl;

    c = 'b'; // no problem
    // c = "a"; // eh...
    c = 98;

    cout << "c is now: " << c << endl;

    
    // double assigned to int
    int num = 4.0 / 2;
    // int assigned to double
    double other_num = 5 / 2;

    cout << "num: " << num
         << "\nother_num: " << other_num << endl;
    
    return 0;
}
