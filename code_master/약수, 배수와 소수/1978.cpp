#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    vector<int> nums;
    
    int result = 0;
    
    for (int i = 0; i < num; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] > 1){
            int count = 0;
            for (int j = 1; j <= nums[i]; j++){
                if (nums[i] % j == 0)
                    count++;
            }
            if (count == 2){
                result++;
            }
        }
    }
    cout << result << endl;
}

