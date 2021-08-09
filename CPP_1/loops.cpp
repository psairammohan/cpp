#include <iostream>

int main()
{
    int i = 0;
    while(i < 10)
    {
        i++;
        std::cout << i << "\n";
    }
    
    const int count = 10; 
    for(int i = 0;i < count;++i)
    {
        std::cout << i << "\n";
    }
}