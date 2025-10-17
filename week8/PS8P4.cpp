#include <iostream>
#include <iomanip>
using namespace std;
//functions to get unit price and shipping based on product code
double getUnitPrice(char code) {
    switch (code) {
    case 'W': return 10.0;
    case 'C': return 15.0;
    case 'G': return 20.0;
    default:  return 0.0;
    }
}

double getShipping(char code) {
    switch (code) {
    case 'W': return 2.0;
    case 'C': return 5.0;
    case 'G': return 7.0;
    default:  return 0.0;
    }
}

int main() {
	//input
    char code;
    int quantity;
    double unitPrice, shipping, extendedPrice, total, grandTotal = 0.0;

    cout << "Enter product code (W/C/G) and quantity (Ctrl+Z to stop): ";
    cin >> code >> quantity;
	//process and output
    while (!cin.eof()) {
        unitPrice = getUnitPrice(code);
        shipping = getShipping(code);
        extendedPrice = unitPrice * quantity;
        total = extendedPrice + shipping;

        cout << setprecision(2) << fixed;
        cout << "Code: " << code
            << ", Unit Price: $" << unitPrice
            << ", Shipping: $" << shipping
            << ", Extended Price: $" << extendedPrice
            << ", Total: $" << total << endl;

        grandTotal += total;

        cout << "Enter product code (W/C/G) and quantity (Ctrl+Z to stop): ";
        cin >> code >> quantity;
    }

    cout << "\nTotal of all orders: $" << grandTotal << endl;

    return 0;
}
