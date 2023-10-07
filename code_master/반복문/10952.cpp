#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, sum = 1;
    vector<int> result;
    while(sum != 0){
        cin >> a >> b;
        sum = a + b;
        if (sum != 0){
            result.push_back(a + b);
        }
    }
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}
