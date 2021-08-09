#include <iostream>
#include <string>

int main()
{
    std::string hello = "Hello";
    std::cout << hello << "\n";
    std::string name = "";
    std::cin >> name;
    std::cout << hello + ", " + name + "!" << "\n";
}