/*
������ �����ϴ� << ������ �ۼ�
Power ��ü�� kick�� punch�� ������ ���ϴ� << �����ڸ� ��� �Լ��� �ۼ��϶�.
*/
/*
#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0);
	Power& operator<< (int op);
	void show();
};

Power::Power(int kick, int punch) {
	this->kick = kick;
	this->punch = punch;
}

Power& Power::operator<< (int op) {
	this->kick += op;
	this->punch += op;

	return *this;
}

void Power::show() {
	cout << "kick : " << kick << " punch : " << punch << "\n";
}

int main()
{
	Power p(1, 2);
	p << 3 << 5 << 6;
	p.show();
}
*/