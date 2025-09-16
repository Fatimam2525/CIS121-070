#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quantity;
	double unitPrice, extendedPrice, tax, totalPrice;
	//input
	cout << "Enter quantity: ";
	cin >> quantity;
	//Process
	if (quantity >= 1000) {
		unitPrice = 3.00;
	}
	else
	{
		unitPrice = 5.00;
	}
	extendedPrice = quantity * unitPrice;
	tax = extendedPrice * 0.07;
	totalPrice = extendedPrice + tax;
	//Output
	cout << fixed << setprecision(2);
	cout << "Quantity: " << quantity << endl;	
	cout << "Unit Price: $" << unitPrice << endl;	
	cout << "Extended Price: $" << extendedPrice << endl;
	cout << "tax: $" << tax << endl;
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}
