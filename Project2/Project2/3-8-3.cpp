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
	cout << "�簢�� ����:  " << width << "���� : " << height << " ����" << endl;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
	cout << "�簢�� ����:  " << width << "���� : " << height << " ����" << endl;
}

Rectangle::Rectangle(int l) {
	width = height = l;
	cout << "�簢�� ����:  " << width << "���� : " << height << " ����" << endl;
}

Rectangle::~Rectangle() {
	cout << "�簢�� ����:  " << width << "���� : " << height << " �Ҹ�" << endl;
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