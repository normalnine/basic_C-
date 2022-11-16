#include<iostream>
using namespace std;

class Rectangle
{
	int x, y;
public:
	Rectangle(int,int);
	int GetArea();
	int GetRound();
};

Rectangle::Rectangle(int _x, int _y)
{
	x = _x;
	y = _y;
}

int Rectangle::GetArea()
{
	return (x * y);
}

int Rectangle::GetRound()
{
	return (2*x + 2*y);
}

class Circle
{
	double r;	
public:
	Circle(double);
	double GetArea();
	double GetRound();
};

Circle::Circle(double _r)
{
	r = _r;
}

double Circle::GetArea()
{
	return r * r * 3.14;
}

double Circle::GetRound()
{
	return 2 * r * 3.14;
}

int main()
{
	Rectangle rec(3, 4); // Rectangle rec(가로 길이, 세로 길이)
	cout << "면적 : " << rec.GetArea() << endl;
	cout << "둘레 : " << rec.GetRound() << endl;
	Circle cir(5); // Circle cir(원의 반지름)
	cout << "면적 : " << cir.GetArea() << endl;
	cout << "둘레 : " << cir.GetRound() << endl;	
	return 0;
}
