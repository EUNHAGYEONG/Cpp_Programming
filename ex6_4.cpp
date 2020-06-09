/*
디폴트 매개 변수를 가진 함수 만들기 연습
함수 f()를 호출하는 경우가 다음과 같을 때, f()를 디폴트 매개 변수를 가진 함수로 작성하라.

f();	// 한 줄에 빈칸을 10개 출력한다.
f('%')	// 한 줄에 '%'를 10개 출력한다.
f('@', 5);	// 5줄에 '@'를 10개 출력한다.
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