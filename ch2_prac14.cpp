/*
Ŀ�Ǹ� �ֹ��ϴ� ������ C++ ���α׷��� �ۼ��غ���.
Ŀ�� ������ "����������", "�Ƹ޸�ī��", "īǪġ��"�� 3�����̸� ������ ���� 2000��, 2300��, 2500���̴�.
�Ϸ翡 20000�� �̻� ���� �Ǹ� ī�並 �ݴ´�.
���� ����� ���� �۵��ϴ� ���α׷��� �ۼ��϶�.
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

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	char coffee[100];
	int num, sum = 0;
	while (1) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;
		int total;

		if (strcmp(coffee, "����������") == 0) {
			total = num * 2000;
			cout << total << "���Դϴ�. ���ְ� �弼��\n";
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			total = num * 2300;
			cout << total << "���Դϴ�. ���ְ� �弼��\n";
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			total = num * 2500;
			cout << total << "���Դϴ�. ���ְ� �弼��\n";
		}
		else
			cout << "�ش� Ŀ�Ǵ� �Ǹ����� �ʽ��ϴ�. �ٽ� �Է����ּ���\n";

		sum += total;
		if (sum >= 20000) {
			cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~\n";
			break;
		}
	}
}
*/