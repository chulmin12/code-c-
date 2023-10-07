#include <iostream>
#include <vector>

// vector을 이용하여 구현한 스택 자료구조
template <typename T>
class Stack
{
public:
    Stack() {}
    
    void push(const T& e) { v.push_back(e); }
    void pop() { v.pop_back(); }
    const T& top() const { return v.back(); }
    
    bool empty() const { return v.empty(); }
    int size() const { return v.size(); }
    
private:
    std::vector<T> v;
};

using namespace std;

int main()
{
    // 스택 생성
    Stack<int> stk;

    // 스택에 데이터 넣기
    stk.push(10); // 10
    stk.push(20); //20, 10
    stk.push(30); // 30, 20, 10
    
    // 맨 위에 있는 데이터 꺼내기
    stk.pop(); // 20, 30
    
    // 맨 위에 있는 데이터 참조하여 보여주기
    cout << stk.top() << endl;  // 20
    
    stk.push(40);
    
    // 스택에 저장된 데이터 확인
    while (!stk.empty()){
        auto& e = stk.top(); // 데이터를 참조형 변수로 받아오는 코드
        cout << e << ", ";
        stk.pop();
    }
    cout << endl;
    
}
