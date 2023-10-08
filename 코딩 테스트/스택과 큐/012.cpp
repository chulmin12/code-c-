/*
 크기가 N인 수열 A = A1, A2, ..., AN이 있다. 수열의 각 원소 Ai에 대해서 오큰수 NGE(i)를 구하려고 한다. 
 Ai의 오큰수는 오른쪽에 있으면서 Ai보다 큰 수 중에서 가장 왼쪽에 있는 수를 의미한다. 그러한 수가 없는 경우에 오큰수는 -1이다.

 예를 들어, A = [3, 5, 2, 7]인 경우 NGE(1) = 5, NGE(2) = 7, NGE(3) = 7, NGE(4) = -1이다. 
 A = [9, 5, 4, 8]인 경우에는 NGE(1) = -1, NGE(2) = 8, NGE(3) = 8, NGE(4) = -1이다.
 */

#include <iostream>
#include <vector>
#include <stack> 

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> seq(N, 0);
    for (int i = 0; i < N; i++){
        cin >> seq[i];
    }
    
    stack<int> mystack;
    mystack.push(0);
    vector<int> result (N, 0);
    
    for (int i = 1; i < N; i++){
        while (!mystack.empty() && seq[mystack.top()] < seq[i]){
            result[mystack.top()] = seq[i];
            //cout << result[mystack.top()] << "[_]";
            mystack.pop();  // 0
        }
        mystack.push(i); //2
    }
    while (!mystack.empty()){
        result[mystack.top()] = -1;
        mystack.pop();
    }
    
    for (int i = 0; i < N; i++){
        cout << result[i] << " ";
    }
}
