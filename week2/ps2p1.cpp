#include <iostream>
using namespace std;

int main() {
    int quantity;
    double unitPrice, extendedPrice;

    // Input
    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    // Processing
    extendedPrice = quantity * unitPrice;

    // Output
    cout << "Extended Price: " << extendedPrice << endl;

    return 0;
}
