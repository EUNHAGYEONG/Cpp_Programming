/*
++ 연산자 함수를 프렌드로 작성
전위 ++과 후위 ++를 위한 연산자 함수를 외부 함수로 작성하고, Power 클래스에 프렌드로 선언하라.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	friend Power& operator++ (Power& op);
	friend Power operator++ (Power& op1, int op2);
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power& operator++ (Power& op) {
	op.kick++;
	op.punch++;
	return op;
}

Power operator++ (Power& op1, int op2) {
	Power tmp = op1;
	op1.kick++;
	op1.punch++;

	return tmp;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p1(3, 4), p2;
	p1.show();
	p2.show();
	cout << "\n\n";
	p2 = ++p1;
	p1.show();
	p2.show();
	cout << "\n\n";
	p2 = p1++;
	p1.show();
	p2.show();
}
*/