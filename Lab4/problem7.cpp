#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter your first angle:";
    cin >> a;
    cout << "Enter your second angle:";
    cin >> b;
    cout << "Enter your third angle:";
    cin >> c;
    if ( (a + b + c != 180) || (a <= 0 || b <= 0 || c <= 0) ) {
        cout << "Angles are not valid" << endl;
    }
    else {
        cout << "Triangle can be formed." << endl;
    }

    return 0;
}
