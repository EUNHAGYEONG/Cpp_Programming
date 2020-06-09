/*
원을 추상화한 Circle 클래스는 간단히 아래와 같다.

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원\n"; }
};

다음 연산이 가능하도록 연산자를 프렌드 함수로 작성하라.

int main()
{
	Circle a(5), b(4);
	++a;	//반지름을 1 증가시킨다.
	b = a++;	//반지름을 1 증가시킨다.
	a.show();
	b.show();
}
*/
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원\n"; }
	friend Circle& operator++ (Circle& op);
	friend Circle operator++ (Circle &op1, int op2);
};

Circle& operator++ (Circle& op) {
	op.radius++;
	return op;
}

Circle operator++ (Circle &op1, int op2) {
	Circle tmp = op1;
	op1.radius++;
	return tmp;
}

int main()
{
	Circle a(5), b(4);
	++a;	//반지름을 1 증가시킨다.
	b = a++;	//반지름을 1 증가시킨다.
	a.show();
	b.show();
}
*/