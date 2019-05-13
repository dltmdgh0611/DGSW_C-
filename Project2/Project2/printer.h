#include <iostream>
#include <string>
using namespace std;
class Printer {
public:
	string model;
	string manufacturer;
	int printedCount, availableCount;
	Printer();
	void print(int pages);
};

class inkjetPrinter : public Printer {
	int availableInk = 10;
public:
	inkjetPrinter();
	void printInkJet(int pages);
};

class laserPrinter : public Printer {
	int availableToner = 20;
public:
	laserPrinter();
	void printLaser(int pages);
};

