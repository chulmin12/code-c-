/*
 N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
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
    
    int N;
    cin >> N;
    vector<int> num(N, 0);
    
    for (int i = 0; i < N; i++){
        cin >> num[i];
    }
    
    sort(num.begin(), num.end());
    
    for (int i = 0; i < N; i++){
        cout << num[i] << "\n";
    }
}
