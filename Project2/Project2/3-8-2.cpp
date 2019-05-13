#include <iostream>
using namespace std;

class Divide {
	int n1, n2;
public:
	Divide();
	Divide(int i, int j);
	Divide(int i);
	~Divide();
	bool isDiv();
};

Divide::Divide() {
	n1 = n2 = 1;
	cout << "³ª´°¼À " << n1 <<"/"<< n2 << " »ý¼º" << endl;
}

Divide::Divide(int i, int j) {
	n1 = i;
	n2 = j;
	cout << "³ª´°¼À " << n1 << "/" << n2 << " »ý¼º" << endl;
}

Divide::Divide(int i) {
	n1 = n2 = i;
	cout << "³ª´°¼À " << n1 << "/" << n2 << " »ý¼º" << endl;
}

Divide::~Divide() {
	cout << "³ª´°¼À " << n1 << "/" << n2 << " ¼Ò¸ê" << endl;
}


bool Divide::isDiv() {
	if (n2 == 0) {
		return 0;
	}
	else return 1;
}
Divide div1(3, 0);
Divide div2(5);

void a() {
	Divide div3;
	Divide div4(10,2);
}

int main() {
	
	Divide div5;
	Divide div6(6, 0);
	a();
	return 0;
}