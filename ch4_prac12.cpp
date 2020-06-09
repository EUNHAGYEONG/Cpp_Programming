/*
다음은 이름과 반지름을 속성으로 가진 Circle 클래스와 이들을 배열로 관리하는 CircleManager 클래스이다.

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

키보드에서 원의 개수를 입력받고, 그 개수만큼 원의 이름과 반지름을 입력받고, 다음과 같이 실행되도록 main() 함수를 작성하라.
Circle, CircleManager 클래스도 완성하라.
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
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
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
	cout << "검색하고자 하는 원의 이름 >> ";
	string name;
	cin >> name;

	int buffer = 0;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << "도넛의 면적은 " << p[i].getArea() << "\n";
			buffer = 1;
			break;
		}
	}

	if (buffer == 0)
		cout << "이름을 잘못 입력하셨습니다.\n";
}

void CircleManager::searchByArea() {
	cout << "최소 면적을 정수로 입력하세요 >> ";
	int minArea;
	cin >> minArea;

	int cnt = 0;
	cout << minArea << "보다 큰 원을 검색합니다.\n";
	for (int i = 0; i < size; i++) {
		if (minArea < p[i].getArea())
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << "\t";
	}
}

int main()
{
	cout << "원의 개수 >> ";
	int num;
	cin >> num;

	CircleManager c(num);

	c.searchByName();
	c.searchByArea();
}
*/