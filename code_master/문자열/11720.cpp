#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    
    char str[256] = {0,};
    cin >> str;
    
    for (int i = 0; i < num; i++){
        // 문자열이기 때문에 0의 문자열을 빼주면 된다. ex) '1' - '0' = 49 - 48
        // 아스키코드 값
        sum += str[i] - '0';
    }
    cout << sum << endl;
}

