#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    int x[n], y[n];
    
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    sort(x, x + n);
    sort(y, y + n);
    // x좌표의 높은 값에서 작은 값을 뺀 길이랑
    // y좌표의 높은 값에서 작은 값을 밴 길이로 넓이를 구한다.
    cout << (x[n-1] - x[0]) * (y[n-1] - y[0]) << endl;
}
