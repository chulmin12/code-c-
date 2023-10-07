#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count, a, b;
    vector<int> a1, b1, sum;

    cin >> count;
    
    for (int i = 0; i < count; i++){
        cin >> a >> b;
        a1.push_back(a);
        b1.push_back(b);
        sum.push_back(a + b);
    }
    
    for (int i = 0; i < count; i++){
        cout << "Case #" << i+1 << ": " << a1[i] << " + " << b1[i] << " = " << sum[i] << endl;
    }
}
