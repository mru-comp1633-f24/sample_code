#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    Time now;
    Time bedtime;
    bedtime.set(11, 0, 0);
    bedtime.write(cout);
    cout << endl;
    bedtime.increment();
    bedtime.write(cout);
    cout << endl;
    
    return 0;
}
