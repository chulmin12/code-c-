
/*
 1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있다.
 이때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자.
 임의의 수열이 주어졌을 때 스택을 이용해 그 수열을 만들 수 있는지 없는지, 
 있다면 어떤 순서로 push와 pop 연산을 수행해야 하는지를 알아낼 수 있다. 이를 계산하는 프로그램을 작성하라.
 */

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<char> result;
    // 배열 추가
    for (int i = 0 ; i < N; i++){
        cin >> A[i];
    }
    
    int num = 1; // 오름차순 수
    stack<int> myStack;
    bool res = true;
    
    for (int i = 0; i < A.size(); i++){
        int su = A[i]; // 현재 수열의 수
        // 현재 수열 값 >= 오름차순 자연수 : 값이 같아질 때까지 push() 수행
        if (su >= num){
            while (su >= num){
                myStack.push(num++);
                result.push_back('+');
            }
            myStack.pop();
            result.push_back('-');
        }
        // 현재 수열값 < 오름차순 자연수 : pop()을 수행하여 수열 원소를 꺼냄
        else{
            int n = myStack.top();
            myStack.pop();
            // 스택의 가장 위의 수가 만들어야 하는 수열의 수보다 크다면 수열 출력 불가능
            if (n > su){
                cout << "NO";
                res = false;
                break;
            }
            else{
                result.push_back('_');
            }
        }
    }
    if (res){
        for (int i = 0; i < result.size(); i++){
            cout << result[i] << '\n';
        }
    }
}
