#include <iostream>

using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;

    if (minute < 45) {
        hour = (hour + 23) % 24; // 시간 감소 후 음수 방지를 위해 24를 더하고 모듈로 연산
        minute = (60 - (45 - minute));
        cout << hour << " " << minute << endl;
    } else {
        cout << hour << " " << minute - 45 << endl;
    }

    return 0;
}
