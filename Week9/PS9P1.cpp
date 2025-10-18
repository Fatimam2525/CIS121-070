#include <iostream>
using namespace std;

// Function to calculate total
double calculateTotal(int quantity, double price) {
    return quantity * price;
}

// Function to apply discount
double applyDiscount(double total) {
    double discountRate = (total > 10000.0) ? 0.10 : 0.05;
    double discountAmount = total * discountRate;
    return total - discountAmount;
}

int main() {
    int quantity;
    double price;
    double totalSum = 0.0;
    double discountSum = 0.0;

    cout << "Enter quantity and price (Ctrl+Z to stop):" << endl;

    while (cin >> quantity >> price) {
        double total = calculateTotal(quantity, price);
        double discountedTotal = applyDiscount(total);

        cout << "Total: $" << total << endl;
        cout << "Discounted Total: $" << discountedTotal << endl;

        totalSum += total;
        discountSum += discountedTotal;
    }

    cout << "\nFinal Total Sum: $" << totalSum << endl;
    cout << "Final Discounted Sum: $" << discountSum << endl;

    return 0;
}
