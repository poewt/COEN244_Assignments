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
    cout << "Price Per Unit: " << invoice.getPricePerUnit() << endl;

    // Testing setters


    // Testing second constructor

    // Testing getInvoiceAmount


}

int main()
{
    cout << "============ Start - Function Testing ============" << endl;
    testInvoice();
    cout << "============ End - Function Testing ==============" << endl;

    return 0;
}
