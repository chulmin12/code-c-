/*
 방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.
 *** 재귀함수를 사용한 DFS
 */

#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;

void DFS(int v);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;  // N : 노드 개수, M : 에지 개수

    A.resize(N + 1);
    visited = vector<bool>(N + 1, false);

    for (int i = 0; i < M; i++) {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            count++;
            DFS(i);
        }
    }
    cout << count << "\n";
}

void DFS(int v)
{
    if (visited[v]) {
        return;
    }

    visited[v] = true;

    for (int i : A[v]) {
        if (visited[i] == false) {
            DFS(i);
        }
    }
}
