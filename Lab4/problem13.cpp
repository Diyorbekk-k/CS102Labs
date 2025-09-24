#include <iostream>
using namespace std;

int main() {
    char light;
    cout << "Enter traffic light signal (g - green, y - yellow, r - red): ";
    cin >> light;
    switch (light) {
        case 'g': cout << "Go!" << endl; break;
        case 'y': cout << "Get ready!" << endl; break;
        case 'r': cout << "Stop" << endl; break;
        default: cout << "Invalid input!" << endl;
    }
    return 0;
}
