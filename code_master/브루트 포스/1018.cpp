#include <iostream>
#include <vector>
// INT_MAX를 사용하기 위한 라이브러리
#include <limits.h>

using namespace std;

// 체스판 초기화
string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

//arr[][51]로 설정한 이유는 함수가 어떤 크기의 2차워 배열이 와도 유연하게 설계하기 위함
int wb_first(int x, int y, char arr[][51]) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int bw_first(int x, int y, char arr[][51]) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main() {
    // 체스판 입력부분,,
    int n, m;
    cin >> n >> m;
    char arr[51][51];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    // 최대로 해놓고 값보다 작을 경우 업데이트 하기 위해,,
    int minCnt = INT_MAX;

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int cnt = min(wb_first(i, j, arr), bw_first(i, j, arr));
            minCnt = min(minCnt, cnt);
        }
    }

    cout << minCnt << '\n';

    return 0;
}
