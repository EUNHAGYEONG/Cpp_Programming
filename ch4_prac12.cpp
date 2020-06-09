/*
������ �̸��� �������� �Ӽ����� ���� Circle Ŭ������ �̵��� �迭�� �����ϴ� CircleManager Ŭ�����̴�.

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

Ű���忡�� ���� ������ �Է¹ް�, �� ������ŭ ���� �̸��� �������� �Է¹ް�, ������ ���� ����ǵ��� main() �Լ��� �ۼ��϶�.
Circle, CircleManager Ŭ������ �ϼ��϶�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		string name;
		int radius;
		cin >> name >> radius;

		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	string name;
	cin >> name;

	int buffer = 0;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << "������ ������ " << p[i].getArea() << "\n";
			buffer = 1;
			break;
		}
	}

	if (buffer == 0)
		cout << "�̸��� �߸� �Է��ϼ̽��ϴ�.\n";
}

void CircleManager::searchByArea() {
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	int minArea;
	cin >> minArea;

	int cnt = 0;
	cout << minArea << "���� ū ���� �˻��մϴ�.\n";
	for (int i = 0; i < size; i++) {
		if (minArea < p[i].getArea())
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << "\t";
	}
}

int main()
{
	cout << "���� ���� >> ";
	int num;
	cin >> num;

	CircleManager c(num);

	c.searchByName();
	c.searchByArea();
}
*/