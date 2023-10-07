/*
 N개의 수로 된 수열 A[1], A[2], …, A[N] 이 있다.
 이 수열의 i번째 수부터 j번째 수까지의 합 A[i] + A[i+1] + … + A[j-1] + A[j]가 M이 되는 경우의 수를 구하는 프로그램을작성하시오.
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
    cin >> N >> M;
    
    vector<int> numbers (N,0);
    for (int i = 0; i < N; i++){
        cin >> numbers[i];
    }
    
    int start = 0;
    int end = 0;
    int cnt = 0;
    int sum = numbers[0];
    
    while (end < N){
        if (sum < M){
            end++;
            if (end < N)
                sum += numbers[end];
        }
        else if (sum > M){
            sum -= numbers[start];
            start++;
        }
        else if (sum == M){
            sum -= numbers[start];
            start++;
            end++;
            if (end < N){
                sum += numbers[end];
            }
            cnt++;
        }
    }
    cout << cnt << "\n";
}
