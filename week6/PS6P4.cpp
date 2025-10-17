#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char equipmentCode, dayCode;
    double rentalCost;

    // Input
    cout << "Enter equipment code (A, B, C): ";
    cin >> equipmentCode;
    cout << "Enter day code (F for full day, H for half day): ";
    cin >> dayCode;

    // process
    if (equipmentCode == 'A' || equipmentCode == 'a') {
        if (dayCode == 'F' || dayCode == 'f') rentalCost = 10.00;
        else if (dayCode == 'H' || dayCode == 'h') rentalCost = 15.00;
        else rentalCost = 50.00;
    }
    else if (equipmentCode == 'B' || equipmentCode == 'b') {
        if (dayCode == 'F' || dayCode == 'f') rentalCost = 20.00;
        else if (dayCode == 'H' || dayCode == 'h') rentalCost = 35.00;
        else rentalCost = 50.00;
    }
    else if (equipmentCode == 'C' || equipmentCode == 'c') {
        if (dayCode == 'H' || dayCode == 'h') rentalCost = 40.00;
        else if (dayCode == 'F' || dayCode == 'f') rentalCost = 45.00;
        else rentalCost = 50.00;
    }
    else {
        rentalCost = 50.00;
    }

    // Output
    cout << fixed << setprecision(2);
    cout << "\nRental Cost: $" << rentalCost << endl;

    return 0;
}
