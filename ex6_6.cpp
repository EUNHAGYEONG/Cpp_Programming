/*
�ߺ��� �����ڵ��� ����Ʈ �Ű� ������ �̿��� ����ȭ ����
���� Ŭ������ �ߺ��� �����ڸ� ����Ʈ �Ű� ������ ���� �ϳ��� �����ڷ� �ۼ��϶�.

class MyVector {
	int* p;
	int size;
public:
	MyVector() {
		p = new int[100];
		size = 100;
	}
	MyVector(int n) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};
*/
/*
#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

int main()
{
	MyVector* p1, * p2;
	p1 = new MyVector();
	p2 = new MyVector(200);
}
*/