// Summing integers with for statement.
#include <iostream>

using namespace std;

int main() {
    unsigned int total{0};

    for (unsigned int i{2}; i <= 20; i += 2)
    {
        total += i;
    }
    
    cout << "Sum is " << total << endl;
}