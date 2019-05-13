#include <iostream>
#include "printer.h"
using namespace std;

int main() {
	inkjetPrinter ink;
	laserPrinter laser;
	int choice, amount;
	char c;
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	cout << "잉크젯 : "; ink.printInkJet(0);
	cout << "레이저젯 : "; laser.printLaser(0);
	
	while (1) {
		cout << "프린터(1:잉크젯, 2:레이저젯)와 매수 입력 >> ";
		cin >> choice >> amount;
		
		if (choice = '1') {
			
			if (amount > ink.availableCount)
			{
				cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
				ink.printInkJet(0);
				laser.printLaser(0);
			}
			else {
				cout << "프린트하였습니다." << endl;
				ink.printInkJet(amount);
				laser.printLaser(0);
			}
		}
		else {
			if (amount > laser.availableCount)
			{
				cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
				ink.printInkJet(0);
				laser.printLaser(0);
			}
			else {
				cout << "프린트하였습니다." << endl;
				ink.printInkJet(0);
				laser.printLaser(amount);
			}
			
		}
		cout << "계속 프린트하시겠습니까(y/n)? >> ";
		cin >> c;
		if (c == 'n') break;
	}
}
