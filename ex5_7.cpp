/*
���� �Ű� ������ ���� �Լ� ����� ����
Ű����κ��� ������ ���� �о� Circle ��ü�� �������� �����ϴ� readRadius() �Լ��� �ۼ��϶�.
*/
/*
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << "\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << "\n";
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << "\n";
}

void readRadius(Circle &c) {
	cout << "���� ������ �������� �Է��ϼ���>>";
	int r;
	cin >> r;
	c.setRadius(r);
}

int main()
{
	Circle circle(10);
	readRadius(circle);

	cout << "circle�� ���� = " << circle.getArea() << "\n";
}
*/