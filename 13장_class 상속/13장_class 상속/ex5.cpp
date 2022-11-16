#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA() call!" << endl;
	}
	~AAA()
	{
		cout << "~AAA()call!" << endl;
	}
};

class BBB : public AAA
{
public:
	BBB()
	{
		cout << "BBB() call!" << endl;
	}
	~BBB()
	{
		cout << "~BBB() call!" << endl;
	}
};

int main()
{
	BBB bbb;
	return 0;
}