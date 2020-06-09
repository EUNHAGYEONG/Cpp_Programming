/*
Up & Down 게임 만들기
Up & Down 게임 프로그램을 작성해보자.
게임에 참석하는 사람은 2명이며, 번갈아 가며 다음과 같이 숨겨진 답에 접근해 간다.
Up & Down 게임은 전체적으로 UpAndDownGame 클래스로 작성하고 static 멤버로만 구성하라.
선수를 표현하기 위해 Person 클래스를 작성하고 main() 함수는 프로그램을 시작시키는 기능정도로만 구현하라.
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
	cout << "Up & Down 게임을 시작합니다.\n";
	secretNum = rand() % 100;
	cout << "답은 " << minNum << "과 " << maxNum << "사이에 있습니다.\n";
	p[0].setName("김인수");
	p[1].setName("오은경");
}

void UpAndDownGame::play() {
	int i = 0;
	int num;
	while (true) {
		cout << p[i % 2].getName() << ">>";
		cin >> num;

		if (secretNum == num) {
			cout << p[i % 2].getName() << "가 이겼습니다!!\n";
			break;
		}
		else if (secretNum > num)
			minNum = num;
		else
			maxNum = num;

		cout << "답은 " << minNum << "과 " << maxNum << "사이에 있습니다.\n";
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