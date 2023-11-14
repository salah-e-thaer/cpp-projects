#include <iostream>
using namespace std;

int main() {
    int fTemp;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fTemp;
    int cTemp = (fTemp - 32) * 5 / 9;

    cout << "Equivalent in celsius is: " << cTemp << "\n";
    return 0;
}