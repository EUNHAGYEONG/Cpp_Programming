/*
string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 입력받고 글자 하나만 랜덤하게 수정하여 출력하는 프로그램을 작성하라.
*/
/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n" << ">>";
	string str;

	while (true) {
		srand((unsigned)time(NULL));
		getline(cin, str, '\n');

		if (str == "exit")
			break;

		int randNum = rand() % (str.length());
		int randChar = rand() % 26 + 97;
		
		str[randNum] = randChar;
		cout << str << "\n";
	}
}
*/