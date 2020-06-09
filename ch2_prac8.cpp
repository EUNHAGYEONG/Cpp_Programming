// 한 라인에 ';'으로 5개의 이름을 구분하여 입력받아, 각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요 \n";
	cout << ">>";
	char name[100];
	int max = 0;
	string longname;
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";

		int length = strlen(name);
		if (max < length) {
			max = length;
			longname = name;
		}
	}

	cout << "가장 긴 이름은 " << longname << "\n";
}
*/