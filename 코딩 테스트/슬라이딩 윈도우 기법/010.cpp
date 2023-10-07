/*
 최솟값 찾기 문제,,,슬라이딩 윈도우 알고리즘 + 정렬 사용
 N개의 수 A1, A2, ..., AN과 L이 주어진다.
 Di = Ai-L+1 ~ Ai 중의 최솟값이라고 할 때, D에 저장된 수를 출력하는 프로그램을 작성하시오.
 이때, i ≤ 0 인 Ai는 무시하고 D를 구해야 한다.
 */

#include <iostream>
#include <deque>

using namespace std;
typedef pair<int, int> Node;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, L;
    cin >> N >> L;
    deque<Node> mydeque;
    
    for (int i = 0; i < N; i++){
        int now;
        cin >> now;
        
        while(mydeque.size() && mydeque.back().first > now){
            mydeque.pop_back();
        }
        
        mydeque.push_back(Node(now, i));
        
        if (mydeque.front().second <= i - L){
            mydeque.pop_front();
        }
        cout << mydeque.front().first << ' ';
    }
}
