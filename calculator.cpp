// Program to calc sum, product, difference, and quotient of two integers
#include <iostream>

using namespace std;

int main()
{
    int x{0};
    int y{0};

    int sum{0};
    int product{0};
    int difference{0};
    int quotient{0};

    cout << "Enter two integers: ";
    cin >> x >> y;

    sum = x + y;
    product = x * y;
    difference = x - y;
    quotient = x / y;

    cout << "Sum is " << sum << "\n";
    cout << "product is " << product << "\n";
    cout << "difference is " << difference << "\n";
    cout << "Quotient is " << quotient << "\n";
    
}