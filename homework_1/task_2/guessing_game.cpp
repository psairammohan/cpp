#include <iostream>
#include <random>

int main()
{
    while(true)
    {
        std::random_device rd; //obtain a random number generator
        std::mt19937 gen(rd()); //seed the generator
        std::uniform_int_distribution<> distrib(0,99);

        int random_num = distrib(gen);
        int num;
        std::cin >> num;

        if(num > random_num)
        {
            std::cout << "It's number is smaller." << "\n";
        }

        else if(num < random_num)
        {
            std::cout << "It's number is larger." << "\n";
        }

        else
        {
            std::cout << "YOU WON !" << "\n";
            break;
        }
        
    }    

}