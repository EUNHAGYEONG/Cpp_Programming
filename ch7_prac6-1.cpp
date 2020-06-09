/*
2���� ����� �߻�ȭ�� Matrix  Ŭ������ �ۼ��ϰ�, show() ��� �Լ��� ���� ������ �����ϵ��� �����ڸ� ��� �����϶�.

Matrix = a(1, 2, 3, 4), b(2, 3, 4, 5), c;
c = a + b;
a += b;
a.show();
b.show();
c.show();
if (a == c)
	cout << "a and c are the same\n";

������ �Լ��� Matrix�� ��� �Լ��� �����϶�.
*/
/*
#include <iostream>
using namespace std;

class Matrix {
	int num[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0);
	Matrix operator+ (Matrix op);
	bool operator== (Matrix op);
	Matrix& operator+= (Matrix op);
	void show();
};

Matrix::Matrix(int a, int b, int c, int d) {
	num[0] = a;
	num[1] = b;
	num[2] = c;
	num[3] = d;
}

Matrix Matrix::operator+ (Matrix op) {
	Matrix tmp;
	for (int i = 0; i < 4; i++)
		tmp.num[i] = this->num[i] + op.num[i];

	return tmp;
}

bool Matrix::operator== (Matrix op) {
	if (this->num[0] == op.num[0] && this->num[1] == op.num[1] &&
		this->num[2] == op.num[2] && this->num[3] == op.num[3])
		return true;
	else
		return false;
}

Matrix& Matrix::operator+= (Matrix op) {
	for (int i = 0; i < 4; i++)
		this->num[i] += op.num[i];

	return *this;
}

void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++)
		cout << num[i] << " ";
	cout << "}\n";
}

int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same\n";
}
*/