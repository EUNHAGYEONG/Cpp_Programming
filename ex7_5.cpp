/*
�� ���� Power ��ü�� ���ϴ� == ������ �ۼ�
�� Power ��ü�� ���ϴ� == �����ڸ� Power Ŭ������ operator==() ��� �Լ��� �ۼ��϶�.
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
		cout << "p1, p2 �� �Ŀ��� �����ϴ�.\n";
	if (p2 == p3)
		cout << "p2, p3 �� �Ŀ��� �����ϴ�.\n";
}
*/