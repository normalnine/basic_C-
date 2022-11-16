#include<iostream>
using namespace std;

class Printer
{
private:
	const char* a;
public:
	void SetString(const char*_a)
	{
		a = _a;
	}
	void ShowString()
	{
		cout << a << endl;
	}
};

int main()
{
	Printer pnt;
	pnt.SetString("Hellow World");
	pnt.ShowString();

	pnt.SetString("I Love C++");
	pnt.ShowString();

	return 0;
}