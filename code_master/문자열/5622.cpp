#include <iostream>

using namespace std;

int main()
{
    string num = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    
    string s;
    cin >> s;
    
    int sum = 0;
    
    for (int i = 0; i < s.size(); i++){
        // A가 아스키 코드로 65 이다.
        int index = s[i] - 65;
        sum += num[index];
    }
    cout << sum << endl;
}
