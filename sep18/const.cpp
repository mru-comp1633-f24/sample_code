#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    cout.precision(2);
    cout << 1.234567 << endl;
    cout << "Pi is: " << PI << endl;

    // making a change
    //    PI = PI / 2; // no can do
//    cout << "Pi is: " << PI << endl;
    return 0;
}
