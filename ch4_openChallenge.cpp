/*
�ѱ� �����ձ� ����
n���� �ϴ� �ѱ� �����ձ� ������ �ۼ��غ���.
�Ʒ��� ����� ���� ������ ���� �Է¹ް�, ���� �� ����� �̸��� �Է¹޾� ������ �����Ѵ�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	Player() {}
	Player(string name) { this->name = name; }
	void setName(string name);
	string getName();
};

void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}

class WordGame {
	Player* p;
	int size;
public:
	WordGame();
	void setName();
	void play();
	~WordGame();
};

WordGame::WordGame() {
	cout << "���� �ձ� ������ �����մϴ�.\n";
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	int size;
	cin >> size;
	this->size = size;
	p = new Player[size];

	setName();
}

void WordGame::setName() {
	string name;
	for (int i = 0; i < size; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		cin >> name;
		p[i].setName(name);
	}

	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�.\n";
	play();
}

void WordGame::play() {
	int i = 0;
	string word1 = "�ƹ���";
	string word2;

	while (true) {
		cout << p[i % size].getName() << ">>";
		cin >> word2;

		if ((word1.at(word1.length() - 2) == word2.at(0)) && (word1.at(word1.length() - 1) == (word2.at(1))))
			word1 = word2;
		else {
			cout << p[i % size].getName() << "���� �����ϴ�.\n";
			break;
		}

		i += 1;
	}
}
WordGame::~WordGame() {
	delete[] p;
}

int main()
{
	WordGame w;
}
*/