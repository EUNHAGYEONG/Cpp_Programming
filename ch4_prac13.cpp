/*
영문자로 구성된 텍스트에 대해 각 알파벳에 해당하는 문자가 몇 개인지 출력하는 히스토그램 클래스 Histogram을 만들어보자.
대문자는 모두 소문자로 변환하여 처리한다.
Histogram 클래스를 활용하는 사례와 실행 결과는 다음과 같다.

Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
elvisHisto.put("falling in love with you");
elvisHisto.putc('-');
elvisHisto.put("Elvis Preseley");
elvisHisto.print();
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
	int alphaAscii[26] = { 0 };
public:
	Histogram(string str);
	void put(string addStr);
	void putc(char addChar);
	void print();
};

Histogram::Histogram(string str) {
	this->str = str;
	str = str + "\n";
}

void Histogram::put(string addStr) {
	str = str + addStr;
}

void Histogram::putc(char addChar) {
	string addStr = string(addChar, 0);
	str = str + addStr;
}

void Histogram::print() {
	cout << str;
	int cnt = 0;

	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			cnt++;
			str[i] = tolower(str[i]);

			int alphaDigit = int(str[i])-97;
			alphaAscii[alphaDigit]++;
		}
	}

	cout << "\n" << "총 알파벳 수 " << cnt << "\n\n";

	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << "(" << alphaAscii[i] << ")\t" << ": ";
		for (int j = 0; j < alphaAscii[i]; j++)
			cout << "*";
		cout << "\n";
	}
}

int main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Preseley");
	elvisHisto.print();
}
*/