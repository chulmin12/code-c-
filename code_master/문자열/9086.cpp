#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num ;
    cin >> num;
    string s;
    vector<string> str;
    
    for (int i = 0; i < num; i++){
        cin >> s;
        str.push_back(s);
    }
    
    // string에 포함되어 있는 substr 함수를 사용함
    for (int i = 0; i < str.size(); i++){
        s = str[i];
        cout << s.substr(0,1) << s.substr(s.length()-1) << endl;
    }
    
}
