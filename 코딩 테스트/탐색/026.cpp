/*
 그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.
 */

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> A;
vector<bool> visited;
bool arrive;
void DFS(int node);
void BFS(int node);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M, start;
    cin >> N >> M >> start;
    arrive = false;
    A.resize(N + 1);
    visited = vector<bool>(N + 1, false);
    
    for (int i = 0; i < M; i++){
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    for (int i = 1; i <= N; i++){
        sort(A[i].begin(), A[i].end());
    }

    DFS(start);
    cout << "\n";
    fill(visited.begin(), visited.end(), false);
    BFS(start);
    cout << "\n";
}

void DFS(int node)
{
    cout << node << " ";
    visited[node] = true;
    
    for (int i : A[node]){
        if (!visited[i]){
            DFS(i);
        }
    }
}

void BFS(int node)
{
    queue<int> myQueue;
    myQueue.push(node);
    visited[node] = true;
    
    while (!myQueue.empty()){
        int now_node = myQueue.front();
        myQueue.pop();
        cout << now_node << " ";
        for (int i : A[now_node]){
            if(!visited[i]){
                visited[i] = true;
                myQueue.push(i);
            }
        }
    }
}
