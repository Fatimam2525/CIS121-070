#include <iostream>
using namespace std;

int main() {
    double price, discountPercent, discountAmount, discountedPrice;

    // Input
    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter discount percent (in decimal form, e.g., 0.20 for 20%): ";
    cin >> discountPercent;

    // Processing
    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;

    // Output
    cout << "Discount Amount: " << discountAmount << endl;
    cout << "Discounted Price: " << discountedPrice << endl;

    return 0;
}
