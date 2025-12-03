#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;

// Function prototypes
void readData(string firstNames[], string lastNames[], double gpas[]);
void displayData(const string firstNames[], const string lastNames[], const double gpas[]);
void displayReverse(const string firstNames[], const string lastNames[], const double gpas[]);

int main() {
    string firstNames[SIZE];
    string lastNames[SIZE];
    double gpas[SIZE];

    readData(firstNames, lastNames, gpas);
    cout << "\nOriginal Order:\n";
    displayData(firstNames, lastNames, gpas);

    cout << "\nReverse Order:\n";
    displayReverse(firstNames, lastNames, gpas);

    return 0;
}

// Function to read data into arrays
void readData(string firstNames[], string lastNames[], double gpas[]) {
    string data[SIZE] = {
        "JOHN JONES 3.50",
        "BETTY CROCKER 4.0",
        "SAM SMITH 3.5",
        "JOE DOE 2.75",
        "MIKE MORE 3.0",
        "JAVIER BAEZ 3.35",
        "ANTHONY RIZZO 4.0",
        "DAVID ROSS 3.90",
        "JOE MADDON 2.80",
        "THEO EPSTIEN 4.0"
    };


    }

// Function to display arrays in original order
void displayData(const string firstNames[], const string lastNames[], const double gpas[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << firstNames[i] << " " << lastNames[i] << " - GPA: " << gpas[i] << endl;
    }
}

// Function to display arrays in reverse order
void displayReverse(const string firstNames[], const string lastNames[], const double gpas[]) {
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << firstNames[i] << " " << lastNames[i] << " - GPA: " << gpas[i] << endl;
    }
}


