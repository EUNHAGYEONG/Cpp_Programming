/*
�� ���� Circle ��ü�� ��ȯ�ϴ� swap() �Լ��� '������ ���� ȣ��'�� �ǵ��� �ۼ��ϰ� ȣ���ϴ� ���α׷��� �ۼ��϶�.
*/
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	int getRadius();
}; 

int Circle::getRadius() {
	return radius;
}

void swap(Circle &a, Circle &b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	Circle c1(10);
	Circle c2(20);

	swap(c1, c2);

	cout << c1.getRadius() << " " << c2.getRadius() << "\n";
}
*/