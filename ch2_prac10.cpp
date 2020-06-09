//문자열을 하나 입력받고 문자열의 부분 문자열을 다음과 같이 출력하는 프로그램을 작성하라.
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "문자열 입력>>";
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << "\n";
	}
}
*/