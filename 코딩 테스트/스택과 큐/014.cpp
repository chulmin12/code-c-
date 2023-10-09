/*
 절댓값 힙은 다음과 같은 연산을 지원하는 자료구조이다.
 1. 배열에 정수 x (x ≠ 0)를 넣는다.
 2. 배열에서 절댓값이 가장 작은 값을 출력하고, 그 값을 배열에서 제거한다. 절댓값이 가장 작은 값이 여러개일 때는, 가장 작은 수를 출력하고, 그 값을 배열에서 제거한다.
 프로그램은 처음에 비어있는 배열에서 시작하게 된다.
 */

// 이해 안됨 ....

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    queue<int> myQue;
    
    for (int i = 0; i < N; i++){
        int num;
        cin >> num;
        if (num == 0){
            if (myQue.empty()){
                cout << "0\n";
            }
        }
        
    }
}
