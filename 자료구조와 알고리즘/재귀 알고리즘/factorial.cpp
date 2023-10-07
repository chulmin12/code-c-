#include <iostream>

using namespace std;

// factorial(20)이 값이 크기 때문에 int형으로 불가능
long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    cout << factorial(5) << endl; // 120
    cout << factorial(10) << endl; // 3628800
    cout << factorial(20) << endl; // 2432902008176640000
}

