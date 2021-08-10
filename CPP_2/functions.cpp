#include <iostream>

//Function creates a scope
//Function has return type, parameters that we can pass
int Sum(int a ,int b)
{
    return a + b; //return statement
}

int main()
{
    std::cout << Sum(1,2) << "\n";// If a function has a return type it needs to be printed.
}