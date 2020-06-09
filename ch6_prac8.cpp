/*
����뿡 �ʿ��� ������ �����ϴ� Trace Ŭ������ ������.
������ ���迡 ���ϸ� ��Ƽ�½�ũ ���α׷��� �����ϰų� Ư���� ȯ�濡�� �۾��� ��, Visual Studio�� ����ſ� ���� �ҽ� ���� ����Ÿ� ������� ���ϴ� ��찡 ���� �־���,
�̶� ���� ���� ������ �����ϱ� ���� Trace Ŭ������ ����� ����Ͽ���.
Trace Ŭ������ Ȱ���ϴ� ���� ���α׷��� ����� �����Ͽ� Trace Ŭ������ �ۼ��ϰ� ��ü ���α׷��� �ϼ��϶�.
����� ������ 100���� �����Ѵ�.

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");	// ����� ���� ����
	c = a + b;
	Trace::put("f()", "�� ���");	// ����� ���� ����
	cout << "���� " << c << endl;
}

int main()
{
	Trace::put("main()", "���α׷� �����մϴ�");	// ����� ���� ����
	f();
	Trace::put("main()", "����");	// put()�� ù ��° �Ű� ������ �±��̰�
									// �� ��° �Ű� ������ ����� �����̴�.
	Trace::print("f()");	// "f()" �±׸� ���� ����� ������ ��� ����Ѵ�.
	Trace::print();	// ��� ����� ������ ����Ѵ�.
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Trace {
	static int index;
	static string debugArray[100];
	static string textArray[100];
public:
	static void put(string debug, string text);
	static void print(string debug = " ");
};

int Trace::index = 0;
string Trace::debugArray[100];
string Trace::textArray[100];

void Trace::put(string debug, string text) {
	if (index == 100)
		cout << "����� ���� �뷮 ����\n";

	debugArray[index] = debug;
	textArray[index] = text;

	index++;
}

void Trace::print(string debug) {
	if (debug == " ") {
		cout << "----- ��� Trace ������ ����մϴ�. -----\n";
		for (int i = 0; i < index; i++)
			cout << debugArray[i] << ":" << textArray[i] << "\n";
	}
	else {
		cout << "----- " << debug << "�±��� Trace ������ ����մϴ�. -----\n";
		for (int i = 0; i < index; i++) {
			if (debug == debugArray[i])
				cout << debugArray[i] << ":" << textArray[i] << "\n";
		}
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");	// ����� ���� ����
	c = a + b;
	Trace::put("f()", "�� ���");	// ����� ���� ����
	cout << "���� " << c << endl;
}

int main()
{
	Trace::put("main()", "���α׷� �����մϴ�");	// ����� ���� ����
	f();
	Trace::put("main()", "����");	// put()�� ù ��° �Ű� ������ �±��̰�
									// �� ��° �Ű� ������ ����� �����̴�.
	Trace::print("f()");	// "f()" �±׸� ���� ����� ������ ��� ����Ѵ�.
	Trace::print();	// ��� ����� ������ ����Ѵ�.
}
*/