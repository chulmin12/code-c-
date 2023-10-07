#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int basket_count, ball;
    int i, j, k;
    cin >> basket_count >> ball;
    
    vector<int> basket(basket_count + 1, 0);
    
    for (int a = 0; a < ball; a++){
        cin >> i >> j >> k;
        for (int b = i; b <= j; b++){
            basket[b] = k;
        }
    }
    
    for (int a = 0; a < basket_count; a++){
        cout << basket[a + 1] << " ";
    }
    cout << endl;
}
