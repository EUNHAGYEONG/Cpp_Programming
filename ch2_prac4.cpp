// 소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력하라.
/*
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	float num[5];
	cout << "5개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++)
		cin >> num[i];

	float max = num[0];
	for (int i = 0; i < 5; i++) {
		if (max < num[i])
			max = num[i];
	}

	cout << "제일 큰 수 = " << max << "\n";
}
*/