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
		if (_x < 0 || _x>100)
		{
			cout << "x좌표 입력 오류, 확인 요망!!!" << endl;
		}
		else
			x = _x;
	}
	void SetY(int _y)
	{
		if (_y < 0 || _y>100)
		{
			cout << "y좌표 입력 오류, 확인 요망!!!" << endl;
		}
		else
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