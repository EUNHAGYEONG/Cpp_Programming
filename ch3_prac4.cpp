/*
CoffeeMachine Ŭ������ ������.
main() �Լ��� ���� ����� ������ ������ CoffeeMachine Ŭ������ �ۼ��϶�.
���������� �� �ܿ��� Ŀ�ǿ� ���� ���� 1�� �Һ�ǰ�, �Ƹ޸�ī���� ��� Ŀ�Ǵ� 1, ���� 2�� �Һ�ǰ�, ���� Ŀ�Ǵ� Ŀ�� 1, �� 2, ���� 1�� �Һ�ȴ�.
CoffeeMachine Ŭ�������� � ��� ������ � ��� �Լ��� �ʿ����� �� �Ǵ��Ͽ� �ۼ��϶�.

int main()
{
	CoffeeMachine Java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}
*/
/*
#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
	int sugar;

public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}

void CoffeeMachine::fill() {
	coffee = water = sugar = 10;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t ��:" << water << "\t ����:" << sugar << "\n";
}

int main()
{
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}
*/