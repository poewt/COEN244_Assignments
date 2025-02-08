/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 8, 2025
 * COEN 244 D
 * Assignment 1
 * Problem 1
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

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
    Invoice(const Invoice& other);

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
    Invoice clone(const Invoice& inv) const;

    // Desctructor
    ~Invoice();
};



#endif //INVOICE_H
