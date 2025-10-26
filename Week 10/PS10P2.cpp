#include <iostream>
using namespace std;

//process
void computePostage(float weight, int zipCode, float& weightCharge, float& areaCharge, float& postage) {
  
    float ratePerOunce;
    if (weight > 100)
        ratePerOunce = 0.02;
    else if (weight > 50)
        ratePerOunce = 0.03;
    else
        ratePerOunce = 0.05;

    weightCharge = weight * ratePerOunce;

    // Determine area charge based on zip code
    switch (zipCode) {
    case 60171:
        areaCharge = 2.00;
        break;
    case 60172:
        areaCharge = 2.50;
        break;
    case 60635:
        areaCharge = 3.00;
        break;
    default:
        areaCharge = 5.00;
    }

 
    postage = weightCharge + areaCharge;
}
//input 
int main() {
    float weight, weightCharge, areaCharge, postage;
    int zipCode;
    int entryCount = 0;

    cout << "Enter package weight and zip code (Ctrl+Z to stop):" << endl;
	//process and output
    while (cin >> weight >> zipCode) {
        computePostage(weight, zipCode, weightCharge, areaCharge, postage);

        cout << "Area Charge: $" << areaCharge << endl;
        cout << "Weight Charge: $" << weightCharge << endl;
        cout << "Total Postage: $" << postage << endl << endl;

        entryCount++;
    }

    cout << "-----------------------------" << endl;
    cout << "Total number of entries: " << entryCount << endl;

    return 0;
}
