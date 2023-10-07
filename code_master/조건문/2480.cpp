#include <iostream>

using namespace std;

int main() {
    int dice1, dice2, dice3;
    int result;
    cin >> dice1 >> dice2 >> dice3;

    if (dice1 < 1 || dice1 > 6 || dice2 < 1 || dice2 > 6 || dice3 < 1 || dice3 > 6) {
        exit(1);
    }

    if (dice1 == dice2 && dice2 == dice3) {
        result = dice1;
        cout << 10000 + result * 1000 << endl;
    } else if (dice1 == dice2 || dice2 == dice3 || dice1 == dice3) {
        if (dice1 == dice2){
            result = dice1;
        }
        else if (dice2 == dice3){
            result = dice2;
        }
        else
            result = dice3;
        cout << 1000 + result * 100 << endl;
    } else {
        result = max(max(dice1, dice2), dice3);
        cout << result * 100 << endl;
    }

    return 0;
}
