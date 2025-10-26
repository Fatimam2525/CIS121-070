#include <iostream>
#include <iomanip>
#include <math.h>  // For pow function

using namespace std;

// Function to compute 5-year and 10-year investment growth
void computeInvestment(float amount, float rate5, float rate10, float& amount5, float& amount10) {
    amount5 = amount * pow(1 + rate5, 5);
    amount10 = amount * pow(1 + rate10, 10);
}

int main() {
    float amount, rate5, rate10;
    float amount5, amount10;

    cout << fixed << setprecision(2);
    cout << "Enter investment amount, 5-year rate, and 10-year rate (Ctrl+Z to stop):" << endl;

    while (cin >> amount >> rate5 >> rate10) {
        computeInvestment(amount, rate5, rate10, amount5, amount10);

        cout << "Investment Amount: $" << amount << endl;
        cout << "5-Year Amount: $" << amount5 << endl;
        cout << "10-Year Amount: $" << amount10 << endl << endl;
    }

    return 0;
}
