/*
문제 8번의 Circle 객체에 대해 다음 연산이 가능하도록 연산자를 구현하라.

int main()
{
	Circle a(5), b(4);
	b = 1 + a;
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
	friend Circle operator+(int op1, Circle op2);
};

Circle operator+(int op1, Circle op2) {
	Circle tmp;
	tmp.radius = op1 + op2.radius;

	return tmp;
}

int main()
{
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}
*/