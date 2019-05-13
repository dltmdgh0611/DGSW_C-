#include <iostream>
using namespace std;

class Money {
private:
	int money_private = 100;
public:
	int money_public = 100;
	Money();
	Money(int r);
	double getArea();
};

Money::Money() {
	money_private = 1;
	cout << "�� " << money_private << " �� ����" << endl;
}

Money::Money(int r) {
	money_private = r;
	cout << "�� " << money_private << " �� ����" << endl;
}

double Money::getArea() {
	return money_private -50;
}

int main() {
	//Money money1;
	//money1.money_public -= 50;
	//cout << "��ȣ�� ���¿� �ִ� ����" << money1.money_public << " �� �Դϴ�. " << endl;
	Money money2(1000);
	int money2sum = money2.getArea();
	cout << "������ ���¿� �ִ� ����" << money2sum << " �� �Դϴ�. " << endl;
}