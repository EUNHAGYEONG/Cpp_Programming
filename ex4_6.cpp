/*
정수형 배열의 동적 할당 및 변환
사용자로부터 정수의 개수를 입력 받아 배열을 동적 할당받고, 하나씩 정수를 입력받은 후 평균을 출력하는 프로그램을 작성하라.
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "입력할 정수의 개수는?";
	cin >> num;

	int* pNum = new int[num];
	int sum = 0;
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> pNum[i];
		sum += pNum[i];
	}

	cout << "평균 = " << sum / num << "\n";
	
	delete[] pNum;
}
*/