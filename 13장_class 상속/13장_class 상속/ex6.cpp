#include<iostream>
using namespace std;

class base
{
private:
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
	void set_y(int n)
	{
		y = n;
	}
	void show_y()
	{
		cout << y << endl;
	}
};

int main()
{
	derived ob;
	ob.set_x(39);	// Error private 멤버함수 액세스불가
	ob.set_y(27);
	ob.show_x();	// Error private 멤버함수 액세스불가	
	ob.show_y();
	return 0;
}