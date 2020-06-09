/*
Circle 객체의 동적 생성 및 반환 응용
정수 값으로 반지름을 입력받고 Circle 객체를 동적 생성하여 면적을 출력하라.
음수가 입력되면 프로그램은 종료한다.
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
	cout << "생성자 실행 radius = " << radius << "\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << "\n";
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << "\n";
}

int main()
{
	while (1) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		int radius;
		cin >> radius;
		if (radius < 0)
			break;

		Circle *circle = new Circle(radius);
		cout << "원의 면적은 " << circle->getArea() << "\n";
		delete circle;
	}
}
*/