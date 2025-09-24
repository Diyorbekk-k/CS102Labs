#include <iostream>
using namespace std;

int main() {
    double weightkg;
    cin >> weightkg;
    if (weightkg <= 0) {
        cout << "Invalid input" << endl; // 20.1
    } else if (weightkg <= 1) {
        cout << "Shipping cost: 3500" << endl;
    } else if (weightkg <= 3) {
        cout << "Shipping cost: 5500" << endl;
    } else if (weightkg <= 10) {
        cout << "Shipping cost: 8500" << endl;
    } else if (weightkg <= 20) {
        cout << "Shipping cost: 10500" << endl;
    } else {
        cout << "The package cannot be shipped" << endl;
    }
}
