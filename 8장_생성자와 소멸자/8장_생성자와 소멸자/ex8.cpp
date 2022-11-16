#include<iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(){}
	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	void showdata()
	{
		cout << x << ' ' << y << endl;
	}
};

int main()
{
	Point p1(10, 20);
	p1.showdata();

	Point p2;
	p2.showdata();
	return 0;


}