#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int flag;
    if (num > 0)
        flag = 1;
    else if (num < 0)
        flag = -1;
    else
        flag = 0;

    switch (flag) {
        case 1:
            cout << "Positive" << endl;
            break;
        case -1:
            cout << "Negative" << endl;
            break;
        case 0:
            cout << "It is zero" << endl;
            break;
    }
    return 0;
}
