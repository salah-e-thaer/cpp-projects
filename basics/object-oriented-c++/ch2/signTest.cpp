// tests signed and unsigned integers.
#include <iostream>
using namespace std;

int main() {
    int signedVar = 1500000000;
    unsigned int unsignedVar = 1500000000;

    signedVar = (signedVar * 2) / 3;    //calculation exceeds range.
    unsignedVar = (unsignedVar * 2) / 3;    //calculation within range.

    cout << "signedVar = " << signedVar << endl;
    cout << "unsignedVar = " << unsignedVar << endl;

    return 0;
}
