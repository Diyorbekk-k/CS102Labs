#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Enter your x point: ";
    cin >> x;
    cout << "Enter your y point: ";
    cin >> y;


    double distance = sqrt(pow(x - 0, 2) + pow(y - 0, 2));;

    if (distance <= 10)
        cout << "Point (" << x << ", " << y << ") is inside the circle." << endl;
    else
        cout << "Point (" << x << ", " << y << ") is outside the circle." << endl;

    return 0;
}
