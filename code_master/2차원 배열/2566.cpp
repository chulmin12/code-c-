#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int max = 0;
    int index1 = 0, index2 = 0;
    vector<vector<int>> arr(9, vector<int>(9, 0));
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> arr[i][j];
            
            if (arr[i][j] > max){
                max = arr[i][j];
                index1 = i;
                index2 = j;
            }
        }
    }
    cout << max << endl;
    cout << index1 + 1<< " " << index2 + 1 << endl;
    
}
