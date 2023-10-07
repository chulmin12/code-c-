#include <iostream>
#include <stack>

using  namespace std;

string reverse(const string& str)
{
    stack<char> stk;
    
    for (char c : str)
        stk.push(c);
    
    string res;
    
    while (!stk.empty()){
        res += stk.top();
        stk.pop();
    }
    
    return res;
}

int main()
{
    string str1 = "HELLO";
    string str2 = "ALGORITHM";
    
    cout << str1 << " -> " << reverse(str1) << endl;
    cout << str2 << " -> " << reverse(str2) << endl;
}
