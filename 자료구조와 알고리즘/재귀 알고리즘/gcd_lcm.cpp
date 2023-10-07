#include <iostream>
// C++ 17버전부터 사용가능
#include <numeric>

// 최대 공약수
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// 최소 공배수
int lcm(int a, int b)
{
    return a * b / gcd(a,b);
}

int main()
{
    // 정의된 함수 사용
    int gcd1 = gcd(10, 15);
    int lcm1 = lcm(10, 15);
    
    // STL numeric 사용
    int gcd2 = std::gcd(10, 15);
    int lcm2 = std::lcm(10, 15);
    
    std::cout << gcd1 << ", " << gcd2 << std::endl;
    std::cout << lcm1 << ", " << lcm2 << std::endl;
}
