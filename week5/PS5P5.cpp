#include <iostream>
using namespace std;

int main() {
    double weight, rate, total;

    // Input
    cout << "Enter the weight of metal (in pounds): ";
    cin >> weight;

    //process 
    if (weight >= 20) {
        if (weight >= 30) {
            if (weight > 100) {
                rate = 0.50;
            }
            else {
                rate = 0.25;
            }
        }
        else {
            rate = 0.20;
        }
    }
    else {
        rate = 0.10;
    }

    total = weight * rate;

    // Output
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate per pound: $" << rate << endl;
    cout << "Total payout: $" << total << endl;

    return 0;
}
