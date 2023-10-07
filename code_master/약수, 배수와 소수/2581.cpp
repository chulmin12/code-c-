#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    
    vector<int> nums;
    
    for (int i = M; i <= N; i++){
        if(i > 1){
            int count = 0;
            for (int j = 1; j <= N; j++){
                if (i % j == 0){
                    count++;
                }
            }
            if (count == 2){
                nums.push_back(i);
            }
        }
    }
    if (nums.empty()){
        cout << "-1" << endl;
    }
    
    else {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int min = *min_element(nums.begin(), nums.end());
        
        cout << sum << endl;
        cout << min << endl;
    }
}
