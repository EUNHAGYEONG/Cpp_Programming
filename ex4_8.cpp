/*
Circle ��ü�� ���� ���� �� ��ȯ ����
���� ������ �������� �Է¹ް� Circle ��ü�� ���� �����Ͽ� ������ ����϶�.
������ �ԷµǸ� ���α׷��� �����Ѵ�.
*/
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
	~Circle();
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << "\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << "\n";
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << "\n";
}

int main()
{
	while (1) {
		cout << "���� ������ �Է�(�����̸� ����)>> ";
		int radius;
		cin >> radius;
		if (radius < 0)
			break;

		Circle *circle = new Circle(radius);
		cout << "���� ������ " << circle->getArea() << "\n";
		delete circle;
	}
}
*/