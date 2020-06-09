/*
동일한 크기의 배열을 변환하는 다음 2개의 static 멤버 함수를 가진 ArryUtility2 클래스를 만들고, 이 클래스를 이용하여 아래 결과와 같이 출력되도록 프로그램을 완성하라.
*/
/*
#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size);

	//s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴, 리턴하는 배열의 크기는
	//retSize에 전달. retSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int *s3 = new int[size * 2];
	for (int i = 0; i < size; i++)
		s3[i] = s1[i];

	for (int i = 0; i < size; i++)
		s3[i + size] = s2[i];

	return s3;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				s1[i] = 0;
				retSize--;
				break;
			}
		}
	}

	int* s3 = new int[retSize];
	int s3Index = 0;
	for (int i = 0; i < size; i++) {
		if (s1[i] != 0) {
			s3[s3Index] = s1[i];
			s3Index++;
		}
	}

	return s3;
}

int main()
{
	int size = 5;
	int& retSize = size;

	int* x = new int[size];
	cout << "정수를" << size << "\t개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	int* y = new int[size];
	cout << "정수를" << size << "\t개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++)
		cin >> y[i];

	cout << "합친 정수 배열을 출력한다.\n";
	int* result = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < size * 2; i++)
		cout << result[i] << " ";
	cout << "\n";

	result = ArrayUtility2::remove(x, y, 5, size);
	cout << "배열x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << "\n";
	for (int i = 0; i < retSize; i++)
		cout << result[i] << " ";
	cout << "\n";
}
*/