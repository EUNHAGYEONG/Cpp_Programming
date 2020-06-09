/*
������ ũ���� �迭�� ��ȯ�ϴ� ���� 2���� static ��� �Լ��� ���� ArryUtility2 Ŭ������ �����, �� Ŭ������ �̿��Ͽ� �Ʒ� ����� ���� ��µǵ��� ���α׷��� �ϼ��϶�.
*/
/*
#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int size);

	//s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����, �����ϴ� �迭�� ũ���
	//retSize�� ����. retSize�� 0�� ��� NULL ����
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int *s3 = new int[size * 2];
	for (int i = 0; i < size; i++)
		s3[i] = s1[i];

	for (int i = 0; i < size; i++)
		s3[i + size] = s2[i];

	return s3;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				s1[i] = 0;
				retSize--;
				break;
			}
		}
	}

	int* s3 = new int[retSize];
	int s3Index = 0;
	for (int i = 0; i < size; i++) {
		if (s1[i] != 0) {
			s3[s3Index] = s1[i];
			s3Index++;
		}
	}

	return s3;
}

int main()
{
	int size = 5;
	int& retSize = size;

	int* x = new int[size];
	cout << "������" << size << "\t�� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	int* y = new int[size];
	cout << "������" << size << "\t�� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++)
		cin >> y[i];

	cout << "��ģ ���� �迭�� ����Ѵ�.\n";
	int* result = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < size * 2; i++)
		cout << result[i] << " ";
	cout << "\n";

	result = ArrayUtility2::remove(x, y, 5, size);
	cout << "�迭x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << "\n";
	for (int i = 0; i < retSize; i++)
		cout << result[i] << " ";
	cout << "\n";
}
*/