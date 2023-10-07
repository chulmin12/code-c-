#include <iostream>

using namespace std;

int main()
{
    string str;
    int count = 0;
    while (count < 100){
        getline(cin, str);
        cout << str << endl;
        count++;
    }
}
