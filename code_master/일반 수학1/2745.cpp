#include <iostream>

using namespace std;

int main()
{
    string str;
    int b;
    cin >> str >> b;
    int res = 0;
    
    for (int i = 0; i < str.length(); i++){
        if ('0' <= str[i] && str[i] <= '9')
            // 문자열을 숫자로 변경하기위해 ascii값 계산
            res = res * b + (str[i] - '0');
        else
            res = res * b + (str[i] - 'A' + 10);
    }
    cout << res << endl;
}
