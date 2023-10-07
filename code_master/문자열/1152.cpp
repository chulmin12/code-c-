#include <iostream>

using namespace std;

int main()
{
    string str;
    // getline을 사용하면 공백을 포함해서 받을 수 있다.
    getline(cin, str);
    
    int count = 1;
    
    for (int i = 0; i < str.size() - 1; i++){
        //cout << str[i] << ", ";
        if (str[i] == ' ')
            count++;
    }
    
    if (str[0] == ' ')
        count--;
    cout << count << endl;
}
