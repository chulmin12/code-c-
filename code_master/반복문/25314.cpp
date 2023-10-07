#include <iostream>

using namespace std;

int main()
{
    int long_count;
    cin >> long_count;
    
    for (int i = 0; i < long_count / 4; i++){
        cout << "long" << " ";
    }
    cout << "int" << endl;
}
