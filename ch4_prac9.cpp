/*
������ ���� Person Ŭ������ �ִ�.
Person Ŭ������ main() �Լ��� �ۼ��Ͽ�, 3���� Person ��ü�� ������ �迭�� �����ϰ�, ������ ���� Ű���忡�� �̸��� ��ȭ��ȣ�� �Է¹޾� ����ϰ� �˻��ϴ� ���α׷��� �ϼ��϶�.
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

Person::Person() {}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main()
{
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";
	Person people[3];
	string name, tel;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		getline(cin, name, ' ');
		getline(cin, tel);
		people[i].set(name, tel);
	}

	cout << "��� ����� �̸��� " << people[0].getName() << " " << people[1].getName() << " " << people[2].getName() << "\n";

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	getline(cin, name);

	int i = 0;
	while (true) {
		if (people[i].getName() == name) {
			cout << "��ȭ ��ȣ�� " << people[i].getTel() << "\n";
			break;
		}
		i++;

		if (i == 3) {
			cout << "�̸��� �������� �ʽ��ϴ�. \n";
			break;
		}
	}
}
*/