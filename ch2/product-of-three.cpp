// Program to calculate the product of three integer
#include <iostream>

using namespace std;

int main()
{
    int x{0};
    int y{0};
    int z{0};
    int result{0};

    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    result = x * y * z;
    cout << "The product is " << result << endl;
}