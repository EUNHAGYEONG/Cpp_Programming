/*
���ڿ� find �� replace
& Ű�� �Էµ� ������ ���� ���� ���� ���ڿ��� �Է� �ް�, ã�� ���ڿ��� ��ġ�� ���ڿ��� ���� �Է� �޾� ���ڿ��� �����϶�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�.\n";
	string str;
	getline(cin, str, '&');
	cin.ignore();

	cout << "\n";

	cout << "find: ";
	string find;
	getline(cin, find, '\n');

	cout << "replace: ";
	string replace;
	getline(cin, replace, '\n');

	int startIndex = 0;
	while (true) {
		int findIndex = str.find(find, startIndex);
		if (findIndex == -1)
			break;

		str.replace(findIndex, find.length(), replace);
		startIndex = findIndex + replace.length();
	}

	cout << str << "\n";
}
*/