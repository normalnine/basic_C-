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
	Point* array[5];

	for (int i = 0; i < 5; i++)
	{
		array[i] = new Point(i * 2, i * 3); // new에 의한 객체 동적 생성
		// Point (int _x, int _y) 생성 자 호출
	}
	for (int j = 0; j < 5; j++)
	{
		cout << "x : " << array[j]->GetX() << " ";
		cout << "y : " << array[j]->GetY() << endl;
	}
	for (int k = 0; k < 5; k++)
	{
		delete array[k];
	}
	return 0;
}