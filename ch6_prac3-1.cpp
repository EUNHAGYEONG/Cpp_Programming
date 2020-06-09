/*
함수 big()을 호출하는 경우는 다음과 같다.

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << "\n";
}

디폴트 매개 변수를 가진 하나의 함수로 big()을 작성하고 프로그램을 완성하라.
*/
/*
#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	if (a > b) {
		if (a > c)
			return c;
		else
			return a;
	}
	else {
		if (b > c)
			return c;
		else
			return b;
	}
}

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << "\n";
}
*/