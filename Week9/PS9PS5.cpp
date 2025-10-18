#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// Function to determine rate per credit hour
double getRatePerCredit(char districtCode) {
    districtCode = toupper(districtCode); // Normalize input
    if (districtCode == 'I') return 250.0;
    else if (districtCode == 'O') return 550.0;
    else return 0.0; // Invalid code
}

// Function to calculate tuition
double calculateTuition(int creditHours, double rate) {
    return creditHours * rate;
}

int main() {
    string lastName;
    int creditHours;
    char districtCode;
    double totalTuition = 0.0;

    cout << "Enter student last name, credit hours, and district code (I or O). Ctrl+Z to stop:\n";

    while (cin >> lastName >> creditHours >> districtCode) {
        double rate = getRatePerCredit(districtCode);
        if (rate == 0.0) {
            cout << "Invalid district code for " << lastName << ". Skipping entry.\n";
            continue;
        }

        double tuition = calculateTuition(creditHours, rate);
        cout << fixed << setprecision(2);
        cout << "Student: " << lastName << ", Tuition Owed: $" << tuition << endl;

        totalTuition += tuition;
    }

    cout << "\nTotal Tuition for All Students: $" << totalTuition << endl;

    return 0;
}
