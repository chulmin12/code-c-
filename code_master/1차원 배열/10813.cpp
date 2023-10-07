#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> basket = {0};
    int basket_count, n, a, b, temp;
    cin >> basket_count >> n;
    
    for (int i = 1; i <= basket_count; i++){
        basket.push_back(i);
    }
    
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        temp = basket[a];
        basket[a] = basket[b];
        basket[b] = temp;
        
    }
    
    for (int i = 1; i <= basket_count; i++){
        cout << basket[i] << " ";
    }
    cout << endl;
}
