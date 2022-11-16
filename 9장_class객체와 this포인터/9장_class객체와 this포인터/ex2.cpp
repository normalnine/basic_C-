#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()
	{
		cout << "Point() call! " << endl;
		x = y = 0;
	}
	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
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
	Point* pArr;
	Point arr[5];
	pArr = arr;
	for (int i = 0; i < 5; i++)
	{
		(pArr + i)->SetX(i * 2);
		(pArr + i)->SetY(i * 3);
	}
	for (int j = 0; j < 5; j++)
	{
		cout << "X : " << (arr+j)->GetX() << ' ';
		cout << "Y : " << (arr+j)->GetY() << endl;
	}
	return 0;
}