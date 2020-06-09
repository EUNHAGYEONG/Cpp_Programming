/*
big() 함수 중복 연습
큰 수를 리턴하는 다음 두 개의 big 함수를 중복 구현하라.

int big(int a, int b);
int big(int a[], int size);
*/
/*
#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int big(int a[], int size) {
	int max = a[0];
	for (int i = 0; i < size; i++) {
		if (max < a[i])
			max = a[i];
	}

	return max;
}

int main()
{
	cout << big(3, 5) << "\n";
	
	int num[] = { 1, 2, 3, 4, 5, 6, 7 };
	cout << big(num, 7);
}
*/