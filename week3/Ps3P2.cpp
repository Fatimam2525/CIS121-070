#include <iostream>
using namespace std;

int main() {
    double stockPrice, quantity, portfolioValue;

    // Input
    cout << "Enter current stock price: ";
    cin >> stockPrice;

    cout << "Enter quantity of stock owned: ";
    cin >> quantity;

    // Process
    portfolioValue = stockPrice * quantity;

    // Output
    cout << "Current Portfolio Value: " << portfolioValue << endl;

    return 0;
}
