#include <iostream>
#include <vector>

using namespace std;

class hash_set
{
private:
    int sz;
    
    vector<int> data;
    
public:
    hash_set(int n) : sz(n), data(sz, -1) {}
    
    // hash 함수
    int hash(int key)
    {
        return key % sz;
    }
    
    void insert(int value)
    {
        data[hash(value)] = value;
    }
    
    bool find(int value)
    {
        return (data[hash(value)] == value);
    }
    
    void erase(int value)
    {
        data[hash(value)] = -1;
    }
    
    void print()
    {
        for (auto n : data)
            cout << n << ", ";
        cout << endl;
    }
};

int main()
{
    hash_set num_set(7);
    
    num_set.insert(10); // 7로 나눴을 때 나머지가 3 이기때문에 3번째 인덱스
    num_set.insert(15); // 1번째 인덱스
    num_set.insert(20); // 6번째 인덱스
    num_set.insert(100); // 2번째 인덱스
    
    num_set.print(); // -1, 15, 100, 10, -1, -1, 20
    
    // 10 값을 찾기
    int value = 10;
    if (num_set.find(value))
        cout << value << " is found!" << endl;
    else
        cout << value << " is not found!" << endl;
    
}
