#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string item;
    int quantity;
    double unitPrice = 0.0, extendedPrice;

    cout << "Enter item (A or B): ";
    cin >> item;
    cout << "Enter quantity: ";
    cin >> quantity;

    if (item == "A" || item == "a") {
        unitPrice = 10.00;
    }
    else if (item == "B" || item == "b") {
        unitPrice = 20.00;
    }
    else {
        cout << "Invalid item entered." << endl;
        return 1;
    }

    extendedPrice = quantity * unitPrice;

    cout << fixed << setprecision(2);
    cout << "Item: " << item << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extendedPrice << endl;

    return 0;
}
