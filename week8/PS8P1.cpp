#include <iostream>
#include <iomanip>
using namespace std;
//process
double calcMPG(double miles, double gallons) {
    return miles / gallons;
}

int main() {
	//input
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop): ";
    cin >> city >> miles >> gallons;
	//process and output
    while (!cin.eof()) {
        mpg = calcMPG(miles, gallons);
        cout << setprecision(2) << fixed;
        cout << "Destination: " << city << ", MPG: " << mpg << endl;

        totalMiles += miles;
        tripCount++;

        cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop): ";
        cin >> city >> miles >> gallons;
    }

    cout << "\nTotal miles traveled: " << totalMiles << endl;
    cout << "Number of trips made: " << tripCount << endl;

    return 0;
}
