#include<iostream>
using namespace std;

class Counter
{
public:
	int val;				//멤버변수(필드)
	void Increment(void)	//멤버함수(메소드)
	{
		val++;				//내부접근
	}
};

int main()
{
	Counter cnt;
	cnt.val = 0;				//외부접근 : public 멤버
	cnt.Increment();			//외부접근 : public 멤버
	cout << cnt.val << endl;	//외부접근 : public 멤버

	return 0;
}