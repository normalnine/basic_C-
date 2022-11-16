#include<iostream>
using namespace std;
class Point
{
public:
	int x;
	int y;
};

int main()
{
	int x, y;
	cout << "좌표 입력 : ";
	cin >> x >> y;

	Point p;
	p.x = x;
	p.y = y;

	cout << "입력된 데이터를 이용해서 그림을 그림 " << endl;
	return 0;
}