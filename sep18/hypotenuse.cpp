#include <iostream>
#include <cmath>

using namespace std;

// declare my hyponenuse function
double hypotenuse(double side_a, double side_b);
void print_hyp(double);

const int GLOBAL_CONSTANT = 3;

int main() {
    double a, b;
    cout << "Enter side lengths a and b: ";
    cin >> a >> b;

    double hyp = hypotenuse(a, b);
    print_hyp(hyp);
    
    cout << "The global constant is " << GLOBAL_CONSTANT << endl;
    
    return 0;
}

// definition
double hypotenuse(double side_a, double side_b) {
    double h = sqrt(side_a*side_a + side_b*side_b);
    cout << "The global constant is " << GLOBAL_CONSTANT << endl;
    return h;
}

void print_hyp(double value) {
    cout << "The hypotenuse is: " << value << endl;
}
