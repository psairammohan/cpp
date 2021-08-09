#include <iostream>
#include <array>

int main()
{
    std::array<float,3> arr = {4.0f, 5.0f, 8.0f};
    std::cout << arr.front() << "\n";
    std::cout << arr.back() << "\n";
    std::cout << arr.size() << "\n";
}