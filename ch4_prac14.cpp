/*
�׺� ������ ������.
�� ����� ������ �����ϸ�, ������ �̸��� �ʱ⿡ �Է¹޴´�.
������ ������ �ڽ��� ���ʿ��� <Enter> Ű�� ġ�� ������ 3���� ���� �����ǰ� ��� ������ ���� ������ ���ӿ��� �̱�� �ȴ�.
������ ������ �ʹ� ũ�� 3���� ���ڰ� ��ġ�� ���ɼ��� ���� ������ ������ 0~2�� �����Ѵ�.
���� ���� ������ ���� 3���� ��Ʈ�� �����϶�.
������ Player Ŭ������ �ۼ��ϰ�, 2���� ������ �迭�� �����϶�.
�׸��� ������ GamblingGame Ŭ������ �ۼ��϶�.
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
	cout << "***** ���� ������ �����մϴ�. *****\n";
	srand((unsigned)time(NULL));
	cout << "ù��° ���� �̸�>>";
	string name1;
	cin >> name1;
	p[0].setName(name1);
	cout << "�ι�° ���� �̸�>>";
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
			cout << p[i % 2].getName() << "�� �¸�!!\n";
			break;
		}
		else
			cout << "�ƽ�����!\n";
		
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