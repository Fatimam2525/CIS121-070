#include <iostream>
using namespace std;

int main() {
    double price, discountPercent, discountAmount, discountedPrice;

    // Input
    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter discount percent (in decimal form): ";
    cin >> discountPercent;

    // Processing
    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;

    // Output
    cout << "Discount Amount: " << discountAmount << endl;
    cout << "Discounted Price: " << discountedPrice << endl;

    return 0;
}
