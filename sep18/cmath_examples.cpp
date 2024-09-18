#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "Enter side lengths a and b: ";
    cin >> a >> b;

    double hyp = sqrt(a*a + b*b);
    cout << "The hypotenuse is: " << hyp << endl;

    cout << pow(2.0, 3.0) << endl;
    
    return 0;
}
