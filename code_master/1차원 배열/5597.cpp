#include <iostream>

using namespace std;

int main()
{
    int number;
    int student[31] = {0};
    for (int i = 1; i <= 28; i++){
        cin >> number;
        student[i] = number;
    }
    
    for (int i = 1; i <=30; i++){
        if (!student[i]){
            cout << i << endl;
        }
    }
}
