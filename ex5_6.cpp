/*
참조에 의한 호출로 Circle 객체의 참조 전달
예제 5-1의 코드를 수정하여 main() 함수가 increase() 함수를 호출하여 반지름을 1만큼 증가시키고자 한다.
increase() 함수를 구현하라.
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

Circle :: Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << "\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << "\n";
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << "\n";
}

void increase(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << "\n";
}
*/