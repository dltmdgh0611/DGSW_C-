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
	cout << "돈 " << money_private << " 원 생성" << endl;
}

Money::Money(int r) {
	money_private = r;
	cout << "돈 " << money_private << " 원 생성" << endl;
}

double Money::getArea() {
	return money_private -50;
}

int main() {
	//Money money1;
	//money1.money_public -= 50;
	//cout << "보호된 계좌에 있는 돈은" << money1.money_public << " 원 입니다. " << endl;
	Money money2(1000);
	int money2sum = money2.getArea();
	cout << "공개된 계좌에 있는 돈은" << money2sum << " 원 입니다. " << endl;
}