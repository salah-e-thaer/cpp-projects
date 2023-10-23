// Program prints an invoice
#include <iostream>
#include <string>
#include "Invoice.h"

int main() {
    Invoice invoice("12345", "Widget", 5, 100, 0.20, 0.10);

    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price per Item: " << invoice.getPricePerItem() << std::endl;
    std::cout << "VAT Rate: " << invoice.getVatRate() << std::endl;
    std::cout << "Discount Rate: " << invoice.getDiscountRate() << std::endl;
    std::cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << std::endl;

    // Set new values for the invoice
    invoice.setPartNumber("54321");
    invoice.setPartDescription("Gadget");
    invoice.setQuantity(10);
    invoice.setPricePerItem(75);
    invoice.setVatRate(0.15);

    std::cout << "\nUpdated Invoice Details:" << std::endl;
    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price per Item: " << invoice.getPricePerItem() << std::endl;
    std::cout << "VAT Rate: " << invoice.getVatRate() << std::endl;
    std::cout << "Discount Rate: " << invoice.getDiscountRate() << std::endl;
    std::cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << std::endl;

    return 0;
}