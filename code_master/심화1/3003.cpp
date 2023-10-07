#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> chess {1, 1, 2, 2, 2, 8};
    
    vector<int> User_chess;
    for (int i = 0; i < chess.size(); i++){
        int num;
        cin >> num;
        User_chess.push_back(num);
    }
        
    
    vector<int> sum ;
    
    for (int i = 0; i < chess.size(); i++){
        sum.push_back(chess[i] - User_chess[i]);
    }
    
    for (auto n : sum)
        cout << n << " ";
    cout << endl;
}
