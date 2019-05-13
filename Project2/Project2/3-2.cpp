#include <iostream>
using namespace std;

class Rectangle {
	public:
		int width;
		int height;
		double getArea();
};

double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle chocolate;
	chocolate.width = 5;
	chocolate.height = 10;
	cout << "초콜릿의 면적은 " << chocolate.getArea() << endl;
	system("pause");
}