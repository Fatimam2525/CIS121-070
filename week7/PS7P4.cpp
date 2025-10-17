#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //input
    string lastName;
    char jobCode;
    double hoursWorked;
    double hourlyRate;
    double regularHours, overtimeHours;
    double pay;
    double totalPay = 0.0;
    int employeeCount = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code (L, A, J), and hours worked (Ctrl+Z to stop):" << endl;
    //process
    while (cin >> lastName >> jobCode >> hoursWorked) {
        // Determine hourly rate based on job code
        switch (toupper(jobCode)) {
        case 'L': hourlyRate = 25.0; break;
        case 'A': hourlyRate = 30.0; break;
        case 'J': hourlyRate = 50.0; break;
        default:
            cout << "Invalid job code for " << lastName << ". Skipping entry.\n";
            continue;
        }

        // Calculate regular and overtime hours
        if (hoursWorked > 40) {
            regularHours = 40;
            overtimeHours = hoursWorked - 40;
        }
        else {
            regularHours = hoursWorked;
            overtimeHours = 0;
        }

        // Calculate pay
        pay = (regularHours * hourlyRate) + (overtimeHours * hourlyRate * 1.5);
        totalPay += pay;
        employeeCount++;

        cout << "\nEmployee: " << lastName
            << "\nJob Code: " << jobCode
            << "\nHours Worked: " << hoursWorked
            << "\nTotal Pay: $" << pay << "\n";
    }

    // output
    if (employeeCount > 0) {
        double averagePay = totalPay / employeeCount;
        cout << "\nTotal Employees Entered: " << employeeCount << endl;
        cout << "Average Pay: $" << averagePay << endl;
    }
    else {
        cout << "\nNo valid employee entries were made." << endl;
    }

    return 0;
}
