/*
�� ���� Power ��ü�� ���ϴ� += ������ ����
�� Power ��ü�� ���ϴ� += �����ڸ� Power Ŭ������ operator+=() ��� �Լ��� �ۼ��϶�.
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