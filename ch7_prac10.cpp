/*
��踦 ���� Statistics Ŭ������ ������� �Ѵ�.
�����ʹ� Statistics Ŭ���� ���ο� int �迭�� �������� �Ҵ�޾� �����Ѵ�.
������ ���� ������ �� �̷�������� Statistics Ŭ������ !, >>, <<, ~ ������ �Լ��� �ۼ��϶�.

int main()
{
	Statistics stat;
	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�.\n";

	int x[5];
	cout << "5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];	//x[i]�� ���� �Է�

	for (int i = 0; i < 5; i++) stat << x[i];	//x[i] ���� ��� ��ü�� �����Ѵ�.
	stat << 100 << 200;	//100, 200�� ��� ��ü�� �����Ѵ�.
	~stat;	//��� ����Ÿ�� ��� ����Ѵ�.

	int avg;
	stat >> avg;	//��� ��ü�κ��� ����� �޴´�.
	cout << "avg=" << avg << "\n";	//����� ����Ѵ�.
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
	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�.\n";
	
	int x[5];
	cout << "5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];	//x[i]�� ���� �Է�

	for (int i = 0; i < 5; i++) stat << x[i];	//x[i] ���� ��� ��ü�� �����Ѵ�.
	stat << 100 << 200;	//100, 200�� ��� ��ü�� �����Ѵ�.
	~stat;	//��� ����Ÿ�� ��� ����Ѵ�.

	int avg = 0;
	stat >> avg;	//��� ��ü�κ��� ����� �޴´�.
	cout << "avg=" << avg << "\n";	//����� ����Ѵ�.
}
*/