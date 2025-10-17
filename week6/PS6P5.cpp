#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char jobCode;
    int hours;
    double rate = 0.0, grossPay = 0.0;

    // Input
    cout << "Enter job code (L, J, A): ";
    cin >> jobCode;
    cout << "Enter hours worked: ";
    cin >> hours;

    //process 
    if (jobCode == 'L' || jobCode == 'l') {
        rate = (hours > 40) ? 50.00 : 40.00;
    }
    else if (jobCode == 'J' || jobCode == 'j') {
        rate = (hours > 60) ? 100.00 : 75.00;
    }
    else if (jobCode == 'A' || jobCode == 'a') {
        rate = (hours > 40) ? 25.00 : 20.00;
    }
    else {
        cout << "Invalid job code entered.\n";
        return 1;
    }


    grossPay = hours * rate;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nJob Code: " << jobCode << endl;
    cout << "Rate of Pay: $" << rate << endl;
    cout << "Gross Salary: $" << grossPay << endl;

    return 0;
}
