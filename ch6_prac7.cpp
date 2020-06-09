/*
������ ���� static ����� ���� Random Ŭ������ �ϼ��϶�(Open Challenge ��Ʈ ����).
�׸��� Random Ŭ������ �̿��Ͽ� ������ ���� ������ ���� ����ϴ� main() �Լ��� �ۼ��϶�.
main()���� Random Ŭ������ seed() �Լ��� Ȱ���϶�.

class Random {
public:
	//�׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(NULL)); }	// ���� ����
	static int nextInt(int min = 0, int max = 32767);	// min�� max ������ ���� ���� ����
	static char nextAlphabet();	// ���� ���ĺ� ���� ����
	static double nextDouble();	// 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
};
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Random {
public:
	//�׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(NULL)); }	// ���� ����
	static int nextInt(int min = 0, int max = 32767);	// min�� max ������ ���� ���� ����
	static char nextAlphabet();	// ���� ���ĺ� ���� ����
	static double nextDouble();	// 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
};

int Random::nextInt(int min, int max) {
	return (rand() % (min + max + 1) + min);
}

char Random::nextAlphabet() {
	char alphbet = rand() % 26 + 97;
	int num = rand() % 2;

	if (num == 1)
		alphbet = toupper(alphbet);

	return alphbet;
}

double Random::nextDouble() {
	return (rand() / (double)(RAND_MAX + 1)); // 0���� 32767�� ������ 32768�� ������ �Ǽ��� ���´�
}

int main()
{
	Random r;
	r.seed();

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�.\n";
	for (int i = 0; i < 10; i++)
		cout << r.nextInt(1, 100) << " ";
	cout << "\n";

	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�.\n";
	for (int i = 0; i < 10; i++)
		cout << r.nextAlphabet() << " ";
	cout << "\n";

	cout << "������ �Ǽ��� 10���� ����մϴ�.\n";
	for (int i = 0; i < 10; i++) {
		cout << r.nextDouble() << " ";
		if (i == 4)
			cout << "\n";
	}
	cout << "\n";
}
*/