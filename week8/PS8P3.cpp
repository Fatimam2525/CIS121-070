#include <iostream>
#include <iomanip>
using namespace std;

float CompTuition(float credit) {
    return 250.00f * credit;
}

int main() {
    string lname;
    float credits, tuition, totalTuition = 0.0f;
    int studentCount = 0;

    cout << "Enter student last name and credits taken (Ctrl+Z to stop): ";
    cin >> lname >> credits;

    while (!cin.eof()) {
        tuition = CompTuition(credits);
        cout << setprecision(2) << fixed;
        cout << lname << " took " << credits << " credits and owes $" << setw(8) << tuition << endl;

        totalTuition += tuition;
        studentCount++;

        cout << "Enter student last name and credits taken (Ctrl+Z to stop): ";
        cin >> lname >> credits;
    }

    cout << "\nTotal tuition owed: $" << setw(8) << totalTuition << endl;
    cout << "Number of students entered: " << studentCount << endl;

    return 0;
}
