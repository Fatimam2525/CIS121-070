#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tickets;
    char location;
    double pricePerTicket, totalCost;

    // Input
    cout << "Enter number of concert tickets: ";
    cin >> tickets;
    cout << "Enter location code (H or L): ";
    cin >> location;

    // process
    if (tickets > 25 || location == 'H' || location == 'h') {
        pricePerTicket = 30.00;
    }
    else if ((tickets > 10 && tickets <= 25) || location == 'L' || location == 'l') {
        pricePerTicket = 40.00;
    }
    else {
        pricePerTicket = 50.00;
    }

    totalCost = tickets * pricePerTicket;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nNumber of Tickets: " << tickets << endl;
    cout << "Price Per Ticket: $" << pricePerTicket << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
