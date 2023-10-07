#include <iostream>

using namespace std;

long long fibo(int n)
{
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    for (int i = 1; i <= 10; i++){
        cout << fibo(i) << ", ";
    }
    cout << endl;
    
    // 40번째 항 출력
    cout << fibo(40) << endl;
    
    // 50번째 항 출력 -> 출력이 늦게 나옴
    // 중복되는 부분 문제로 인해 계산 효율이 떨어짐
    // 캐시를 사용하여 문제를 해결할 수 있음
    cout << fibo(50) << endl;
    
}
