#include<iostream>
using namespace std;
class Point
{
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
int main()
{
	int x, y;
	cout << "��ǥ �Է� : ";
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);

	cout << "�Էµ� �����͸� �̿��ؼ� �׸��� �׸� " << endl;
	return 0;
}