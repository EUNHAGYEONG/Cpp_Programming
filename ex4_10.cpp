/*
Circle 배열의 동적 생성 및 반환 응용
원의 개수를 입력받고 Circle 배열을 동적 생성하라.
반지름 값을 입력받아 Circle 배열에 저장하고, 면적이 100에서 200 사이인 원의 개수를 출력하라.
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
	cout << "생성하고자 하는 원의 개수?";
	int num;
	cin >> num;

	Circle* circle = new Circle[num];
	Circle* p = circle;

	for (int i = 0; i < num; i++) {
		cout << "원" << i + 1 << ": ";
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
	cout << "면적이 100에서 200 사이인 원의 개수는 " << cnt << "\n";
	delete[] circle;
}
*/