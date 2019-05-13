#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int l);
	~Rectangle();
	bool isSquare();
};

Rectangle::Rectangle() {
	width = height = 1;
	cout << "사각형 가로:  " << width << "세로 : " << height << " 생성" << endl;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
	cout << "사각형 가로:  " << width << "세로 : " << height << " 생성" << endl;
}

Rectangle::Rectangle(int l) {
	width = height = l;
	cout << "사각형 가로:  " << width << "세로 : " << height << " 생성" << endl;
}

Rectangle::~Rectangle() {
	cout << "사각형 가로:  " << width << "세로 : " << height << " 소멸" << endl;
}

bool Rectangle::isSquare() {
	if (width == height) return 1;
	else return 0;
}

Rectangle rect1(5);
Rectangle rect2;

void b() {
	Rectangle rect3(7);
	Rectangle rect4(9,17);
}

int main() {
	Rectangle rect5;
	Rectangle rect6(3, 5);
	b();
	
	return 0;

}