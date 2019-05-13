#include <iostream>
#include "printer.h"
using namespace std;

Printer::Printer() {}

inkjetPrinter::inkjetPrinter() {
	model = "Officejet v40";
	manufacturer = "HP";
	availableInk = 10;
	availableCount = 5;
}

laserPrinter::laserPrinter() {
	model = "SCX-6x45";
	manufacturer = "�Ｚ";
	availableToner = 20;
	availableCount = 3;
}

void Printer::print(int pages) {
	cout << pages;
}

void inkjetPrinter::printInkJet(int pages) {
	availableCount -= pages;
	availableInk -= pages;
	cout << model << ", " << manufacturer << ", " << "���� ����" << availableCount << "��, ���� ��ũ" << availableInk << endl;
}

void laserPrinter::printLaser(int pages) {
	availableCount -= pages;
	availableToner -= pages/2;
	cout << model << ", " << manufacturer << ", " << "���� ����" << availableCount << "��, ���� ���" << availableToner << endl;
}

