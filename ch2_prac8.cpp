// �� ���ο� ';'���� 5���� �̸��� �����Ͽ� �Է¹޾�, �� �̸��� ����� ȭ�鿡 ����ϰ� ���� �� �̸��� �Ǻ��϶�.
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ��� \n";
	cout << ">>";
	char name[100];
	int max = 0;
	string longname;
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";

		int length = strlen(name);
		if (max < length) {
			max = length;
			longname = name;
		}
	}

	cout << "���� �� �̸��� " << longname << "\n";
}
*/