#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    Time now(1, 34, 0);
    Time bedtime(11, 0, 0);
    Time *later = new Time();

    delete later;

    cout << "It's : " << bedtime << endl;
    
    cout << endl;
    bedtime.increment();
    cout << endl;

    if (now == bedtime) {
        cout << "It's bedtime!\n";
    }
    
    return 0;
}
