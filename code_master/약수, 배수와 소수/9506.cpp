#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int p;
    
    while (true) {
        cin >> p;
        if (p == -1) {
            break; // -1을 입력하면 종료
        }
        
        int sum = 0;
        vector<int> q;
        
        for (int i = 1; i < p; i++) {
            if (p % i == 0) {
                q.push_back(i);
            }
        }
        
        sum = accumulate(q.begin(), q.end(), 0);
        
        if (p == sum) {
            cout << sum << " = ";
            for (int i = 0; i < q.size(); i++) {
                cout << q[i];
                if (i < q.size() - 1) {
                    cout << " + ";
                }
            }
            cout << endl;
        }
        else {
            cout << p << " is NOT perfect." << endl;
        }
    }
    
    return 0;
}
