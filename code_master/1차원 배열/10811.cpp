#include <iostream>
#include <vector>
#include <algorithm> // reverse 함수를 사용하기 위해 추가

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int a, b ;
    
    vector<int> baket;
    for (int i = 1; i <= N; i++){
        baket.push_back(i);
    }
    
    for (int i = 0; i < M; i++){
        cin >> a >> b;
        reverse(baket.begin() + (a - 1), baket.begin() + b); // 범위를 뒤집기 위해 begin() 함수 사용
    }
    
    for (int j = 0; j < N; j++){
        cout << baket[j] << " ";
    }
    cout << endl;
}
