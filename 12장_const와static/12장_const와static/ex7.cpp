#include<iostream>
using namespace std;

class AAA
{
	int num;
public:
	AAA(int _num) : num(_num) {}
	void ShowData()
	{
		cout << "void ShowData()함수 호출 " << endl;
		cout << num << endl;
	}// const 멤버함수와 오버로딩
	void ShowData() const	
	{
		cout << "void ShowData() const 함수 호출 " << endl;
		cout << num << endl;
	}
};

int main()
{
	const AAA aaa1(20); // const 객체는 const 함수만 사용가능
	AAA aaa2(70);
	aaa1.ShowData();
	aaa2.ShowData();
	return 0;
}