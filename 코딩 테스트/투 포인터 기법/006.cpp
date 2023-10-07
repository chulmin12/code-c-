/*
 어떠한 자연수 N은 몇 개의 연속된 자연수의 합으로 나타낼 수 있다.
 당신은 어떤 자연수 N(1S N s 10,000,000)을 몇 개의 연속된 자연수의 함으로 나타내는 가짓수를 알고 싶다.
 이때 사용하는 자연수는 N 이하여야 한다.
 예를 들어 15를 나타내는 방법은 15,7 + 8,4+ 5+ 6,1+ 2 + 3+ 4 + 5이다. 반면,10을 나타내는 방법은 10,1 + 2+ 3 + 4이다.
 N을 입력받아 연속된 자연수의 합으로 나타내는 가짓수 를 출력하는 프로그램을 작성하시오.
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
    int start_index = 1, end_index = 1;
    int cnt = 1;
    int sum = 1;
    
    while (end_index != N){
        if (sum == N){
            cnt++;
            end_index++;
            sum = sum + end_index;
        }
        else if (sum > N){
            sum = sum - start_index;
            start_index++;
        }
        else{
            end_index++; //2, 3, 4
            sum = sum + end_index; //3, 6, 10
        }
    }
    cout << cnt << "\n";
}
