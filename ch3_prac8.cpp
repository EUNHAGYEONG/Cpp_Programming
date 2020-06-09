/*
int 타입의 정수를 객체화한 Integer 클래스를 작성하라.
Integer의 모든 멤버 함수를 자동 인라인으로 작성하라.
Integer 클래스를 활용하는 코드는 다음과 같다.

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