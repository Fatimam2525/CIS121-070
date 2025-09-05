#include <iostream>
using namespace std;

int main() {
    //input
    int n1, n2, n3, result;
    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;
    //process
    result = (n1 + n2) * n3;
    //output
    cout << "Result: " << result << endl;
    return 0;
}
