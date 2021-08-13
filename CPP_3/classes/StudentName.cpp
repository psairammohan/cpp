#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class StudentName
{
public:
	StudentName(string name): name_{name} {}
	const string& name() const { return name_; }
private:
	string name_;

};

void PrintName(const StudentName& student)
{
	cout << student.name() << endl;
}

int main()
{
	return 0;
}