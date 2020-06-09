/*
히스토그램 클래스에 <<, ! 연산자 작성
히스토그램을 표현하는 Histogram 클래스를 만들고 <<. ! 연산자를 작성해보자.
Histogram 클래스는 영문자 알파벳만 다루며 대문자는 모두 소문자로 변환하여 처리한다.
Histogram 클래스를 활용하는 코드 사례는 다음과 같다.
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
public:
	Histogram(string text = " ");
	Histogram& operator<< (string text);
	Histogram& operator<< (char text);
	string getText();
	void operator! ();
};

Histogram::Histogram(string text) {
	this->text = text;
}

Histogram& Histogram::operator<< (string text) {
	this->text = this->text + text;

	return *this;
}

Histogram& Histogram::operator<< (char text) {
	this->text = this->text + text;

	return *this;
}

string Histogram::getText() {
	return text;
}

void Histogram::operator! () {
	cout << this->text << "\n\n";

	int alpha[26] = { 0 };
	int cnt = 0;
	for (int i = 0; i < text.length(); i++) {
		if (isalpha(text[i])) {
			cnt++;
			text[i] = tolower(text[i]);
			alpha[text[i] - 97]++;
		}
	}

	cout << "총 알파벳 수 " << cnt << "\n";
	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 97) << ":";
		for (int j = 0; j < alpha[i]; j++)
			cout << "*";
		cout << "\n";
	}
}

int main()
{
	Histogram song("Wise men say, \nonly fools rush in. But I can't help, \n");
	song << "falling" << " in love with you." << "- by ";
	song << 'k' << 'i' << 't';
	!song;
}
*/