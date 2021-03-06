/*
Person 클래스의 객체를 생성하는 main() 함수는 다음과 같다.

class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << "\n"; }
};

int main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}

생성자를 중복 작성하고 프로그램을 완성하라.
*/
/*
#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() { id = 1, weight = 20.5, name = "Grace"; }
	Person(int id, string name) { this->id = id; this->name = name; weight = 20.5; }
	Person(int id, string name, double weight) { this->id = id; this->name = name; this->weight = weight; }
	void show() { cout << id << ' ' << weight << ' ' << name << "\n"; }
};

int main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
*/