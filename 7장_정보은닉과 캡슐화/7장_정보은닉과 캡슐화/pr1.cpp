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
			cout << "x��ǥ �Է� ����, Ȯ�� ���!!!" << endl;
		}
		else
			x = _x;
	}
	void SetY(int _y)
	{
		if (_y < 0 || _y>100)
		{
			cout << "y��ǥ �Է� ����, Ȯ�� ���!!!" << endl;
		}
		else
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