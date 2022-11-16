#include<iostream>
using namespace std;

class AAA
{
	int val;
	static int n;
public:
	AAA(int a = 0)
	{
		val = a;
		n++;
	}
	void ShowData()
	{
		cout << "val : " << val << endl;
		cout << "n : " << n << endl;
	}
};
int AAA::n = 1;

int main()
{
	AAA a1(10);
	a1.ShowData(); 
	AAA a2(20); 
	a2.ShowData();
	return 0;
}