/*
���� 5���� �����Ͽ� ¦�� ������ �����ϰ� �߻���Ű�� EvenRandom Ŭ������ �ۼ��ϰ� EvenRandom Ŭ������ �̿��Ͽ� 10���� ¦���� �����ϰ� ����ϴ� ���α׷��� �ۼ��϶�.
0�� ¦���� ó���Ѵ�.
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

	cout << "-- 0���� 32767������ ���� ���� 10 �� --\n";
	for (int i = 0; i < 10; i++)
		cout << random.next() << ' ';

	cout << endl << endl;

	cout << "-- 2���� 10������ ���� ���� 10�� --\n";
	for (int i = 0; i < 10; i++)
		cout << random.nextInRange(2, 10) << ' ';
}
*/