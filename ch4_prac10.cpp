/*
다음에서 Person은 사람을, Family는 가족을 추상화한 클래스로서 완성되지 않은 클래스이다.

class Person {
	string name;
public:
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	int size;
public:
	Family(string name, int size);
	void show();
	~Family();
};

다음 main()이 작동하도록 Person과 Family 클래스에 필요한 멤버들을 추가하고 코드를 완성하라.

int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
*/
/*
#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person() {};
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	int size;
	string name;
public:
	Family() {};
	Family(string name, int size);
	void setName(int number, string name);
	void show();
	~Family();
};

Family::Family(string name, int size) {
	this->name = name;
	this->size = size;
	p = new Person[size];
}

void Family::setName(int number, string name) {
	p[number] = { name };
}

void Family::show() {
	cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";
}

Family::~Family() {
	delete[] p;
}

int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
*/