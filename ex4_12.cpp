/*
string 배열과 문자열 키 입력 응용
5개의 string 배열을 선언하고 getline() 전역 함수를 이용하여 문자열을 입력받아 사전 순으로 가장 뒤에 나오는 문자열을 출력하라.
문자열 비교는 <, > 연산자를 간단히 이용하면 된다.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[5];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, str[i], '\n');
	}

	for (int i = 0; i < 4; i++) {
		if (str[i] > str[4])
			str[4] = str[i];
	}

	cout << "사전에서 가장 뒤에 나오는 문자열은 " << str[4] << "\n";
}
*/