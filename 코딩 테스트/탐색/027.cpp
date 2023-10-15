/*
 N×M크기의 배열로 표현되는 미로가 있다.

 1    0    1    1    1    1
 1    0    1    0    1    0
 1    0    1    0    1    1
 1    1    1    0    1    1
 미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다. 이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오. 한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.

 위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.
 */

#include <iostream>
#include <queue>

using namespace std;

static int dx[] = {0,1,0,-1};
static int dy[] = {1,0,-1,0};

static int A[101][101];
static bool visited[101][101] = {false};
static int N, M;
void BFS(int i, int j);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++){
        // 인접 그래프 그리기
        string s;
        cin >> s;
        for (int j = 0; j < M; j++){
            A[i][j] = s[j] - '0';
        }
    }
    BFS(0,0);
    cout << A[N-1][M-1] << "\n";
}

void BFS(int i, int j)
{
    queue<pair<int, int>> myqueu;
    // make_pair은 인자를 매칭해주거
    myqueu.push(make_pair(i, j));
    
    while (!myqueu.empty()){
        // 큐에서 노드 데이터 가져오기
        int now[2];
        now[0] = myqueu.front().first;
        myqueu.pop();
        visited[i][j] = true;
        // 상하좌우 탐색
        for (int k = 0; k < 4; k++){
            int x = now[0] + dx[k];
            int y = now[1] + dy[k];
        
            if (x >= 0 && y >= 0 && x < N && y < N){ // 좌표 유효성 검사
                if (A[x][y] != 0 && !visited[x][y]){ // 미방문 노드 검사
                    visited[x][y] = true;
                    A[x][y] = A[now[0]][now[1]] + 1; // 깊이 업데이트
                    myqueu.push(make_pair(x, y));
                }
            }
        }
    }
}
