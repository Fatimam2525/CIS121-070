#include <iostream>
#include <iomanip>
using namespace std;
//function 
double getLabFee(string dept, int code) {
    if (dept == "CIS" && code == 101) return 50.0;
    else if (dept == "CIS" && code == 121) return 100.0;
    else if (dept == "MAT" && code == 111) return 25.0;
    else if (dept == "MAT" && code == 112) return 35.0;
    else if (dept == "ENG" && code == 100) return 55.0;
    else return 50.0;
}

int main() {
    //input
    string dept;
    int code;
    double fee, totalFees = 0.0;
    int count = 0;

    cout << "Enter department and course code (Ctrl+Z to stop): ";
    cin >> dept >> code;
	//process and output
    while (!cin.eof()) {
        fee = getLabFee(dept, code);
        cout << setprecision(2) << fixed;
        cout << "Department: " << dept << ", Course: " << code << ", Lab Fee: $" << fee << endl;

        totalFees += fee;
        count++;

        cout << "Enter department and course code (Ctrl+Z to stop): ";
        cin >> dept >> code;
    }

    if (count > 0) {
        double average = totalFees / count;
        cout << "\nTotal lab fees collected: $" << totalFees << endl;
        cout << "Average lab fee: $" << average << endl;
    }
    else {
        cout << "\nNo course data entered." << endl;
    }

    return 0;
}
