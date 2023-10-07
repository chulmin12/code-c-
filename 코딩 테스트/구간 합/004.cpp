/*
 N x N개의 수가 N x N 크기의 표에 채워져 있다. 표 안의 수 중 (X, X)에서 (X2, Y2)까지의 합을 구하 려 한다.
 X는 행, Y는 열을 의미한다. 예를 들어 N = 4이고, 표가 다음과 같이 채워져 있을 때를 살펴보자.
 (2, 2)에서 (3, 4)까지의 합을 구하면 3+4+5+4+5+ 6 = 27이고, (4, 4)에서 (4, 4)까지의 함을 구하면 7이다.
 표에 채워져 있는 수와 합을 구하는 연산이 주어졌을 때 이를 처리하는 프로그램을 작성하시오.
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
    
    vector<vector<int>> A(N + 1 ,vector<int>(N + 1, 0));
    vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));
    
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            cin >> A[i][j];
            // 계산하는 공식을 빠르게 찾아야한다,,,
            D[i][j] = A[i][j] + D[i][j-1] + D[i-1][j] - D[i-1][j-1];
        }
    }
    
    for (int i = 0; i < M; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // 계산하는 공식,,,
        int result = D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1];
        // endl; 보다 \n으로 하는게 시간이 적게 든다...
        cout << result << "\n";
    }
}

