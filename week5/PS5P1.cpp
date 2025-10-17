#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName;
    int score;
    char grade;

    // Input
    cout << "Enter student's last name: ";
    cin >> lastName;
    cout << "Enter student's score: ";
    cin >> score;

    // Nested if statements to determine grade
    if (score >= 60) {
        if (score >= 70) {
            if (score >= 80) {
            if (score >= 90) {
                grade = 'A';
                }
                else {
                    grade = 'B';
                }
            }
            else {
                grade = 'C';
            }
        }
        else {
            grade = 'D';
        }
    }
    else {
        grade = 'F';
    }

    // Output
    cout << "Student: " << lastName << ", Grade: " << grade << endl;

    return 0;
}
