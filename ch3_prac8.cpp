/*
int Ÿ���� ������ ��üȭ�� Integer Ŭ������ �ۼ��϶�.
Integer�� ��� ��� �Լ��� �ڵ� �ζ������� �ۼ��϶�.
Integer Ŭ������ Ȱ���ϴ� �ڵ�� ������ ����.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Integer {
	int number;
	
public:
	Integer(int n) { number = n; }
	Integer(string n) { number = stoi(n); }
	void set(int n) { number = n; }
	int get() { return number; }
	int isEven() {
		if (number % 2 == 0)
			return true;
		else
			return false;
	}
};

int main()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
*/