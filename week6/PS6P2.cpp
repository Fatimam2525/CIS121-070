#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int partNumber, quantity;
    double costPerUnit = 5.00, totalCost;

    // Input
    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> partNumber;
    cout << "Enter quantity: ";
    cin >> quantity;

    // process
    if (partNumber == 10 && quantity > 1000) {
        costPerUnit = 1.00;
    }
    else if (partNumber == 99 && quantity > 500) {
        costPerUnit = 2.00;
    }
    else {
        costPerUnit = 5.00;
    }

  
    totalCost = quantity * costPerUnit;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nPart Number: " << partNumber << endl;
    cout << "Cost Per Unit: $" << costPerUnit << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
