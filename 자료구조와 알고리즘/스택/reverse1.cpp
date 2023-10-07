#include <iostream>
#include <vector>
#include <stack>

using namespace std;

template <typename T>
void reverse(vector<T>& vec)
{
    stack<T> stk;
    
    for (const auto& e : vec)
        stk.push(e);
    
    for (int i = 0; i < vec.size(); i++){
        vec[i] = stk.top();
        stk.pop();
    }
}

int main()
{
    vector<int> vec {10, 20, 30, 40, 50};
    
    reverse<int>(vec);
    
    for (auto e : vec)
        cout << e << ", ";
    cout << endl;
    
    vector<string> vec1 {"Hello", "loves", "Happy"};
    
    reverse<string>(vec1);
    
    for (auto a : vec1)
        cout << a << ", ";
    cout << endl;
    
    
    
}
