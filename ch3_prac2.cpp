/*
��¥�� �ٷ�� Date Ŭ������ �ۼ��ϰ��� �Ѵ�.
Date�� �̿��ϴ� main()�� ���� ����� ������ ����.
Ŭ���� Date�� �ۼ��Ͽ� �Ʒ� ���α׷��� �߰��϶�.

#include <iostream>
using namespace std;

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/6/15");
	independenceDay.show();
	cout << birth.getYear() << ",' << birth.getMonth() << ',' << birth.getDay() << endl;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Date {
	int year, month, day;
	string date;

public:
	Date(int y, int m, int d);
	Date(string dt);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string dt) {
	date = dt;
}

void Date::show() {
	char* date_buff = new char[1000];
	strcpy(date_buff, date.c_str());
	
	char* context;
	int num1 = stoi(strtok_s(date_buff, "/", &context));
	int num2 = stoi(strtok_s(NULL, "/", &context));
	int num3 = stoi(strtok_s(NULL, " ", &context));

	cout << num1 << "��" << num2 << "��" << num3 << "��\n";
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/6/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
*/