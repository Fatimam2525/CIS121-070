#include <iostream>
using namespace std;

int main() {
    double purchasePrice, currentPrice, percentChange;

    // Input
    cout << "Enter purchase price of the stock: ";
    cin >> purchasePrice;

    cout << "Enter current price of the stock: ";
    cin >> currentPrice;

    // Processing
    percentChange = ((currentPrice - purchasePrice) / purchasePrice) * 100;

    // Output
    cout << "Percentage Change: " << percentChange << "%" << endl;

    return 0;
}
