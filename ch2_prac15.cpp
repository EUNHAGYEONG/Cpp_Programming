/*
����(+), ����(-), ����(*), ������(/), ������(%)�� ���� 5Ģ ������ �� �� �ִ� ���α׷��� �ۼ��϶�.
���� ������ ���� �������� �Էµȴ�.
������ �����ڴ� �ϳ��� ��ĭ���� �и��ȴ�.
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

	char operation[100];
	while (1) {
		cout << "? ";
		cin.getline(operation, 100);
		char* context;

		int num1 = atoi(strtok_s(operation, " ", &context));
		char *op = strtok_s(NULL, " ", &context);
		int num2 = atoi(strtok_s(NULL, " ", &context));

		if (*op == '+')
			cout << num1 << " " << op << " " << num2 << " = " << num1 + num2 << "\n";
		else if (*op == '-')
			cout << num1 << " " << op << " " << num2 << " = " << num1 - num2 << "\n";
		else if (*op == '*')
			cout << num1 << " " << op << " " << num2 << " = " << num1 * num2 << "\n";
		else if (*op == '/')
			cout << num1 << " " << op << " " << num2 << " = " << num1 / num2 << "\n";
		else 
			cout << num1 << " " << op << " " << num2 << " = " << num1 % num2 << "\n";
	}
}
*/