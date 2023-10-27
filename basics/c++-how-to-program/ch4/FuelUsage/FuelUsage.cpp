// Calculate and print fuel usage
#include <iostream>

using namespace std;

int main() {
    unsigned int tripCounter{1};

    cout << "Enter kilometers driven (-1 to quit): ";
    int kms;
    cin >> kms;

    while (kms != -1)
    {
        cout << "Enter liters used: ";
        int liters;
        cin >> liters;

        double totalForOne{static_cast<double>(kms) / liters};
        cout << "Kms per liter this trip: " << totalForOne;

        double totalForAll{0};
        totalForAll = (totalForAll + totalForOne) / tripCounter;
        cout << "\nTotal kms per liter: " << totalForAll << endl;

        ++tripCounter;

        cout << "\nEnter kilometers driven (-1 to quit): ";
        cin >> kms;
    }
    
}