#include <iostream>
// 이해 부족
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    int i = 1;
    while (x > i){
        x -= i;
        i++;
    }
    // 짝수
    if (i % 2 == 0){
        cout << x << '/' << i + 1 - x <<endl;
    }
    // 홀수
    else{
        cout << i + 1 - x << '/' << x << endl;
    }
}

