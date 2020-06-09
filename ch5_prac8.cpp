/*
문제 5번의 MyIntStack를 수정하여 다음과 같이 선언하였다.
스택에 저장할 수 있는 정수의 최대 개수는 생성자에서 주어지고 size 멤버에 유지한다.
MyIntStack 클래스를 작성하라.

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack 클래스를 활용하는 코드와 실행 결과는 다음과 같다.
*/
/*
#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack::MyIntStack() {
	tos = 0;
}

MyIntStack::MyIntStack(int size) {
	tos = 0;
	this->size = size;
	p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack& s) {
	this->size = s.size;
	this->tos = s.tos;
	p = new int[size];
}

MyIntStack::~MyIntStack() {
	delete[] p;
}

bool MyIntStack::push(int n) {
	if (tos == size)
		return false;
	p[tos] = n;
	tos += 1;
	return true;
}

bool MyIntStack::pop(int& n) {
	if (tos == 0)
		return false;
	n = p[tos - 1];
	tos -= 1;
	return true;
}

int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}
*/