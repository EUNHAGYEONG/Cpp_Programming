/*
중식당의 주문 과정을 C++ 프로그램으로 작성해보자.
다음 실행 결과와 같이 메뉴와 사람 수를 입력받고 이를 출력하면 된다.
잘못된 입력을 가려내는 부분도 코드에 추가하라.
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

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	choice_menu();
}

void choice_menu() {
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		int menu;
		cin >> menu;

		if (menu > 4) {
			cout << "다시 주문하세요!!\n";
			choice_menu();
		}

		else if (menu == 4) {
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}

		else
			choice_inbun(menu);
	}
}

void choice_inbun(int menu_no) {
	string menu;
	if (menu_no == 1)
		menu = "짬뽕";
	else if (menu_no == 2)
		menu = "짜장";
	else
		menu = "군만두";

	cout << "몇인분?";
	int inbun;
	cin >> inbun;

	cout << menu << " " << inbun << "인분 나왔습니다\n";
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

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		int menu;
		cin >> menu;

		if (menu == 4) {
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}

		else if (menu < 4) {
			cout << "몇인분?";
			int inbun;
			cin >> inbun;

			if (menu == 1)
				cout << "짬뽕 " << inbun << "인분 나왔습니다.\n";
			else if (menu == 2)
				cout << "짜장 " << inbun << "인분 나왔습니다.\n";
			else
				cout << "군만두 " << inbun << "인분 나왔습니다.\n";
		}
		else
			cout << "다시 주문하세요!!\n";
	}
}
*/