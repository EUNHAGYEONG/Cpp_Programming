/*
중복된 생성자들을 디폴트 매개 변수를 이용한 간소화 연습
다음 클래스에 중복된 생성자를 디폴트 매개 변수를 가진 하나의 생성자로 작성하라.

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