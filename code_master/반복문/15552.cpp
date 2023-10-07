#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //cin / cout을 사용하기 위해서는 밑에 두개 추가 해줘야함
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int count = 0, a, b;
    vector<int> result;
    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> a >> b;
        result.push_back(a + b);
    }
    
    for (int i = 0; i < count; i++){
        // endl 대신에 개행문자인 \n 사용
        cout << result[i] << '\n';
    }
}
