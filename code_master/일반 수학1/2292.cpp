#include <iostream>

using namespace std;
// 등비수열 이용함
int main()
{
    int find_room;
    cin >> find_room;
    int count_room = 1;
    int start = 1;
    int end = 1;
    while(find_room >= start){
        
        for (int i = start; i <= end; i++){ // 2 7,
            if (find_room == i){
                cout << count_room << endl;
                break;
            }
        }
        start = end + 1;  // 8
        end = (6 * count_room) + end; // 19  18 +
        //cout << end << endl;
        count_room++;  // 3
    }
    
    
}
