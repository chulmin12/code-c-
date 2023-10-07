#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, n;
    cin >> n;
    vector<int> sum;
    for (int i = 0; i < n; i++){
        cin >> a;
        sum.push_back(a);
    }
    cin >> b;
    cout << count(sum.begin(),sum.end(), b) << endl;
    
}
