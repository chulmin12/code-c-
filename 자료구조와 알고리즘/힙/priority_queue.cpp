#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// pq1, pq2 타입 형태가 다르기 때문에 template 사용
template <typename T>
void print_queue(T q)
{
    while (!q.empty()) {
        cout << q.top() << ", ";
        q.pop();
    }
    cout << endl;
}

// score가 높은 우선순위 비교 클래스
class Student
{
public:
    string name;
    int score;

    bool operator < (const Student& st) const
    {
        return score < st.score;
    }
};

int main()
{
    vector<int> vec {4, 2, 3, 5, 1};

    priority_queue<int> pq1;
    for (auto n : vec)
        pq1.push(n);
    print_queue(pq1);

    priority_queue<int, vector<int>, greater<int>> pq2(vec.begin(), vec.end());
    print_queue(pq2);

    priority_queue<Student> students;
    students.push({"Amelia", 80});
    students.push({"Sophia", 40});
    students.push({"Olivia", 95});
    students.push({"George", 70});

    while (!students.empty()) {
        auto& s = students.top();
        cout << s.name << " (" << s.score << ")" << endl;
        students.pop();
    }
}
