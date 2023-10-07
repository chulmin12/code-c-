#include <iostream>

using namespace std;

int main()
{
    int a, b, count = 0, sum = 0;
    cin >> sum >> count;
    
    for (int i = 0; i < count; i++){
        cin >> a >> b;
        sum = sum - (a * b);
    }
    if (sum != 0){
        cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;
    
}
