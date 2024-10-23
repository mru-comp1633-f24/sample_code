#include "mylib.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "There are " << argc << " arguments:\n";
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << endl;

    if (argc > 1)
        copy(argv[1]);
    else
        cout << "Please give me a filename to copy!\n";


    DataPoint p1; // allocates 17 bytes
    DataPoint p2 = random_point();

    cout << "x: " << p1.x << endl;
    cout << "colour: " << p1.colour << endl;
    cout << (p1.x == p2.x) << endl; // shouldn't compare on double, but should work
//    cout << p1 << endl; // can't do
//    cout << "x: " << x << endl; // out of scope

    print(p1);
//    string str; how much memory allocated??

    
    return 0;
}

