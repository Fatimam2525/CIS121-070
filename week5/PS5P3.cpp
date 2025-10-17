#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, payRate, totalPay;

    // Input
    cout << "Enter employee's last name: ";
    cin >> lastName;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter job code (E, J, A): ";
    cin >> jobCode;

    // Nested if statements to determine pay rate
    if (jobCode == 'E' || jobCode == 'e') {
        payRate = 25.00;
    }
    else {
        if (jobCode == 'J' || jobCode == 'j') {
            payRate = 20.00;
        }
        else {
            if (jobCode == 'A' || jobCode == 'a') {
                payRate = 15.00;
            }
            else {
                cout << "Invalid job code entered." << endl;
                return 1;
            }
        }
    }

    // Calculate total pay
    totalPay = hoursWorked * payRate;

    // Output
    cout << "Employee: " << lastName << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Pay Rate: $" << payRate << endl;
    cout << "Total Pay: $" << totalPay << endl;

    return 0;
}
