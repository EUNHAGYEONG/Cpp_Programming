/*
add() �Լ��� ȣ���ϴ� main() �Լ��� ������ ����.

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}

����Ʈ �Ű� ������ ���� �ϳ��� add() �Լ��� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
*/
/*
#include <iostream>
using namespace std;

int add(int num1[], int size, int num2[] = NULL) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += num1[i];
		if (num2 != NULL)
			sum += num2[i];
	}

	return sum;
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}
*/