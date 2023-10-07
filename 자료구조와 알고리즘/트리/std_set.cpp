#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<int> odds; // 홀수 값 저장
    
    // greater 값을 지정하면 내림차순으로 정렬됨
    set<int, greater<>> evens {2,4,6,8}; // 짝수 값 저장
    evens.insert(10);
    evens.insert(2); // 중복이 되어 생략됨
    
    // 임의로 데이터를 넣어도 오름차순으로 정렬되어 있음
    odds.insert(1);
    odds.insert(7);
    odds.insert(5);
    odds.insert(3);
    odds.insert(9);
    
    for (auto n : odds)
        cout << n << ", ";
    cout << endl;
    
    for (auto n : evens)
        cout << n << ", ";
    cout << endl;
    
    // 특정 데이터 값 찾기
    if (evens.find(4) != evens.end())
        cout << "4 is found!" << endl;
    else
        cout << "4 is not found!" << endl;
    

    // 문자열과 정수값을 쌍으로 이루어진 데이터를 저장하고 싶을 경우
    // set<pair<string, int>> managers = {{"Amelia", 29}, {"Noah", 25}, {"Olivia", 31}, {"Sophia", 40}};
    using psi = pair<string, int>;
    set<psi> managers = {{"Amelia", 29}, {"Noah", 25}, {"Olivia", 31}, {"Sophia", 40}};
    
    // 데이터 삽입
    managers.insert({"George", 35});
    
    // 특정 데이터 찾기
    psi person1 = {"Noah", 25};
    if (managers.find(person1) != managers.end())
        cout << person1.first << "is a manager!" << endl;
    else
        cout << person1.first << "is not a manager!" << endl;
    
    // 특정 데이터 삭제
    managers.erase({"Sophia", 40});
    managers.erase({"Noah", 30}); // 30살의 Noah는 없기 때문에 삭제가 안됨
    
    for (auto m : managers)
        cout << m.first << "(" << m.second << ")" << ", ";
    
    
}
