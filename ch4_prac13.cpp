/*
�����ڷ� ������ �ؽ�Ʈ�� ���� �� ���ĺ��� �ش��ϴ� ���ڰ� �� ������ ����ϴ� ������׷� Ŭ���� Histogram�� ������.
�빮�ڴ� ��� �ҹ��ڷ� ��ȯ�Ͽ� ó���Ѵ�.
Histogram Ŭ������ Ȱ���ϴ� ��ʿ� ���� ����� ������ ����.

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

	cout << "\n" << "�� ���ĺ� �� " << cnt << "\n\n";

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