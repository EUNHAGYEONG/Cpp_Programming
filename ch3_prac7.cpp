/*
���� 5���� �����Ͽ� �����ڸ� �̿��Ͽ� ¦�� Ȧ���� ������ �� �ֵ��� Selectable Random Ŭ������ �ۼ��ϰ� ¦�� 10��, Ȧ�� 10���� �����ϰ� �߻���Ű�� ���α׷��� �ۼ��϶�.
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

	cout << "-- 0���� 32767������ ¦�� ���� ���� 10 ��--\n";
	for (int i = 0; i < 10; i++)
		cout << random.EvenNext() << ' ';

	cout << endl << endl;

	cout << "-- 2���� 9 ������ ���� Ȧ�� ���� 10 �� --\n";
	for (int i = 0; i < 10; i++)
		cout << random.OddNextInRange(2, 9) << ' ';
}
*/