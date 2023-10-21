// Creating and manipulating an account object
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount; // create object myAccount of type Account

    cout << "Initial account name is: " << myAccount.getName();

    cout << "\nPlease enter the account name:  ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout << "Name in object myAccount is: "
        << myAccount.getName() << endl;
}