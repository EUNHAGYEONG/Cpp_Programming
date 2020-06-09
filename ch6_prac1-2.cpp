/*
add() 함수를 호출하는 main() 함수는 다음과 같다.

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}

디폴트 매개 변수를 가진 하나의 add() 함수를 작성하고 프로그램을 완성하라.
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