/*
전위 ++ 연산자 작성
Power 객체를 1 증가시키는 전위 ++ 연산자를 Power 클래스의 operator++() 멤버 함수로 작성하라.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	Power& operator ++ ();
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power& Power::operator++ () {
	kick++;
	punch++;

	return *this;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p(3, 4);
	p.show();
	++p;
	p.show();
}
*/