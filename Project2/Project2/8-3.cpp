#include <iostream>
#include <string>
using namespace std;

class TV
{
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV : public TV {
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size)
	{
		this->videoIn = videoIn;
	}
	bool getVideoIn(){ return videoIn; }
};

class SmartTV : public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr,bool videoIn, int size) : WideTV(size, videoIn) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	SmartTV htv("192.0.0.1", true, 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoin=" << boolalpha << htv.getVideoIn() << endl;
	cout << "ip=" << htv.getIpAddr() << endl;
}