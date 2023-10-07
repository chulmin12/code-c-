#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number, max = 0, count = 0;
    vector<int> numbers;
    for (int i = 0; i < 9; i++){
        cin >> number;
        numbers.push_back(number);
    }
    
    for (int i = 0; i < 9; i++){
        if (max < numbers[i]){
            max = numbers[i];
            count = i + 1;
        }
    }
    cout << max << endl;
    cout << count << endl;
}
