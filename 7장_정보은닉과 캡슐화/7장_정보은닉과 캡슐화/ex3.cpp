#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void SetX(int _x)
	{
		x = _x;
	}
	void SetY(int _y)
	{
		y = _y;
	}
};
class PointShow
{
public:
	void ShowData(Point p)
	{
		cout << "x��ǥ" << p.GetX() << endl;
		cout << "y��ǥ" << p.GetY() << endl;
	}
};

int main()
{
	int x, y;
	cout << "��ǥ �Է� : ";
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);
	PointShow show;
	show.ShowData(p);
	return 0;
}