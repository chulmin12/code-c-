#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    // 정렬이 안되어있는 상태로 출력이 됨
    unordered_map<string, int> fruits;
    
    // 데이터 삽입
    fruits.insert({"apple", 1000});
    fruits.insert({"banana", 1500});
    
    
    // 특정 데이터 값 수정
    fruits["apple"] = 3000;
    fruits["lemon"] = 5000;
    fruits["grape"];
    
    // 특정 데이터 삭제
    fruits.erase("banana");
    
    for (auto p : fruits)
        cout << p.first << " is " << p.second << " Won. " << endl;
    
}
