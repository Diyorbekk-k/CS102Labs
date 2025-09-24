#include <iostream>
using namespace std;
int main() {
    int today, elapsed;
    cin >> today;
    cin >> elapsed;
    int futureDay = (today + elapsed) % 7;
    string dayNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "Today is " << dayNames[today] << " and the future day is " << dayNames[futureDay] << endl;
}
