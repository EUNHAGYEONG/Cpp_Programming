/*
컴퓨터의 주기억장치를 모델링하는 클래스 Ram을 구현하려고 한다.
Ram 클래스는 데이터가 기록될 메모리 공간과 크기 정보를 가지고, 주어진 주소에 데이터를 기록하고(write), 주어진 주소로부터 데이터를 읽어 온다(read).
Ram 클래스는 다음과 같이 선언된다.

class Ram {
	char mem[100*1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

다음 main() 함수는 100 번지에 20을 저장하고, 101 번지에 30을 저장한 후, 100 번지와 101 번지의 값을 읽고 더하여 102 번지에 저장하는 코드이다.
int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}

실행 결과를 참고하여 Ram.h, Ram.cpp, main.cpp로 헤더 파일과 cpp 파일을 분리하여 프로그램을 완성하라.
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
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}
*/