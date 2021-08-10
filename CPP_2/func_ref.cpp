//Some bad example for function reference
#include <iostream>

int& Sum(int a ,int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a = Sum(1,2);
    std::cout << a << std::endl;
}