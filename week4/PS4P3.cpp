#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numOfBooks;
    double costPerBook, orderTotal, shippingCharge;

    cout << "Enter number of books: ";
    cin >> numOfBooks;
    cout << "Enter cost per book: $";
    cin >> costPerBook;

    orderTotal = numOfBooks * costPerBook;
    if (orderTotal < 50.00) {
        shippingCharge = 25.00;
    } 
    else {
        shippingCharge = 0.00;
	}

    cout << fixed << setprecision(2);
    cout << "Order Total: $" << orderTotal << endl;
    cout << "Shipping Charge: $" << shippingCharge << endl;

    return 0;
}
