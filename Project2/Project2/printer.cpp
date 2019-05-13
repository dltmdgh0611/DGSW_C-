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
	manufacturer = "삼성";
	availableToner = 20;
	availableCount = 3;
}

void Printer::print(int pages) {
	cout << pages;
}

void inkjetPrinter::printInkJet(int pages) {
	availableCount -= pages;
	availableInk -= pages;
	cout << model << ", " << manufacturer << ", " << "남은 종이" << availableCount << "장, 남은 잉크" << availableInk << endl;
}

void laserPrinter::printLaser(int pages) {
	availableCount -= pages;
	availableToner -= pages/2;
	cout << model << ", " << manufacturer << ", " << "남은 종이" << availableCount << "장, 남은 토너" << availableToner << endl;
}

