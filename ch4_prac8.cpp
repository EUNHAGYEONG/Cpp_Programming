/*
�ǽ� ���� 7�� ������ �����غ���.
����ڷκ��� ������ ���� ���� ������ �Է¹ް�, ���� ������ŭ �������� �Է¹޴� ������� �����϶�.
���� ������ ���� �������� �迭�� �Ҵ�޾ƾ� �Ѵ�.
*/
/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	cout << "���� ���� >> ";
	int num;
	cin >> num;

	Circle *circles = new Circle[num];

	int cnt = 0;
	for (int i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		int r;
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100)
			cnt++;
	}

	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.\n";

	delete[] circles;
}
*/