#include<iostream>
using namespace std;

class myclass
{
	int a;
public:
	myclass();
	void show();
};

myclass::myclass()
{
	cout << "In constructor" << endl;
	a = 10;
}

void myclass::show()
{
	cout << a << endl;
}

int main()
{
	myclass ob;		// 객체 생성 직후, 생성자 자동호출(private 멤버 초기화, 최초 1회 자동호출)
	ob.show();
	return 0;
}