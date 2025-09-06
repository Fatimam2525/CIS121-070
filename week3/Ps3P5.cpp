#include <iostream>
using namespace std;

int main() {
    double fixedCosts, pricePerUnit, costPerUnit, profitPerUnit, breakEven;

    // Input
    cout << "Enter fixed costs: ";
    cin >> fixedCosts;

    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    cout << "Enter cost per unit: ";
    cin >> costPerUnit;

    // Processing
    profitPerUnit = pricePerUnit - costPerUnit;
    breakEven = fixedCosts / profitPerUnit;

    // Output
    cout << "Break-Even Point (units to sell): " << breakEven << endl;

    return 0;
}
