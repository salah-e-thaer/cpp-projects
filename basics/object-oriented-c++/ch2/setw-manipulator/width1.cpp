// demonstrates need for setw manipulator.
#include <iostream>
using namespace std;

int main() {
    long pop1=2345677, pop2=565, pop3=86564;

    cout << "LOCATION " << "POP." << endl
        << "Portcity " << pop1 << endl
        << "Hightown " << pop2 << endl
        << "Lowville " << pop3 << endl;

    return 0;
}