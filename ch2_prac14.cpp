/*
커피를 주문하는 간단한 C++ 프로그램을 작성해보자.
커피 종류는 "에스프레소", "아메리카노", "카푸치노"의 3가지이며 가격은 각각 2000원, 2300원, 2500원이다.
하루에 20000원 이상 벌게 되면 카페를 닫는다.
실행 결과와 같이 작동하는 프로그램을 작성하라.
*/
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	char coffee[100];
	int num, sum = 0;
	while (1) {
		cout << "주문>> ";
		cin >> coffee >> num;
		int total;

		if (strcmp(coffee, "에스프레소") == 0) {
			total = num * 2000;
			cout << total << "원입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			total = num * 2300;
			cout << total << "원입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			total = num * 2500;
			cout << total << "원입니다. 맛있게 드세요\n";
		}
		else
			cout << "해당 커피는 판매하지 않습니다. 다시 입력해주세요\n";

		sum += total;
		if (sum >= 20000) {
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
			break;
		}
	}
}
*/