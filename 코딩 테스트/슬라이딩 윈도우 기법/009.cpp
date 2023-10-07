/*
 DNA 비밀번호 문제 -> 슬라이딩 윈도우 알고리즘 사용법
 민호가 만든 임의의 DNA 문자열과 비밀번호로 사용할 부분분자열의 길이,
 그리고 {‘A’, ‘C’, ‘G’, ‘T’} 가 각각 몇번 이상 등장해야 비밀번호로 사용할 수 있는지 순서대로 주어졌을 때
 민호가 만들 수 있는 비밀번호의 종류의 수를 구하는 프로그램을 작성하자. 단 부분문자열이 등장하는 위치가 다르다면
 부분문자열이 같다고 하더라도 다른 문자열로 취급한다.
 */

#include <iostream>
#include <map>

using namespace std;

int checkArr[4];
int myArr[4];
int checkSecret = 0;
void Add(char c);
void Remove(char c);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int S, P;
    cin >> S >> P;
    int Result = 0;
    string A;
    cin >> A;
    
    for (int i = 0; i < 4; i++){
        cin >> checkArr[i];
        if (checkArr[i] == 0){
            checkSecret++;
        }
    }
    for (int i = 0; i < P; i++){
        Add(A[i]);
    }
    if (checkSecret == 4){
        Result++;
    }
    // 슬라이딩 윈도우 처리하는 부분
    for (int i = P; i < S; i++){
        int j = i - P;
        Add(A[i]);
        Remove(A[j]);
        if (checkSecret == 4){
            Result++;
        }
    }
    cout << Result << "\n";
}

void Add(char c){
    switch (c) {
        case 'A':
            myArr[0]++;
            if (myArr[0] == checkArr[0])
                checkSecret++;
            break;
            
        case 'C':
            myArr[1]++;
            if (myArr[1] == checkArr[1])
                checkSecret++;
            break;
            
        case 'G':
            myArr[2]++;
            if (myArr[2] == checkArr[2])
                checkSecret++;
            break;
            
        case 'T':
            myArr[3]++;
            if (myArr[3] == checkArr[3])
                checkSecret++;
            break;
            
    }
}

void Remove(char c){
    switch (c) {
        case 'A':
            if (myArr[0] == checkArr[0])
                checkSecret--;
            myArr[0]--;
            break;
            
        case 'C':
            if (myArr[1] == checkArr[1])
                checkSecret--;
            myArr[1]--;
            break;
            
        case 'G':
            if (myArr[2] == checkArr[2])
                checkSecret--;
            myArr[2]--;
            break;
            
        case 'T':
            if (myArr[3] == checkArr[3])
                checkSecret--;
            myArr[3]--;
            break;
            
    }
}
