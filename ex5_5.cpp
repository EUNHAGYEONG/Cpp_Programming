/*
참조 매개 변수로 평균 리턴하기
참조 매개 변수를 
이용하여 평균을 리턴하고, 함수의 리턴값을 통해 함수의 성공 여부를 리턴하도록 average() 함수를 작성하라.
*/
/*
#include <iostream>
using namespace std;

bool average(int num[], float &avg, int size) {
	if (size <= 0)
		return false;
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += num[i];
	avg = (float)sum / size;

	return true;
}

int main()
{
	int x [] = { 0, 1, 2, 3, 4, 5 };
	float avg;

	bool result = average(x, avg, 6);

	if (result)
		cout << "평균은 " << avg << "\n";
	else
		cout << "매개 변수 오류\n";

	result = average(x, avg, -2);
	if (result)
		cout << "평균은 " << avg << "\n";
	else
		cout << "매개 변수 오류\n";
}
*/