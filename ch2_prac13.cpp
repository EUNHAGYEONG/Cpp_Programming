/*
�߽Ĵ��� �ֹ� ������ C++ ���α׷����� �ۼ��غ���.
���� ���� ����� ���� �޴��� ��� ���� �Է¹ް� �̸� ����ϸ� �ȴ�.
�߸��� �Է��� �������� �κе� �ڵ忡 �߰��϶�.
*/
/*
#include <iostream>
using namespace std;
void choice_menu();
void choice_inbun(int menu_no);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	choice_menu();
}

void choice_menu() {
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		int menu;
		cin >> menu;

		if (menu > 4) {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			choice_menu();
		}

		else if (menu == 4) {
			cout << "���� ������ �������ϴ�.\n";
			break;
		}

		else
			choice_inbun(menu);
	}
}

void choice_inbun(int menu_no) {
	string menu;
	if (menu_no == 1)
		menu = "«��";
	else if (menu_no == 2)
		menu = "¥��";
	else
		menu = "������";

	cout << "���κ�?";
	int inbun;
	cin >> inbun;

	cout << menu << " " << inbun << "�κ� ���Խ��ϴ�\n";
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		int menu;
		cin >> menu;

		if (menu == 4) {
			cout << "���� ������ �������ϴ�.\n";
			break;
		}

		else if (menu < 4) {
			cout << "���κ�?";
			int inbun;
			cin >> inbun;

			if (menu == 1)
				cout << "«�� " << inbun << "�κ� ���Խ��ϴ�.\n";
			else if (menu == 2)
				cout << "¥�� " << inbun << "�κ� ���Խ��ϴ�.\n";
			else
				cout << "������ " << inbun << "�κ� ���Խ��ϴ�.\n";
		}
		else
			cout << "�ٽ� �ֹ��ϼ���!!\n";
	}
}
*/