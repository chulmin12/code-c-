#include <iostream>
#include <vector>
#include <list>

class hash_set
{
private:
    int sz;
    // 만약 <key, value> 쌍으로 구성된 데이터를 저장하는 hash_map을 구성하려면 std::pair를 사용!
    // vector<list<pair<string,int>>> data;
    std::vector<std::list<int>> data;
    
public:
    hash_set(int n) : sz(n), data(sz) {}
    
    int hash(int key) { return key % sz; }
    
    void insert(int value)
    {
        data[hash(value)].push_back(value);
    }
    bool find(int value)
    {
        auto& entries = data[hash(value)];
        return std::find(entries.begin(), entries.end(), value) != entries.end();
    }
    void erase(int value)
    {
        auto& entries = data[hash(value)];
        auto it = std::find(entries.begin(), entries.end(), value);
        
        if (it != entries.end())
            entries.erase(it);
    }
    
    void print()
    {
        for (int i = 0; i < sz; i++){
            std::cout << i << ": ";
            for (auto n : data[i]){
                std::cout << n << ", ";
            }
            std::cout << std::endl;
        }
    }
};


using namespace std;

int main()
{
    hash_set num_set(7);
    
    num_set.insert(10); // 7로 나눴을 때 나머지가 3 이기때문에 3번째 인덱스
    num_set.insert(15); // 1번째 인덱스
    num_set.insert(20); // 6번째 인덱스
    num_set.insert(100); // 2번째 인덱스
    
    
    
    // 10 값을 찾기
    int value = 10;
    if (num_set.find(value))
        cout << value << " is found!" << endl;
    else
        cout << value << " is not found!" << endl;
    
    // 저장된 형태 100, 2 로 저장되어 있음
    num_set.insert(2); // 100이라는 값과 원래는 충돌이 일어나지만, 지금은 체이닝 기법을 사용했기에 연결 리스트 형태로 저장되어있다.
    
    value = 100;
    if (num_set.find(value))
        cout << value << " is found!" << endl;
    else
        cout << value << " is not found!" << endl;
    
    num_set.print();
}
