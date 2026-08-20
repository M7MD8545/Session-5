#include <iostream>
using namespace std;

class Student
{
private:
	string Name;
	int Age;
	string University;
public:
	void setName (string n) {
		Name = n;
	}
	void setAge(int a) {
		Age = a;
	}
	void setUniversity(string u) {
		University = u;
	}

	string getName() {
		return Name;
	}
	int getAge() {
		return Age;
	}
	string getUniversity() {
		return University;
	}


};

int main()
{
	Student s;

	s.setName("Mohamed");
	s.setAge(20);
	s.setUniversity("Alexandria");

	cout << s.getName() << endl;
	cout << s.getAge() << endl;
	cout << s.getUniversity() << endl;
}
