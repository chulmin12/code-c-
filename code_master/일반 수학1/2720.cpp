#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int money;
    int Q[n], D[n], N[n], P[n], temp;
    
    for (int i = 0; i < n; i++){
        cin >> money;

        Q[i] = money / 25;
        temp = money % 25;
        
        D[i] = temp / 10;
        temp = temp % 10;
        
        N[i] = temp / 5;
        P[i] = temp % 5;
    }
    
    for (int i = 0; i < n; i++){
        cout << Q[i] << " " << D[i] << " " << N[i] << " " << P[i] << endl;
    }
}
