// Program prints an invoice
#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main() {
    Invoice invoice1{"01223", "mobile", 3, 1024};
    
    cout << "Invoice amount = " << invoice1.getInvoiceAmount() << endl;
}