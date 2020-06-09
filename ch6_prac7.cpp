/*
다음과 같은 static 멤버를 가진 Random 클래스를 완성하라(Open Challenge 힌트 참고).
그리고 Random 클래스를 이용하여 다음과 같이 랜덤한 값을 출력하는 main() 함수도 작성하라.
main()에서 Random 클래스의 seed() 함수를 활용하라.

class Random {
public:
	//항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(NULL)); }	// 씨드 설정
	static int nextInt(int min = 0, int max = 32767);	// min과 max 사이의 랜덤 정수 리턴
	static char nextAlphabet();	// 랜덥 알파벳 문자 리턴
	static double nextDouble();	// 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
};
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Random {
public:
	//항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(NULL)); }	// 씨드 설정
	static int nextInt(int min = 0, int max = 32767);	// min과 max 사이의 랜덤 정수 리턴
	static char nextAlphabet();	// 랜덤 알파벳 문자 리턴
	static double nextDouble();	// 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
};

int Random::nextInt(int min, int max) {
	return (rand() % (min + max + 1) + min);
}

char Random::nextAlphabet() {
	char alphbet = rand() % 26 + 97;
	int num = rand() % 2;

	if (num == 1)
		alphbet = toupper(alphbet);

	return alphbet;
}

double Random::nextDouble() {
	return (rand() / (double)(RAND_MAX + 1)); // 0부터 32767의 정수를 32768로 나누면 실수가 나온다
}

int main()
{
	Random r;
	r.seed();

	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다.\n";
	for (int i = 0; i < 10; i++)
		cout << r.nextInt(1, 100) << " ";
	cout << "\n";

	cout << "알파벳을 랜덤하게 10개를 출력합니다.\n";
	for (int i = 0; i < 10; i++)
		cout << r.nextAlphabet() << " ";
	cout << "\n";

	cout << "랜덤한 실수를 10개를 출력합니다.\n";
	for (int i = 0; i < 10; i++) {
		cout << r.nextDouble() << " ";
		if (i == 4)
			cout << "\n";
	}
	cout << "\n";
}
*/