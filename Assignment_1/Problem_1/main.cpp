/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 8, 2025
 * COEN 244 D
 * Assignment 1
 * Problem 1
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#include <iostream>
#include "Invoice.h"

using namespace std;

// GLOBAL TEST CASES
int testCases = 0;
int passCases = 0;
int failCases = 0;

void printSeparator()
{
    cout << "==============================================================================" << endl;
}

bool isInvoiceEqual(const Invoice& invoice1, const Invoice& invoice2)
{
    testCases++;
    bool equal = true;

    if (
        invoice1.getPartNumber() != invoice2.getPartNumber() ||
        invoice1.getPartDesc() != invoice2.getPartDesc() ||
        invoice1.getQtyPurchased() != invoice2.getQtyPurchased() ||
        invoice1.getPricePerUnit() != invoice2.getPricePerUnit() ||
        invoice1.getInvoiceAmount() != invoice2.getInvoiceAmount()
    )
    {
        equal = false;
    }

    if (equal)
        passCases++;
    else
        failCases++;

    return equal;
}

bool isInvoiceEqual(
    const Invoice& invoice,
    const string& partNumber,
    const string& partDesc,
    const int& qtyPurchased,
    const int& pricePerUnit,
    const int& invoiceAmount
    )
{
    testCases++;
    bool equal = true;

    if (
        invoice.getPartNumber() != partNumber ||
        invoice.getPartDesc() != partDesc ||
        invoice.getQtyPurchased() != qtyPurchased ||
        invoice.getPricePerUnit() != pricePerUnit ||
        invoice.getInvoiceAmount() != invoiceAmount
    )
    {
        equal = false;
    }

    if (equal)
        passCases++;
    else
        failCases++;

    return equal;
}

bool testDefaultInvoice()
{
    cout << "============ Invoice - Default  ====================================" << endl;
    Invoice invoice;

    // Testing getters
    cout << "Default invoice parameters: " << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Desc: " << invoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << invoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << "\n" << endl;

    // Testing getInvoiceAmount
    cout << "Default invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

    // Status

    return isInvoiceEqual(invoice, "0", "", 0, 0, 0);
}

bool testCustomInvoice()
{
    cout << "============ Invoice - Custom  ====================================" << endl;
    // Testing second constructor
    Invoice custom(
        "B0009",
        "This model focuses on high quality parts.",
        240,
        11
        );

    cout << "Custom invoice parameters: " << endl;
    cout << "Part Number: " << custom.getPartNumber() << endl;
    cout << "Part Desc: " << custom.getPartDesc() << endl;
    cout << "Quantity Purchased: " << custom.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << custom.getPricePerUnit() << "\n" << endl;

    cout << "Custom invoice amount: " << custom.getInvoiceAmount() << "\n" << endl;

    // Status
    return isInvoiceEqual(
        custom,
        "B0009",
        "This model focuses on high quality parts.",
        240,
        11,
        2640
        );
}

bool testSetters()
{
    cout << "============ Invoice - Setters ====================================" << endl;
    Invoice invoice;

    // Testing setters
    cout << "Setting new invoice parameters. " << endl;
    invoice.setPartNumber("A1234");
    invoice.setPartDesc("This model uses basic functions to run.");
    invoice.setQtyPurchased(2);
    invoice.setPricePerUnit(12);

    cout << "New invoice parameters: " << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Desc: " << invoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << invoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << "\n" << endl;

    // Testing getInvoiceAmount
    cout << "New invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

    // Status
    return isInvoiceEqual(
        invoice,
        "A1234",
        "This model uses basic functions to run.",
        2,
        12,
        24
        );
}

bool testNegativeQty()
{
    cout << "============ Invoice - Negative Quantities ====================================" << endl;
    Invoice negativeInvoice(
    "NEGATIVE01",
    "Testing for negative quantities.",
    -20,
    11
    );
    // Testing negative quantity
    cout << "Testing negative quantity" << endl;
    cout << "Negative qty invoice amount: " << negativeInvoice.getInvoiceAmount() << "\n" << endl;

    // Status
    return isInvoiceEqual(
        negativeInvoice,
        "NEGATIVE01",
        "Testing for negative quantities.",
        -20,
        11,
        0
        );
}

bool testNegativePrice()
{
    cout << "============ Invoice - Negative Prices ====================================" << endl;
    Invoice negativeInvoice(
    "NEGATIVE01",
    "Testing for negative prices",
    20,
    -11
    );
    // Testing negative quantity
    cout << "Testing negative price" << endl;
    cout << "Negative price invoice amount: " << negativeInvoice.getInvoiceAmount() << "\n" << endl;

    // Status
    return isInvoiceEqual(
        negativeInvoice,
        "NEGATIVE01",
        "Testing for negative prices",
        20,
        -11,
        0
        );
}

bool testCopyInvoice()
{
    cout << "============ Invoice - Copy  ====================================" << endl;

    Invoice invoice(
    "CHOW_12",
    "Best in class sound.",
    4,
    240
    );

    cout << "Original invoice parameters: " << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Desc: " << invoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << invoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << "\n" << endl;

    cout << "Original invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

    // Testing copy constructor
    Invoice copiedInvoice(invoice);

    cout << "Copied invoice parameters: " << endl;
    cout << "Part Number: " << copiedInvoice.getPartNumber() << endl;
    cout << "Part Desc: " << copiedInvoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << copiedInvoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << copiedInvoice.getPricePerUnit() << "\n" << endl;

    cout << "Copied invoice amount: " << copiedInvoice.getInvoiceAmount() << "\n" << endl;

    // Status
    return isInvoiceEqual(invoice, copiedInvoice);
}

bool testCloneInvoice()
{
    cout << "============ Invoice - Clone  ====================================" << endl;
    // Testing second constructor
    Invoice invoice(
        "MODELK123",
        "Brand new store model.",
        23,
        50
        );

    cout << "Original invoice parameters: " << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Desc: " << invoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << invoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << "\n" << endl;

    cout << "Original invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

    Invoice cloneInvoice = invoice.clone(invoice);

    cout << "Cloned invoice parameters: " << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Desc: " << invoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << invoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << "\n" << endl;

    cout << "Cloned invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

    // Status
    return isInvoiceEqual(invoice, cloneInvoice);
}

int main()
{
    cout << "============ Start - Function Testing ============" << endl;
    cout << "Test: " << (testDefaultInvoice() ? "PASS" : "FAIL") << endl;
    cout << "Test: " << (testCustomInvoice() ? "PASS" : "FAIL") << endl;
    cout << "Test: " << (testSetters() ? "PASS" : "FAIL") << endl;
    cout << "Test: " << (testNegativeQty() ? "PASS" : "FAIL") << endl;
    cout << "Test: " << (testNegativePrice() ? "PASS" : "FAIL") << endl;
    cout << "Test: " << (testCopyInvoice() ? "PASS" : "FAIL") << endl;
    cout << "Test: " << (testCloneInvoice() ? "PASS" : "FAIL") << endl;
    cout << "============ End - Function Testing ==============" << endl;

    cout << "============ Statistics ==========================" << endl;
    cout << passCases << "/" << testCases << " pass and " << failCases << "/" << testCases << " fail." << endl;

    return 0;
}
