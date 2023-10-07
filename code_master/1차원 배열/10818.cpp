#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    vector<int> c;
    cin >> a;
    
    for (int i = 0; i < a; i++){
        cin >> b;
        c.push_back(b);
    }
    
    cout << *min_element(c.begin(),c.end()) <<" "<< *max_element(c.begin(), c.end()) << endl;
}
