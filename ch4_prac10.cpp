/*
�������� Person�� �����, Family�� ������ �߻�ȭ�� Ŭ�����μ� �ϼ����� ���� Ŭ�����̴�.

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

���� main()�� �۵��ϵ��� Person�� Family Ŭ������ �ʿ��� ������� �߰��ϰ� �ڵ带 �ϼ��϶�.

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
	cout << name << "������ ������ ���� " << size << "�� �Դϴ�.\n";
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