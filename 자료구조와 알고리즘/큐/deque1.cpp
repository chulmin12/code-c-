#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // deque 생성
    deque<int> d = {10, 20, 30, 40};
    
    // 데이터 추가
    d.push_front(50); // 50, 10, 20, 30, 40
    d.push_back(60); // 50, 10, 20, 30, 40, 60
    
    for (int i = 0; i < d.size(); i++){
        cout << d[i] << ",";
    }
    cout << endl;
}
