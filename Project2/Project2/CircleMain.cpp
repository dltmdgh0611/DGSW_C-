#include <iostream>
#include "3-3Circle.h"
using namespace std;

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "���� ������ ";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "���� ������ ";
	cout << area << endl;
}