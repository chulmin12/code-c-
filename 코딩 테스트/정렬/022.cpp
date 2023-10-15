/*
 N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
 */

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int count[10001] = {0};
    int number = 0;
    
    for (int i = 1; i <= N; i++){
        cin >> number;
        count[number]++;
    }
    
    for (int i = 0; i <= 10000; i++){
        if (count[i] != 0){
            for (int j = 0; j < count[i]; j++){
                cout << i << "\n";
            }
        }
    }
}
