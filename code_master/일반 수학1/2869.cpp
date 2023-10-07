#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;
    // while 문으로 했을 때, 시간 초과
    // 수학 공식은 인터넷 검색 했음
    cout << (V - B - 1) / (A - B) + 1 << endl;
}
