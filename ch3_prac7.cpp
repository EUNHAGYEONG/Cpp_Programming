/*
문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있도록 Selectable Random 클래스를 작성하고 짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int EvenNext();
	int EvenNextInRange(int a, int b);
	int OddNext();
	int OddNextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(NULL));
}

int SelectableRandom::EvenNext() {
	int n = rand();
	if (n % 2 != 0)
		return n * 2;
	else
		return n;
}

int SelectableRandom::EvenNextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 != 0)
		return n * 2;
	else
		return n;
}

int SelectableRandom::OddNext() {
	int n = rand();
	if (n % 2 == 0)
		return n - 1;
	else
		return n;
}

int SelectableRandom::OddNextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 == 0)
		return n - 1;
	else
		return n;
}

int main()
{
	SelectableRandom random;

	cout << "-- 0에서 32767까지의 짝수 랜덤 정수 10 개--\n";
	for (int i = 0; i < 10; i++)
		cout << random.EvenNext() << ' ';

	cout << endl << endl;

	cout << "-- 2에서 9 까지의 램덤 홀수 정수 10 개 --\n";
	for (int i = 0; i < 10; i++)
		cout << random.OddNextInRange(2, 9) << ' ';
}
*/