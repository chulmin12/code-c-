#include <iostream>

using namespace std;

int main()
{
    int multiplication_tables;
    cin >> multiplication_tables;
    
    for (int i = 1 ; i < 10; i++){
        cout << multiplication_tables << " * " << i << " = " << multiplication_tables * i <<endl;
    }
}
