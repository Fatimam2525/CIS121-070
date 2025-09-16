#include <iostream>
using namespace std;

int main() {
    string applianceName;
    double cost, warrantyCost, totalCost;

    // Input
    cout << "Enter appliance name: ";
    cin >> applianceName;
    cout << "Enter appliance cost: $";
    cin >> cost;

    // Processing using if statement
    if (cost > 1000.00) {
        warrantyCost = cost * 0.10;
    }
    else {
        warrantyCost = cost * 0.05;
    }

    totalCost = cost + warrantyCost;

    // Output
    cout << "Appliance Name: " << applianceName << endl;
    cout << "Appliance Cost: $" << cost << endl;
    cout << "Warranty Cost: $" << warrantyCost << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
