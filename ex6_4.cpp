/*
����Ʈ �Ű� ������ ���� �Լ� ����� ����
�Լ� f()�� ȣ���ϴ� ��찡 ������ ���� ��, f()�� ����Ʈ �Ű� ������ ���� �Լ��� �ۼ��϶�.

f();	// �� �ٿ� ��ĭ�� 10�� ����Ѵ�.
f('%')	// �� �ٿ� '%'�� 10�� ����Ѵ�.
f('@', 5);	// 5�ٿ� '@'�� 10�� ����Ѵ�.
*/
/*
#include <iostream>
using namespace std;

void f() {
	for (int i = 0; i < 10; i++)
		cout << " ";
	cout << "\n";
}

void f(char c) {
	for (int i = 0; i < 10; i++)
		cout << c;
	cout << "\n";
}

void f(char c, int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << "\n";
	}
}

int main()
{
	f();
	f('%');
	f('@', 5);
}
*/