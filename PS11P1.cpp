#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute savings and sales tax
void computeSavingsAndTax(double msrp, double salePriceVal, double& salePriceRef, double& salesTax) {
    salePriceRef = salePriceVal; // Update reference with value
    salesTax = salePriceRef * 0.07;
}

int main() {
    ifstream inFile("auto.txt");
    string make, model;
    double msrp, salePrice, savings, salesTax;
    double totalSavings = 0.0;

    if (!inFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << left << setw(10) << "Make" << setw(10) << "Model"
        << right << setw(10) << "MSRP" << setw(15) << "Sale Price"
        << setw(12) << "Savings" << setw(12) << "Sales Tax" << endl;

    while (inFile >> make >> model >> msrp >> salePrice) {
        computeSavingsAndTax(msrp, salePrice, salePrice, salesTax);
        savings = msrp - salePrice;
        totalSavings += savings;

        cout << left << setw(10) << make << setw(10) << model
            << right << setw(10) << msrp << setw(15) << salePrice
            << setw(12) << savings << setw(12) << salesTax << endl;
    }

    cout << "\nTotal Savings: $" << totalSavings << endl;

    inFile.close();
    return 0;
}
