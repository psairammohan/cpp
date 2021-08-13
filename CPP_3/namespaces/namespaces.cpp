#include <iostream>
#include <cmath>

using std::cout;// Good practice other than "using namespace std;"
using std::endl;

int pow(int base, int exp)
{
	int result = 1;
	for(int i = 0; i < exp; ++i)
	{
		result = result * base;
	}
	return result;
}

int main()
{
	cout << pow(2,10) << endl;
	return 0;
}

//Never use using namespaces in header files(.h)
//use explict namespace even in .cpp files 