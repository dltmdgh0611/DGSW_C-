#include <iostream>
using namespace std;

class Divide {
	int n1, n2;
public:
	Divide();
	Divide(int i,int j);
	Divide(int i);
	bool isDiv();
};

Divide::Divide() {
	n1 = n2 = 1;
}

Divide::Divide(int i,int j) {
	n1 = i;
	n2 = j;
}

Divide::Divide(int i) {
	n1 = n2 = i;
}

bool Divide::isDiv() {
	if (n2 == 0) {
		return 0;
	}
	else return 1;
}

int main() {
	Divide div1;
	Divide div2(6,0);
	Divide div3(3);

	if (div1.isDiv()) cout << "div1´Â ³ª´°¼À °¡´É." << endl;
	if (div2.isDiv()) cout << "div2´Â ³ª´°¼À °¡´É." << endl;
	if (div3.isDiv()) cout << "div3´Â ³ª´°¼À °¡´É." << endl;
	system("pause");

}