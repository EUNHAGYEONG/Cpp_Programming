/*
�Խ��� ���α׷��� �ۼ��غ���.
��Ƽ�½�ŷ�� ��� ���� ����ڵ��� �Խ��ǿ� ���� �ø��� ������ �Խ��� ��ü�� ��ü �ϳ��� �־�� �Ѵ�.
�׷��Ƿ� �Խ��� ��ü�� ������� static���� �ۼ��Ѵ�.
������ �Խ��� ����� �ϴ� Board Ŭ������ Ȱ���ϴ� main() �ڵ��̴�.
���� ����� �����Ͽ� Board Ŭ������ ����� ��ü ���α׷��� �ۼ��϶�.
static ������ �����̱� ������ �Խ��� ����� ���� �ø��� ��ɰ� �Խñ��� ��� ����ϴ� ������� �����ϰ� main()�� �ܼ�ȭ�Ͽ���.
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Board {
	static int index;
	static string textArray[100];
public:
	static void add(string text);
	static void print();
};

int Board::index = 0;
string Board::textArray[100];

void Board::add(string text) {
	textArray[index] = text;
	index++;
}

void Board::print() {
	cout << "********** �Խ����Դϴ�. **********\n";
	for (int i = 0; i < index; i++)
		cout << i << ": " << textArray[i] << "\n";
	cout << "\n\n";
}

int main()
{
	// Board myBoard;	//��ü ������ ������ �����Դϴ�.
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}
*/