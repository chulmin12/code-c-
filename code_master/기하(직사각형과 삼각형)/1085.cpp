#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int temp1  = min(x,y);
    int temp2 = min(w - x, h - y);
    cout << min(temp1 , temp2) << endl;
}
