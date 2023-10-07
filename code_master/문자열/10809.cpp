#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string str;
    cin >> str;
    
    // find함수를 사용하면 해당하지 않은 값은 -1를 반환한다.
    // 해당하는 문자가 있을경우 그 문자의 인덱스를 반환한다.
    for (int i = 0; i < alphabet.size(); i++){
        cout << (int)str.find(alphabet[i]) << " ";
    }
}
