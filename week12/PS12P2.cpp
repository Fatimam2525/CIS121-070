#include <iostream>
#include <string>
using namespace std;

const int SIZE = 8;

// Function prototypes
void readData(string cities[], int populations[]);
void displayData(const string cities[], const int populations[]);
int sequentialSearch(const string cities[], const string target);

int main() {
    string cities[SIZE];
    int populations[SIZE];

    readData(cities, populations);
    displayData(cities, populations);

    string inputCity;
    cout << "\nEnter city name, ctl+z to stop: ";
    while (cin >> inputCity) {
        int index = sequentialSearch(cities, inputCity);
        if (index != -1) {
            cout << cities[index] << " has a population of " << populations[index] << endl;
        }
        else {
            cout << inputCity << " not found" << endl;
        }
        cout << "\nEnter city name, ctl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day." << endl;
    return 0;
}

// Loads city data into arrays
void readData(string cities[], int populations[]) {
    string rawData[SIZE] = {
        "Chicago 4000000",
        "Denver 2500000",
        "Milwaukee 3000000",
        "Detroit 2200000",
        "Oklahoma 1250000",
        "Dallas 2100000",
        "Houston 1750000",
        "Indianapolis 1400000"
    };

    for (int i = 0; i < SIZE; i++) {
        size_t spacePos = rawData[i].find(' ');
        cities[i] = rawData[i].substr(0, spacePos);
        populations[i] = stoi(rawData[i].substr(spacePos + 1));
    }
}

// Displays all cities and populations
void displayData(const string cities[], const int populations[]) {
    cout << "\nCity Data:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << cities[i] << " - Population: " << populations[i] << endl;
    }
}

// Sequential search for city name
int sequentialSearch(const string cities[], const string target) {
    for (int i = 0; i < SIZE; i++) {
        if (cities[i] == target) {
            return i;
        }
    }
    return -1;
}
