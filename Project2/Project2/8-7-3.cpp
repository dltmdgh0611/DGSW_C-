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
		cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl << "상품 추가 (1), 모든 상품 조회(2), 끝내기(3) ? ";
		cin >> fs;
		switch (fs)
		{
		case 1:
			cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
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