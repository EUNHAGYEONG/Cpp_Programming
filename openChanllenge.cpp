/*
������׷� Ŭ������ <<, ! ������ �ۼ�
������׷��� ǥ���ϴ� Histogram Ŭ������ ����� <<. ! �����ڸ� �ۼ��غ���.
Histogram Ŭ������ ������ ���ĺ��� �ٷ�� �빮�ڴ� ��� �ҹ��ڷ� ��ȯ�Ͽ� ó���Ѵ�.
Histogram Ŭ������ Ȱ���ϴ� �ڵ� ��ʴ� ������ ����.
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

	cout << "�� ���ĺ� �� " << cnt << "\n";
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