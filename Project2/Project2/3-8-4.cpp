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
	cout << "�������� " << radius << " �� �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << " �� �� ����" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	//Circle waffle;
	Circle waffle(5);
	//Waffle.radius = 5;
	double area = waffle.getArea();
	cout << "waffle ������ " << area << " �Դϴ�. " << endl;
}