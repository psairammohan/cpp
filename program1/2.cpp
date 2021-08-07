#include <iostream> /* we use <> for system included files. This just copies pastes every that is there in the file 
"iostream" to the mentioned file*/ 

//We use "filename" for local include files

void print_hello()
{ 
    std::cout << "Hello, World" << std::endl; //This print output
}

//Every c++ program starts with a main

int main()
{
    print_hello();
    return 0; // Error code "0" means everything is OK
              //Error code 1 to 255 means failure.
}