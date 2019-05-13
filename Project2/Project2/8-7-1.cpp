#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};

class multipler {
protected:
	int multiple(int a, int b) { return a * b; }
};

class divider {
protected : 
	int divide(int a, int b) { return a / b; }
};

class Calculator : public Adder, public Subtractor, public multipler, public divider {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op)
	{
	case '+': res = add(a, b); break;
	case '-': res = minus(a, b); break;
	case '*': res = multiple(a, b); break;
	case '/': res = divide(a, b); break;
	default:
		break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;
	cout << "3 * 6 = " << handCalculator.calc('*', 3, 6) << endl;
	cout << "60 / 12 = " << handCalculator.calc('/', 60, 12) << endl;
}