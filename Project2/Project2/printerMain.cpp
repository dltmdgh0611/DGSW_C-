#include <iostream>
#include "printer.h"
using namespace std;

int main() {
	inkjetPrinter ink;
	laserPrinter laser;
	int choice, amount;
	char c;
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	cout << "��ũ�� : "; ink.printInkJet(0);
	cout << "�������� : "; laser.printLaser(0);
	
	while (1) {
		cout << "������(1:��ũ��, 2:��������)�� �ż� �Է� >> ";
		cin >> choice >> amount;
		
		if (choice = '1') {
			
			if (amount > ink.availableCount)
			{
				cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
				ink.printInkJet(0);
				laser.printLaser(0);
			}
			else {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				ink.printInkJet(amount);
				laser.printLaser(0);
			}
		}
		else {
			if (amount > laser.availableCount)
			{
				cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
				ink.printInkJet(0);
				laser.printLaser(0);
			}
			else {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				ink.printInkJet(0);
				laser.printLaser(amount);
			}
			
		}
		cout << "��� ����Ʈ�Ͻðڽ��ϱ�(y/n)? >> ";
		cin >> c;
		if (c == 'n') break;
	}
}
