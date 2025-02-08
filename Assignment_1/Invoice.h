//
// Created by jake on 2025-02-08.
//

#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using namespace std;


class Invoice {
private:
    string partNumber;
    string partDesc;
    int qtyPurchased;
    int pricePerUnit;

public:
    // Constructors
    Invoice();
    Invoice(
        const string& partNumber,
        const string& partDesc,
        const int& qtyPurchased,
        const int& pricePerUnit
        );

    // Getters
    string getPartNumber() const;
    string getPartDesc() const;
    int getQtyPurchased() const;
    int getPricePerUnit() const;

    // Setters
    void setPartNumber(const string& partNum);
    void setPartDesc(const string& desc);
    void setQtyPurchased(const int& qty);
    void setPricePerUnit(const int& price);

    // Member Functions
    int getInvoiceAmount() const;
};



#endif //INVOICE_H
