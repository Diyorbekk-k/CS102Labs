#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the month's number: ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "In January there is:\n- New Year's Day, 1 January" << endl;
            break;
        case 2:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 3:
            cout << "In March there is:\n- International Women's Day, 8 March\n- Navruz, 21 March" << endl;
            break;
        case 4:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 5:
            cout << "In May there is:\n- Rememberence Day, 9 May" << endl;
            break;
        case 6:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 7:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 8:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 9:
            cout << "In September there is:\n- Independence Day, 1 September" << endl;
            break;
        case 10:
            cout << "In October there is:\n- Teacher's Day, 5 October" << endl;
            break;
        case 11:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 12:
            cout << "In December there is:\n- Constitution Day, 8 December" << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;
    }
    return 0;
}