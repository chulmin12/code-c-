#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // 큐 생성
    queue<int> q;
    
    // 큐에 데이터 삽입
    q.push(10);
    q.push(20);
    q.push(30);
    
    // 큐 삭제
    q.pop();
    
    // 큐 데이터 하나씩 출력
    while (!q.empty()){
        auto& e = q.front();
        cout << e << endl;
        q.pop();
    }
}
