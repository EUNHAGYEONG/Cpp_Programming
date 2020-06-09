/*
다음과 같이 선언된 정수를 저장하는 스택 클래스 MyIntStack을 구현하라.
MyIntStack 스택에 저장할 수 있는 정수의 최대 개수는 10이다.

#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack 클래스를 활용하는 코드와 실행 결과는 다음과 같다.
*/
/*
#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack::MyIntStack() {
	tos = 0;
};

bool MyIntStack::push(int n) {
	if (tos == 10)
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
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}

	cout << endl;
}
*/