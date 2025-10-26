#include <iostream>
using namespace std;

// input
void computeOrder(int quantity, float price, float& total, float& tax, float& totalOrder) {
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main() {
    int quantity;
    float price;
    float total, tax, totalOrder;
    float grandTotal = 0.0, grandTax = 0.0;

    cout << "Enter quantity and price (Ctrl+Z to stop):" << endl;
    //process
    while (cin >> quantity >> price) {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << "Total: $" << total << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total Order: $" << totalOrder << endl << endl;

        grandTotal += total;
        grandTax += tax;
    }
	//output
    cout << "-----------------------------" << endl;
    cout << "Final Total of All Orders: $" << grandTotal << endl;
    cout << "Final Total Tax: $" << grandTax << endl;

    return 0;
}
