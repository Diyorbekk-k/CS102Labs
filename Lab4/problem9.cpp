#include <iostream>
using namespace std;
int main() {
    int speed;
    cout << "Enter speed: ";
    cin >> speed;
    if (speed <= 0) {
        cout << "Speed must be positive." << endl;
    }
    if (speed <= 20) {
        cout << "Too Slow." << endl;
    }
    if (speed <= 80) {
        cout << "Just right." << endl;
    }
    if (speed > 80) {
        cout << "Too fast." << endl;
    }
    return 0;
}