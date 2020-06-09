/*
2차원 행렬을 추상화한 Matrix  클래스를 작성하고, show() 멤버 함수와 다음 연산이 가능하도록 연산자를 모두 구현하라.

Matrix = a(1, 2, 3, 4), b(2, 3, 4, 5), c;
c = a + b;
a += b;
a.show();
b.show();
c.show();
if (a == c)
	cout << "a and c are the same\n";

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

연산자 함수를 Matrix의 프렌드 함수로 구현하라.
*/
/*
#include <iostream>
using namespace std;

class Matrix {
	int num[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0);
	friend Matrix operator+ (Matrix op1, Matrix op2);
	friend Matrix& operator+= (Matrix& op1, Matrix op2);
	void show();
	friend bool operator== (Matrix op1, Matrix op2);
};

Matrix::Matrix(int a, int b, int c, int d) {
	num[0] = a;
	num[1] = b;
	num[2] = c;
	num[3] = d;
}

Matrix operator+ (Matrix op1, Matrix op2) {
	Matrix tmp;
	for (int i = 0; i < 4; i++)
		tmp.num[i] = op1.num[i] + op2.num[i];

	return tmp;
}

Matrix& operator+= (Matrix& op1, Matrix op2) {
	for (int i = 0; i < 4; i++)
		op1.num[i] += op2.num[i];
	return op1;
}

void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++)
		cout << num[i] << " ";
	cout << "}\n";
}

bool operator== (Matrix op1, Matrix op2) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		if (op1.num[i] == op2.num[i])
			return true;
	}
	return false;
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
	else
		cout << "not same\n";
}
*/