#include <iostream>

using namespace std;

int main()
{
    int alphabat[26] = {0,};
    string str;
    cin >> str;
    int cnt = 0;
    
    for (int i = 0; i < str.size(); i++){
        int n = str[i];
        if (n < 97)
            alphabat[n - 65]++;
        else
            alphabat[n - 97]++;
    }
    
    int max = 0, max_idex = 0;
    
    for (int i = 0; i < 26; i++){
        if (max < alphabat[i]){
            max = alphabat[i];
            max_idex = i;
        }
    }
    
    for (int i = 0; i < 26; i++){
        if (max == alphabat[i])
            cnt++;
    }
    if (cnt > 1){
        cout << "?" << endl;
    }
    else
        cout << (char)(max_idex + 65) << endl;
}


