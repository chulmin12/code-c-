/*
 배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    // 내림차순으로 정렬
    sort(str.begin(), str.end(), greater<char>());

    cout << str;

    return 0;
}
