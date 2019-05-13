#include <iostream>
#include "3-3Circle.h"
using namespace std;

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "도넛 면적은 ";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "피자 면적은 ";
	cout << area << endl;
}