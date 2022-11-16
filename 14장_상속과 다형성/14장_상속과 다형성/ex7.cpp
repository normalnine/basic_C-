#include<iostream>
using namespace std;

class AAA
{
public:
	virtual void fct()
	{
		cout << "AAA" << endl;
	}
};

class BBB : public AAA
{
public:
	void fct()
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