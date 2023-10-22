//Class invoice
#include <string>

class Invoice {
    public:
    Invoice(std::string partNumber, std::string partDescription, int qty, int price)
    : number(partNumber), description(partDescription), item(qty), price(price), VAT(0.002), 
    discount(0) {

    }
    
    void setNumber(std::string partNumber) {
        number = partNumber;
    }

    std::string getNumber() const {
        return number;
    }
    void setDescription(std::string partDescription) {
        description = partDescription;
    }

    std::string getDescription() const {
        return description;
    }

    void setItem(int qty) {
        if (qty > 0) {
            item = qty;
        }
    }

    int getItem() const {
        return item;
    }

    void setPrice(int price) {
        if (price > 0) {
            price = price;
        }
    }

    int getPrice() const {
        return price;
    }

    double getInvoiceAmount() const {
        double subtotal = item * price;
        double taxAmount = subtotal * VAT;
        double discountAmount = subtotal * discount;

        double invoiceAmount = subtotal + taxAmount - discountAmount;
        return invoiceAmount;
    }
    private:
    std::string number;
    std::string description;
    int item{0};
    int price{0};
    double VAT{0};
    double discount{0};
};