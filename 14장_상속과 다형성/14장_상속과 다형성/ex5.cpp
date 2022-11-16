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
	BBB b;
	b.fct();	// 오버라이딩된 멤버함수 호출
	b.AAA::fct(); // 오버라이딩 되기 전 부모의 멤버함수 호출
	return 0;
}