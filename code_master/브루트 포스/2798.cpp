#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<int> cards;
    
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        cards.push_back(a);
    }
    
    sort(cards.begin(),cards.end());
    
    int max_sum = 0;
    int res = 0;
    
    for (int i = N - 1; i > 1; i--){
        for (int j = i - 1; j > 0; j--){
            for (int k = j - 1; k >= 0; k--){
                max_sum = cards[i] + cards[j] + cards[k];
                if (max_sum <= M && max_sum > res)
                    res = max_sum;
            }
        }
    }
    cout << res << endl;
}
