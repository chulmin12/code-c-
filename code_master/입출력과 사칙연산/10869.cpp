#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;

    cout << fixed;
    cout.precision(9);
    cout << static_cast<double>(num1) / num2 << endl; // double 타입 캐스팅

    cout << num1 % num2 << endl;

    return 0; // main 함수 종료 시 반환값 지정
}
