/*
string Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� �� ���� �Է¹ް� ���� �ϳ��� �����ϰ� �����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
*/
/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n" << ">>";
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