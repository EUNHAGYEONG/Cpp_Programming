// ���� C���α׷��� C++ ���α׷����� �����Ͽ� �����϶�. �� ���α׷��� ���� ����� �������� 11�� ����.
/*
//C
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int sum();

int main() {
	int n = 0;
	printf("�� ���� �Է��ϼ���>>");
	scanf("%d", &n);
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum(1, n));
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}

	return res;
}
*/
/*
#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << " �Դϴ�.\n";
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}

	return res;
};
*/