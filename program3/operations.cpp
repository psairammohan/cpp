#include <iostream>

int main()
{
    std::cout << 7/3 << std::endl;
    std::cout << 7.0/3.0 << std::endl;
    int a = 0;
    int b = 0;
    b = a++;
    std::cout << b << std::endl;
    std::cout << a << std::endl;
    int c = 0;
    int d = 0;
    c = ++d;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
}