#include <iostream>
using namespace std;
int main() {
	double pounds, pricePerPound, totalPrice;
	//Input 
	cout >> "Enter quantity of apples in pounds: ";
	cin >> pounds;
	//process nested if statements
	if (pounds > 50) {
		if (pounds > 100) {
			pricePerPound = 0.10;
		}
		else {
			pricePerPound = 0.25;
		}
	}	else {
		pricePerPound = 0.50;
	}
	totalPrice = pounds * pricePerPound;
	//Output
	cout << "Total price: $" << totalPrice << endl;
	cout << "Price per pound: $" << pricePerPound << endl;
	return 0;
}