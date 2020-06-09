/*
문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고 EvenRandom 클래스를 이용하여 10개의 짝수를 랜덤하게 출력하는 프로그램을 작성하라.
0도 짝수로 처리한다.
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(NULL));
}

int EvenRandom::next() {
	int n = rand();
	if (n % 2 != 0)
		return n * 2;
	else
		return n;
}

int EvenRandom::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 != 0)
		return n * 2;
	else
		return n;
}

int main()
{
	EvenRandom random;

	cout << "-- 0에서 32767까지의 랜덤 정수 10 개 --\n";
	for (int i = 0; i < 10; i++)
		cout << random.next() << ' ';

	cout << endl << endl;

	cout << "-- 2에서 10까지의 랜덤 정수 10개 --\n";
	for (int i = 0; i < 10; i++)
		cout << random.nextInRange(2, 10) << ' ';
}
*/