#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    // forward_list 초기화
    forward_list<int> l1 {10, 20, 30, 40};
    
    l1.push_front(40); // 40, 10, 20, 30, 40
    l1.push_front(30); // 30, 40, 10, 20, 30, 40
    
    for (auto a : l1)
        cout << a << ", ";
    cout << endl;
    
    // forward_list의 개수를 확인하는 방법
    long cnt = distance(l1.begin(), l1.end());
    cout << cnt << endl;
    
    // 특정 갑을 삭제
    l1.remove(40); // 30, 10, 20, 30
    l1.remove_if([](int n) {return n > 20;}); // 10, 20
    
}
