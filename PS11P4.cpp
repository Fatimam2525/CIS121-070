#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute bi-weekly salary
double computeBiWeekly(double annualSalary) {
    return annualSalary / 26.0;
}

int main() {
	// Input variables
    ifstream inFile("empl.txt");
    string lastName;
    double annualSalary, biWeeklySalary;
    double totalSalary = 0.0;
    int employeeCount = 0;
	// Process file
    if (!inFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Last Name"
        << right << setw(15) << "Annual Salary"
        << setw(20) << "Bi-Weekly Salary" << endl;
	// Read data and compute salaries
    while (inFile >> lastName >> annualSalary) {
        biWeeklySalary = computeBiWeekly(annualSalary);
        totalSalary += annualSalary;
        employeeCount++;

        cout << left << setw(12) << lastName
            << right << setw(15) << annualSalary
            << setw(20) << biWeeklySalary << endl;
    }

    double averageSalary = (employeeCount > 0) ? totalSalary / employeeCount : 0.0;
	// Output results
    cout << "\nTotal Annual Salary: $" << totalSalary << endl;
    cout << "Number of Employees: " << employeeCount << endl;
    cout << "Average Annual Salary: $" << averageSalary << endl;

    inFile.close();
    return 0;
}
