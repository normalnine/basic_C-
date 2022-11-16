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
	cout << "좌표 입력 : ";
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);

	cout << "입력된 데이터를 이용해서 그림을 그림 " << endl;
	return 0;
}