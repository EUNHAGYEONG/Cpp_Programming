/*
sum() �Լ� �ߺ� ����
�Լ� sum()�� ȣ���ϴ� ��찡 ������ ���� �� sum()�� �ߺ� �����϶�.
sum()�� ù ��° �Ű� ������ �׻� �� ��° �Ű� �������� ���� ������ ���޵Ǵ� ������ �����Ѵ�.

sum(3, 5); // 3~5������ ���� ���Ͽ� ����
sum(3); // 0~3������ ���� ���Ͽ� ����
sum(100); // 0~100������ ���� ���Ͽ� ����
*/
/*
#include <iostream>
using namespace std;

int sum(int a, int b) {
	if (a >= b)
		return 0;
	
	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += i;

	return sum;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++)
		sum += i;

	return sum;
}

int main()
{
	cout << sum(3, 5) << "\n";
	cout << sum(3) << "\n";
	cout << sum(100) << "\n";
}
*/