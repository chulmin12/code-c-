#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, in;
    vector<int> array;
    cin >> a >> b;
    for (int i = 0; i < a; i++){
        cin >> in;
        array.push_back(in);
    }
    for (int i = 0; i < array.size(); i++){
        if (array[i] < b){
            cout << array[i] << " ";
        }
    }
    cout << endl;
}


