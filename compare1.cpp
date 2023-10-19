// Program to compare two integers
#include <iostream>

using namespace std;

int main()
{
    int x{0};
    int y{0};

    cout << "Enter two integer: ";
    cin >> x >> y;

    if (x > y) {
        cout << x << " is larger." << endl;
    } else if (x < y) {
        cout << y << " is larger." << endl;
    } else {
        cout << "These numbers are equal." << endl;
    }
    
}