/*
Circle �迭�� ���� ���� �� ��ȯ ����
���� ������ �Է¹ް� Circle �迭�� ���� �����϶�.
������ ���� �Է¹޾� Circle �迭�� �����ϰ�, ������ 100���� 200 ������ ���� ������ ����϶�.
*/
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

void Circle::setRadius(int r) {
	radius = r;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int num;
	cin >> num;

	Circle* circle = new Circle[num];
	Circle* p = circle;

	for (int i = 0; i < num; i++) {
		cout << "��" << i + 1 << ": ";
		int radius;
		cin >> radius;

		p->setRadius(radius);
		p++;
	}

	int cnt = 0;
	for (int i = 0; i < num; i++) {
		cout << circle[i].getArea() << " ";

		if ((circle[i].getArea() >= 100) && (circle[i].getArea() <= 200))
			cnt++;
	}

	cout << "\n";
	cout << "������ 100���� 200 ������ ���� ������ " << cnt << "\n";
	delete[] circle;
}
*/