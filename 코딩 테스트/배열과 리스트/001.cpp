/*
 숫자의 합 두하기
N개의 숫자가 공백없이 쓰여있다. 이 숫자를 합해 출력하는 프로그램을 작성하시오.
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string numbers;
    cin >> numbers;
    
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++){
        // 아스키 코드 이해 문자열에서 숫자로 표현할려면 48 또는 '0' 을 빼야함
        sum += numbers[i] - 48;
    }
    cout << sum << endl;
}
