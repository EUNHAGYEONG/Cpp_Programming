/*
생성자에서 다른 생성자 호출 연습(위임 생성자 만들기 연습)
예제 3-3을 수정하여, 객체 초기화를 전담하는 타겟 생성자와 타겟 생성자에 객체 초기화를 위임하는 위임 생성자로 재작성하라.
*/
/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) { }	//위임생성자

Circle::Circle(int r) {		//타겟생성자
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
*/