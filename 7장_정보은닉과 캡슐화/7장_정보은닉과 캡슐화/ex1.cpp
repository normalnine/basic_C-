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
	cout << "��ǥ �Է� : ";
	cin >> x >> y;

	Point p;
	p.x = x;
	p.y = y;

	cout << "�Էµ� �����͸� �̿��ؼ� �׸��� �׸� " << endl;
	return 0;
}