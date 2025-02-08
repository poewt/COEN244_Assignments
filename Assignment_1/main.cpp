#include <iostream>
#include "Invoice.h"

using namespace std;

void testInvoice()
{
    Invoice invoice;

    // Testing getters
    cout << "Default invoice parameters: " << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Desc: " << invoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << invoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << "\n" << endl;

    // Testing getInvoiceAmount
    cout << "Default invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

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

    // Testing negative amounts
    invoice.setQtyPurchased(-5);
    cout << "Negative qty invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;

    invoice.setQtyPurchased(5);
    invoice.setPricePerUnit(-12);
    cout << "Negative price per unit invoice amount: " << invoice.getInvoiceAmount() << "\n" << endl;


    // Testing second constructor
    Invoice testInvoice(
        "B0009",
        "This model focuses on high quality parts.",
        240,
        11
        );

    cout << "Custom invoice parameters: " << endl;
    cout << "Part Number: " << testInvoice.getPartNumber() << endl;
    cout << "Part Desc: " << testInvoice.getPartDesc() << endl;
    cout << "Quantity Purchased: " << testInvoice.getQtyPurchased() << endl;
    cout << "Price Per Unit: " << testInvoice.getPricePerUnit() << "\n" << endl;

    cout << "Custom invoice amount: " << testInvoice.getInvoiceAmount() << "\n" << endl;

}

int main()
{
    cout << "============ Start - Function Testing ============" << endl;
    testInvoice();
    cout << "============ End - Function Testing ==============" << endl;

    return 0;
}
