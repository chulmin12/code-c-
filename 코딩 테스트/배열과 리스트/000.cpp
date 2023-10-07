/*
 수 정렬하기
N개의 수가 주어졌을 때 이름 오름차순 정렬하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> number;
    
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        number.push_back(a);
    }
    
    sort(number.begin(), number.end());
    
    for (int i = 0; i < N; i++){
        cout << number[i] << endl;
    }
}
