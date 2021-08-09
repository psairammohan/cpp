#include <iostream>

int a = 0;

void scopes()
{
    std::cout << a << "\n";
}

int main()
{
    scopes();
    a = 5;
    std::cout << a << "\n";
}

