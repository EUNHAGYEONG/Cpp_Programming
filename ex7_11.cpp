/*
2+a�� ���� + ������ �Լ��� ������� �ۼ�
2+a�� ���� operator+(int, Power) ������ �Լ��� �ܺ� �Լ��� �ۼ��ϰ�, Power Ŭ������ ������� �����϶�.
operator+(int, Power) �Լ��� Power Ŭ������ private ����� �����Ӱ� ������ �� �ִ�.
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