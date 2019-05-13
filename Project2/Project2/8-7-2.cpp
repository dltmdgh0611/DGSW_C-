#include <stdio.h>
using namespace std;

class Person {
public:
	int id;
};
class Student : virtual public Person {};
class Worker : virtual public Person {};
class StudentWorker : public Student, public Worker
{
public : int getId() {return id;}
};