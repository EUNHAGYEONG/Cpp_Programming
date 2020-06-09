/*
Power 클래스에 ! 연산자 작성
! 연산자를 Power 클래스의 멤버 함수로 작성하라.
!a는 a의 kick과 punch가 모두 0이면 true, 아니면 false를 리턴하는 것으로 정의한다.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	bool operator! ();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

bool Power::operator! () {
	if (kick == 0 && punch == 0)
		return true;
	else
		return false;
}

int main()
{
	Power p1(3, 4), p2;
	if (!p1)
		cout << "p1 kick, punch 둘 다 0\n";
	if (!p2)
		cout << "p2 kick, punch 둘 다 0\n";
}
*/