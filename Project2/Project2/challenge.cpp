#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "�̸��� �Է��ϼ���>>";
	int len;
	char name[11];
	cin >> name;

	if ((name[0] & 0x80) != 0x80) {
		len = strlen(name);
	}
	else {
		len = strlen(name) / 2;
	}

	cout << "�̸��� " << name << "�Դϴ�.\n";
	cout << "�̸��� ���̴� " << len << "�����Դϴ�.\n";


	system("pause");
}