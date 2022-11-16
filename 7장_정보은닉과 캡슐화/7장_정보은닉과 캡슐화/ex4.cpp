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
	void ShowData();
};
void Point::ShowData()
{
	cout << "x��ǥ" << x << endl;
	cout << "y��ǥ" << y << endl;
}

int main()
{
	int x, y;
	cout << "��ǥ �Է� : ";
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);
	p.ShowData();
	return 0;
}