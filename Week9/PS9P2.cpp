#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate batting average
double calculateBattingAverage(int hits, int atBats) {
    if (atBats == 0) return 0.0; // Avoid division by zero
    return static_cast<double>(hits) / atBats;
}

int main() {
    string lastName;
    int hits, atBats;
    int playerCount = 0;

    cout << "Enter player's last name, number of hits, and at bats (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> hits >> atBats) {
        double average = calculateBattingAverage(hits, atBats);
        cout << fixed << setprecision(3);
        cout << "Player: " << lastName << ", Batting Average: " << average << endl;
        playerCount++;
    }

    cout << "\nTotal number of players entered: " << playerCount << endl;

    return 0;
}
