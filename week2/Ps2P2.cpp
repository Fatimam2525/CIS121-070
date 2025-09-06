#include <iostream>
using namespace std;

int main() {
    string lastName;
    double hoursWorked, payRate, grossPay;

    // Input
    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter pay rate: ";
    cin >> payRate;

    // Process
    grossPay = hoursWorked * payRate;

    // Output
    cout << "Last Name: " << lastName << endl;
    cout << "Gross Pay: " << grossPay << endl;

    return 0;
}
