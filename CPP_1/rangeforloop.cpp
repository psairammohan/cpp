#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec = {"Hello" ,"World"};
    std::vector<float> vec1 = {1.2f ,1.3f};

    for(const float& num : vec1)
    {
        std::cout << num << std::endl;
    }

    for(const auto& word : vec)
    {
        std::cout << word << std::endl;
    }
    
    for(int i = 0;i < vec.size();i++)
    {
        std::cout << vec[i] << "\n";
    }
}