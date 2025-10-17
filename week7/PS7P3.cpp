#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //input
    string city;
    double miles, gallons;
    double mpg;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop):" << endl;
	//process
    while (cin >> city >> miles >> gallons) {
        if (gallons == 0) {
            cout << "Gallons cannot be zero. Skipping entry for " << city << ".\n";
            continue;
        }

        mpg = miles / gallons;
        totalMiles += miles;
        tripCount++;

        cout << "Destination: " << city
            << " | Miles per Gallon: " << mpg << "\n";
    }
    //output
    cout << "\nTotal miles traveled: " << totalMiles << endl;
    cout << "Total number of trips: " << tripCount << endl;

    return 0;
}
