#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a three-digit integer: ";
    cin >> number;
    int firstDigit = number / 100;
    int lastDigit = number % 10;

    if (firstDigit == lastDigit)
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;
    return 0;
}
