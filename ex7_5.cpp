/*
두 개의 Power 객체를 비교하는 == 연산자 작성
두 Power 객체를 비교하는 == 연산자를 Power 클래스의 operator==() 멤버 함수로 작성하라.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	bool operator == (Power op2);
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

bool Power::operator ==(Power op2) {
	if ((this->kick == op2.kick) && (this->punch == op2.punch))
		return true;
	else
		return false;
}

int main()
{
	Power p1(3, 5);
	Power p2(3, 5);
	Power p3(4, 6);

	if (p1 == p2)
		cout << "p1, p2 두 파워가 같습니다.\n";
	if (p2 == p3)
		cout << "p2, p3 두 파워가 같습니다.\n";
}
*/