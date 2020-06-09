/*
덧셈(+), 뺄셈(-), 곱셈(*), 나눗셈(/), 나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라.
식은 다음과 같은 형식으로 입력된다.
정수와 연산자는 하나의 빈칸으로 분리된다.
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