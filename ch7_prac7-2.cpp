/*
2차원 행렬을 추상화한 Matrix 클래스를 활용하는 다음 코드가 있다.

Matrix a(4, 3, 2, 1), b;
int x[4], y[4] = { 1, 2, 3, 4 };
a >> x;	//a의 각 원소를 배열 x에 복사, x[]는 {4, 3, 2, 1}
b << y;	//배열 y의 원소 값을 b의 각 원소에 설정

for (int i = 0; i < 4; i++)
	cout << x[i] << ' ';	//x[] 출력
cout << "\n";
b.show();

<<, >> 연산자 함수를 Matrix의 프렌드 함수로 구현하라.
*/
/*
#include <iostream>
using namespace std;

class Matrix {
	int num[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0);
	friend void operator>> (Matrix op1, int* op2);
	friend Matrix& operator<< (Matrix& op1, int* op2);
	void show();
};

Matrix::Matrix(int a, int b, int c, int d) {
	num[0] = a;
	num[1] = b;
	num[2] = c;
	num[3] = d;
}

void operator>> (Matrix op1, int* op2) {
	for (int i = 0; i < 4; i++)
		op2[i] = op1.num[i];
}

Matrix& operator<< (Matrix& op1, int* op2) {
	for (int i = 0; i < 4; i++)
		op1.num[i] = op2[i];

	return op1;
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
	a >> x;	//a의 각 원소를 배열 x에 복사, x[]는 {4, 3, 2, 1}
	b << y;	//배열 y의 원소 값을 b의 각 원소에 설정

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';	//x[] 출력
	cout << "\n";
	b.show();
}
*/