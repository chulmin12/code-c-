// 스택 반대로 넣기

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    stack<int> mystack;
    
    for (int i = N; i >= 1; i--){
        mystack.push(i);
    }
    

    while (!mystack.empty()){
        auto& e = mystack.top(); // 데이터를 참조형 변수로 받아오는 코드
        cout << e << ", ";
        mystack.pop();
    }
}
