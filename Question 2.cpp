#include <iostream>
using namespace std;

class Car
{
private:
	string Brand;
	string Model;
	int Year;
public:
	void setBrand(string b) {
		Brand = b;
	}
	void setModel(string m) {
		Model = m;
	}
	void setYear(int y) {
		Year = y;
	}

	void displayInfo() {
		cout << Brand << endl;
		cout << Model << endl;
		cout << Year << endl;
	}
};

int main()
{
	Car c;

	c.setBrand("BMW");
	c.setModel("M5");
	c.setYear(2025);

	c.displayInfo();
}
