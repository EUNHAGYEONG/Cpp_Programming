/*
�Ʒ��� ���� ������ �־��� bigger()�� �ۼ��ϰ� ����ڷκ��� 2���� ������ �Է¹޾� ū ���� ����ϴ� main()�� �ۼ��϶�.
bigger()�� ���ڷ� �־��� a, b�� ������ true, �ƴϸ� false�� �����ϰ� ū ���� big�� �����Ѵ�.
*/
/*
#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;
	
	if (a > b)
		big = a;
	else
		big = b;

	return false;
}

int main()
{
	int big;
	if (!bigger(2, 3, big))
		cout << "ū �� " << big << "\n";
	else
		cout << "�� ������ ���� �����ϴ�.\n";

	if (!bigger(1, 1, big))
		cout << "ū �� " << big << "\n";
	else
		cout << "�� ������ ���� �����ϴ�.\n";
}
*/