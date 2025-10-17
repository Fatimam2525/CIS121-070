#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    char status;
    double pricePerUnit = 0.0, extendedPrice = 0.0, tax = 0.0, total = 0.0;

    // Input
    cout << "Enter quantity of widgets: ";
    cin >> quantity;
    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;

    // process 
    if (quantity > 10000) {
        if (status == 'A' || status == 'a') pricePerUnit = 10.0;
        else if (status == 'B' || status == 'b') pricePerUnit = 12.0;
        else pricePerUnit = 30.0;
    }
    else if (quantity >= 5000 && quantity <= 10000) {
        if (status == 'C' || status == 'c') pricePerUnit = 20.0;
        else if (status == 'D' || status == 'd') pricePerUnit = 22.0;
        else pricePerUnit = 30.0;
    }
    else {
        pricePerUnit = 30.0;
    }

    extendedPrice = quantity * pricePerUnit;
    tax = extendedPrice * 0.07;
    total = extendedPrice + tax;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nExtended Price: $" << extendedPrice << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total Price: $" << total << endl;

    return 0;
}
