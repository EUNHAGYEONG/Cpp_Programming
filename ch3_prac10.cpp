/*
�ټ��� Ŭ������ �����ϰ� Ȱ���ϴ� ������ �����̴�.
���ϱ�(+), ����(-), ���ϱ�(*), ������(/)�� �����ϴ� 4���� Ŭ���� Add, Sub, Mul, Div�� ������� �Ѵ�.
�̵��� ��� �������� ���� ����� ���ϴ�.

int Ÿ�� ���� a, b : �ǿ�����
void setValue(int x, int y) �Լ� : �Ű� ���� x, y�� ��� a, b�� ����
int calculate() �Լ� : ������ �����ϰ� ��� ����

main() �Լ��� Add, Sub, Mul, Div Ŭ���� Ÿ���� ��ü a, s, m, d�� �����ϰ�, �Ʒ��� ���� Ű����κ��� �� ���� ������ �����ڸ� �Է¹ް�, a, s, m, d ��ü �߿��� ������ ó����
��ü�� setValue() �Լ��� ȣ���� ��, calculate()�� ȣ���Ͽ� ����� ȭ�鿡 ����Ѵ�.
���α׷��� ���� ������ ����.

Ŭ������ ����ο� �����θ� ��� ���ϰ� cpp ���Ϸ� ������ ���α׷��� �ۼ��϶�.
*/
/*
#include <iostream>
using namespace std;

#include "Calculator.h"

int main()
{	
	Add add;
	Sub sub;
	Mul mul;
	Div div;

	while (1) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		int num1, num2;
		char op;
		cin >> num1 >> num2 >> op;

		if (op == '+') {
			add.setValue(num1, num2);
			cout << add.calculate() << "\n";
		}

		else if (op == '-') {
			sub.setValue(num1, num2);
			cout << sub.calculate() << "\n";
		}

		else if (op == '*') {
			mul.setValue(num1, num2);
			cout << mul.calculate() << "\n";
		}

		else if (op == '/') {
			div.setValue(num1, num2);
			cout << div.calculate() << "\n";
		}

		else {
			cout << "�����ڸ� �߸� �Է��ϼ̽��ϴ�.\n";
		}
	}
}
*/