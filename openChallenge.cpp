/*
Up & Down ���� �����
Up & Down ���� ���α׷��� �ۼ��غ���.
���ӿ� �����ϴ� ����� 2���̸�, ������ ���� ������ ���� ������ �信 ������ ����.
Up & Down ������ ��ü������ UpAndDownGame Ŭ������ �ۼ��ϰ� static ����θ� �����϶�.
������ ǥ���ϱ� ���� Person Ŭ������ �ۼ��ϰ� main() �Լ��� ���α׷��� ���۽�Ű�� ��������θ� �����϶�.
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Person {
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class UpAndDownGame {
public:
	UpAndDownGame();
	static Person p[2];
	static int secretNum;
	static int minNum;
	static int maxNum;
	static void play();
};

UpAndDownGame::UpAndDownGame() {
	srand((unsigned)time(NULL));
	cout << "Up & Down ������ �����մϴ�.\n";
	secretNum = rand() % 100;
	cout << "���� " << minNum << "�� " << maxNum << "���̿� �ֽ��ϴ�.\n";
	p[0].setName("���μ�");
	p[1].setName("������");
}

void UpAndDownGame::play() {
	int i = 0;
	int num;
	while (true) {
		cout << p[i % 2].getName() << ">>";
		cin >> num;

		if (secretNum == num) {
			cout << p[i % 2].getName() << "�� �̰���ϴ�!!\n";
			break;
		}
		else if (secretNum > num)
			minNum = num;
		else
			maxNum = num;

		cout << "���� " << minNum << "�� " << maxNum << "���̿� �ֽ��ϴ�.\n";
		i++;
	}
}

Person UpAndDownGame::p[2] = {};
int UpAndDownGame::secretNum = 0;
int UpAndDownGame::minNum = 0;
int UpAndDownGame::maxNum = 99;

int main()
{
	UpAndDownGame game;
	game.play();
}
*/