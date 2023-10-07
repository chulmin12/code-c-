#include <iostream>
#include <stack>

using namespace std;

bool paren_check(const string& s)
{
    stack<char> stk;
    
    for (char c : s){
        
        // 여는 괄호를 만나면 스택에 push
        if (c == '(' || c == '{' || c == '['){
            stk.push(c);
        }
        
        // 닫는 괄호를 만나면...
        else {
            
            // 스택이 비어 있으면 false 반환
            if (stk.empty()){
                return false;
            }
            
            // 스택의 top에 있는 문자가 현대 닫는 괄호와 쌍을 이루는 여는 괄호인지를 검사...
            if ((stk.top() == '(' && c == ')') || (stk.top() == '{' && c == '}') || (stk.top() == '[' && c == ']')){
                stk.pop();
            }
            else
                return false;
        }
    }
    // 모든 문자열을 검사한 후, 스택이 비어 있는지를 검사
    if (stk.empty())
        return true;
    else
        return false;
}

    
    
int main()
{
    // 올바른 괄호
    cout << paren_check("(){}[]") << endl;
    cout << paren_check("((((()))))") << endl;
    cout << paren_check("(){[()]}") << endl;
    
    // 올바르지 않은 괄호
    cout << paren_check("((({}))") << endl;
    cout << paren_check(")(") << endl;
    cout << paren_check("({)}") << endl;
}
