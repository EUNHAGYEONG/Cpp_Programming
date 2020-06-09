/*
영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라.
대문자는 모두 소문자로 집계하며, 텍스트 입력의 끝은 ';' 문자로 한다.
*/
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";

	char text[10000];	//영문 텍스트
	cin.getline(text, 10000, ';');	//영문 텍스트 입력

	int alpha[26] = { 0 };	//소문자 
	int total = 0;	//전체 알파벳 수
	for (int i=0; i < strlen(text); i++) {
		if (isalpha(text[i])) {
			total++;
			text[i] = tolower(text[i]);
			int pos = text[i] - 97;
			alpha[pos] += 1;
		}
	}

	cout << "총 알파벳 수 " << total << "\n\n";
	
	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << "(" << alpha[i] << ")" << "\t" << ": ";
		for (int j = 0; j < alpha[i]; j++)
			cout << "*";
		cout << "\n";
	}
}
*/