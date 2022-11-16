#include<iostream>
using namespace std;

class AAA
{
	int num;
public:
	AAA(int _num) : num(_num) {}
	void Add(int n)
	{
		num += n;
	}
	void ShowData()
	{
		cout << num << endl;
	}
};

int main()
{
	const AAA aaa(10);
	aaa.Add(10);
	aaa.ShowData();
	return 0;
}