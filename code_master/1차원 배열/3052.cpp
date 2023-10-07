#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    int numbers[42] = {0,};
    for (int i = 0 ; i < 10; i++){
        cin >> num;
        numbers[num % 42]++;
    }
    
    for (int i = 0 ; i < 42; i++){
        if (numbers[i] != 0){
            count++;
        }
    }
    cout << count << endl;
}
