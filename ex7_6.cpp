/*
두 개의 Power 객체를 더하는 += 연산자 생성
두 Power 객체를 더하는 += 연산자를 Power 클래스의 operator+=() 멤버 함수로 작성하라.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	Power& operator +=(Power op2);
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power& Power::operator+= (Power op2) {
	this->kick = this->kick + op2.kick;
	this->punch = this->punch + op2.punch;

	return *this;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p1(1, 2), p2(3, 4);
	p1 += p2;

	p1.show();
}
*/