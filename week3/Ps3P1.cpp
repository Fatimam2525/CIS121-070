#include <iostream>;
using namespace std;
int main()
{
	//input 
	double exam1, exam2, totalScore;
	cout << "Enter score for exam 1: ";
	cin >> exam1;
	cout << "Enter score for exam 2: ";
	cin >> exam2;
	//process
	totalScore = (exam1 + 0.60) + (exam2 + 0.40);
	//output
	cout << "Total score is: " << totalScore << endl;
	return 0;
}