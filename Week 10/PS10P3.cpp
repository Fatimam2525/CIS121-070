#include <iostream>
#include <iomanip>
using namespace std;

void computeTuition(int creditHours, float financialAid, float& tuition, float& tuitionOwed) {
    tuition = creditHours * 250.0;
    tuitionOwed = tuition - financialAid;
}

int main() {
    string lastName;
    int creditHours;
    float financialAid;
    float tuition, tuitionOwed;
    float totalTuitionOwed = 0.0;
    int studentCount = 0;

    cout << fixed << setprecision(2);
    cout << "Enter student's last name, credit hours, and financial aid (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> creditHours >> financialAid) {
        computeTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << "Student: " << lastName << endl;
        cout << "Tuition: $" << tuition << endl;
        cout << "Tuition Owed: $" << tuitionOwed << endl << endl;

        totalTuitionOwed += tuitionOwed;
        studentCount++;
    }

    cout << "-----------------------------" << endl;
    cout << "Total Tuition Owed by All Students: $" << totalTuitionOwed << endl;
    cout << "Number of Entries: " << studentCount << endl;

    if (studentCount > 0) {
        float averageOwed = totalTuitionOwed / studentCount;
        cout << "Average Tuition Owed: $" << averageOwed << endl;
    }

    return 0;
}
