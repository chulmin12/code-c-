#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num1 , num2;
    cin >> num1 >> num2;
    
    cout << num1 * (num2 % 10) << endl; // 맨 뒷자리
    cout << num1 * (num2 % 100 / 10) << endl; // 두번째 자리
    cout << num1 * (num2 / 100) << endl; // 첫번째 자리
    cout << num1 * num2 << endl;
}
