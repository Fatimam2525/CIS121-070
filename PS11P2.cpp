#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute extended price
double computeExtendedPrice(int quantity, double price) {
    return quantity * price;
}

int main() {// Input variables
    ifstream inFile("grocery.txt");
    string item;
    int quantity;
    double price, extendedPrice;
    double totalExtended = 0.0, tax, totalReceipt;
	// Process file
    if (!inFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Item"
        << right << setw(10) << "Quantity"
        << setw(15) << "Cost/Item"
        << setw(18) << "Extended Price" << endl;

    while (inFile >> item >> quantity >> price) {
        extendedPrice = computeExtendedPrice(quantity, price);
        totalExtended += extendedPrice;

        cout << left << setw(15) << item
            << right << setw(10) << quantity
            << setw(15) << price
            << setw(18) << extendedPrice << endl;
    }

    tax = totalExtended * 0.07;
    totalReceipt = totalExtended + tax;
	// Output results
    cout << "\nTotal Extended Price: $" << totalExtended << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total Receipt: $" << totalReceipt << endl;

    inFile.close();
    return 0;
}
