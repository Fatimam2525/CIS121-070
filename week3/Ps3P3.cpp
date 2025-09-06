#include <iostream>
using namespace std;

int main() {
    double mealTotal, tip, totalWithTip;

    // Input
    cout << "Enter total meal cost: ";
    cin >> mealTotal;

    // Processing
    tip = mealTotal * 0.15;
    totalWithTip = mealTotal + tip;

    // Output
    cout << "Meal Total: " << mealTotal << endl;
    cout << "Tip (15%): " << tip << endl;
    cout << "Total with Tip: " << totalWithTip << endl;

    return 0;
}
