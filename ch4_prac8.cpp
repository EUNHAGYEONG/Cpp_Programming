/*
실습 문제 7의 문제를 수정해보자.
사용자로부터 다음과 같이 원의 개수를 입력받고, 원의 개수만큼 반지름을 입력받는 방식으로 수정하라.
원의 개수에 따라 동적으로 배열을 할당받아야 한다.
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
	cout << "원의 개수 >> ";
	int num;
	cin >> num;

	Circle *circles = new Circle[num];

	int cnt = 0;
	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int r;
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100)
			cnt++;
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.\n";

	delete[] circles;
}
*/