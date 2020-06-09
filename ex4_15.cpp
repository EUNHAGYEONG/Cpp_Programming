/*
문자열 find 및 replace
& 키가 입력될 때까지 여러 줄의 영문 문자열을 입력 받고, 찾는 문자열과 대치할 문자열을 각각 입력 받아 문자열을 변경하라.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다.\n";
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