#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	//input
    string lastName;
    int hits, atBats;
    int playerCount = 0;
    double battingAverage;

    cout << fixed << setprecision(3);
    cout << "Enter last name, number of hits, and at-bats (Ctrl+Z to stop):" << endl;
    //process
    while (cin >> lastName >> hits >> atBats) {
        if (atBats == 0) {
            cout << "At-bats cannot be zero. Skipping entry for " << lastName << ".\n";
            continue;
        }

        battingAverage = static_cast<double>(hits) / atBats;
        playerCount++;
        
       
    }
    //output
    cout << "Player: " << lastName
        << " | Batting Average: " << battingAverage << "\n";
    cout << "\nTotal number of players entered: " << playerCount << endl;

    return 0;
}
