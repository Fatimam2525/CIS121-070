#include <iostream>;
using namespace std;

int main()
{
	string lastName;
	int creditsTaken;
	double tuition;
	double perCreditCost = 250.0;
	double labFee = 100.0;
	// Input
	cout << "Enter your last name: ";
	cin >> lastName;
	cout << "Enter number of credits taken: ";
	cin >> creditsTaken;

	// Processing
	tuition = (creditsTaken * perCreditCost) + labFee;
	// Output
	cout << "Student: " << lastName << endl;
	cout << "Total Tuition: $" << tuition << endl;
	return 0;

}