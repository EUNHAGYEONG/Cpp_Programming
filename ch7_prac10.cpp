/*
통계를 내는 Statistics 클래스를 만들려고 한다.
데이터는 Statistics 클래스 내부에 int 배열을 동적으로 할당받아 유지한다.
다음과 같은 연산이 잘 이루어지도록 Statistics 클래스와 !, >>, <<, ~ 연산자 함수를 작성하라.

int main()
{
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다.\n";

	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];	//x[i]에 정수 입력

	for (int i = 0; i < 5; i++) stat << x[i];	//x[i] 값을 통계 객체에 삽입한다.
	stat << 100 << 200;	//100, 200을 통계 객체에 삽입한다.
	~stat;	//통계 데이타를 모두 출력한다.

	int avg;
	stat >> avg;	//통계 객체로부터 평균을 받는다.
	cout << "avg=" << avg << "\n";	//평균을 출력한다.
}
*/
/*
include <iostream>
using namespace std;

class Statistics {
	int* data;
	int cnt;
public:
	Statistics() {
		data = new int[1000];
		cnt = 0;
	}
	bool operator! ();
	Statistics& operator<< (int* x);
	Statistics& operator<< (int num);
	void operator~ ();
	int operator>> (int &avg);
};

bool Statistics::operator! () {
	if (cnt == 0)
		return true;
	else
		return false;
}

Statistics& Statistics::operator<< (int* x) {
	data = x;
	while (cnt == 5) {
		data[cnt] = x[cnt];
		cnt++;
	}

	return *this;
}

Statistics& Statistics::operator<< (int num) {
	data[cnt] = num;
	cnt++;

	return *this;
}

void Statistics::operator~ () {
	for (int i = 0; i < cnt; i++)
		cout << data[i] << " ";
	cout << "\n";
}

int Statistics::operator>> (int &avg) {
	int sum = 0;
	for (int i = 0; i < cnt; i++) {
		sum += data[i];
	}
	avg = sum / cnt;
	return avg;
}

int main()
{
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다.\n";
	
	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];	//x[i]에 정수 입력

	for (int i = 0; i < 5; i++) stat << x[i];	//x[i] 값을 통계 객체에 삽입한다.
	stat << 100 << 200;	//100, 200을 통계 객체에 삽입한다.
	~stat;	//통계 데이타를 모두 출력한다.

	int avg = 0;
	stat >> avg;	//통계 객체로부터 평균을 받는다.
	cout << "avg=" << avg << "\n";	//평균을 출력한다.
}
*/