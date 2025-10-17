#include <iostream>
#include <iomanip>
using namespace std;
//funtion to calculate pay based on job code and hours worked
double calcPay(char jobCode, double hours) {
    double rate;
    switch (jobCode) {
    case 'L': rate = 25.0; break;
    case 'A': rate = 30.0; break;
    case 'J': rate = 50.0; break;
    default: rate = 0.0; break;
    }

    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main() {
    //input
    string lastName;
    char jobCode;
    double hours, pay;
    double totalPay = 0.0;
    int employeeCount = 0;

    cout << "Enter last name, job code (L/A/J), and hours worked (Ctrl+Z to stop): ";
    cin >> lastName >> jobCode >> hours;
	//process and output
    while (!cin.eof()) {
        pay = calcPay(jobCode, hours);
        cout << setprecision(2) << fixed;
        cout << "Employee: " << lastName << ", Pay: $" << pay << endl;

        totalPay += pay;
        employeeCount++;

        cout << "Enter last name, job code (L/A/J), and hours worked (Ctrl+Z to stop): ";
        cin >> lastName >> jobCode >> hours;
    }

    if (employeeCount > 0) {
        double averagePay = totalPay / employeeCount;
        cout << "\nTotal employees: " << employeeCount << endl;
        cout << "Average pay: $" << averagePay << endl;
    }
    else {
        cout << "\nNo employee data entered." << endl;
    }

    return 0;
}
