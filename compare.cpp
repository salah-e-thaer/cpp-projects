// Comparing integers using if statements
#include <iostream>

using namespace std;

int main()
{
    int number1{0};
    int number2{0};

    cout << "Enter two integers to compare: ";
    cin >> number1 >> number2;

    if (number1 == number2) {
        cout << number1 << " == " << number2 << endl;
    }

    if (number1 != number2) {
        cout << number1 << " != " << number2 << endl;
    }

    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }

    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }

    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }

    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    }
}