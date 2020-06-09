/*
스택 클래스 Stack을 만들고, 푸시(push)용으로 << 연산자를, 팝(pop)을 위해 >> 연산자를, 비어 있는 스택인지를 알기 위해 ! 연산자를 작성하라.
다음 코드를 main()으로 작성하라.

Stack stack;
	stack << 3 << 5 << 10;	// 3, 5, 10을 순서대로 표시
	while (true) {
		if (!stack) break;	// 스택 empty
		int x;
		stack >> x;	// 스택의 탑에 있는 정수 팝
		cout << x << ' ';
	}
	cout << "\n";
}
*/
/*
#include <iostream>
using namespace std;

class Stack {
	int stack[10];
	int top;
public:
	Stack stack() {
		top = 0;
	}
	Stack& operator<< (int num);
	bool operator! ();
	int operator>> (int &num);
};

Stack& Stack::operator<< (int num) {
	stack[top] = num;
	top++;

	return *this;
}

bool Stack::operator! () {
	if (top == 0)
		return true;
	else
		false;
}

int Stack::operator>> (int& num) {
	num = stack[top - 1];
	top--;

	return num;
}

int main()
{
	Stack stack;
	stack << 3 << 5 << 10;	// 3, 5, 10을 순서대로 표시
	while (true) {
		if (!stack) break;	// 스택 empty
		int x;
		stack >> x;	// 스택의 탑에 있는 정수 팝
		cout << x << ' ';
	}
	cout << "\n";
}
*/