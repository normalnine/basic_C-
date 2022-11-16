#include<iostream>
using namespace std;

class base
{
	int x;
public:
	void set_x(int n)
	{
		x = n;
	}
	void show_x()
	{
		cout << x << endl;
	}
};

class derived : private base
{
	int y;
public:
	void set_xy(int n, int m)
	{
		set_x(n);
		y = m;
	}
	void show_xy()
	{
		show_x();
		cout << y << endl;
	}
};

int main()
{
	derived ob;
	ob.set_xy(39, 27);
	ob.show_xy();
	return 0;
}