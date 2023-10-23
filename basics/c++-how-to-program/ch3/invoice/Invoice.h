//Class invoice
#include <string>

class Invoice {
private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int pricePerItem;
    double vatRate;
    double discountRate;

public:
    Invoice(const std::string& number, const std::string& description, int qty, int price, double vat = 0.002, double discount = 0.0)
        : partNumber(number), partDescription(description), quantity(qty), pricePerItem(price), vatRate(vat), discountRate(discount) {
    }

    // Setters
    void setPartNumber(const std::string& number) {
        partNumber = number;
    }

    void setPartDescription(const std::string& description) {
        partDescription = description;
    }

    void setQuantity(int qty) {
        if (qty > 0) {
            quantity = qty;
        }
    }

    void setPricePerItem(int price) {
        if (price > 0) {
            pricePerItem = price;
        }
    }

    void setVatRate(double vat) {
        if (vat >= 0.0) {
            vatRate = vat;
        }
    }

    void setDiscountRate(double discount) {
        if (discount >= 0.0) {
            discountRate = discount;
        }
    }

    // Getters
    std::string getPartNumber() const {
        return partNumber;
    }

    std::string getPartDescription() const {
        return partDescription;
    }

    int getQuantity() const {
        return quantity;
    }

    int getPricePerItem() const {
        return pricePerItem;
    }

    double getVatRate() const {
        return vatRate;
    }

    double getDiscountRate() const {
        return discountRate;
    }

    // Calculates the invoice amount
    double getInvoiceAmount() const {
        double subtotal = quantity * pricePerItem;
        double vatAmount = subtotal * vatRate;
        double discountAmount = subtotal * discountRate;

        double invoiceAmount = subtotal + vatAmount - discountAmount;
        return invoiceAmount;
    }
};