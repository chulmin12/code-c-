#include <iostream>

using namespace std;

int main()
{
    int num, r;
    cin >> num;
    string s;

    for (int i = 0; i < num; i++) {
        cin >> r >> s;
        for (int j = 0; j < s.size(); j++) {
            for (int k = 0; k < r; k++) {
                cout << s[j];
            }
        }
        cout << endl;
    }
}
