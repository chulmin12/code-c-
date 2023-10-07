#include <iostream>

using namespace std;

int main()
{
    int n; // 색종이 개수
    cin >> n;
    char arr[101][101] = {0, };
    
    int x, y; // 좌표 표시
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        for (int a = x; a < x + 10; a++){
            for (int b = y; b < y + 10; b++){
                // 겹치는 부분
                if (arr[a][b] == 1)
                    continue;
                arr[a][b] = 1;
                sum++;
            }
        }
    }
    cout << sum << endl;
}
