#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    vector<int> sum;
    while(!(cin >> a >> b).eof()){
        sum.push_back(a + b);
    }
    
    for (int i = 0; i < sum.size(); i++){
        cout << sum[i] << endl;
    }
}
