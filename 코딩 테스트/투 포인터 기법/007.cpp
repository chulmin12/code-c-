/*
 주몽은 철기군을 양성하기 위한 프로젝트에 나섰다. 그래서 야철대장에게 철기군이 입을 갑옷을 만들라고 명령했다.
 야철대장은 주몽의 명령에 따르기 위해 연구에 착수하던 중 갑옷을 만드는 재료들은 각각 고유한 번호가 있고,
 갑옷은 2개의 재료로 만드는 데 2가지 재료의 고유한 번호를 합쳐 M(1s M s 10,000,000)이 되면 갑옷이 만들어진다는 사실을 발견했다.
 야철대장은 자신이 만들고 있는 재료로 갑 옷을 몇 개나 만들 수 있는지 궁금해졌다.
 야철대장의 궁금증을 풀어 주기 위해 N(1 ≤ N ≤ 15,000)개 의 재료와 M이 주어졌을 때 몇 개의 갑옷을 만들 수 있는지를 구하는 프로그램을 작성하시오.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> sum(N, 0);
    for (int i = 0; i < N; i++){
        cin >> sum[i];
    }
    sort(sum.begin(),sum.end());
    
    int start_index = 0, end_index = N - 1;
    int cnt = 0;
    
    while(start_index < end_index){
        if (sum[start_index] + sum[end_index] < M){
            start_index++;
        }
        else if (sum[start_index] + sum[end_index] > M){
            end_index--;
        }
        else{
            cnt++;
            start_index++;
            end_index--;
        }
    }
    cout << cnt << "\n";
}
