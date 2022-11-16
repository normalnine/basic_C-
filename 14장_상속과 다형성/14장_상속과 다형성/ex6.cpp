#include<iostream>
using namespace std;

class AAA
{
public:
	void fct()	// (부모)멤버함수는 자식객체의 시야에서 hide 되었다.
	{
		cout << "AAA" << endl;
	}
};
class BBB : public AAA
{
public:
	void fct()	// 멤버함수(메소드) 오버라이딩
	{
		cout << "BBB" << endl;
	}
};

int main()
{
	BBB* b = new BBB;
	b->fct();

	AAA* a = b;
	a->fct();

	delete b;
	return 0;
}
/*
=====다형성=====
오버로딩 : 중복정의
한 클래스 내 : 멤버함수의 이름이 같고, 매개변수의 갯수 또는 자료형은 다름

오버라이딩 : 재정의
두 클래스 간 : 멤버함수의 이름이 같고, 매개변수는 같다
*/