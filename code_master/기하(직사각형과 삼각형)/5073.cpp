#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;
        
        if ((a + b + c) == 0)
            return 0;
        
        if (a == b && b == c) {
            cout << "Equilateral" << endl;
        }
        // 여기 부분에서 많이 틀렸다,,,,
        else if (a + b <= c || a + c <= b || b + c <= a) {
            cout << "Invalid" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Isosceles" << endl;
        }
        else {
            cout << "Scalene" << endl;
        }
    }
}
