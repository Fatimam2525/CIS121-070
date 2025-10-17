#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //input
    string lastName;
    char districtCode;
    int creditHours;
    double rate, tuition;
    double totalTuition = 0.0;
    int totalCredits = 0;
    int studentCount = 0;

    cout << fixed << setprecision(2);
    cout << "Enter student last name, credit hours, and district code (I or O). Ctrl+Z to stop:\n";
    //process
    while (cin >> lastName >> creditHours >> districtCode) {
        // Determine rate based on district code
        switch (toupper(districtCode)) {
        case 'I': rate = 250.0; break;
        case 'O': rate = 550.0; break;
        default:
            cout << "Invalid district code for " << lastName << ". Skipping entry.\n";
            continue;
        }

        tuition = creditHours * rate;
        totalTuition += tuition;
        totalCredits += creditHours;
        studentCount++;

        cout << "\nStudent: " << lastName
            << "\nTuition Owed: $" << tuition << "\n";
    }

    // Output
    cout << "\nTotal Tuition Owed: $" << totalTuition << endl;
    cout << "Total Credit Hours Taken: " << totalCredits << endl;
    cout << "Total Number of Students Entered: " << studentCount << endl;

    return 0;
}
