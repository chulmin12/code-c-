#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());
    
    if (str == reverse_str)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}
