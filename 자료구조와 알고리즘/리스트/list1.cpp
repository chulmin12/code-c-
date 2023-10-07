#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1; //비어있는 리스트
    l1.push_back(10); // 리스트에 10 추가
    l1.push_back(20); // 리스트에 10 -> 20 추가
    
    // 리스트 초기값
    list<int> l2 {10, 20, 30, 40};
    
    // 리스트 출력 하는 방법
    for (auto a : l2)
        cout << a << ", " ;
    cout << endl;
    
    // l2 맨 마지막 위치에 l1리스트를 붙혀라 (l1 리스트는 비어지는 형태가 된다)
    l2.splice(l2.end(), l1); // 10, 20, 30, 40, 10, 20
    
    // l2 출력
    for (auto i : l2)
        cout << i << ", ";
    cout << endl;
    // l1 출력
    for (auto j : l1)
        cout << j << ", ";
    cout << endl;
    
    // 정렬 (오름차순)
    l2.sort(); // 10, 10, 20, 20, 30, 40
    for (auto i : l2)
        cout << i << ", ";
    cout << endl;
    
    // 중복 제거
    l2.unique(); // 10, 20, 30, 40
    for (auto i : l2)
        cout << i << ", ";
    cout << endl;
}
