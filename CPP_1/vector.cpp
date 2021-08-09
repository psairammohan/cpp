#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {2,3};
    vec.push_back(5);
    vec.emplace_back(6);
    for(int i = 0;i < vec.size();i++)
    {
        std::cout << vec[i] << "\n";
    }
}