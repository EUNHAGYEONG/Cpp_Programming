/*
string �迭�� ���ڿ� Ű �Է� ����
5���� string �迭�� �����ϰ� getline() ���� �Լ��� �̿��Ͽ� ���ڿ��� �Է¹޾� ���� ������ ���� �ڿ� ������ ���ڿ��� ����϶�.
���ڿ� �񱳴� <, > �����ڸ� ������ �̿��ϸ� �ȴ�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[5];
	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin, str[i], '\n');
	}

	for (int i = 0; i < 4; i++) {
		if (str[i] > str[4])
			str[4] = str[i];
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << str[4] << "\n";
}
*/