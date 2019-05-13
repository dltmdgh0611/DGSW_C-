#include <iostream>
#include "Calculator.h"
using namespace std;

Add::Add(){}
Sub::Sub(){}
Mul::Mul(){}
Div::Div(){}

int Add::calculate() {
	return op1 + op2;
}

void Add::setValue(int x,int y) {
	op1 = x; op2 = y;
}

int Sub::calculate() {
	return op1 - op2;
}

void Sub::setValue(int x, int y) {
	op1 = x; op2 = y;
}

int Mul::calculate() {
	return op1 * op2;
}

void Mul::setValue(int x, int y) {
	op1 = x; op2 = y;
}

int Div::calculate() {
	return op1 / op2;
}

void Div::setValue(int x, int y) {
	op1 = x; op2 = y;
}
