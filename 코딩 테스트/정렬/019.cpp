/*
 수 N개 A1, A2, ..., AN이 주어진다. A를 오름차순 정렬했을 때, 앞에서부터 K번째 있는 수를 구하는 프로그램을 작성하시오.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    
    vector<int> num(N, 0);
    
    for (int i = 0; i < N; i++){
        cin >> num[i];
    }
    
    sort(num.begin(), num.end());
    
    cout << num[K - 1] << "\n";
}
