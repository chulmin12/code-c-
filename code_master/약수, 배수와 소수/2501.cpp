#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int p, k = 0;
    cin >> p >> k;
    
    vector<int> q;
    
    for (int i = 1; i <= p; i++){
        if (p % i == 0){
            q.push_back(i);
        }
    }
    cout << q[k - 1] << endl;
}
