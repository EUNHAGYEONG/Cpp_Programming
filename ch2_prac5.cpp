//<Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를하면에 출력하라.
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "문자열을 입력하라(100개 미만).\n";
	string str;
	getline(cin, str);
	if (str.length() >= 100) {
		cout << "문자열 크기를 벗어났습니다. \n";
		getline(cin, str);
	}

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'x')
			cnt++;
	}

	cout << "x의 개수는 " << cnt << "\n";
}
*/