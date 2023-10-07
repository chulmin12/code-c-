#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;
// car -> radio -> orange -> ear -> radio
// 끝말잇기 게임에서 중복된 단어를 말했는지 체크하는 코드
int main()
{
    unordered_set<string> words;
    words.insert("car");
    words.insert("radio");
    words.insert("orange");
    words.insert("ear");
    
    // 중복이 되는지 확인하는 위치
    string word = "radio";
    if (words.find(word) != words.end()){
        cout << word << " is used!" << endl;
    }
    else{
        cout << word << " is NOT used!" << endl;
    }
    
    vector<int> numbers {1, 5, 3, 1, 5, 7, 4, 5, 6, 3, 2, 7, 3, 6, 2};
    unordered_set<int> num_set(numbers.begin(), numbers.end());
    // 중복되지 않은 개수를 구할 수 있음
    cout << num_set.size() << endl;
}
