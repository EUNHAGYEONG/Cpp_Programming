/*
������ Ŀ�����Ǳ�� �۵��ϴ� ���α׷��� ����� ���� �ʿ��� �� Ŭ�����̴�.

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

������ ���� ����ǵ��� main() �Լ��� CoffeeVendingMachine, Container�� �ϼ��϶�.
���� Ŀ��, ��, ���� �� �ܷ��� �ϳ��� ������ Ŀ�Ǹ� ������ �� ���� ��� '���ᰡ �����մϴ�.'�� ����϶�.
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
	cout << "���������� �弼��\n";
	tong[0].consume();
	tong[1].consume();
}

void CoffeeVendingMachine::selectAmericano() {
	cout << "�Ƹ޸�ī�� �弼��\n";
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
}

void CoffeeVendingMachine::selectSugarCoffee() {
	cout << "����Ŀ�� �弼��\n";
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << "\n";
}

void CoffeeVendingMachine::run() {
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****\n";
	while (true) {
		if ((tong[0].getSize() == 0) || (tong[1].getSize() == 0) || (tong[2].getSize() == 0))
			cout << "���ᰡ �����մϴ�. \n";
		
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
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
			cout << "�޴��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���\n";
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