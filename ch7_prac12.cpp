/*
정수 배열을 항상 증가 순으로 유지하는 SortedArray 클래스를 작성하려고 한다.
아래의 main() 함수가 작동할 만큼만 SortedArray 클래스를 작성하로 +와 = 연산자도 작성하라.

class SortedArray {
	int size;	// 현재 배열의 크기
	int* p;	// 정수 배열에 대한 포인터
	void sort();	// 정수 배열을 오름차순으로 정렬
public:
	SortedArray();	// p는 NULL로 size는 0으로 초기화
	SortedArray(SortedArray& src);	// 복사 생성자
	SortedArray(int p[], int size);	// 생성자, 정수 배열과 크기를 전달받음
	~SortedArray();	// 소멸자
	SortedArray operator+ (SortedArray& op2);	// 현재 배열에 op2 배열 추가
	SortedArray& operator = (const SortedArray& op2);	// 현재 배열에 op2 배열 복사
	void show();	// 배열의 원소 출력
};

int main()
{
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;	// +, = 연산자 작성 필요
	// + 연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요

	a.show();
	b.show();
	c.show();
}
*/
/*
#include <iostream>
using namespace std;

class SortedArray {
	int size;	// 현재 배열의 크기
	int* p;	// 정수 배열에 대한 포인터
	void sort();	// 정수 배열을 오름차순으로 정렬
public:
	SortedArray();	// p는 NULL로 size는 0으로 초기화
	SortedArray(SortedArray& src);	// 복사 생성자
	SortedArray(int p[], int size);	// 생성자, 정수 배열과 크기를 전달받음
	~SortedArray();	// 소멸자
	SortedArray operator+ (SortedArray& op2);	// 현재 배열에 op2 배열 추가
	SortedArray& operator = (const SortedArray& op2);	// 현재 배열에 op2 배열 복사
	void show();	// 배열의 원소 출력
};

void SortedArray::sort() {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < size - 1; j++) {
			if (p[j] > p[j + 1]) {
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}

SortedArray::SortedArray() {
	p = NULL;
	size = 0;
}

SortedArray::SortedArray(SortedArray& src) {
	this->size = src.size;
	this->p = new int[src.size];
	for (int i = 0; i < size; i++)
		this->p[i] = src.p[i];
}

SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];

	for (int i = 0; i < size; i++)
		this->p[i] = p[i];
}

SortedArray::~SortedArray() {
	delete[] p;
}

SortedArray SortedArray::operator+ (SortedArray& op2) {
	SortedArray tmp;
	tmp.size = this->size + op2.size;
	tmp.p = new int[this->size + op2.size];

	for (int i = 0; i < this->size; i++)
		tmp.p[i] = this->p[i];
	for (int i = 0; i < op2.size; i++)
		tmp.p[i + this->size] = op2.p[i];

	return tmp;
}

SortedArray& SortedArray::operator = (const SortedArray& op2) {
	delete[] this->p;
	this->size = op2.size;
	this->p = new int[op2.size];
	for (int i = 0; i < size; i++)
		this->p[i] = op2.p[i];

	return *this;
}

void SortedArray::show() {
	this->sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++)
		cout << p[i] << " ";

	cout << "\n";
}

int main()
{
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;	// +, = 연산자 작성 필요
	// + 연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요

	a.show();
	b.show();
	c.show();
}
*/