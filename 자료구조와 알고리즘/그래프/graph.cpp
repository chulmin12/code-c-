#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> get_adj_list(const vector<vector<int>>& adj_matrix)
{
    // 인접 리스트를 저장할 벡터 생성
    vector<vector<int>> adj_list(adj_matrix.size());
    
    // 행번호에 해당하는 정점과 인접해 있는 정점번호를 푸시
    for (int u = 0; u < adj_matrix.size(); u++){
        for (int v = 0; v < adj_matrix.size(); v++){
            if (adj_matrix[u][v] == 1)
                adj_list[u].push_back(v);
        }
    }
    return adj_list;
}
/*
// 인접 리스트 (adjacency list)
 vector<vector<int>> adj_list = {
    {1, 3, 4},
    {0, 2, 4},
    {1, 5},
    {0, 4},
    {0, 1, 3},
    {2}
 };
 
*/

int main()
{
    // 인접 행렬 (adjacency matrix)
    vector<vector<int>> adj_matrix = {
        {0, 1, 0, 1, 1, 0},
        {1, 0, 1, 0, 1, 0},
        {0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0},
        {1, 1, 0, 1, 0, 0},
        {0, 0, 1, 0, 0, 0}
        
    };
    
    vector<vector<int>> adj_list = get_adj_list(adj_matrix);
    
    for (const auto& l : adj_list){
        for (const auto n : l)
            cout << n << ", ";
        cout << endl;
    }
}

