#include <iostream>
#include <string>
using namespace std;

class A {
public:
	A() { cout << "A" << endl; }
	A(int x)
	{
		cout << "매개 A " << x << endl;
	}
};

class B : public A {
public:
	B() { cout << "B" << endl; }
	B(int x) {
		cout << "매개 B " << x << endl;
	}
};

int main() {
	B b;
}