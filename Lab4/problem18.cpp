#include <iostream>
using namespace std;

int main() {
    char choice;
    cout << "Choose a language (u - Uzbek, e - English, r - Russian, g - German): ";
    cin >> choice;

    switch (choice) {
        case 'u': cout << "Salom" << endl;
            break;
        case 'e': cout << "Hello" << endl;
            break;
        case 'r': cout << "Privet" << endl;
            break;
        case 'g': cout << "Hallo" << endl;
            break;
        default: cout << "I do not know this language :(" << endl;
    }

    return 0;
}
