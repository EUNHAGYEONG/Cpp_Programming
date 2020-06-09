/*
클래스 Accumulator는 add() 함수를 통해 계속 값을 누저가는 클래스로서, 다음과 같이 선언된다.
Accumulator 클래스를 구현하라.

class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int get();
};

Accumulator는 다음과 같이 main() 함수에 의해 활용된다.

int main()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}
*/
/*
#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int get();
};

Accumulator::Accumulator(int value) {
	this->value = value;
}

Accumulator& Accumulator::add(int n) {
	value += n;

	return *this;
}

int Accumulator::get() {
	return value;
}

int main()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}
*/