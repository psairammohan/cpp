#include <string>

class Image
{
public:
	Image(const std::string& filename); //Data should be set in the constructor
	void Draw();
	~Image(); //Cleanup data in destructor(if needed)
private:
	int rows = 0;
	int cols = 0;
};

int main()
{
	Image image("filename.png");
	image.Draw();
	return 0;
}

//Definition starts with keyword "class"
//Classes has three access modifiers "public", "protected", "private".
//By default everythingin class is "private".
//Classes can contain data and functions.
//Accessing members can be done using "."
//Functions in classes(methods) can use data in private to manipulate data.
//There are two types of functions COnstrutors and Destructors
//Constructors used to create an instance of a class
//Destructors are used to destroy a instance of a class
//CamelCase - Google style
//All data must be private - Google style
//Use snake_case_ when accessing private data members with methods.
