//<Enter> Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ���� 'x'�� �������ϸ鿡 ����϶�.
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "���ڿ��� �Է��϶�(100�� �̸�).\n";
	string str;
	getline(cin, str);
	if (str.length() >= 100) {
		cout << "���ڿ� ũ�⸦ ������ϴ�. \n";
		getline(cin, str);
	}

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'x')
			cnt++;
	}

	cout << "x�� ������ " << cnt << "\n";
}
*/