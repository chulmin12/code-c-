#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count, a, b;
    vector<int> sum;
    cin >> count;
    
    for (int i = 0; i < count; i++){
        cin >> a >> b;
        sum.push_back(a + b);
    }
    for (int i = 0; i < count; i++){
        cout << "Case #" << i+1 << ": " <<sum[i] << endl;
    }
}
