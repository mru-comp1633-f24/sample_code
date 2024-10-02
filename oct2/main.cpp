#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    forloop();
    whileloop();

    // demo of ++i vs i++ behaviour
    int i = 1;
    cout << "i++ * 2: " << i++ * 2 << endl;
    cout << "i: " << i << endl;
    i = 1;
    cout << "++i * 2: " << ++i * 2 << endl;
    cout << "i: " << i << endl;

//    loop_until_q();
    cout << "Enter a character to count: ";
    char c;
    cin >> c;
    cout << "Enter a sentence: ";
    int count = count_chars(c);
    cout << c << " occured " << count << " times\n";

    print_times(12);
    
    return 0;
}

