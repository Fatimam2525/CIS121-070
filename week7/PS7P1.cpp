#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //input
    int quantity;
    double price;
    double extendedPrice, discountAmount, discountedPrice;
    double totalDiscounted = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (Ctrl+Z to stop):" << endl;
    //process
    while (cin >> quantity >> price) {
        extendedPrice = quantity * price;

        if (quantity > 1000) {
            discountAmount = extendedPrice * 0.10;
        }
        else {
            discountAmount = 0.0;
        }

        discountedPrice = extendedPrice - discountAmount;
        totalDiscounted += discountedPrice;

       
    }
    //output
    cout << "\nQuantity: " << quantity
        << "\nPrice: $" << price
        << "\nExtended Price: $" << extendedPrice
        << "\nDiscount Amount: $" << discountAmount
        << "\nDiscounted Price: $" << discountedPrice << "\n";
    cout << "\nTotal of all discounted prices: $" << totalDiscounted << endl;

    return 0;
}
