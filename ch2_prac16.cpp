/*
���� �ؽ�Ʈ�� �Է¹޾� ���ĺ� ������׷��� �׸��� ���α׷��� �ۼ��϶�.
�빮�ڴ� ��� �ҹ��ڷ� �����ϸ�, �ؽ�Ʈ �Է��� ���� ';' ���ڷ� �Ѵ�.
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

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";

	char text[10000];	//���� �ؽ�Ʈ
	cin.getline(text, 10000, ';');	//���� �ؽ�Ʈ �Է�

	int alpha[26] = { 0 };	//�ҹ��� 
	int total = 0;	//��ü ���ĺ� ��
	for (int i=0; i < strlen(text); i++) {
		if (isalpha(text[i])) {
			total++;
			text[i] = tolower(text[i]);
			int pos = text[i] - 97;
			alpha[pos] += 1;
		}
	}

	cout << "�� ���ĺ� �� " << total << "\n\n";
	
	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << "(" << alpha[i] << ")" << "\t" << ": ";
		for (int j = 0; j < alpha[i]; j++)
			cout << "*";
		cout << "\n";
	}
}
*/