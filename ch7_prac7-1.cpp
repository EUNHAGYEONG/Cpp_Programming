/*
2���� ����� �߻�ȭ�� Matrix Ŭ������ Ȱ���ϴ� ���� �ڵ尡 �ִ�.

Matrix a(4, 3, 2, 1), b;
int x[4], y[4] = { 1, 2, 3, 4 };
a >> x;	//a�� �� ���Ҹ� �迭 x�� ����, x[]�� {4, 3, 2, 1}
b << y;	//�迭 y�� ���� ���� b�� �� ���ҿ� ����

for (int i = 0; i < 4; i++)
	cout << x[i] << ' ';	//x[] ���
cout << "\n";
b.show();

<<, >> ������ �Լ��� Matrix�� ��� �Լ��� �����϶�.
*/
/*
#include <iostream>
using namespace std;

class Matrix {
	int num[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0);
	void operator>> (int* numArray);
	Matrix& operator<< (int* numArray);
	void show();
};

Matrix::Matrix(int a, int b, int c, int d) {
	num[0] = a;
	num[1] = b;
	num[2] = c;
	num[3] = d;
}

void Matrix::operator>> (int* numArray) {
	for (int i = 0; i < 4; i++)
		numArray[i] = num[i];
}

Matrix& Matrix::operator<< (int* numArray) {
	for (int i = 0; i < 4; i++)
		num[i] = numArray[i];

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
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;	//a�� �� ���Ҹ� �迭 x�� ����, x[]�� {4, 3, 2, 1}
	b << y;	//�迭 y�� ���� ���� b�� �� ���ҿ� ����

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';	//x[] ���
	cout << "\n";
	b.show();
}
*/