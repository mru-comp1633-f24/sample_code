#include <iostream>
using namespace std;

int main() {
    int i = 1;
    double d = (1 + i) * 3.4; // ok
    d = i; // still okay, d = 1.0
//    i = d; // compiler warning! i = 1
    i = static_cast<int>(d);
    char c = static_cast<char>(d);

    cout << "c: " << c << endl;

    // doubles are imprecise
    cout << (3 * 0.1 == 0.3) << endl;

    int big_num = 2147483647;
    cout << "big_num: " << big_num << endl;
    cout << "big_num + 1: " << big_num + 1 << endl;
    return 0;
}
