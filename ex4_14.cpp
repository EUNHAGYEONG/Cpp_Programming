/*
���ڿ� ó�� ���� - ���� ���ڿ��� �Է¹޾� ���� ����
4+125+4+77+102 ������ ǥ���� ���� ���� ���ڿ��� �Է¹޾� ����ϴ� ���α׷� �ۼ��϶�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���.\n";
	string str;
	getline(cin, str, '\n');

	int startIndex = 0;
	int sum = 0;
	while (true) {
		int findIndex = str.find('+', startIndex);
		if (findIndex == -1)
			break;

		sum += stoi(str.substr(startIndex, findIndex - 1));
		cout << str.substr(startIndex, findIndex - 1) << "\n";
		startIndex = findIndex + 1;
	}

	cout << "���ڵ��� ���� " << sum << "\n";
}
*/