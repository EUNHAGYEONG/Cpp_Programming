/*
문자열 처리 응용 - 덧셈 문자열을 입력받아 덧셈 실행
4+125+4+77+102 등으로 표현된 덧셈 식을 문자열로 입력받아 계산하는 프로그램 작성하라.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요.\n";
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

	cout << "숫자들의 합은 " << sum << "\n";
}
*/