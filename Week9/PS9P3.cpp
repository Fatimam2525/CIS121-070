#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate miles per gallon
double calculateMPG(double miles, double gallons) {
    if (gallons == 0) return 0.0; // Avoid division by zero
    return miles / gallons;
}

// Function to calculate cost of gas
double calculateCost(double gallons) {
    const double pricePerGallon = 3.50;
    return gallons * pricePerGallon;
}

int main() {
    string city;
    double miles, gallons;
    double totalCost = 0.0;

    cout << "Enter destination city, miles travelled, and gallons used (Ctrl+Z to stop):" << endl;

    while (cin >> city >> miles >> gallons) {
        double mpg = calculateMPG(miles, gallons);
        double cost = calculateCost(gallons);

        cout << fixed << setprecision(2);
        cout << "Destination: " << city << ", MPG: " << mpg << ", Gas Cost: $" << cost << endl;

        totalCost += cost;
    }

    cout << "\nTotal Cost of Gas for All Trips: $" << totalCost << endl;

    return 0;
}
