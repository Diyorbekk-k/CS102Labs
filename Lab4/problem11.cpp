#include <iostream>
using namespace std;

int main() {
    double weight1, price1, weight2, price2;
    cout << "Enter weight and price for package 1(separated by space): ";
    cin >> weight1 >> price1;
    cout << "Enter weight and price for package 2(separated by space): ";
    cin >> weight2 >> price2;
    double cost1 = price1 / weight1;
    double cost2 = price2 / weight2;
    if (cost1 < cost2) {
        cout << "Package 1 has a better price." << endl;
    } else if (cost1 > cost2) {
        cout << "Package 2 has a better price." << endl;
    } else {
        cout << "Two packages have the same price." << endl;
    }
    return 0;
}


