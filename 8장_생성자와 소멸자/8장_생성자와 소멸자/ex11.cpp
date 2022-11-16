#include<iostream>
using namespace std;

class MyClass
{
	int a;
public:
	MyClass();
	~MyClass();
	void show();
};

MyClass::MyClass()
{
	cout << "In constructor" << endl;
	a = 10;
}

MyClass::~MyClass()
{
	cout << "destructing..." << endl;
}

void MyClass::show()
{
	cout << a << endl;
}
int main()
{
	MyClass ob;
	ob.show();
	return 0;
}