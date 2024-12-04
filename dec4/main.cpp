#include <iostream>
#include "cat.h"
#include "duck.h"

using namespace std;

void adopt(const Animal &a);

int main() {
    //Animal foo(5, "Generic Animal");
    //foo.speak();

    Cat cat(7, "Salvador");
    cat.speak();
    
    Duck daffy(1.5, "Daffy", false);

    adopt(cat);
    adopt(daffy);

    Animal *pcat = new Cat(10, "Fluffy");
    delete pcat;
    
    return 0;
}

void adopt(const Animal &a) {
    cout << "Congratulations on adopting a new pet!" << endl;
    a.speak();
}
