/*
 N개의 수 A, A2. ... An이 주어졌을 때 연속된 부분의 합이 M으로 나누어떨어지는 구간의 개수를 구하 는 프로그램을 작성하시오.
 즉, A,+..+ A(i S j)의 합이 M으로 나누어떨어지는 (i, j) 쌍의 개수를 구하시오.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    long result = 0;
    cin >> N >> M;
    vector<long> S (M, 0);
    vector<long> sum (N, 0);
    // 합 배열 구하는 공간,,,
    
    cin >> sum[0];
    
    for (int i = 1; i < N; i++){
        int temp = 0;
        cin >> temp;
        sum[i] = sum[i - 1] + temp;
        //cout << sum[i] << ", ";
    }
    // 합 배열에 M을 나눴을때, 나누어 떨어진 개수,,,
    for (int i = 0; i < N; i++){
        int remainder = sum[i] % M;
        if (remainder == 0){
            result++;
        }
        // 나머지가 같은 인덱스 세기....
        S[remainder]++;
    }
    // 나머지에서 2가지를 뽑는 경우..?
    for (int i = 0; i < M; i++){
        if (S[i] > 1)
            result = result + (S[i] * (S[i] - 1) / 2);
    }
    cout << result << "\n";
}
