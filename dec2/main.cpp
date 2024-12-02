#include "mylib.h"
#include <iostream>
using namespace std;

void addstuff(URLStack s, const char *stuff) {
    s.push(stuff);
    cout << "In addstuff: " << s;
}

int main() {
    URLStack s(10);
    s.push("Testing");
    cout << "In main: " << s;
    addstuff(s, "Testing again");
    cout << "In main: " << s;
    s.push("Another one");
    URLStack s2 = s;
    cout << "s2: " << s2;
    URLStack s3(10);
    s3 = s;
    cout << s3;
    
    return 0;
}
