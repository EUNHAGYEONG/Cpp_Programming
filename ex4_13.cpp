/*
문자열을 입력 받고 회전시키기
빈칸을 포함하는 문자열을 입력 받고, 한 문자씩 왼쪽으로 회전하도록 문자열을 변경하고 출력하라.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글 안됨)\n";
	getline(cin, str, '\n');

	for (int i = 0; i < str.length(); i++) {
		str = str.substr(1) + str.at(0);

		cout << str << "\n";
	}
}
*/