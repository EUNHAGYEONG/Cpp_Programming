/*
main()�� ���� ����� ������ ������ Tower Ŭ������ �ۼ��϶�.

#include <iostream>
using namespace std;

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
*/
/*
#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int height);
	int getHeight();
};

Tower::Tower() : height(1) {}
Tower::Tower(int height) : height(height) {}

int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
*/