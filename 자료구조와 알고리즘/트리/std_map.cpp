#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // 자체적으로 정렬이 됨 (오름차순)
    map<string, int> fruits;
    
    // 데이터 삽입
    fruits.insert({"apple", 1000});
    fruits.insert({"banana", 1500});
    
    // apple의 value 값이 출력
    cout << fruits["apple"] << endl;
    
    for (auto p : fruits)
        cout << p.first << " is " << p.second << " Won. " << endl;
    
    // 특정 데이터 값 수정
    fruits["apple"] = 3000;
    
    // 특정 데이터 삭제
    fruits.erase("banana");
    
    for (auto [name, price] : fruits)
        cout << "2차 " << name << " is " << price<< " Won. " << endl;
}
