#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA() ȣ��" << endl;
	}
	AAA(int i)
	{
		cout << "AAA(int i) ȣ��" << endl;
	}
	AAA(const AAA& p)
	{
		cout << "AAA(const AAA &a) ȣ��" << endl;
	}
};

int main()
{
	AAA obj;
	AAA obj2(10);
	AAA obj3(obj2); // AAA obj3 = obj2
	return 0;
}