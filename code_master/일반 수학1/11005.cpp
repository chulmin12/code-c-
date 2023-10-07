#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;
    
    string str;
    
    while(n > 0){
        int temp = n % b;
        if (temp >= 10)
            str += 'A' + (temp - 10); // 10 이상의 숫자를 알파벳 대문자로 변환
        else
            str += temp + '0'; // 0부터 9까지의 숫자를 문자로 변환
        
        n /= b;
    }
    
    // 문자열을 역순으로 뒤집음
    reverse(str.begin(),str.end());
    
    cout << str << endl;
}
