#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    //소수점관 상관 없이 전체 자리 숫자를 고정하는 명령
    cout << fixed;
    cout.precision(9);

    cout << num1 / num2 << endl;
}
