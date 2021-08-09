#include <iostream>

int main()
{
    int num = 1;
    int &num_ref = num;//references point to same memory location.
    std::cout << "num :" << num << " numref :" << num_ref << "\n";
    num_ref = 2;
    std::cout << "num :" << num << " numref :" << num_ref << "\n";
    return 0;
}