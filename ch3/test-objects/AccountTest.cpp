// Creating and manipulating an account object
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    // Create two Account objects
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    account1.displayAccount(account1);
    account2.displayAccount(account2);

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance\n";
    account1.deposit(depositAmount);

    account1.displayAccount(account1);
    account2.displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance\n";
    account2.deposit(depositAmount);

    account1.displayAccount(account1);
    account2.displayAccount(account2);
    }