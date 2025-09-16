#include <iostream>

using namespace std;

int main() {
    string lastName;
    int dependents;
    double grossIncome, adjustedIncome, taxRate, incomeTax;

    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter number of dependents: ";
    cin >> dependents;
    cout << "Enter gross income: $";
    cin >> grossIncome;

    adjustedIncome = grossIncome - (dependents * 12000);

    if (adjustedIncome > 50000) {
        taxRate = 0.20;
    }
    else {
        taxRate = 0.10;
    }

    incomeTax = adjustedIncome * taxRate;

    if (incomeTax < 0) {
        incomeTax = 100.00;
    }

    cout << "Last Name: " << lastName << endl;
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Adjusted Gross Income: $" << adjustedIncome << endl;
    cout << "Income Tax: $" << incomeTax << endl;

    return 0;
}
