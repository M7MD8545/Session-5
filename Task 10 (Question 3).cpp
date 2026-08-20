#include <iostream>
using namespace std;

class Rectangle
{
private:
	int Length;
	int Width;
public:
	void setLength(int l) {
		Length = l;
	}
	void setWidth(int w) {
		Width = w;
	}

	int calculateArea() {
		int area = Length * Width;
		return area;
	}
};

int main()
{
	Rectangle x;

	x.setLength(50);
	x.setWidth(10);

	cout << x.calculateArea() << endl;
}
