#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// Function to get pay rate based on job code
double getPayRate(char jobCode) {
    jobCode = toupper(jobCode); // Normalize input
    switch (jobCode) {
    case 'L': return 25.0;
    case 'A': return 30.0;
    case 'J': return 50.0;
    default: return 0.0; // Invalid code
    }
}

// Function to calculate gross pay with overtime
double calculateGrossPay(double hours, double rate) {
    if (hours <= 40)
        return hours * rate;
    else
        return (40 * rate) + ((hours - 40) * rate * 1.5);
}

int main() {
    string lastName;
    char jobCode;
    double hoursWorked;
    double totalGrossPay = 0.0;

    cout << "Enter last name, job code (L, A, J), and hours worked (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> jobCode >> hoursWorked) {
        double rate = getPayRate(jobCode);
        if (rate == 0.0) {
            cout << "Invalid job code for " << lastName << ". Skipping entry.\n";
            continue;
        }

        double grossPay = calculateGrossPay(hoursWorked, rate);
        cout << fixed << setprecision(2);
        cout << "Employee: " << lastName << ", Gross Pay: $" << grossPay << endl;

        totalGrossPay += grossPay;
    }

    cout << "\nTotal Gross Pay for All Employees: $" << totalGrossPay << endl;

    return 0;
}
