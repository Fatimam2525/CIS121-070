#include <iostream>
using namespace std;

int main() {
    string lastName;
    //input
    int score;
    //process
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your score: ";
    cin >> score;
    //output
    cout << lastName << " has a score of " << score << endl;
    return 0;
}
