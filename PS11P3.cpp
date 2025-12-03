#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Function to compute miles per gallon
double computeMPG(double gallons, double miles) {
    return miles / gallons;
}

int main() {// Input variables
    ifstream inFile("trips.txt");
    double gallons, miles, mpg;
    double totalGallons = 0.0, totalMiles = 0.0;

    if (!inFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << setw(10) << "Gallons" << setw(10) << "Miles" << setw(10) << "MPG" << endl;
	// Read data and compute MPG
    while (inFile >> gallons >> miles) {
        mpg = computeMPG(gallons, miles);
        totalGallons += gallons;
        totalMiles += miles;

        cout << setw(10) << gallons << setw(10) << miles << setw(10) << mpg << endl;
    }
	// Output totals
    cout << "\nTotal Gallons Used: " << totalGallons << endl;
    cout << "Total Miles Travelled: " << totalMiles << endl;

    inFile.close();
    return 0;
}
