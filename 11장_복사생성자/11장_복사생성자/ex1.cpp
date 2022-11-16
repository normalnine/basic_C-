#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA() 호출" << endl;
	}
	AAA(int i)
	{
		cout << "AAA(int i) 호출" << endl;
	}
	AAA(const AAA& p)
	{
		cout << "AAA(const AAA &a) 호출" << endl;
	}
};

int main()
{
	AAA obj;
	AAA obj2(10);
	AAA obj3(obj2); // AAA obj3 = obj2
	return 0;
}