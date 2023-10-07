#include <iostream>
#include <list>

template <typename T>
class Queue
{
public:
    Queue() {}
    
    void enqueue(const T& e) {lst.push_back(e);}
    void dequeue() {lst.pop_front();}
    const T& front() const {return lst.front();}
    
    bool empty() const {return lst.empty();}
    int size() const {return lst.size();}

private:
    std::list<T> lst;
};

using namespace std;

int main()
{
    // 큐 생성
    Queue<int> q;
    
    // 큐에 데이터 삽입
    q.enqueue(10); // (front)10(rear)
    q.enqueue(20); // (front)10, 20(rear)
    q.enqueue(30); // (front)10, 20 ,30(rear)
    
    // 큐에있는 데이터 꺼내기
    q.dequeue(); // (front)20, 30(rear)
    
    // 큐를 하나씩 출력
    while (!q.empty()){
        auto& e = q.front();
        cout << e << endl;
        q.dequeue();
    }
}
