/*
sum() 함수 중복 연습
함수 sum()을 호출하는 경우가 다음과 같을 때 sum()을 중복 구현하라.
sum()의 첫 번째 매개 변수는 항상 두 번째 매개 변수보다 작은 값으로 전달되는 것으로 가정한다.

sum(3, 5); // 3~5까지의 합을 구하여 리턴
sum(3); // 0~3까지의 합을 구하여 리턴
sum(100); // 0~100까지의 합을 구하여 리턴
*/
/*
#include <iostream>
using namespace std;

int sum(int a, int b) {
	if (a >= b)
		return 0;
	
	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += i;

	return sum;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++)
		sum += i;

	return sum;
}

int main()
{
	cout << sum(3, 5) << "\n";
	cout << sum(3) << "\n";
	cout << sum(100) << "\n";
}
*/