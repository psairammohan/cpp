#include <string>
using std::string

class StudentClass
{
public:
	StudentClass(int id, string name): id_{id}, name_{name} {}
	int id() const { return id_; }
	const string& name() const{ return name_ }
private:
	int id_;
	string name_;
};
