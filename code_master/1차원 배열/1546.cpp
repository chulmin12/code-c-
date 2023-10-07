#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n, a;
    double avg;
    
    cin >> n;
    vector<int> sum;
    
    for (int i = 0; i < n; i++){
        cin >> a;
        sum.push_back(a);
    }
    int max_val = *max_element(sum.begin(), sum.end());
    
    avg = accumulate(sum.begin(), sum.end(), 0);
    
    double result = (avg / max_val * 100) / n;
    
    cout << fixed;
    cout.precision(2);
    cout << result << endl;
}
