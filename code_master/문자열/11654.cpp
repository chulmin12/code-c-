#include <iostream>

using namespace std;

int main()
{
    char str;
    cin >> str;
    
    // char형 문자를 정수로 형변환 시킴
    cout << static_cast<int>(str) << endl;
}
