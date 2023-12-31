/*
 BOJ 알고리즘 캠프에는 총 N명이 참가하고 있다. 사람들은 0번부터 N-1번으로 번호가 매겨져 있고, 일부 사람들은 친구이다.

 오늘은 다음과 같은 친구 관계를 가진 사람 A, B, C, D, E가 존재하는지 구해보려고 한다.

 A는 B와 친구다.
 B는 C와 친구다.
 C는 D와 친구다.
 D는 E와 친구다.
 위와 같은 친구 관계가 존재하는지 안하는지 구하는 프로그램을 작성하시오.
 DFS 알고리즘
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A;
vector<bool> visited;
void DFS(int now, int depth);
static bool arrive;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    A.resize(N);
    visited = vector<bool>(N, false);
    
    for (int i = 0; i < M; i++){
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    for (int i = 0; i < N; i++){
        DFS(i, 1);
        if (arrive){
            break;
        }
    }
    if (arrive){
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }
    
}

void DFS(int now, int depth)
{
    if (depth == 5 || arrive){
        arrive = true;
        return;
    }
    
    visited[now] = true;
    
    for (int i : A[now]){
        if (!visited[i]){
            DFS(i, depth + 1);
        }
    }
    visited[now] = false;
}
