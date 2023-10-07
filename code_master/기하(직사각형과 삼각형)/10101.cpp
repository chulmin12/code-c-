#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B >> C;
    
    if ((A + B + C) != 180)
        cout << "Error" << endl;
    else if (A==B && B==C)
        cout <<"Equilateral" << endl;
    else if (A==B || A==C || B==C)
        cout  <<"Isosceles" << endl;
    else
        cout <<"Scalene" << endl;
    
}
