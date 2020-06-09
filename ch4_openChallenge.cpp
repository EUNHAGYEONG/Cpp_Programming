/*
한글 끝말잇기 게임
n명이 하는 한글 끝말잇기 게임을 작성해보자.
아래의 결과와 같이 선수의 수를 입력받고, 선수 각 사람의 이름을 입력받아 게임을 시작한다.
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
	cout << "끝말 잇기 게임을 시작합니다.\n";
	cout << "게임에 참가하는 인원은 몇명입니까?";
	int size;
	cin >> size;
	this->size = size;
	p = new Player[size];

	setName();
}

void WordGame::setName() {
	string name;
	for (int i = 0; i < size; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		cin >> name;
		p[i].setName(name);
	}

	cout << "시작하는 단어는 아버지입니다.\n";
	play();
}

void WordGame::play() {
	int i = 0;
	string word1 = "아버지";
	string word2;

	while (true) {
		cout << p[i % size].getName() << ">>";
		cin >> word2;

		if ((word1.at(word1.length() - 2) == word2.at(0)) && (word1.at(word1.length() - 1) == (word2.at(1))))
			word1 = word2;
		else {
			cout << p[i % size].getName() << "님이 졌습니다.\n";
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