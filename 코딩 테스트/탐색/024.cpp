/*
 수빈이가 세상에서 가장 좋아하는 것은 소수이고, 취미는 소수를 가지고 노는 것이다. 요즘 수빈이가 가장 관심있어 하는 소수는 7331이다.

 7331은 소수인데, 신기하게도 733도 소수이고, 73도 소수이고, 7도 소수이다. 즉, 왼쪽부터 1자리, 2자리, 3자리, 4자리 수 모두 소수이다! 수빈이는 이런 숫자를 신기한 소수라고 이름 붙였다.

 수빈이는 N자리의 숫자 중에서 어떤 수들이 신기한 소수인지 궁금해졌다. N이 주어졌을 때, 수빈이를 위해 N자리 신기한 소수를 모두 찾아보자
 */

#include <iostream>

using namespace std;

void DFS(int number, int jarisu);
bool isPrime(int num);
static int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    // DFS 2, 3, 5, 7을 시작 수로 시작함....
    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}

void DFS(int number, int jarisu)
{
    if(jarisu == N){
        if (isPrime(number)){
            cout << number << "\n";
        }
        return;
    }
    for (int i = 1; i < 10; i++){
        if (i % 2 == 0){
            continue;
        }
        // 소수이면 재귀로 자릿수 늘리는 구간
        if (isPrime(number * 10 + i)){ // 21 23 25 27 29
            DFS(number * 10 + i, jarisu + 1);
        }
    }
}

bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
