#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "이름을 입력하세요>>";
	int len;
	char name[11];
	cin >> name;

	if ((name[0] & 0x80) != 0x80) {
		len = strlen(name);
	}
	else {
		len = strlen(name) / 2;
	}

	cout << "이름은 " << name << "입니다.\n";
	cout << "이름의 길이는 " << len << "글자입니다.\n";


	system("pause");
}