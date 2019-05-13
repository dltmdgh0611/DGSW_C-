#include <iostream>
using namespace std;

class Circle {
	public:
		int radius;
		double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	cin >> donut.radius;
	double area = donut.getArea();
	cout << "donut 면적은" << area << endl;

	Circle pizza;
	cin >> pizza.radius;
	area = pizza.getArea();
	cout << "pizza 면적은" << area << endl;
	system("pause");
}
