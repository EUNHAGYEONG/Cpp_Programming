/*
a+b�� ���� + ������ �Լ��� ������� �ۼ�
a+b�� ���� operator+(Power, Power) ������ �Լ��� �ܺ� �Լ��� �ۼ��ϰ�, Power Ŭ������ ������� �����϶�.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	friend Power operator+ (Power op1, Power op2);
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power operator+ (Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;

	return tmp;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p1(3, 5), p2(4, 7), p3;
	p3 = p1 + p2;
	p3.show();
}
*/