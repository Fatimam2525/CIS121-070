#include <iostream>
using namespace std;

int main() {
    double salary, taxRate, taxAmount;

    // Input
    cout << "Enter your annual salary: $";
    cin >> salary;

   //process 
    if (salary >= 50000) {
        if (salary > 100000) {
            taxRate = 0.40;
        }
        else {
            taxRate = 0.35;
        }
    }
    else {
        taxRate = 0.25;
    }

    taxAmount = salary * taxRate;

    // Output
    cout << "\nAnnual Salary: $" << salary << endl;
    cout << "Tax Rate: " << (taxRate * 100) << "%" << endl;
    cout << "Tax Amount Owed: $" << taxAmount << endl;

    return 0;
}
