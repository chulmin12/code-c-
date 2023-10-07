/*
    평균 구하기
 세준이는 기말고사를 망쳤다. 그래서 점수를 조작해 집에 가져가기로 결심했다. 일단 세준이는 자기 점수 중 최댓값을 골랐다.
 그런 다음 최댓값을 M이라 할 때 모든 점수를 점수 / M * 100으로 고쳤다.
 예를 들 어 세준이의 최고점이 70점, 수학 점수가 50점이라면 수학 점수는 50 / 70 * 100이므로 71.43점이다.
 세준이의 성적을 이 방법으로 계산했을 때 새로운 평균을 구하는 프로그램을 작성하시오
 */
#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int A[1000];
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    double sum = 0;
    int max = 0;
    
    for (int i = 0; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        sum = sum + A[i];

    }
    //한 과목과 관련된 수식을 모두 더한 후 관련된 수식으로 변환해 로직이 간단해짐
    double result = (sum / max * 100)/ N;
    cout << fixed;
    cout.precision(2);
    cout << result << endl;
}

