/*
2+a를 위한 + 연산자 함수를 프렌드로 작성
2+a를 위한 operator+(int, Power) 연산자 함수를 외부 함수로 작성하고, Power 클래스에 프렌드로 선언하라.
operator+(int, Power) 함수가 Power 클래스의 private 멤버를 자유롭게 접근할 수 있다.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	friend Power operator+ (int op1, Power op2);
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power operator+ (int op1, Power op2) {
	op2.kick = op2.kick + op1;
	op2.punch = op2.punch + op1;

	return op2;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p1(3, 5), p2;
	p2 = 2 + p1;
	p2.show();
}
*/