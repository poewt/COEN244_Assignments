//
// Created by jake on 2025-02-08.
//

#include "Invoice.h"

// Constructors ===================================================================================
Invoice::Invoice(): partNumber("0"), partDesc(""), qtyPurchased(0), pricePerUnit(0)
{

}

Invoice::Invoice(
    const string& partNumber,
    const string& partDesc,
    const int& qtyPurchased,
    const int& pricePerUnit
    ) :
    partNumber(partNumber),
    partDesc(partDesc),
    qtyPurchased(qtyPurchased),
    pricePerUnit(pricePerUnit)
{

}

Invoice::Invoice(const Invoice& other) :
    partNumber(other.partNumber),
    partDesc(other.partDesc),
    qtyPurchased(other.qtyPurchased),
    pricePerUnit(other.pricePerUnit)
{

}

// Getters ===================================================================================
string Invoice::getPartNumber() const
{
    return partNumber;
}

string Invoice::getPartDesc() const
{
    return partDesc;
}

int Invoice::getQtyPurchased() const
{
    return qtyPurchased;
}

int Invoice::getPricePerUnit() const
{
    return pricePerUnit;
}


// Setters ===================================================================================
void Invoice::setPartNumber(const string& partNum)
{
    partNumber = partNum;
}

void Invoice::setPartDesc(const string& desc)
{
    partDesc = desc;
}

void Invoice::setQtyPurchased(const int& qty)
{
    qtyPurchased = qty;
}

void Invoice::setPricePerUnit(const int& price)
{
    pricePerUnit = price;
}

// Member Functions ==========================================================================
int Invoice::getInvoiceAmount() const
{
    if (qtyPurchased <= 0 || pricePerUnit <= 0)
        return 0;

    return qtyPurchased * pricePerUnit;
}

Invoice Invoice::clone(const Invoice& inv) const
{
    return Invoice(inv);
}

// Destructor ================================================================================
Invoice::~Invoice()
{

}
