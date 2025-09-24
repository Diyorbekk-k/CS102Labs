#include <iostream>
using namespace std;

int main() {
    double w;
    cout << "Enter the weight of the package (kg): ";
    cin >> w;
    int category;
    if (w <= 0) {
        category = -1;
    }
    else if (w <= 1) {
        category = 1;
    }
    else if (w <= 3) {
        category = 2;
    }
    else if (w <= 10) {
        category = 3;
    }
    else if (w <= 20) {
        category = 4;
    }
    else {
        category = 5;
    }
    switch (category) {
        case -1:
            cout << "Invalid input." << endl;
            break;
        case 1:
            cout << "Shipping cost: 3500 som" << endl;
            break;
        case 2:
            cout << "Shipping cost: 5500 som" << endl;
            break;
        case 3:
            cout << "Shipping cost: 8500 som" << endl;
            break;
        case 4:
            cout << "Shipping cost: 10500 som" << endl;
            break;
        case 5:
            cout << "The package cannot be shipped." << endl;
            break;
    }
    return 0;
}
