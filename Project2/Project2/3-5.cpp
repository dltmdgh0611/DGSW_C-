#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point();
	Point(int a, int b);
	void show(){ cout << "(" << x << ", " << y << ")" << endl; }

};

//1
Point::Point() { x = 0; y = 0; }//���� ������
Point::Point(int a, int b) { x = a; y = b; }//Ÿ�� ������

int main() {
	Point origin;
	Point target(1, 2);
	origin.show();
	target.show();

	system("pause");
	
}