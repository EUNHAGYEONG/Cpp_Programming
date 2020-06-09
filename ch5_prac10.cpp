/*
참조를 리턴하는 코드를 작성해보자.
다음 코드와 실행 결과를 참고하여 append() 함수를 작성하고 전체 프로그램을 완성하라.
append()는 Buffer 객체에 문자열을 추가하고 Buffer 객체에 대한 참조를 반환하는 함수이다.

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += text; }
	void print() { cout << text << endl; }
};

int main()
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}
*/
/*
#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer &b, string s) {
	b.add(s);

	return b;
}

int main()
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}
*/