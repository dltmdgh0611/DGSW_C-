#include <iostream>
#include "3-3Circle.h"
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius;
	cout << "�� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius;
	cout << "�� ����" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}