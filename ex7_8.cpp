/*
���� ++ ������ �ۼ�
Power ��ü�� 1 ������Ű�� ���� ++ �����ڸ� Power Ŭ������ operator++() ��� �Լ��� �ۼ��϶�.
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