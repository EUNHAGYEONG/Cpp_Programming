/*
두 개의 Power 객체를 더하는 + 연산자 작성
두 Power 객체를 더하는 + 연산자를 Power 클래스의 operator+() 멤버 함수로 작성하라.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	Power operator+ (Power op2);
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power Power::operator+(Power op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;

	return tmp;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p1(3, 5), p2(4, 6), p3;
	p3 = p1 + p2;
	p3.show();
}
*/