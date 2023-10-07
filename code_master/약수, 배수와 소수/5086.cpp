#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (true){
        cin >> a >> b;
        
        if (a == 0 && b == 0){
            break;
        }
        // 첫번째 숫자가 두번째 숫자의 약수
        if (b % a == 0){
            cout << "factor" << endl;
        }
        // 첫번째 숫자가 두번째 숫자의 배수
        else if (a % b == 0){
            cout << "multiple" << endl;
        }
        
        else
            cout << "neither" << endl;
    }
}
