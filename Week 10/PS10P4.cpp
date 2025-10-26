#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgetOrder(int numWidgets, float& costPerWidget, float& extendedPrice, float& salesTax, float& totalOrder) {
    
    if (numWidgets >= 10000)
        costPerWidget = 4.00;
    else if (numWidgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;

    // Calculate extended price
    extendedPrice = numWidgets * costPerWidget;

    // Calculate sales tax
    salesTax = extendedPrice * 0.07;

    // Calculate total order
    totalOrder = extendedPrice + salesTax;
}

int main() {
    int numWidgets;
    float costPerWidget, extendedPrice, salesTax, totalOrder;
    float grandTotal = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter number of widgets (Ctrl+Z to stop):" << endl;

    while (cin >> numWidgets) {
        computeWidgetOrder(numWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);

        cout << "Widgets: " << numWidgets << endl;
        cout << "Cost per Widget: $" << costPerWidget << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total Order: $" << totalOrder << endl << endl;

        grandTotal += totalOrder;
    }

    cout << "-----------------------------" << endl;
    cout << "Total of All Orders: $" << grandTotal << endl;

    return 0;
}
