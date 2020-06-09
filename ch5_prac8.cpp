/*
���� 5���� MyIntStack�� �����Ͽ� ������ ���� �����Ͽ���.
���ÿ� ������ �� �ִ� ������ �ִ� ������ �����ڿ��� �־����� size ����� �����Ѵ�.
MyIntStack Ŭ������ �ۼ��϶�.

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

MyIntStack Ŭ������ Ȱ���ϴ� �ڵ�� ���� ����� ������ ����.
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
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}
*/