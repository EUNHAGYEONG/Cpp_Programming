/*
겜블링 게임을 만들어보자.
두 사람이 게임을 진행하며, 선수의 이름을 초기에 입력받는다.
선수가 번갈아 자신의 차례에서 <Enter> 키를 치면 랜덤한 3개의 수가 생성되고 모두 동일한 수가 나오면 게임에서 이기게 된다.
숫자의 범위가 너무 크면 3개의 숫자가 일치할 가능성이 낮아 숫자의 범위를 0~2로 제한한다.
랜덤 정수 생성은 문제 3번의 힌트를 참고하라.
선수는 Player 클래스로 작성하고, 2명의 선수는 배열로 구성하라.
그리고 게임은 GamblingGame 클래스로 작성하라.
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Player {
	string name;
public:
	Player() {};
	void setName(string name);
	string getName();
};

class GamblingGame {
	Player p[2];
public:
	GamblingGame();
	int play();
	void run();
};

GamblingGame::GamblingGame() {
	cout << "***** 갬블링 게임을 시작합니다. *****\n";
	srand((unsigned)time(NULL));
	cout << "첫번째 선수 이름>>";
	string name1;
	cin >> name1;
	p[0].setName(name1);
	cout << "두번째 선수 이름>>";
	string name2;
	cin >> name2;
	p[1].setName(name2);
}

int GamblingGame::play() {
	int num[3];

	for (int i = 0; i < 3; i++)
		num[i] = rand() % 5;

	cout << "\n\t\t" << num[0] << "\t" << num[1] << "\t" << num[2] << "\t";
	if ((num[0] == num[1]) && (num[1] == num[2]))
		return 1;
	else
		return 0;
}

void GamblingGame::run() {
	int i = 0;
	while (true) {
		cout << p[i % 2].getName() << ":\n";
		string enter;
		getline(cin, enter);

		if (play() == 1) {
			cout << p[i % 2].getName() << "님 승리!!\n";
			break;
		}
		else
			cout << "아쉽군요!\n";
		
		i += 1;
	}
}

void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}

int main()
{
	GamblingGame g;
	g.run();
}
*/