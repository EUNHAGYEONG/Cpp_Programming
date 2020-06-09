/*
��ǻ���� �ֱ����ġ�� �𵨸��ϴ� Ŭ���� Ram�� �����Ϸ��� �Ѵ�.
Ram Ŭ������ �����Ͱ� ��ϵ� �޸� ������ ũ�� ������ ������, �־��� �ּҿ� �����͸� ����ϰ�(write), �־��� �ּҷκ��� �����͸� �о� �´�(read).
Ram Ŭ������ ������ ���� ����ȴ�.

class Ram {
	char mem[100*1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

���� main() �Լ��� 100 ������ 20�� �����ϰ�, 101 ������ 30�� ������ ��, 100 ������ 101 ������ ���� �а� ���Ͽ� 102 ������ �����ϴ� �ڵ��̴�.
int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 ������ �� = " << (int)ram.read(102) << endl;
}

���� ����� �����Ͽ� Ram.h, Ram.cpp, main.cpp�� ��� ���ϰ� cpp ������ �и��Ͽ� ���α׷��� �ϼ��϶�.
*/
/*
#include <iostream>
using namespace std;

#include "Ram.h"

int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 ������ �� = " << (int)ram.read(102) << endl;
}
*/