/*
string Ŭ������ �̿��Ͽ� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��غ���.
���ڿ����� 'a'�� ã�� ���� string Ŭ������ find() ��� �Լ��� �̿��Ͽ� �ۼ��϶�.
text.find('a', index);�� text ���ڿ��� index ��ġ���� 'a'�� ã�� ���ڿ� �� �ε����� �����Ѵ�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���ڿ� �Է�>> ";
	string str;
	getline(cin, str, '\n');

	int startIndex = 0;
	int cnt = 0;
	while (true) {
		int findIndex = str.find('a', startIndex);
		if (findIndex == -1)
			break;

		cnt++;
		startIndex = findIndex + 1;
	}

	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.\n";
}
*/