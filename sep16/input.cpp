#include <iostream>
using namespace std;

int main() {
    int phone_num, age;
    cout << "Enter your phone number and initial: ";

    char initial;
    cin >> phone_num >> initial;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hi " << initial
         << ", your number is: " << phone_num << endl;
    return 0;
}
