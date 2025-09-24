#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;

    if (grade < 0 || grade > 100) {
        cout << "Invalid grade." << endl;
        return 0;
    }
    char scale;
    switch (grade / 10) {
        case 10:
        case 9:  scale = 'A'; break;
        case 8:  scale = 'B'; break;
        case 7:  scale = 'C'; break;
        case 6:  scale = 'D'; break;
        default: scale = 'F'; break;
    }
    cout << "Your grade scale is: " << scale << endl;
    return 0;
}