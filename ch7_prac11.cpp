/*
���� Ŭ���� Stack�� �����, Ǫ��(push)������ << �����ڸ�, ��(pop)�� ���� >> �����ڸ�, ��� �ִ� ���������� �˱� ���� ! �����ڸ� �ۼ��϶�.
���� �ڵ带 main()���� �ۼ��϶�.

Stack stack;
	stack << 3 << 5 << 10;	// 3, 5, 10�� ������� ǥ��
	while (true) {
		if (!stack) break;	// ���� empty
		int x;
		stack >> x;	// ������ ž�� �ִ� ���� ��
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
	stack << 3 << 5 << 10;	// 3, 5, 10�� ������� ǥ��
	while (true) {
		if (!stack) break;	// ���� empty
		int x;
		stack >> x;	// ������ ž�� �ִ� ���� ��
		cout << x << ' ';
	}
	cout << "\n";
}
*/