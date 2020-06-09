/*
다수의 클래스를 선언하고 활용하는 간단한 문제이다.
더하기(+), 빼기(-), 곱하기(*), 나누기(/)를 수행하는 4개의 클래스 Add, Sub, Mul, Div를 만들고자 한다.
이들은 모두 공통으로 다음 멤버를 가니다.

int 타입 변수 a, b : 피연산자
void setValue(int x, int y) 함수 : 매개 변수 x, y를 멤버 a, b에 복사
int calculate() 함수 : 연산을 실행하고 결과 리턴

main() 함수는 Add, Sub, Mul, Div 클래스 타입의 객체 a, s, m, d를 생성하고, 아래와 같이 키보드로부터 두 개의 정수와 연산자를 입력받고, a, s, m, d 객체 중에서 연산을 처리할
객체의 setValue() 함수를 호출한 후, calculate()를 호출하여 결과를 화면에 출력한다.
프로그램은 무한 루프를 돈다.

클래스의 선언부와 구현부를 헤더 파일과 cpp 파일로 나누어 프로그램을 작성하라.
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
		cout << "두 정수와 연산자를 입력하세요>>";
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
			cout << "연산자를 잘못 입력하셨습니다.\n";
		}
	}
}
*/