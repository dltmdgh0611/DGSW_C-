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
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

Rectangle::Rectangle(int l) {
	width = height = l;
}

Rectangle::~Rectangle() {
	cout << "����, ����" << width << ", " << height << " �� �簢�� �Ҹ�" << endl;
}

bool Rectangle::isSquare() {
	if (width == height) return 1;
	else return 0;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
	return 0;

}