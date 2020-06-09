/*
다음은 커피자판기로 작동하는 프로그램을 만들기 위해 필요한 두 클래스이다.

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

다음과 같이 실행되도록 main() 함수와 CoffeeVendingMachine, Container를 완성하라.
만일 커피, 물, 설탕 중 잔략이 하나라도 부족해 커피를 제공할 수 없는 경우 '원료가 부족합니다.'를 출력하라.
*/
/*
#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

void Container::fill() {
	size = 10;
}

void Container::consume() {
	size -= 1;
}

int Container::getSize() {
	return size;
}

void CoffeeVendingMachine::fill() {
	tong[0].fill();
	tong[1].fill();
	tong[2].fill();
	show();
}

void CoffeeVendingMachine::selectEspresso() {
	cout << "에스프레소 드세요\n";
	tong[0].consume();
	tong[1].consume();
}

void CoffeeVendingMachine::selectAmericano() {
	cout << "아메리카노 드세요\n";
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
}

void CoffeeVendingMachine::selectSugarCoffee() {
	cout << "설탕커피 드세요\n";
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << "\n";
}

void CoffeeVendingMachine::run() {
	cout << "***** 커피자판기를 작동합니다. *****\n";
	while (true) {
		if ((tong[0].getSize() == 0) || (tong[1].getSize() == 0) || (tong[2].getSize() == 0))
			cout << "원료가 부족합니다. \n";
		
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		int menu;
		cin >> menu;

		switch (menu) {
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		default:
			cout << "메뉴가 존재하지 않습니다. 다시 입력해주세요\n";
			break;
		}
	}
}

int main()
{
	CoffeeVendingMachine coffee;

	coffee.run();
}
*/