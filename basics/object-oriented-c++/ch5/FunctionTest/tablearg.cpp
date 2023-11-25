// demonstrates function arguments.
#include <iostream>
using namespace std;
void repChar(char, int);

int main() {
    repChar('-', 45);
    cout << "Data type      Range" << endl;
    repChar('=', 25);
    cout << "char           -128 to 127" << endl
         << "short          -32,768 to 32,767" << endl
         << "int            System dependent" << endl
         << "double         -2,147,483,648 to 2,147,483,647" << endl;
    repChar('-', 45);
}

void repChar(char ch, int n) {
    for (int j=0; j < n; j++) {
        cout << ch;
    }
    cout << endl;
}