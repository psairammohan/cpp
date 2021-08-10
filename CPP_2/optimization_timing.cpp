#include <iostream>
#include <chrono>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    int i;
    for(i = 0;i < 1000;++i)
    {
        
    }
    std::cout << i << "\n";
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = end - start;
    std::cout << duration.count() << "s" << std::endl;
    
}