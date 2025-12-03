#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;

// Function prototypes
void readData(string firstNames[], string lastNames[], double salaries[]);
void displayData(const string firstNames[], const string lastNames[], const double salaries[]);
int searchByLastName(const string lastNames[], const string target);

int main() {
    string firstNames[SIZE];
    string lastNames[SIZE];
    double salaries[SIZE];

    readData(firstNames, lastNames, salaries);
    displayData(firstNames, lastNames, salaries);

    string inputLastName;
    cout << "\nEnter last name, ctl+z to stop: ";
    while (cin >> inputLastName) {
        int index = searchByLastName(lastNames, inputLastName);
        if (index != -1) {
            cout << firstNames[index] << " " << lastNames[index]
                << " earns $" << salaries[index] << endl;
        }
        else {
            cout << inputLastName << " not found" << endl;
        }
        cout << "\nEnter last name, ctl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day." << endl;
    return 0;
}

// Loads employee data into arrays
void readData(string firstNames[], string lastNames[], double salaries[]) {
    string rawData[SIZE] = {
        "John Jones 55000.00",
        "Frank Smith 75000.00",
        "Mark Smith 45000.00",
        "Dave Roberts 80000.00",
        "Sally Davis 90000.00",
        "Tom Hanks 100000.00",
        "Betty Crocker 98000.00",
        "Sue Klein 78000.00",
        "Joe Maddon 65000.00",
        "Kris Bryant 70000.00"
    };

    for (int i = 0; i < SIZE; i++) {
        size_t firstSpace = rawData[i].find(' ');
        size_t secondSpace = rawData[i].find(' ', firstSpace + 1);
        firstNames[i] = rawData[i].substr(0, firstSpace);
        lastNames[i] = rawData[i].substr(firstSpace + 1, secondSpace - firstSpace - 1);
        salaries[i] = stod(rawData[i].substr(secondSpace + 1));
    }
}

// Displays all employee data
void displayData(const string firstNames[], const string lastNames[], const double salaries[]) {
    cout << "\nEmployee Data:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << firstNames[i] << " " << lastNames[i] << " - Salary: $" << salaries[i] << endl;
    }
}

// Sequential search by last name
int searchByLastName(const string lastNames[], const string target) {
    for (int i = 0; i < SIZE; i++) {
        if (lastNames[i] == target) {
            return i;
        }
    }
    return -1;
}
