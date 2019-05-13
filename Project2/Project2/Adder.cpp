#include <iostream>
#include "Adder.h"
using namespace std;

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}

int Adder::process() {
	return op1 + op2;
}

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ��� >> ";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}