#include <iostream>

using namespace std;

int main()
{
    // 공식을 파악해야한다....
    int n;
    cin >> n;
    
    int row = 1;
    for (int i = 0; i < n; i++){
        row = row * 2;
    }
    //cout << row << endl
    int count = (row + 1) * (row + 1);
    cout << count << endl;
}
