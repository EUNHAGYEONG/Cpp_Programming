/*
string 클래스를 이용하여 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇 개 있는지 출력하는 프로그램을 작성해보자.
문자열에서 'a'를 찾기 위해 string 클래스의 find() 멤버 함수를 이용하여 작성하라.
text.find('a', index);는 text 문자열의 index 위치부터 'a'를 찾아 문자열 내 인덱스를 리턴한다.
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "문자열 입력>> ";
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

	cout << "문자 a는 " << cnt << "개 있습니다.\n";
}
*/