#include <iostream>
#include <string>
using namespace std;

class Product {
	int id;
	string info;
	string productor;
	int price;
};

class Book : public Product {
	int isbnNumber;
	string writer;
	string BookName;
};

class CompactDisc : public Product {
	string AlbumName;
	string singerName;
};

class ConversationBook : public Book {
	string language;
};

int main() {
	int fs, ss;
	while (1)
	{
		cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ� *****" << endl << "��ǰ �߰� (1), ��� ��ǰ ��ȸ(2), ������(3) ? ";
		cin >> fs;
		switch (fs)
		{
		case 1:
			cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ? ";
			cin >> ss;
			switch (ss)
			{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				break;
			}
			break;
		case 2:
			cout << "b";
			break;
		default:
			break;
		}
		
	}
}