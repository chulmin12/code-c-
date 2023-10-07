#include <iostream>

using namespace std;

int main() {
    int hour, minute, necessary_time;
    cin >> hour >> minute >> necessary_time;

    if (minute + necessary_time >= 60) {
        hour = (hour + (minute + necessary_time) / 60) % 24;
        minute = (minute + necessary_time) % 60;

        cout << hour << " " << minute << endl;
    } else {
        cout << hour << " " << minute + necessary_time << endl;
    }

    return 0;
}
