/*
 수 N개가 주어졌을 때 1번째 수에서 J번째 수까지의 합을 구하는 프로그램을 작성하시오.
 
 1번째 줄에 수의 개수 N(1 ≤ N ≤ 100,000), 합을 구해야 하는 횟수 M(1 ≤ M ≤ 100,000), 2번째 줄 에 N개의 수가 주어진다.
 각 수는 1,000보다 작거나 같은 자연수다. 3번째 줄부터는 M개의 줄에 합을 구 해야 하는 구간 1와 j가 주어진다.
 */
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> number;
    
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        number.push_back(a);
    }

    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b; //a = 1 b = 3
        int result = accumulate(number.begin() + a - 1, number.begin() + b, 0);
        cout << result << endl;
    }
}
