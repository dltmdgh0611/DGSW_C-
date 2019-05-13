#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름이 " << radius << " 인 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << " 인 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	//Circle waffle;
	Circle waffle(5);
	//Waffle.radius = 5;
	double area = waffle.getArea();
	cout << "waffle 면적은 " << area << " 입니다. " << endl;
}